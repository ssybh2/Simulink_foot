function fivebar_plot(alpha, beta, xB, yB, L1, L4, L5, valid)
% fivebar_plot
% 五连杆实时可视化，仅用于 Simulink 仿真。
%
% 坐标系：
% O = (0,0)
% D = (L5,0)
% x 向右为正
% y 向下为正
%
% A = 左主动杆末端
% C = 右主动杆末端
% B = 轮心

persistent fig ax hLinks hJoints hWheel hInfo counter

%% 降低绘图刷新率，避免拖慢仿真
if isempty(counter)
    counter = 0;
end

counter = counter + 1;

% 仿真步长 0.01 s 时，每 5 步刷新一次，即约 20 Hz
if mod(counter, 5) ~= 0
    return;
end

%% 如果窗口还没有建立，就建立窗口

if isempty(fig) || ~isgraphics(fig)

    fig = figure( ...
        'Name', 'Five-Bar Leg Visualization', ...
        'NumberTitle', 'off', ...
        'MenuBar', 'figure', ...
        'ToolBar', 'figure');

    ax = axes('Parent', fig);

    hold(ax, 'on');
    grid(ax, 'on');
    axis(ax, 'equal');

    xlabel(ax, 'x / m');
    ylabel(ax, 'y / m');

    % 由于模型定义 y 向下为正，因此显示时把 y 轴反过来
    set(ax, 'YDir', 'reverse');

    % 可以根据自己的机构尺寸调整
    xlim(ax, [-0.15, 0.25]);
    ylim(ax, [-0.05, 0.45]);

    title(ax, 'Five-Bar Linkage');

    % 连杆线
    hLinks = plot(ax, ...
        nan, nan, ...
        '-', ...
        'LineWidth', 3);

    % 各关节点
    hJoints = plot(ax, ...
        nan, nan, ...
        'o', ...
        'MarkerSize', 8, ...
        'LineWidth', 2);

    % 单独突出轮心 B
    hWheel = plot(ax, ...
        nan, nan, ...
        'o', ...
        'MarkerSize', 16, ...
        'LineWidth', 3);

    hInfo = text(ax, ...
        0.01, 0.02, '', ...
        'Units', 'normalized', ...
        'VerticalAlignment', 'top');

end

%% 无效运动学状态

if ~logical(valid)

    if isgraphics(hInfo)
        set(hInfo, ...
            'String', 'Kinematics invalid');
    end

    drawnow limitrate;
    return;
end

%% 计算各关节点坐标

% 左固定点 O
Ox = 0.0;
Oy = 0.0;

% 右固定点 D
Dx = L5;
Dy = 0.0;

% 左主动杆末端 A
AxPoint = L1 * cos(alpha);
AyPoint = L1 * sin(alpha);

% 右主动杆末端 C
CxPoint = L5 + L4 * cos(beta);
CyPoint = L4 * sin(beta);

%% 绘制闭合五连杆

% O → A → B → C → D → O
xLinks = [ ...
    Ox, ...
    AxPoint, ...
    xB, ...
    CxPoint, ...
    Dx, ...
    Ox];

yLinks = [ ...
    Oy, ...
    AyPoint, ...
    yB, ...
    CyPoint, ...
    Dy, ...
    Oy];

set(hLinks, ...
    'XData', xLinks, ...
    'YData', yLinks);

% 五个关节点 O、A、B、C、D
set(hJoints, ...
    'XData', [Ox, AxPoint, xB, CxPoint, Dx], ...
    'YData', [Oy, AyPoint, yB, CyPoint, Dy]);

% 轮心 B
set(hWheel, ...
    'XData', xB, ...
    'YData', yB);

%% 显示当前状态

infoString = sprintf([ ...
    'alpha = %.2f deg\n', ...
    'beta  = %.2f deg\n', ...
    'B = (%.3f, %.3f) m'], ...
    rad2deg(alpha), ...
    rad2deg(beta), ...
    xB, ...
    yB);

set(hInfo, 'String', infoString);

drawnow limitrate;

end