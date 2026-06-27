function rosmsgOut = WriteDmMotorMITControl(slBusIn, rosmsgOut)
%#codegen
%   Copyright 2021 The MathWorks, Inc.
    rosmsgOut.enable = uint8(slBusIn.enable);
    rosmsgOut.p_des = single(slBusIn.p_des);
    rosmsgOut.v_des = single(slBusIn.v_des);
    rosmsgOut.kp = single(slBusIn.kp);
    rosmsgOut.kd = single(slBusIn.kd);
    rosmsgOut.torque = single(slBusIn.torque);
end
