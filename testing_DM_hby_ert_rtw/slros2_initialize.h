// Copyright 2022-2023 The MathWorks, Inc.
// Generated 27-Jun-2026 22:20:36
#ifndef _SLROS2_INITIALIZE_H_
#define _SLROS2_INITIALIZE_H_
#include "testing_DM_hby_types.h"
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
// testing_DM_hby/Publish1
extern SimulinkPublisher<custom_msgs::msg::WriteDmMotorMITControl,SL_Bus_custom_msgs_WriteDmMotorMITControl> Pub_testing_DM_hby_229;
// testing_DM_hby/Publish2
extern SimulinkPublisher<custom_msgs::msg::WriteDmMotorMITControl,SL_Bus_custom_msgs_WriteDmMotorMITControl> Pub_testing_DM_hby_230;
// testing_DM_hby/Subscribe3
extern SimulinkSubscriber<custom_msgs::msg::ReadDmMotor,SL_Bus_custom_msgs_ReadDmMotor> Sub_testing_DM_hby_175;
// testing_DM_hby/Subscribe4
extern SimulinkSubscriber<custom_msgs::msg::ReadDJIRC,SL_Bus_custom_msgs_ReadDJIRC> Sub_testing_DM_hby_244;
// testing_DM_hby/Subscribe_LA1
extern SimulinkSubscriber<custom_msgs::msg::ReadDmMotor,SL_Bus_custom_msgs_ReadDmMotor> Sub_testing_DM_hby_168;
#endif
