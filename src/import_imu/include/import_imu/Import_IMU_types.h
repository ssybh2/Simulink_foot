//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Import_IMU_types.h
//
// Code generated for Simulink model 'Import_IMU'.
//
// Model version                  : 1.112
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Wed Jul  1 20:32:50 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_Import_IMU_types_h_
#define RTW_HEADER_Import_IMU_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_builtin_interfaces_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_builtin_interfaces_Time_

// MsgType=builtin_interfaces/Time
struct SL_Bus_builtin_interfaces_Time
{
  int32_T sec;
  uint32_T nanosec;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

struct SL_Bus_ROSVariableLengthArrayInfo
{
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_Header_

// MsgType=std_msgs/Header
struct SL_Bus_std_msgs_Header
{
  // MsgType=builtin_interfaces/Time
  SL_Bus_builtin_interfaces_Time stamp;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=frame_id_SL_Info:TruncateAction=warn 
  uint8_T frame_id[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=frame_id
  SL_Bus_ROSVariableLengthArrayInfo frame_id_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Quaternion_
#define DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Quaternion_

// MsgType=geometry_msgs/Quaternion
struct SL_Bus_geometry_msgs_Quaternion
{
  real_T x;
  real_T y;
  real_T z;
  real_T w;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Vector3_

// MsgType=geometry_msgs/Vector3
struct SL_Bus_geometry_msgs_Vector3
{
  real_T x;
  real_T y;
  real_T z;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_sensor_msgs_Imu_
#define DEFINED_TYPEDEF_FOR_SL_Bus_sensor_msgs_Imu_

// MsgType=sensor_msgs/Imu
struct SL_Bus_sensor_msgs_Imu
{
  // MsgType=std_msgs/Header
  SL_Bus_std_msgs_Header header;

  // MsgType=geometry_msgs/Quaternion
  SL_Bus_geometry_msgs_Quaternion orientation;
  real_T orientation_covariance[9];

  // MsgType=geometry_msgs/Vector3
  SL_Bus_geometry_msgs_Vector3 angular_velocity;
  real_T angular_velocity_covariance[9];

  // MsgType=geometry_msgs/Vector3
  SL_Bus_geometry_msgs_Vector3 linear_acceleration;
  real_T linear_acceleration_covariance[9];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_custom_msgs_WriteDmMotorMITControl_
#define DEFINED_TYPEDEF_FOR_SL_Bus_custom_msgs_WriteDmMotorMITControl_

// MsgType=custom_msgs/WriteDmMotorMITControl
struct SL_Bus_custom_msgs_WriteDmMotorMITControl
{
  uint8_T enable;
  real32_T p_des;
  real32_T v_des;
  real32_T kp;
  real32_T kd;
  real32_T torque;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_custom_msgs_ReadDmMotor_
#define DEFINED_TYPEDEF_FOR_SL_Bus_custom_msgs_ReadDmMotor_

// MsgType=custom_msgs/ReadDmMotor
struct SL_Bus_custom_msgs_ReadDmMotor
{
  // MsgType=std_msgs/Header
  SL_Bus_std_msgs_Header header;
  uint8_T online;
  uint8_T disabled;
  uint8_T enabled;
  uint8_T overvoltage;
  uint8_T undervoltage;
  uint8_T overcurrent;
  uint8_T mos_overtemperature;
  uint8_T rotor_overtemperature;
  uint8_T communication_lost;
  uint8_T overload;
  real32_T position;
  real32_T velocity;
  real32_T torque;
  uint8_T mos_temperature;
  uint8_T rotor_temperature;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_custom_msgs_ReadDJIRC_
#define DEFINED_TYPEDEF_FOR_SL_Bus_custom_msgs_ReadDJIRC_

// MsgType=custom_msgs/ReadDJIRC
struct SL_Bus_custom_msgs_ReadDJIRC
{
  // MsgType=std_msgs/Header
  SL_Bus_std_msgs_Header header;
  uint8_T online;
  real32_T left_x;
  real32_T left_y;
  real32_T right_x;
  real32_T right_y;
  real32_T dial;
  uint8_T left_switch;
  uint8_T right_switch;
  uint8_T w;
  uint8_T s;
  uint8_T a;
  uint8_T d;
  uint8_T q;
  uint8_T e;
  uint8_T r;
  uint8_T f;
  uint8_T g;
  uint8_T z;
  uint8_T x;
  uint8_T c;
  uint8_T v;
  uint8_T b;
  uint8_T shift;
  uint8_T ctrl;
  int16_T mouse_x;
  int16_T mouse_y;
  uint8_T mouse_left_clicked;
  uint8_T mouse_right_clicked;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_DZAeZYKomWJ9aajLaQqeiD_
#define DEFINED_TYPEDEF_FOR_struct_DZAeZYKomWJ9aajLaQqeiD_

struct struct_DZAeZYKomWJ9aajLaQqeiD
{
  real32_T qm0_LA;
  real32_T qj0_LA;
  real32_T sign_LA;
  real32_T ratio_LA;
  real32_T qm0_LB;
  real32_T qj0_LB;
  real32_T sign_LB;
  real32_T ratio_LB;
  real32_T qm0_RA;
  real32_T qj0_RA;
  real32_T sign_RA;
  real32_T ratio_RA;
  real32_T qm0_RB;
  real32_T qj0_RB;
  real32_T sign_RB;
  real32_T ratio_RB;
};

#endif

// Custom Type definition for MATLABSystem: '<S66>/SourceBlock'
#include "rmw/qos_profiles.h"
#ifndef struct_ros_slros2_internal_block_Sub_T
#define struct_ros_slros2_internal_block_Sub_T

struct ros_slros2_internal_block_Sub_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slros2_internal_block_Sub_T

#ifndef struct_ros_slros2_internal_block_Pub_T
#define struct_ros_slros2_internal_block_Pub_T

struct ros_slros2_internal_block_Pub_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slros2_internal_block_Pub_T

// Parameters (default storage)
typedef struct P_Import_IMU_T_ P_Import_IMU_T;

// Forward declaration for rtModel
typedef struct tag_RTM_Import_IMU_T RT_MODEL_Import_IMU_T;

#endif                                 // RTW_HEADER_Import_IMU_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
