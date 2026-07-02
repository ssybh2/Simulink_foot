//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Import_IMU.h
//
// Code generated for Simulink model 'Import_IMU'.
//
// Model version                  : 1.149
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Thu Jul  2 17:36:59 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_Import_IMU_h_
#define RTW_HEADER_Import_IMU_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros2_initialize.h"
#include "Import_IMU_types.h"

extern "C"
{

#include "rt_nonfinite.h"

}

extern "C"
{

#include "rtGetNaN.h"

}

#include <stddef.h>

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

// Block states (default storage) for system '<S11>/Motor_Target_Velocity_LA'
struct DW_Motor_Target_Velocity_LA_I_T {
  real32_T p_previous;                 // '<S11>/Motor_Target_Velocity_LA'
  real32_T v_previous;                 // '<S11>/Motor_Target_Velocity_LA'
  boolean_T was_enabled;               // '<S11>/Motor_Target_Velocity_LA'
};

// Block signals (default storage)
struct B_Import_IMU_T {
  SL_Bus_sensor_msgs_Imu In1;          // '<S37>/In1'
  SL_Bus_sensor_msgs_Imu b_varargout_2;
  SL_Bus_custom_msgs_ReadDJIRC In1_c;  // '<S72>/In1'
  SL_Bus_custom_msgs_ReadDJIRC b_varargout_2_m;
  SL_Bus_custom_msgs_ReadDmMotor In1_b;// '<S59>/In1'
  SL_Bus_custom_msgs_ReadDmMotor In1_bi;// '<S58>/In1'
  SL_Bus_custom_msgs_ReadDmMotor In1_c3;// '<S57>/In1'
  SL_Bus_custom_msgs_ReadDmMotor In1_a;// '<S56>/In1'
  SL_Bus_custom_msgs_ReadDmMotor In1_j;// '<S55>/In1'
  SL_Bus_custom_msgs_ReadDmMotor In1_m;// '<S54>/In1'
  SL_Bus_custom_msgs_ReadDmMotor b_varargout_2_c;
  SL_Bus_custom_msgs_WriteDmMotorMITControl BusCreator2;// '<S10>/Bus Creator2'
  real_T uHome;
  real_T uBalance;
  real_T Switch1_g;                    // '<S25>/Switch1'
  real32_T DataTypeConversion25;       // '<Root>/Data Type Conversion25'
  real32_T DataTypeConversion4;        // '<Root>/Data Type Conversion4'
  real32_T DataTypeConversion5;        // '<Root>/Data Type Conversion5'
  real32_T numAccum;
  real32_T rightY_s;
  real32_T w;
  real32_T x;
  real32_T y;
  real32_T z;
  real32_T normSquared;
  real32_T relativeX;
  real32_T relativeY;
  real32_T stickMagnitude;
  real32_T homeBlend;
  real32_T deltaYRollRaw;
  real32_T vCmd;                       // '<S2>/RC_right_y_to_velocity'
  real32_T xVelocityComp;
  real32_T rollCmd;
  real32_T xB_c;
  real32_T yB_o;
  real32_T xB;
  real32_T yB;
  real32_T leg_length;
  real32_T leg_angle;
  int32_T i;
  uint32_T qY;
};

// Block states (default storage) for system '<Root>'
struct DW_Import_IMU_T {
  ros_slros2_internal_block_Sub_T obj; // '<S71>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_g;// '<S24>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_b;// '<S23>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_m;// '<S22>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_d;// '<S21>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_gv;// '<S20>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_n;// '<S19>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_f;// '<S8>/SourceBlock'
  ros_slros2_internal_block_Pub_T obj_gc;// '<S52>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_na;// '<S51>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_p;// '<S48>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_ff;// '<S43>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_pp;// '<S42>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_b4;// '<S38>/SinkBlock'
  real_T startTime;                    // '<Root>/Balance_Target_XY'
  real_T toleranceStartTime;           // '<Root>/Balance_Target_XY'
  real32_T LPF_GyroY_states;           // '<Root>/LPF_GyroY'
  real32_T LPF_GyroZ_states;           // '<Root>/LPF_GyroZ'
  real32_T LPF_GyroX_states;           // '<Root>/LPF_GyroX'
  real32_T torqueBlend;                // '<Root>/Wheel_Pitch_Controller'
  real32_T wheelVelocityLeftFiltered;  // '<Root>/Wheel_Pitch_Controller'
  real32_T wheelVelocityRightFiltered; // '<Root>/Wheel_Pitch_Controller'
  real32_T xFiltered;                  // '<Root>/Leg_X_Compensation'
  real32_T xOutput;                    // '<Root>/Leg_X_Compensation'
  real32_T q0w;                        // '<Root>/IMU_Relative_RPY'
  real32_T q0x;                        // '<Root>/IMU_Relative_RPY'
  real32_T q0y;                        // '<Root>/IMU_Relative_RPY'
  real32_T q0z;                        // '<Root>/IMU_Relative_RPY'
  real32_T rollCmdFiltered;            // '<S2>/RC_right_x_to_roll_command'
  real32_T xLeftStart;                 // '<Root>/Balance_Target_XY'
  real32_T yLeftStart;                 // '<Root>/Balance_Target_XY'
  real32_T xRightStart;                // '<Root>/Balance_Target_XY'
  real32_T yRightStart;                // '<Root>/Balance_Target_XY'
  uint32_T missedCount;                // '<S27>/RC_Safety_Gate'
  boolean_T wasEnabled;                // '<Root>/Wheel_Pitch_Controller'
  boolean_T velocityFilterInitialized; // '<Root>/Wheel_Pitch_Controller'
  boolean_T receivedOnce;              // '<S27>/RC_Safety_Gate'
  boolean_T seenDisable;               // '<S27>/RC_Safety_Gate'
  boolean_T previousEnable;            // '<Root>/Leg_X_Compensation'
  boolean_T zeroValid;                 // '<Root>/IMU_Relative_RPY'
  boolean_T previousCalibrate;         // '<Root>/IMU_Relative_RPY'
  boolean_T previousEnable_c;          // '<S2>/RC_right_x_to_roll_command'
  boolean_T previousEnable_d;          // '<Root>/Balance_Target_XY'
  DW_Motor_Target_Velocity_LA_I_T sf_Motor_Target_Velocity_LB_b;// '<S18>/Motor_Target_Velocity_LB' 
  DW_Motor_Target_Velocity_LA_I_T sf_Motor_Target_Velocity_LA_l;// '<S18>/Motor_Target_Velocity_LA' 
  DW_Motor_Target_Velocity_LA_I_T sf_Motor_Target_Velocity_LB;// '<S11>/Motor_Target_Velocity_LB' 
  DW_Motor_Target_Velocity_LA_I_T sf_Motor_Target_Velocity_LA;// '<S11>/Motor_Target_Velocity_LA' 
};

// Parameters (default storage)
struct P_Import_IMU_T_ {
  struct_DZAeZYKomWJ9aajLaQqeiD CAL;   // Variable: CAL
                                          //  Referenced by:
                                          //    '<S13>/qj0'
                                          //    '<S13>/qm0'
                                          //    '<S13>/ratio'
                                          //    '<S13>/sign'
                                          //    '<S14>/qj0'
                                          //    '<S14>/qm0'
                                          //    '<S14>/ratio'
                                          //    '<S14>/sign'
                                          //    '<S15>/qj0'
                                          //    '<S15>/qm0'
                                          //    '<S15>/ratio'
                                          //    '<S15>/sign'
                                          //    '<S16>/qj0'
                                          //    '<S16>/qm0'
                                          //    '<S16>/ratio'
                                          //    '<S16>/sign'

  real32_T L1;                         // Variable: L1
                                          //  Referenced by: '<Root>/L1'

  real32_T L2;                         // Variable: L2
                                          //  Referenced by: '<Root>/L2'

  real32_T L3;                         // Variable: L3
                                          //  Referenced by: '<Root>/L3'

  real32_T L4;                         // Variable: L4
                                          //  Referenced by: '<Root>/L4'

  real32_T L5;                         // Variable: L5
                                          //  Referenced by: '<Root>/L5'

  SL_Bus_sensor_msgs_Imu Out1_Y0;      // Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S37>/Out1'

  SL_Bus_sensor_msgs_Imu Constant_Value;// Computed Parameter: Constant_Value
                                           //  Referenced by: '<S8>/Constant'

  SL_Bus_custom_msgs_ReadDJIRC Out1_Y0_a;// Computed Parameter: Out1_Y0_a
                                            //  Referenced by: '<S72>/Out1'

  SL_Bus_custom_msgs_ReadDJIRC Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                   //  Referenced by: '<S71>/Constant'

  SL_Bus_custom_msgs_ReadDmMotor Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                              //  Referenced by: '<S54>/Out1'

  SL_Bus_custom_msgs_ReadDmMotor Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                              //  Referenced by: '<S55>/Out1'

  SL_Bus_custom_msgs_ReadDmMotor Out1_Y0_fs;// Computed Parameter: Out1_Y0_fs
                                               //  Referenced by: '<S56>/Out1'

  SL_Bus_custom_msgs_ReadDmMotor Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                              //  Referenced by: '<S57>/Out1'

  SL_Bus_custom_msgs_ReadDmMotor Out1_Y0_j;// Computed Parameter: Out1_Y0_j
                                              //  Referenced by: '<S58>/Out1'

  SL_Bus_custom_msgs_ReadDmMotor Out1_Y0_p;// Computed Parameter: Out1_Y0_p
                                              //  Referenced by: '<S59>/Out1'

  SL_Bus_custom_msgs_ReadDmMotor Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                     //  Referenced by: '<S23>/Constant'

  SL_Bus_custom_msgs_ReadDmMotor Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                     //  Referenced by: '<S24>/Constant'

  SL_Bus_custom_msgs_ReadDmMotor Constant_Value_dx;// Computed Parameter: Constant_Value_dx
                                                      //  Referenced by: '<S19>/Constant'

  SL_Bus_custom_msgs_ReadDmMotor Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                     //  Referenced by: '<S20>/Constant'

  SL_Bus_custom_msgs_ReadDmMotor Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                     //  Referenced by: '<S21>/Constant'

  SL_Bus_custom_msgs_ReadDmMotor Constant_Value_dl;// Computed Parameter: Constant_Value_dl
                                                      //  Referenced by: '<S22>/Constant'

  real_T Constant5_Value;              // Expression: -1
                                          //  Referenced by: '<S31>/Constant5'

  real_T Constant_Value_k;             // Expression: 1
                                          //  Referenced by: '<S31>/Constant'

  real_T KpVelocity_Value;             // Expression: 0.02
                                          //  Referenced by: '<Root>/KpVelocity'

  real_T KdVelocity_Value;             // Expression: 0
                                          //  Referenced by: '<Root>/KdVelocity'

  real_T KpPitch_Value;                // Expression: 2
                                          //  Referenced by: '<Root>/KpPitch'

  real_T KdPitch_Value;                // Expression: 0.09
                                          //  Referenced by: '<Root>/KdPitch'

  real_T TorqueLimit_Value;            // Expression: 0.1
                                          //  Referenced by: '<Root>/TorqueLimit'

  real_T Constant10_Value;             // Expression: 0
                                          //  Referenced by: '<S26>/Constant10'

  real_T KpYaw_Value;                  // Expression: 2
                                          //  Referenced by: '<Root>/KpYaw'

  real_T KdYaw_Value;                  // Expression: 0.02
                                          //  Referenced by: '<Root>/KdYaw'

  real_T YawTorqueLimit_Value;         // Expression: 0.5
                                          //  Referenced by: '<Root>/YawTorqueLimit'

  real_T Constant4_Value;              // Expression: 2
                                          //  Referenced by: '<Root>/Constant4'

  real_T YawDirection_Value;           // Expression: 1
                                          //  Referenced by: '<Root>/YawDirection'

  real_T Constant6_Value;              // Expression: 0.1
                                          //  Referenced by: '<Root>/Constant6'

  real_T Constant7_Value;              // Expression: 0.03
                                          //  Referenced by: '<Root>/Constant7'

  real_T Constant_Value_fu;            // Expression: 1
                                          //  Referenced by: '<S2>/Constant'

  real_T Constant1_Value;              // Expression: 1
                                          //  Referenced by: '<S2>/Constant1'

  real_T Constant_Value_dt;            // Expression: 0.5
                                          //  Referenced by: '<Root>/Constant'

  real_T Constant1_Value_j;            // Expression: 0
                                          //  Referenced by: '<Root>/Constant1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<Root>/Constant2'

  real_T Constant3_Value;              // Expression: 0
                                          //  Referenced by: '<Root>/Constant3'

  real_T Constant26_Value;             // Expression: 3.0
                                          //  Referenced by: '<Root>/Constant26'

  real_T Constant27_Value;             // Expression: 0.09
                                          //  Referenced by: '<Root>/Constant27'

  real_T A_Value;                      // Expression: -0.24
                                          //  Referenced by: '<Root>/A'

  real_T B_Value;                      // Expression: 0.24
                                          //  Referenced by: '<Root>/B'

  real_T Constant10_Value_g;           // Expression: 0
                                          //  Referenced by: '<S25>/Constant10'

  real32_T kd1_Value;                  // Computed Parameter: kd1_Value
                                          //  Referenced by: '<S25>/kd1'

  real32_T Gain_Gain;                  // Computed Parameter: Gain_Gain
                                          //  Referenced by: '<S62>/Gain'

  real32_T Gain_Gain_h;                // Computed Parameter: Gain_Gain_h
                                          //  Referenced by: '<S63>/Gain'

  real32_T Gain_Gain_b;                // Computed Parameter: Gain_Gain_b
                                          //  Referenced by: '<S64>/Gain'

  real32_T Switch_Threshold;           // Computed Parameter: Switch_Threshold
                                          //  Referenced by: '<S64>/Switch'

  real32_T DeadZone_Start;             // Computed Parameter: DeadZone_Start
                                          //  Referenced by: '<S61>/Dead Zone'

  real32_T DeadZone_End;               // Computed Parameter: DeadZone_End
                                          //  Referenced by: '<S61>/Dead Zone'

  real32_T Switch_Threshold_h;         // Computed Parameter: Switch_Threshold_h
                                          //  Referenced by: '<S63>/Switch'

  real32_T Switch_Threshold_e;         // Computed Parameter: Switch_Threshold_e
                                          //  Referenced by: '<S62>/Switch'

  real32_T DeadZone_Start_h;           // Computed Parameter: DeadZone_Start_h
                                          //  Referenced by: '<S25>/Dead Zone'

  real32_T DeadZone_End_h;             // Computed Parameter: DeadZone_End_h
                                          //  Referenced by: '<S25>/Dead Zone'

  real32_T Switch2_Threshold;          // Computed Parameter: Switch2_Threshold
                                          //  Referenced by: '<S25>/Switch2'

  real32_T Gain_Gain_p;                // Computed Parameter: Gain_Gain_p
                                          //  Referenced by: '<S60>/Gain'

  real32_T kd1_Value_h;                // Computed Parameter: kd1_Value_h
                                          //  Referenced by: '<S26>/kd1'

  real32_T Gain_Gain_e;                // Computed Parameter: Gain_Gain_e
                                          //  Referenced by: '<S67>/Gain'

  real32_T Gain_Gain_d;                // Computed Parameter: Gain_Gain_d
                                          //  Referenced by: '<S68>/Gain'

  real32_T Gain_Gain_d3;               // Computed Parameter: Gain_Gain_d3
                                          //  Referenced by: '<S69>/Gain'

  real32_T Switch_Threshold_l;         // Computed Parameter: Switch_Threshold_l
                                          //  Referenced by: '<S69>/Switch'

  real32_T DeadZone_Start_c;           // Computed Parameter: DeadZone_Start_c
                                          //  Referenced by: '<S66>/Dead Zone'

  real32_T DeadZone_End_g;             // Computed Parameter: DeadZone_End_g
                                          //  Referenced by: '<S66>/Dead Zone'

  real32_T Switch_Threshold_i;         // Computed Parameter: Switch_Threshold_i
                                          //  Referenced by: '<S68>/Switch'

  real32_T Switch_Threshold_a;         // Computed Parameter: Switch_Threshold_a
                                          //  Referenced by: '<S67>/Switch'

  real32_T DeadZone_Start_cn;          // Computed Parameter: DeadZone_Start_cn
                                          //  Referenced by: '<S26>/Dead Zone'

  real32_T DeadZone_End_c;             // Computed Parameter: DeadZone_End_c
                                          //  Referenced by: '<S26>/Dead Zone'

  real32_T Switch2_Threshold_j;       // Computed Parameter: Switch2_Threshold_j
                                         //  Referenced by: '<S26>/Switch2'

  real32_T Gain_Gain_j;                // Computed Parameter: Gain_Gain_j
                                          //  Referenced by: '<S65>/Gain'

  real32_T Gain_Gain_j1;               // Computed Parameter: Gain_Gain_j1
                                          //  Referenced by: '<S73>/Gain'

  real32_T DeadZone1_Start;            // Computed Parameter: DeadZone1_Start
                                          //  Referenced by: '<S34>/Dead Zone1'

  real32_T DeadZone1_End;              // Computed Parameter: DeadZone1_End
                                          //  Referenced by: '<S34>/Dead Zone1'

  real32_T Gain_Gain_i;                // Computed Parameter: Gain_Gain_i
                                          //  Referenced by: '<S76>/Gain'

  real32_T Switch_Threshold_p;         // Computed Parameter: Switch_Threshold_p
                                          //  Referenced by: '<S76>/Switch'

  real32_T Switch_Threshold_b;         // Computed Parameter: Switch_Threshold_b
                                          //  Referenced by: '<S34>/Switch'

  real32_T Gain_Gain_c;                // Computed Parameter: Gain_Gain_c
                                          //  Referenced by: '<S74>/Gain'

  real32_T Switch_Threshold_o;         // Computed Parameter: Switch_Threshold_o
                                          //  Referenced by: '<S74>/Switch'

  real32_T Switch1_Threshold;          // Computed Parameter: Switch1_Threshold
                                          //  Referenced by: '<S34>/Switch1'

  real32_T Gain_Gain_b5;               // Computed Parameter: Gain_Gain_b5
                                          //  Referenced by: '<S75>/Gain'

  real32_T Switch_Threshold_n;         // Computed Parameter: Switch_Threshold_n
                                          //  Referenced by: '<S75>/Switch'

  real32_T Switch2_Threshold_p;       // Computed Parameter: Switch2_Threshold_p
                                         //  Referenced by: '<S34>/Switch2'

  real32_T Gain_Gain_m;                // Computed Parameter: Gain_Gain_m
                                          //  Referenced by: '<S77>/Gain'

  real32_T Gain2_Gain;                 // Computed Parameter: Gain2_Gain
                                          //  Referenced by: '<S2>/Gain2'

  real32_T LPF_GyroY_NumCoef;          // Computed Parameter: LPF_GyroY_NumCoef
                                          //  Referenced by: '<Root>/LPF_GyroY'

  real32_T LPF_GyroY_DenCoef[2];       // Computed Parameter: LPF_GyroY_DenCoef
                                          //  Referenced by: '<Root>/LPF_GyroY'

  real32_T LPF_GyroY_InitialStates;
                                  // Computed Parameter: LPF_GyroY_InitialStates
                                     //  Referenced by: '<Root>/LPF_GyroY'

  real32_T DeadZone2_Start;            // Computed Parameter: DeadZone2_Start
                                          //  Referenced by: '<Root>/Dead Zone2'

  real32_T DeadZone2_End;              // Computed Parameter: DeadZone2_End
                                          //  Referenced by: '<Root>/Dead Zone2'

  real32_T Gain_Gain_n;                // Computed Parameter: Gain_Gain_n
                                          //  Referenced by: '<Root>/Gain'

  real32_T Gain1_Gain;                 // Computed Parameter: Gain1_Gain
                                          //  Referenced by: '<Root>/Gain1'

  real32_T p_des_Value;                // Computed Parameter: p_des_Value
                                          //  Referenced by: '<Root>/p_des'

  real32_T v_des_Value;                // Computed Parameter: v_des_Value
                                          //  Referenced by: '<Root>/v_des'

  real32_T kp_Value;                   // Computed Parameter: kp_Value
                                          //  Referenced by: '<Root>/kp'

  real32_T Switch_Threshold_g;         // Computed Parameter: Switch_Threshold_g
                                          //  Referenced by: '<S65>/Switch'

  real32_T LPF_GyroZ_NumCoef;          // Computed Parameter: LPF_GyroZ_NumCoef
                                          //  Referenced by: '<Root>/LPF_GyroZ'

  real32_T LPF_GyroZ_DenCoef[2];       // Computed Parameter: LPF_GyroZ_DenCoef
                                          //  Referenced by: '<Root>/LPF_GyroZ'

  real32_T LPF_GyroZ_InitialStates;
                                  // Computed Parameter: LPF_GyroZ_InitialStates
                                     //  Referenced by: '<Root>/LPF_GyroZ'

  real32_T Switch1_Threshold_i;       // Computed Parameter: Switch1_Threshold_i
                                         //  Referenced by: '<S26>/Switch1'

  real32_T DeadZone2_Start_l;          // Computed Parameter: DeadZone2_Start_l
                                          //  Referenced by: '<S34>/Dead Zone2'

  real32_T DeadZone2_End_m;            // Computed Parameter: DeadZone2_End_m
                                          //  Referenced by: '<S34>/Dead Zone2'

  real32_T Switch_Threshold_lr;       // Computed Parameter: Switch_Threshold_lr
                                         //  Referenced by: '<S77>/Switch'

  real32_T DeadZone_Start_g;           // Computed Parameter: DeadZone_Start_g
                                          //  Referenced by: '<S34>/Dead Zone'

  real32_T DeadZone_End_hm;            // Computed Parameter: DeadZone_End_hm
                                          //  Referenced by: '<S34>/Dead Zone'

  real32_T Switch3_Threshold;          // Computed Parameter: Switch3_Threshold
                                          //  Referenced by: '<S34>/Switch3'

  real32_T Left_wheel_Gain;            // Computed Parameter: Left_wheel_Gain
                                          //  Referenced by: '<Root>/Left_wheel'

  real32_T Right_wheel_Gain;           // Computed Parameter: Right_wheel_Gain
                                          //  Referenced by: '<Root>/Right_wheel'

  real32_T Switch_Threshold_pw;       // Computed Parameter: Switch_Threshold_pw
                                         //  Referenced by: '<S73>/Switch'

  real32_T Switch1_Threshold_l;       // Computed Parameter: Switch1_Threshold_l
                                         //  Referenced by: '<S31>/Switch1'

  real32_T LPF_GyroX_NumCoef;          // Computed Parameter: LPF_GyroX_NumCoef
                                          //  Referenced by: '<Root>/LPF_GyroX'

  real32_T LPF_GyroX_DenCoef[2];       // Computed Parameter: LPF_GyroX_DenCoef
                                          //  Referenced by: '<Root>/LPF_GyroX'

  real32_T LPF_GyroX_InitialStates;
                                  // Computed Parameter: LPF_GyroX_InitialStates
                                     //  Referenced by: '<Root>/LPF_GyroX'

  real32_T Constant29_Value;           // Expression: single(0.003)
                                          //  Referenced by: '<S11>/Constant29'

  real32_T Constant30_Value;           // Expression: single(8.0)
                                          //  Referenced by: '<S11>/Constant30'

  real32_T Constant31_Value;           // Expression: single(0.5)
                                          //  Referenced by: '<S11>/Constant31'

  real32_T Constant29_Value_j;         // Expression: single(0.003)
                                          //  Referenced by: '<S18>/Constant29'

  real32_T Constant30_Value_b;         // Expression: single(8.0)
                                          //  Referenced by: '<S18>/Constant30'

  real32_T Constant31_Value_e;         // Expression: single(0.5)
                                          //  Referenced by: '<S18>/Constant31'

  real32_T Switch_Threshold_gc;       // Computed Parameter: Switch_Threshold_gc
                                         //  Referenced by: '<S60>/Switch'

  real32_T Switch1_Threshold_j;       // Computed Parameter: Switch1_Threshold_j
                                         //  Referenced by: '<S25>/Switch1'

};

// Real-time Model Data Structure
struct tag_RTM_Import_IMU_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

// Class declaration for model Import_IMU
class Import_IMU
{
  // public data and function members
 public:
  // Real-Time Model get method
  RT_MODEL_Import_IMU_T * getRTM();

  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  Import_IMU();

  // Destructor
  ~Import_IMU();

  // private data and function members
 private:
  // Block signals
  B_Import_IMU_T Import_IMU_B;

  // Block states
  DW_Import_IMU_T Import_IMU_DW;

  // Tunable parameters
  static P_Import_IMU_T Import_IMU_P;

  // private member function(s) for subsystem '<Root>/FiveBar_FK_Left'
  static void Import_IMU_FiveBar_FK_Left(real32_T rtu_alpha, real32_T rtu_beta,
    real32_T rtu_L1, real32_T rtu_L2, real32_T rtu_L3, real32_T rtu_L4, real32_T
    rtu_L5, real32_T *rty_xB, real32_T *rty_yB, real32_T *rty_leg_length,
    real32_T *rty_leg_angle, boolean_T *rty_valid);

  // private member function(s) for subsystem '<Root>/FiveBar_IK_Left'
  void Import_IMU_FiveBar_IK_Left(real32_T rtu_xCmd, real32_T rtu_yCmd, real32_T
    rtu_alphaActual, real32_T rtu_betaActual, real32_T rtu_L1, real32_T rtu_L2,
    real32_T rtu_L3, real32_T rtu_L4, real32_T rtu_L5, real32_T *rty_alphaCmd,
    real32_T *rty_betaCmd, boolean_T *rty_valid);
  real32_T Import_IMU_mod(real32_T x);

  // private member function(s) for subsystem '<S11>/Motor_Target_Velocity_LA'
  static void Import_Motor_Target_Velocity_LA(real32_T rtu_p_cmd, boolean_T
    rtu_enable, real32_T rtu_Ts, real32_T rtu_cutoff_hz, real32_T
    rtu_max_velocity, real32_T *rty_v_des, boolean_T *rty_valid,
    DW_Motor_Target_Velocity_LA_I_T *localDW);

  // private member function(s) for subsystem '<S13>/Motor_Position_To_Joint'
  static void Import__Motor_Position_To_Joint(real32_T rtu_q_motor, real32_T
    rtu_q_motor_ref, real32_T rtu_q_joint_ref, real32_T rtu_motor_sign, real32_T
    rtu_motor_ratio, real32_T *rty_q_joint);

  // private member function(s) for subsystem '<Root>'
  void SystemCore_setup_iufdy5ksql4lg(ros_slros2_internal_block_Sub_T *obj);
  void Import_IMU_SystemCore_setup(ros_slros2_internal_block_Sub_T *obj);
  void Im_SystemCore_setup_iufdy5ksql4(ros_slros2_internal_block_Sub_T *obj);
  void I_SystemCore_setup_iufdy5ksql4l(ros_slros2_internal_block_Sub_T *obj);
  void Import_IMU_SystemCore_setup_i(ros_slros2_internal_block_Pub_T *obj);
  void Import_SystemCore_setup_iufdy5k(ros_slros2_internal_block_Sub_T *obj);
  void Impor_SystemCore_setup_iufdy5ks(ros_slros2_internal_block_Sub_T *obj);
  void Impo_SystemCore_setup_iufdy5ksq(ros_slros2_internal_block_Sub_T *obj);
  void Imp_SystemCore_setup_iufdy5ksql(ros_slros2_internal_block_Sub_T *obj);
  void Import_IMU_SystemCore_setup_iu(ros_slros2_internal_block_Pub_T *obj);
  void Import__SystemCore_setup_iufdy5(ros_slros2_internal_block_Pub_T *obj);
  void Import_I_SystemCore_setup_iufdy(ros_slros2_internal_block_Pub_T *obj);
  void Import_IMU_SystemCore_setup_iuf(ros_slros2_internal_block_Pub_T *obj);
  void Import_IM_SystemCore_setup_iufd(ros_slros2_internal_block_Pub_T *obj);

  // Real-Time Model
  RT_MODEL_Import_IMU_T Import_IMU_M;
};

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Data Type Conversion36' : Unused code path elimination
//  Block '<Root>/Display3' : Unused code path elimination
//  Block '<Root>/Display5' : Unused code path elimination
//  Block '<Root>/Display8' : Unused code path elimination
//  Block '<S11>/Sum' : Unused code path elimination
//  Block '<S11>/Sum1' : Unused code path elimination
//  Block '<S11>/position_err_A' : Unused code path elimination
//  Block '<S11>/position_err_B' : Unused code path elimination
//  Block '<S18>/Sum' : Unused code path elimination
//  Block '<S18>/Sum1' : Unused code path elimination
//  Block '<S18>/position_err_A' : Unused code path elimination
//  Block '<S18>/position_err_B' : Unused code path elimination
//  Block '<Root>/Scope' : Unused code path elimination
//  Block '<Root>/Scope1' : Unused code path elimination
//  Block '<Root>/Scope2' : Unused code path elimination
//  Block '<Root>/Scope3' : Unused code path elimination
//  Block '<Root>/Scope4' : Unused code path elimination
//  Block '<Root>/Scope5' : Unused code path elimination
//  Block '<Root>/Scope6' : Unused code path elimination
//  Block '<Root>/Scope9' : Unused code path elimination
//  Block '<Root>/Sum' : Unused code path elimination
//  Block '<S32>/Gain' : Unused code path elimination
//  Block '<S32>/Switch' : Unused code path elimination
//  Block '<S33>/Gain' : Unused code path elimination
//  Block '<S33>/Switch' : Unused code path elimination
//  Block '<Root>/kd' : Unused code path elimination
//  Block '<S34>/Display' : Unused code path elimination
//  Block '<Root>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion14' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion16' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion17' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion18' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion2' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion20' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion26' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion28' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion32' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion33' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion6' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion7' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion8' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion9' : Eliminate redundant data type conversion


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'Import_IMU'
//  '<S1>'   : 'Import_IMU/Balance_Target_XY'
//  '<S2>'   : 'Import_IMU/DJIRC'
//  '<S3>'   : 'Import_IMU/Dual_Leg_Animation'
//  '<S4>'   : 'Import_IMU/FiveBar_FK_Left'
//  '<S5>'   : 'Import_IMU/FiveBar_FK_Right'
//  '<S6>'   : 'Import_IMU/FiveBar_IK_Left'
//  '<S7>'   : 'Import_IMU/FiveBar_IK_Right'
//  '<S8>'   : 'Import_IMU/IMU'
//  '<S9>'   : 'Import_IMU/IMU_Relative_RPY'
//  '<S10>'  : 'Import_IMU/Left'
//  '<S11>'  : 'Import_IMU/Left_leg'
//  '<S12>'  : 'Import_IMU/Leg_X_Compensation'
//  '<S13>'  : 'Import_IMU/Motor_To_Joint_LA'
//  '<S14>'  : 'Import_IMU/Motor_To_Joint_LB'
//  '<S15>'  : 'Import_IMU/Motor_To_Joint_RA'
//  '<S16>'  : 'Import_IMU/Motor_To_Joint_RB'
//  '<S17>'  : 'Import_IMU/Right'
//  '<S18>'  : 'Import_IMU/Right_leg'
//  '<S19>'  : 'Import_IMU/Subscribe_Motor1_LA'
//  '<S20>'  : 'Import_IMU/Subscribe_Motor2_LB'
//  '<S21>'  : 'Import_IMU/Subscribe_Motor3_RA'
//  '<S22>'  : 'Import_IMU/Subscribe_Motor4_RB'
//  '<S23>'  : 'Import_IMU/Subscribe_Wheel_Left'
//  '<S24>'  : 'Import_IMU/Subscribe_Wheel_Right'
//  '<S25>'  : 'Import_IMU/Subsystem'
//  '<S26>'  : 'Import_IMU/Subsystem1'
//  '<S27>'  : 'Import_IMU/Switch'
//  '<S28>'  : 'Import_IMU/Wheel_Pitch_Controller'
//  '<S29>'  : 'Import_IMU/Wheel_Torque_Mixer'
//  '<S30>'  : 'Import_IMU/Yaw_Rate_Controller'
//  '<S31>'  : 'Import_IMU/absolute value'
//  '<S32>'  : 'Import_IMU/absolute value1'
//  '<S33>'  : 'Import_IMU/absolute value3'
//  '<S34>'  : 'Import_IMU/logic_gate'
//  '<S35>'  : 'Import_IMU/DJIRC/RC_right_x_to_roll_command'
//  '<S36>'  : 'Import_IMU/DJIRC/RC_right_y_to_velocity'
//  '<S37>'  : 'Import_IMU/IMU/Enabled Subsystem'
//  '<S38>'  : 'Import_IMU/Left/Publish'
//  '<S39>'  : 'Import_IMU/Left_leg/Left_Joint_To_Motor_L'
//  '<S40>'  : 'Import_IMU/Left_leg/Motor_Target_Velocity_LA'
//  '<S41>'  : 'Import_IMU/Left_leg/Motor_Target_Velocity_LB'
//  '<S42>'  : 'Import_IMU/Left_leg/Publish1'
//  '<S43>'  : 'Import_IMU/Left_leg/Publish2'
//  '<S44>'  : 'Import_IMU/Motor_To_Joint_LA/Motor_Position_To_Joint'
//  '<S45>'  : 'Import_IMU/Motor_To_Joint_LB/Motor_Position_To_Joint'
//  '<S46>'  : 'Import_IMU/Motor_To_Joint_RA/Motor_Position_To_Joint'
//  '<S47>'  : 'Import_IMU/Motor_To_Joint_RB/Motor_Position_To_Joint'
//  '<S48>'  : 'Import_IMU/Right/Publish'
//  '<S49>'  : 'Import_IMU/Right_leg/Motor_Target_Velocity_LA'
//  '<S50>'  : 'Import_IMU/Right_leg/Motor_Target_Velocity_LB'
//  '<S51>'  : 'Import_IMU/Right_leg/Publish1'
//  '<S52>'  : 'Import_IMU/Right_leg/Publish2'
//  '<S53>'  : 'Import_IMU/Right_leg/Right_Joint_To_Motor_R'
//  '<S54>'  : 'Import_IMU/Subscribe_Motor1_LA/Enabled Subsystem'
//  '<S55>'  : 'Import_IMU/Subscribe_Motor2_LB/Enabled Subsystem'
//  '<S56>'  : 'Import_IMU/Subscribe_Motor3_RA/Enabled Subsystem'
//  '<S57>'  : 'Import_IMU/Subscribe_Motor4_RB/Enabled Subsystem'
//  '<S58>'  : 'Import_IMU/Subscribe_Wheel_Left/Enabled Subsystem'
//  '<S59>'  : 'Import_IMU/Subscribe_Wheel_Right/Enabled Subsystem'
//  '<S60>'  : 'Import_IMU/Subsystem/absolute value3'
//  '<S61>'  : 'Import_IMU/Subsystem/logic gate'
//  '<S62>'  : 'Import_IMU/Subsystem/logic gate/absolute value1'
//  '<S63>'  : 'Import_IMU/Subsystem/logic gate/absolute value2'
//  '<S64>'  : 'Import_IMU/Subsystem/logic gate/absolute value3'
//  '<S65>'  : 'Import_IMU/Subsystem1/absolute value3'
//  '<S66>'  : 'Import_IMU/Subsystem1/logic gate'
//  '<S67>'  : 'Import_IMU/Subsystem1/logic gate/absolute value1'
//  '<S68>'  : 'Import_IMU/Subsystem1/logic gate/absolute value2'
//  '<S69>'  : 'Import_IMU/Subsystem1/logic gate/absolute value3'
//  '<S70>'  : 'Import_IMU/Switch/RC_Safety_Gate'
//  '<S71>'  : 'Import_IMU/Switch/Subscribe'
//  '<S72>'  : 'Import_IMU/Switch/Subscribe/Enabled Subsystem'
//  '<S73>'  : 'Import_IMU/absolute value/absolute value3'
//  '<S74>'  : 'Import_IMU/logic_gate/absolute value1'
//  '<S75>'  : 'Import_IMU/logic_gate/absolute value2'
//  '<S76>'  : 'Import_IMU/logic_gate/absolute value3'
//  '<S77>'  : 'Import_IMU/logic_gate/absolute value4'

#endif                                 // RTW_HEADER_Import_IMU_h_

//
// File trailer for generated code.
//
// [EOF]
//
