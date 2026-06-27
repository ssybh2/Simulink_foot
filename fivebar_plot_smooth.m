function fivebar_plot_smooth( ...
    simTime, alpha, beta, xB, yB, L1, L4, L5, valid)
% 五连杆平滑动画
%
% 仅用于 Simulink 可视化，不参与控制。
% 固定约 20 FPS 刷新，并对显示结果做轻微平滑。

persistent fig ax
persistent hLinks hJoints hWheel hTrail hInfo
persistent xHistory yHistory
persistent lastDrawTime
persistent alphaShow betaShow xShow yShow

%% 固定动画刷新周期

refreshPeriod = 0.05;  % 20 FPS

if isempty(lastDrawTime)
    lastDrawTime = -inf;
end

% 仿真重新启动时复位
if simTime < lastDrawTime
    lastDrawTime = -inf;
    xHistory = [];
    yHistory = [];
end

% 尚未到下一帧时间
if simTime - lastDrawTime < refreshPeriod
    return;
end

lastDrawTime = simTime;

%% 创建窗口

if isempty(fig) || ~isgraphics(fig)

    fig = figure( ...
        'Name', 'Five-Bar Smooth Animation', ...
        'NumberTitle', 'off', ...
        'MenuBar', 'figure', ...
        'ToolBar', 'figure');

    ax = axes('Parent', fig);

    hold(ax, 'on');
    grid(ax, 'on');
    axis(ax, 'equal');

    xlabel(ax, 'x / m');
    ylabel(ax, 'y / m');

    % 当前运动学定义 y 向下为正
    set(ax, 'YDir', 'reverse');

    % 固定坐标轴，避免自动缩放造成画面跳动
    xlim(ax, [-0.12, 0.23]);
    ylim(ax, [-0.03, 0.39]);

    title(ax, 'Five-Bar Linkage and Foot Trajectory');

    hTrail = plot(ax, nan, nan, '--', ...
        'LineWidth', 1.2);

    hLinks = plot(ax, nan, nan, '-', ...
        'LineWidth', 3);

    hJoints = plot(ax, nan, nan, 'o', ...
        'MarkerSize', 8, ...
        'LineWidth', 2);

    hWheel = plot(ax, nan, nan, 'o', ...
        'MarkerSize', 14, ...
        'LineWidth', 3);

    hInfo = text(ax, ...
        0.02, 0.02, '', ...
        'Units', 'normalized', ...
        'VerticalAlignment', 'top');

    xHistory = [];
    yHistory = [];

    alphaShow = alpha;
    betaShow = beta;
    xShow = xB;
    yShow = yB;
end

%% 无效解时保持上一帧

if ~logical(valid)

    set(hInfo, 'String', sprintf( ...
        'Time = %.2f s\nKinematics invalid', simTime));

    drawnow limitrate nocallbacks;
    return;
end

%% 仅对显示做轻微低通平滑

% 这个平滑只影响动画，不影响 IK、控制和电机指令
smoothFactor = 0.25;

% 角度误差采用包角，防止跨越 ±pi 时错误绕一大圈
deltaAlpha = atan2( ...
    sin(alpha - alphaShow), ...
    cos(alpha - alphaShow));

deltaBeta = atan2( ...
    sin(beta - betaShow), ...
    cos(beta - betaShow));

alphaShow = alphaShow + smoothFactor * deltaAlpha;
betaShow  = betaShow  + smoothFactor * deltaBeta;

xShow = xShow + smoothFactor * (xB - xShow);
yShow = yShow + smoothFactor * (yB - yShow);

%% 计算关节点

Ox = 0.0;
Oy = 0.0;

Dx = L5;
Dy = 0.0;

AxPoint = L1 * cos(alphaShow);
AyPoint = L1 * sin(alphaShow);

CxPoint = L5 + L4 * cos(betaShow);
CyPoint = L4 * sin(betaShow);

%% 更新连杆

xLinks = [ ...
    Ox, AxPoint, xShow, CxPoint, Dx, Ox];

yLinks = [ ...
    Oy, AyPoint, yShow, CyPoint, Dy, Oy];

set(hLinks, ...
    'XData', xLinks, ...
    'YData', yLinks);

set(hJoints, ...
    'XData', [Ox, AxPoint, xShow, CxPoint, Dx], ...
    'YData', [Oy, AyPoint, yShow, CyPoint, Dy]);

set(hWheel, ...
    'XData', xShow, ...
    'YData', yShow);

%% 保存足端轨迹

xHistory(end + 1) = xShow;
yHistory(end + 1) = yShow;

maxHistory = 1000;

if numel(xHistory) > maxHistory
    xHistory = xHistory(end-maxHistory+1:end);
    yHistory = yHistory(end-maxHistory+1:end);
end

set(hTrail, ...
    'XData', xHistory, ...
    'YData', yHistory);

%% 信息显示

set(hInfo, 'String', sprintf([ ...
    'Time = %.2f s\n', ...
    'alpha = %.2f deg\n', ...
    'beta = %.2f deg\n', ...
    'Foot = (%.4f, %.4f) m'], ...
    simTime, ...
    rad2deg(alphaShow), ...
    rad2deg(betaShow), ...
    xShow, ...
    yShow));

drawnow limitrate nocallbacks;

end
