//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: testing_DM_hby_types.h
//
// Code generated for Simulink model 'testing_DM_hby'.
//
// Model version                  : 1.27
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Fri Jun 26 23:51:17 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_testing_DM_hby_types_h_
#define RTW_HEADER_testing_DM_hby_types_h_
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

// Custom Type definition for MATLABSystem: '<S11>/SourceBlock'
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

// Parameters (default storage)
typedef struct P_testing_DM_hby_T_ P_testing_DM_hby_T;

// Forward declaration for rtModel
typedef struct tag_RTM_testing_DM_hby_T RT_MODEL_testing_DM_hby_T;

#endif                                 // RTW_HEADER_testing_DM_hby_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
