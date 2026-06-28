#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include "rclcpp/rclcpp.hpp"
#include <builtin_interfaces/msg/time.hpp>
#include <custom_msgs/msg/read_dm_motor.hpp>
#include <std_msgs/msg/header.hpp>
#include "Import_IMU_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(builtin_interfaces::msg::Time& msgPtr, SL_Bus_builtin_interfaces_Time const* busPtr);
void convertToBus(SL_Bus_builtin_interfaces_Time* busPtr, const builtin_interfaces::msg::Time& msgPtr);

void convertFromBus(custom_msgs::msg::ReadDmMotor& msgPtr, SL_Bus_custom_msgs_ReadDmMotor const* busPtr);
void convertToBus(SL_Bus_custom_msgs_ReadDmMotor* busPtr, const custom_msgs::msg::ReadDmMotor& msgPtr);

void convertFromBus(std_msgs::msg::Header& msgPtr, SL_Bus_std_msgs_Header const* busPtr);
void convertToBus(SL_Bus_std_msgs_Header* busPtr, const std_msgs::msg::Header& msgPtr);


#endif
