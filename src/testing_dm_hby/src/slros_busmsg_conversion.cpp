#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_builtin_interfaces_Time and builtin_interfaces::msg::Time

void convertFromBus(builtin_interfaces::msg::Time& msgPtr, SL_Bus_builtin_interfaces_Time const* busPtr)
{
  const std::string rosMessageType("builtin_interfaces/Time");

  msgPtr.nanosec =  busPtr->nanosec;
  msgPtr.sec =  busPtr->sec;
}

void convertToBus(SL_Bus_builtin_interfaces_Time* busPtr, const builtin_interfaces::msg::Time& msgPtr)
{
  const std::string rosMessageType("builtin_interfaces/Time");

  busPtr->nanosec =  msgPtr.nanosec;
  busPtr->sec =  msgPtr.sec;
}


// Conversions between SL_Bus_custom_msgs_ReadDJIRC and custom_msgs::msg::ReadDJIRC

void convertFromBus(custom_msgs::msg::ReadDJIRC& msgPtr, SL_Bus_custom_msgs_ReadDJIRC const* busPtr)
{
  const std::string rosMessageType("custom_msgs/ReadDJIRC");

  msgPtr.a =  busPtr->a;
  msgPtr.b =  busPtr->b;
  msgPtr.c =  busPtr->c;
  msgPtr.ctrl =  busPtr->ctrl;
  msgPtr.d =  busPtr->d;
  msgPtr.dial =  busPtr->dial;
  msgPtr.e =  busPtr->e;
  msgPtr.f =  busPtr->f;
  msgPtr.g =  busPtr->g;
  convertFromBus(msgPtr.header, &busPtr->header);
  msgPtr.left_switch =  busPtr->left_switch;
  msgPtr.left_x =  busPtr->left_x;
  msgPtr.left_y =  busPtr->left_y;
  msgPtr.mouse_left_clicked =  busPtr->mouse_left_clicked;
  msgPtr.mouse_right_clicked =  busPtr->mouse_right_clicked;
  msgPtr.mouse_x =  busPtr->mouse_x;
  msgPtr.mouse_y =  busPtr->mouse_y;
  msgPtr.online =  busPtr->online;
  msgPtr.q =  busPtr->q;
  msgPtr.r =  busPtr->r;
  msgPtr.right_switch =  busPtr->right_switch;
  msgPtr.right_x =  busPtr->right_x;
  msgPtr.right_y =  busPtr->right_y;
  msgPtr.s =  busPtr->s;
  msgPtr.shift =  busPtr->shift;
  msgPtr.v =  busPtr->v;
  msgPtr.w =  busPtr->w;
  msgPtr.x =  busPtr->x;
  msgPtr.z =  busPtr->z;
}

void convertToBus(SL_Bus_custom_msgs_ReadDJIRC* busPtr, const custom_msgs::msg::ReadDJIRC& msgPtr)
{
  const std::string rosMessageType("custom_msgs/ReadDJIRC");

  busPtr->a =  msgPtr.a;
  busPtr->b =  msgPtr.b;
  busPtr->c =  msgPtr.c;
  busPtr->ctrl =  msgPtr.ctrl;
  busPtr->d =  msgPtr.d;
  busPtr->dial =  msgPtr.dial;
  busPtr->e =  msgPtr.e;
  busPtr->f =  msgPtr.f;
  busPtr->g =  msgPtr.g;
  convertToBus(&busPtr->header, msgPtr.header);
  busPtr->left_switch =  msgPtr.left_switch;
  busPtr->left_x =  msgPtr.left_x;
  busPtr->left_y =  msgPtr.left_y;
  busPtr->mouse_left_clicked =  msgPtr.mouse_left_clicked;
  busPtr->mouse_right_clicked =  msgPtr.mouse_right_clicked;
  busPtr->mouse_x =  msgPtr.mouse_x;
  busPtr->mouse_y =  msgPtr.mouse_y;
  busPtr->online =  msgPtr.online;
  busPtr->q =  msgPtr.q;
  busPtr->r =  msgPtr.r;
  busPtr->right_switch =  msgPtr.right_switch;
  busPtr->right_x =  msgPtr.right_x;
  busPtr->right_y =  msgPtr.right_y;
  busPtr->s =  msgPtr.s;
  busPtr->shift =  msgPtr.shift;
  busPtr->v =  msgPtr.v;
  busPtr->w =  msgPtr.w;
  busPtr->x =  msgPtr.x;
  busPtr->z =  msgPtr.z;
}


// Conversions between SL_Bus_custom_msgs_ReadDmMotor and custom_msgs::msg::ReadDmMotor

void convertFromBus(custom_msgs::msg::ReadDmMotor& msgPtr, SL_Bus_custom_msgs_ReadDmMotor const* busPtr)
{
  const std::string rosMessageType("custom_msgs/ReadDmMotor");

  msgPtr.communication_lost =  busPtr->communication_lost;
  msgPtr.disabled =  busPtr->disabled;
  msgPtr.enabled =  busPtr->enabled;
  convertFromBus(msgPtr.header, &busPtr->header);
  msgPtr.mos_overtemperature =  busPtr->mos_overtemperature;
  msgPtr.mos_temperature =  busPtr->mos_temperature;
  msgPtr.online =  busPtr->online;
  msgPtr.overcurrent =  busPtr->overcurrent;
  msgPtr.overload =  busPtr->overload;
  msgPtr.overvoltage =  busPtr->overvoltage;
  msgPtr.position =  busPtr->position;
  msgPtr.rotor_overtemperature =  busPtr->rotor_overtemperature;
  msgPtr.rotor_temperature =  busPtr->rotor_temperature;
  msgPtr.torque =  busPtr->torque;
  msgPtr.undervoltage =  busPtr->undervoltage;
  msgPtr.velocity =  busPtr->velocity;
}

void convertToBus(SL_Bus_custom_msgs_ReadDmMotor* busPtr, const custom_msgs::msg::ReadDmMotor& msgPtr)
{
  const std::string rosMessageType("custom_msgs/ReadDmMotor");

  busPtr->communication_lost =  msgPtr.communication_lost;
  busPtr->disabled =  msgPtr.disabled;
  busPtr->enabled =  msgPtr.enabled;
  convertToBus(&busPtr->header, msgPtr.header);
  busPtr->mos_overtemperature =  msgPtr.mos_overtemperature;
  busPtr->mos_temperature =  msgPtr.mos_temperature;
  busPtr->online =  msgPtr.online;
  busPtr->overcurrent =  msgPtr.overcurrent;
  busPtr->overload =  msgPtr.overload;
  busPtr->overvoltage =  msgPtr.overvoltage;
  busPtr->position =  msgPtr.position;
  busPtr->rotor_overtemperature =  msgPtr.rotor_overtemperature;
  busPtr->rotor_temperature =  msgPtr.rotor_temperature;
  busPtr->torque =  msgPtr.torque;
  busPtr->undervoltage =  msgPtr.undervoltage;
  busPtr->velocity =  msgPtr.velocity;
}


// Conversions between SL_Bus_custom_msgs_WriteDmMotorMITControl and custom_msgs::msg::WriteDmMotorMITControl

void convertFromBus(custom_msgs::msg::WriteDmMotorMITControl& msgPtr, SL_Bus_custom_msgs_WriteDmMotorMITControl const* busPtr)
{
  const std::string rosMessageType("custom_msgs/WriteDmMotorMITControl");

  msgPtr.enable =  busPtr->enable;
  msgPtr.kd =  busPtr->kd;
  msgPtr.kp =  busPtr->kp;
  msgPtr.p_des =  busPtr->p_des;
  msgPtr.torque =  busPtr->torque;
  msgPtr.v_des =  busPtr->v_des;
}

void convertToBus(SL_Bus_custom_msgs_WriteDmMotorMITControl* busPtr, const custom_msgs::msg::WriteDmMotorMITControl& msgPtr)
{
  const std::string rosMessageType("custom_msgs/WriteDmMotorMITControl");

  busPtr->enable =  msgPtr.enable;
  busPtr->kd =  msgPtr.kd;
  busPtr->kp =  msgPtr.kp;
  busPtr->p_des =  msgPtr.p_des;
  busPtr->torque =  msgPtr.torque;
  busPtr->v_des =  msgPtr.v_des;
}


// Conversions between SL_Bus_std_msgs_Header and std_msgs::msg::Header

void convertFromBus(std_msgs::msg::Header& msgPtr, SL_Bus_std_msgs_Header const* busPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertFromBusVariablePrimitiveArray(msgPtr.frame_id, busPtr->frame_id, busPtr->frame_id_SL_Info);
  convertFromBus(msgPtr.stamp, &busPtr->stamp);
}

void convertToBus(SL_Bus_std_msgs_Header* busPtr, const std_msgs::msg::Header& msgPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertToBusVariablePrimitiveArray(busPtr->frame_id, busPtr->frame_id_SL_Info, msgPtr.frame_id, slros::EnabledWarning(rosMessageType, "frame_id"));
  convertToBus(&busPtr->stamp, msgPtr.stamp);
}

