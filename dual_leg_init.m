%% dual_leg_init.m
% 左右腿实际运动学模型初始化
% 所有角度单位：rad
% 所有长度单位：m

%% 五连杆尺寸
L1 = single(0.0804);
L2 = single(0.1200);
L3 = single(0.1200);
L4 = single(0.0804);
L5 = single(0.0700);

%% 左腿 alpha：1号电机
CAL.qm0_LA   = single(-0.3408479690551758);
CAL.qj0_LA   = single(3.504545610856599);
CAL.sign_LA  = single(-1.0);
CAL.ratio_LA = single(1.0);

%% 左腿 beta：2号电机
CAL.qm0_LB   = single(-0.6292438507080078);
CAL.qj0_LB   = single(0.8999130837716534);
CAL.sign_LB  = single(-1.0);
CAL.ratio_LB = single(1.0);

%% 右腿 alpha：3号电机
% 参考姿态：轮心位于4号电机正下方65 mm
CAL.qm0_RA   = single(-0.9126806259155273);
CAL.qj0_RA   = single(2.2416795698181398);
CAL.sign_RA  = single(1.0);
CAL.ratio_RA = single(1.0);

%% 右腿 beta：4号电机
% 情况A：主动杆远离3号电机
CAL.qm0_RB   = single(-0.6025409698486328);
CAL.qj0_RB   = single(-0.36295295726680576);
CAL.sign_RB  = single(1.0);
CAL.ratio_RB = single(1.0);