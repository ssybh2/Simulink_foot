#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include "rclcpp/rclcpp.hpp"
#include <builtin_interfaces/msg/time.hpp>
#include <custom_msgs/msg/read_djirc.hpp>
#include <custom_msgs/msg/read_dm_motor.hpp>
#include <custom_msgs/msg/write_dm_motor_mit_control.hpp>
#include <std_msgs/msg/header.hpp>
#include "testing_DM_hby_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(builtin_interfaces::msg::Time& msgPtr, SL_Bus_builtin_interfaces_Time const* busPtr);
void convertToBus(SL_Bus_builtin_interfaces_Time* busPtr, const builtin_interfaces::msg::Time& msgPtr);

void convertFromBus(custom_msgs::msg::ReadDJIRC& msgPtr, SL_Bus_custom_msgs_ReadDJIRC const* busPtr);
void convertToBus(SL_Bus_custom_msgs_ReadDJIRC* busPtr, const custom_msgs::msg::ReadDJIRC& msgPtr);

void convertFromBus(custom_msgs::msg::ReadDmMotor& msgPtr, SL_Bus_custom_msgs_ReadDmMotor const* busPtr);
void convertToBus(SL_Bus_custom_msgs_ReadDmMotor* busPtr, const custom_msgs::msg::ReadDmMotor& msgPtr);

void convertFromBus(custom_msgs::msg::WriteDmMotorMITControl& msgPtr, SL_Bus_custom_msgs_WriteDmMotorMITControl const* busPtr);
void convertToBus(SL_Bus_custom_msgs_WriteDmMotorMITControl* busPtr, const custom_msgs::msg::WriteDmMotorMITControl& msgPtr);

void convertFromBus(std_msgs::msg::Header& msgPtr, SL_Bus_std_msgs_Header const* busPtr);
void convertToBus(SL_Bus_std_msgs_Header* busPtr, const std_msgs::msg::Header& msgPtr);


#endif
