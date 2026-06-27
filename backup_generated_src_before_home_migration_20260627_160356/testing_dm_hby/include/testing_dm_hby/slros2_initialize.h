// Copyright 2022-2023 The MathWorks, Inc.
// Generated 26-Jun-2026 23:51:22
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
// testing_DM_hby/Subscribe_LA
extern SimulinkSubscriber<custom_msgs::msg::ReadDmMotor,SL_Bus_custom_msgs_ReadDmMotor> Sub_testing_DM_hby_82;
// testing_DM_hby/Subscribe_LB
extern SimulinkSubscriber<custom_msgs::msg::ReadDmMotor,SL_Bus_custom_msgs_ReadDmMotor> Sub_testing_DM_hby_83;
// testing_DM_hby/Subscribe_RA
extern SimulinkSubscriber<custom_msgs::msg::ReadDmMotor,SL_Bus_custom_msgs_ReadDmMotor> Sub_testing_DM_hby_84;
// testing_DM_hby/Subscribe_RB
extern SimulinkSubscriber<custom_msgs::msg::ReadDmMotor,SL_Bus_custom_msgs_ReadDmMotor> Sub_testing_DM_hby_85;
#endif
