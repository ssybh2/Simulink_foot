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

