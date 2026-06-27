function slBusOut = ReadDmMotor(msgIn, slBusOut, varargin)
%#codegen
%   Copyright 2021-2022 The MathWorks, Inc.
    currentlength = length(slBusOut.header);
    for iter=1:currentlength
        slBusOut.header(iter) = bus_conv_fcns.ros2.msgToBus.std_msgs.Header(msgIn.header(iter),slBusOut(1).header(iter),varargin{:});
    end
    slBusOut.header = bus_conv_fcns.ros2.msgToBus.std_msgs.Header(msgIn.header,slBusOut(1).header,varargin{:});
    slBusOut.online = uint8(msgIn.online);
    slBusOut.disabled = uint8(msgIn.disabled);
    slBusOut.enabled = uint8(msgIn.enabled);
    slBusOut.overvoltage = uint8(msgIn.overvoltage);
    slBusOut.undervoltage = uint8(msgIn.undervoltage);
    slBusOut.overcurrent = uint8(msgIn.overcurrent);
    slBusOut.mos_overtemperature = uint8(msgIn.mos_overtemperature);
    slBusOut.rotor_overtemperature = uint8(msgIn.rotor_overtemperature);
    slBusOut.communication_lost = uint8(msgIn.communication_lost);
    slBusOut.overload = uint8(msgIn.overload);
    slBusOut.position = single(msgIn.position);
    slBusOut.velocity = single(msgIn.velocity);
    slBusOut.torque = single(msgIn.torque);
    slBusOut.mos_temperature = uint8(msgIn.mos_temperature);
    slBusOut.rotor_temperature = uint8(msgIn.rotor_temperature);
end
