function fivebar_animation_compare_plot( ...
    alpha_actual, beta_actual, ...
    x_actual, y_actual, ...
    x_cmd, y_cmd, ...
    phase, ...
    x_home, y_home, ...
    path_width, amplitude, ...
    L1, L2, L3, L4, L5)
%
% 蓝色实线：完整理论正弦轨迹
% 红色实线：真实脚端在正弦阶段的实际轨迹
% 青色虚线：回位阶段目标路径
% 黑色连杆：当前实际机构姿态
% 蓝色圆点：当前命令位置
% 红色圆点：当前实际位置
% 黄色方块：正弦起点

persistent fig ax
persistent h_theory h_actual h_home_path
persistent h_base h_left h_right
persistent h_cmd_point h_actual_point h_home_point
persistent actual_x_history actual_y_history
persistent home_x_history home_y_history
persistent previous_phase
persistent update_counter

if isempty(previous_phase)
    previous_phase = uint8(0);
end

if isempty(update_counter)
    update_counter = 0;
end

%% 创建窗口

if isempty(fig) || ~isgraphics(fig)

    fig = figure( ...
        'Name', 'Five-Bar Trajectory Comparison', ...
        'NumberTitle', 'off');

    ax = axes(fig);

    hold(ax, 'on');
    grid(ax, 'on');
    axis(ax, 'equal');

    % 当前机构定义：y向下为正
    set(ax, 'YDir', 'reverse');

    xlabel(ax, 'x / m');
    ylabel(ax, 'y / m');

    h_theory = plot(ax, nan, nan, ...
        'b-', ...
        'LineWidth', 2.0, ...
        'DisplayName', 'Theoretical sine');

    h_actual = plot(ax, nan, nan, ...
        'r-', ...
        'LineWidth', 2.0, ...
        'DisplayName', 'Actual sine');

    h_home_path = plot(ax, nan, nan, ...
        'c--', ...
        'LineWidth', 1.5, ...
        'DisplayName', 'Move-to-home path');

    h_base = plot(ax, nan, nan, ...
        'k-', ...
        'LineWidth', 3.0, ...
        'DisplayName', 'Base');

    h_left = plot(ax, nan, nan, ...
        'k-o', ...
        'LineWidth', 2.0, ...
        'MarkerSize', 5, ...
        'HandleVisibility', 'off');

    h_right = plot(ax, nan, nan, ...
        'k-o', ...
        'LineWidth', 2.0, ...
        'MarkerSize', 5, ...
        'HandleVisibility', 'off');

    h_cmd_point = plot(ax, nan, nan, ...
        'bo', ...
        'MarkerFaceColor', 'b', ...
        'MarkerSize', 7, ...
        'DisplayName', 'Command position');

    h_actual_point = plot(ax, nan, nan, ...
        'ro', ...
        'MarkerFaceColor', 'r', ...
        'MarkerSize', 7, ...
        'DisplayName', 'Actual position');

    h_home_point = plot(ax, x_home, y_home, ...
        'ks', ...
        'MarkerFaceColor', 'y', ...
        'MarkerSize', 8, ...
        'DisplayName', 'Sine start');

    legend(ax, 'Location', 'best');

    xlim(ax, [-0.03, 0.23]);
    ylim(ax, [-0.02, 0.22]);

    actual_x_history = [];
    actual_y_history = [];

    home_x_history = [];
    home_y_history = [];

    %% 生成固定的理论正弦曲线

    s_plot = linspace(0, 1, 500);

    theory_x = x_home + path_width .* s_plot;

    theory_y = y_home + ...
        amplitude .* sin(2*pi*s_plot);

    set(h_theory, ...
        'XData', theory_x, ...
        'YData', theory_y);
end

%% 状态发生变化时的处理

% 进入回位阶段
if phase == uint8(1) && previous_phase ~= uint8(1)

    home_x_history = x_actual;
    home_y_history = y_actual;

    actual_x_history = [];
    actual_y_history = [];

    set(h_home_path, ...
        'XData', home_x_history, ...
        'YData', home_y_history);

    set(h_actual, ...
        'XData', nan, ...
        'YData', nan);
end

% 从回位阶段进入正弦阶段
if phase == uint8(2) && previous_phase ~= uint8(2)

    % 正弦红线从实际到达起点的位置开始
    actual_x_history = x_actual;
    actual_y_history = y_actual;

    set(h_actual, ...
        'XData', actual_x_history, ...
        'YData', actual_y_history);

    % 重新生成理论曲线，方便在线修改参数
    s_plot = linspace(0, 1, 500);

    theory_x = x_home + path_width .* s_plot;

    theory_y = y_home + ...
        amplitude .* sin(2*pi*s_plot);

    set(h_theory, ...
        'XData', theory_x, ...
        'YData', theory_y);
end

previous_phase = phase;

%% 降低绘图频率

% 控制周期0.003秒时，每10步更新一次，约33Hz
update_counter = update_counter + 1;

if update_counter < 10
    return;
end

update_counter = 0;

%% 回位阶段记录青色轨迹

if phase == uint8(1) && ...
        isfinite(x_actual) && isfinite(y_actual)

    home_x_history(end+1) = x_actual; %#ok<AGROW>
    home_y_history(end+1) = y_actual; %#ok<AGROW>

    set(h_home_path, ...
        'XData', home_x_history, ...
        'YData', home_y_history);
end

%% 正弦阶段记录红色实际轨迹

if phase == uint8(2) && ...
        isfinite(x_actual) && isfinite(y_actual)

    actual_x_history(end+1) = x_actual; %#ok<AGROW>
    actual_y_history(end+1) = y_actual; %#ok<AGROW>

    max_points = 10000;

    if numel(actual_x_history) > max_points
        actual_x_history = actual_x_history(1:2:end);
        actual_y_history = actual_y_history(1:2:end);
    end

    set(h_actual, ...
        'XData', actual_x_history, ...
        'YData', actual_y_history);
end

%% 绘制实际五连杆姿态

O = [0, 0];
D = [L5, 0];

A = [
    L1*cos(alpha_actual), ...
    L1*sin(alpha_actual)
    ];

C = [
    L5 + L4*cos(beta_actual), ...
    L4*sin(beta_actual)
    ];

P = [x_actual, y_actual];

set(h_base, ...
    'XData', [O(1), D(1)], ...
    'YData', [O(2), D(2)]);

set(h_left, ...
    'XData', [O(1), A(1), P(1)], ...
    'YData', [O(2), A(2), P(2)]);

set(h_right, ...
    'XData', [D(1), C(1), P(1)], ...
    'YData', [D(2), C(2), P(2)]);

%% 更新当前点

set(h_cmd_point, ...
    'XData', x_cmd, ...
    'YData', y_cmd);

set(h_actual_point, ...
    'XData', x_actual, ...
    'YData', y_actual);

set(h_home_point, ...
    'XData', x_home, ...
    'YData', y_home);

%% 显示当前状态和误差

position_error = hypot( ...
    x_cmd-x_actual, ...
    y_cmd-y_actual);

if phase == uint8(0)
    state_text = 'Disabled';
elseif phase == uint8(1)
    state_text = 'Moving to sine start';
elseif phase == uint8(2)
    state_text = 'Drawing sine';
else
    state_text = 'Unknown';
end

title(ax, sprintf( ...
    '%s | Position error: %.2f mm', ...
    state_text, position_error*1000));

drawnow limitrate nocallbacks;

end