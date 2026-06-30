// Copyright 2022-2023 The MathWorks, Inc.
// Generated 30-Jun-2026 15:34:05
#ifndef _SLROS2_INITIALIZE_H_
#define _SLROS2_INITIALIZE_H_
#include "Import_IMU_types.h"
// Generic pub-sub header
#include "slros2_generic_pubsub.h"
// Generic service header
#include "slros2_generic_service.h"
extern rclcpp::Node::SharedPtr SLROSNodePtr;
#ifndef SET_QOS_VALUES
#define SET_QOS_VALUES(qosStruct, hist, dep, dur, rel)  \
    {                                                   \
        qosStruct.history = hist;                       \
        qosStruct.depth = dep;                          \
        qosStruct.durability = dur;                     \
        qosStruct.reliability = rel;                    \
    }
#endif
inline rclcpp::QoS getQOSSettingsFromRMW(const rmw_qos_profile_t& qosProfile) {
    rclcpp::QoS qos(rclcpp::QoSInitialization::from_rmw(qosProfile));
    if (RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL == qosProfile.durability) {
        qos.transient_local();
    } else {
        qos.durability_volatile();
    }
    if (RMW_QOS_POLICY_RELIABILITY_RELIABLE == qosProfile.reliability) {
        qos.reliable();
    } else {
        qos.best_effort();
    }
    return qos;
}
// Import_IMU/Left/Publish
extern SimulinkPublisher<custom_msgs::msg::WriteDmMotorMITControl,SL_Bus_custom_msgs_WriteDmMotorMITControl> Pub_Import_IMU_344;
// Import_IMU/Right/Publish
extern SimulinkPublisher<custom_msgs::msg::WriteDmMotorMITControl,SL_Bus_custom_msgs_WriteDmMotorMITControl> Pub_Import_IMU_369;
// Import_IMU/Subsystem/Publish1
extern SimulinkPublisher<custom_msgs::msg::WriteDmMotorMITControl,SL_Bus_custom_msgs_WriteDmMotorMITControl> Pub_Import_IMU_208;
// Import_IMU/Subsystem/Publish2
extern SimulinkPublisher<custom_msgs::msg::WriteDmMotorMITControl,SL_Bus_custom_msgs_WriteDmMotorMITControl> Pub_Import_IMU_209;
// Import_IMU/Subsystem1/Publish1
extern SimulinkPublisher<custom_msgs::msg::WriteDmMotorMITControl,SL_Bus_custom_msgs_WriteDmMotorMITControl> Pub_Import_IMU_245;
// Import_IMU/Subsystem1/Publish2
extern SimulinkPublisher<custom_msgs::msg::WriteDmMotorMITControl,SL_Bus_custom_msgs_WriteDmMotorMITControl> Pub_Import_IMU_246;
// Import_IMU/IMU
extern SimulinkSubscriber<sensor_msgs::msg::Imu,SL_Bus_sensor_msgs_Imu> Sub_Import_IMU_74;
// Import_IMU/Subscribe_Motor1_LA
extern SimulinkSubscriber<custom_msgs::msg::ReadDmMotor,SL_Bus_custom_msgs_ReadDmMotor> Sub_Import_IMU_1;
// Import_IMU/Subscribe_Motor2_LB
extern SimulinkSubscriber<custom_msgs::msg::ReadDmMotor,SL_Bus_custom_msgs_ReadDmMotor> Sub_Import_IMU_2;
// Import_IMU/Subscribe_Motor3_RA
extern SimulinkSubscriber<custom_msgs::msg::ReadDmMotor,SL_Bus_custom_msgs_ReadDmMotor> Sub_Import_IMU_3;
// Import_IMU/Subscribe_Motor4_RB
extern SimulinkSubscriber<custom_msgs::msg::ReadDmMotor,SL_Bus_custom_msgs_ReadDmMotor> Sub_Import_IMU_4;
// Import_IMU/Subscribe_Wheel_Left
extern SimulinkSubscriber<custom_msgs::msg::ReadDmMotor,SL_Bus_custom_msgs_ReadDmMotor> Sub_Import_IMU_314;
// Import_IMU/Subscribe_Wheel_Right
extern SimulinkSubscriber<custom_msgs::msg::ReadDmMotor,SL_Bus_custom_msgs_ReadDmMotor> Sub_Import_IMU_315;
// Import_IMU/Switch/Subscribe
extern SimulinkSubscriber<custom_msgs::msg::ReadDJIRC,SL_Bus_custom_msgs_ReadDJIRC> Sub_Import_IMU_104;
#endif
