//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Import_IMU.h
//
// Code generated for Simulink model 'Import_IMU'.
//
// Model version                  : 1.20
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Mon Jun 29 19:32:58 2026
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

// Block states (default storage) for system '<S17>/Motor_Target_Velocity_LA'
struct DW_Motor_Target_Velocity_LA_I_T {
  real32_T p_previous;                 // '<S17>/Motor_Target_Velocity_LA'
  real32_T v_previous;                 // '<S17>/Motor_Target_Velocity_LA'
  boolean_T was_enabled;               // '<S17>/Motor_Target_Velocity_LA'
};

// Block signals (default storage)
struct B_Import_IMU_T {
  SL_Bus_sensor_msgs_Imu In1;          // '<S20>/In1'
  SL_Bus_sensor_msgs_Imu b_varargout_2;
  SL_Bus_custom_msgs_ReadDJIRC In1_c;  // '<S41>/In1'
  SL_Bus_custom_msgs_ReadDJIRC b_varargout_2_m;
  SL_Bus_custom_msgs_ReadDmMotor In1_c3;// '<S28>/In1'
  SL_Bus_custom_msgs_ReadDmMotor In1_a;// '<S27>/In1'
  SL_Bus_custom_msgs_ReadDmMotor In1_j;// '<S26>/In1'
  SL_Bus_custom_msgs_ReadDmMotor In1_m;// '<S25>/In1'
  SL_Bus_custom_msgs_ReadDmMotor b_varargout_2_c;
  SL_Bus_custom_msgs_WriteDmMotorMITControl BusCreator1;// '<S17>/Bus Creator1'
  SL_Bus_custom_msgs_WriteDmMotorMITControl BusCreator1_g;// '<S18>/Bus Creator1' 
  real_T uHome;
  real_T uBalance;
  real_T Clock1;                       // '<Root>/Clock1'
  real32_T DataTypeConversion4;        // '<Root>/Data Type Conversion4'
  real32_T DataTypeConversion5;        // '<Root>/Data Type Conversion5'
  real32_T numAccum;
  real32_T numAccum_k;
  real32_T w;
  real32_T x;
  real32_T y;
  real32_T z;
  real32_T normSquared;
  real32_T relativeX;
  real32_T relativeY;
  real32_T relativeNorm;
  real32_T sinPitch;
  real32_T yLeftCmd;
  real32_T homeBlend;
  real32_T xB;
  real32_T q_joint_m;
};

// Block states (default storage) for system '<Root>'
struct DW_Import_IMU_T {
  ros_slros2_internal_block_Sub_T obj; // '<S40>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_m;// '<S16>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_d;// '<S15>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_g;// '<S14>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_n;// '<S13>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_f;// '<S7>/SourceBlock'
  ros_slros2_internal_block_Pub_T obj_gc;// '<S37>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_na;// '<S36>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_ff;// '<S33>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_p;// '<S32>/SinkBlock'
  real_T startTime;                    // '<Root>/Balance_Target_XY'
  real_T toleranceStartTime;           // '<Root>/Balance_Target_XY'
  real32_T LPF_GyroX_states;           // '<Root>/LPF_GyroX'
  real32_T LPF_GyroY_states;           // '<Root>/LPF_GyroY'
  real32_T q0w;                        // '<Root>/IMU_Relative_RPY'
  real32_T q0x;                        // '<Root>/IMU_Relative_RPY'
  real32_T q0y;                        // '<Root>/IMU_Relative_RPY'
  real32_T q0z;                        // '<Root>/IMU_Relative_RPY'
  real32_T xLeftStart;                 // '<Root>/Balance_Target_XY'
  real32_T yLeftStart;                 // '<Root>/Balance_Target_XY'
  real32_T xRightStart;                // '<Root>/Balance_Target_XY'
  real32_T yRightStart;                // '<Root>/Balance_Target_XY'
  uint32_T missedCount;                // '<S19>/RC_Safety_Gate'
  boolean_T receivedOnce;              // '<S19>/RC_Safety_Gate'
  boolean_T seenDisable;               // '<S19>/RC_Safety_Gate'
  boolean_T zeroValid;                 // '<Root>/IMU_Relative_RPY'
  boolean_T previousCalibrate;         // '<Root>/IMU_Relative_RPY'
  boolean_T previousEnable;            // '<Root>/Balance_Target_XY'
  DW_Motor_Target_Velocity_LA_I_T sf_Motor_Target_Velocity_LB_b;// '<S18>/Motor_Target_Velocity_LB' 
  DW_Motor_Target_Velocity_LA_I_T sf_Motor_Target_Velocity_LA_l;// '<S18>/Motor_Target_Velocity_LA' 
  DW_Motor_Target_Velocity_LA_I_T sf_Motor_Target_Velocity_LB;// '<S17>/Motor_Target_Velocity_LB' 
  DW_Motor_Target_Velocity_LA_I_T sf_Motor_Target_Velocity_LA;// '<S17>/Motor_Target_Velocity_LA' 
};

// Parameters (default storage)
struct P_Import_IMU_T_ {
  struct_DZAeZYKomWJ9aajLaQqeiD CAL;   // Variable: CAL
                                          //  Referenced by:
                                          //    '<S9>/qj0'
                                          //    '<S9>/qm0'
                                          //    '<S9>/ratio'
                                          //    '<S9>/sign'
                                          //    '<S10>/qj0'
                                          //    '<S10>/qm0'
                                          //    '<S10>/ratio'
                                          //    '<S10>/sign'
                                          //    '<S11>/qj0'
                                          //    '<S11>/qm0'
                                          //    '<S11>/ratio'
                                          //    '<S11>/sign'
                                          //    '<S12>/qj0'
                                          //    '<S12>/qm0'
                                          //    '<S12>/ratio'
                                          //    '<S12>/sign'

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
                                          //  Referenced by: '<S20>/Out1'

  SL_Bus_sensor_msgs_Imu Constant_Value;// Computed Parameter: Constant_Value
                                           //  Referenced by: '<S7>/Constant'

  SL_Bus_custom_msgs_ReadDJIRC Out1_Y0_a;// Computed Parameter: Out1_Y0_a
                                            //  Referenced by: '<S41>/Out1'

  SL_Bus_custom_msgs_ReadDJIRC Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                   //  Referenced by: '<S40>/Constant'

  SL_Bus_custom_msgs_ReadDmMotor Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                              //  Referenced by: '<S25>/Out1'

  SL_Bus_custom_msgs_ReadDmMotor Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                              //  Referenced by: '<S26>/Out1'

  SL_Bus_custom_msgs_ReadDmMotor Out1_Y0_fs;// Computed Parameter: Out1_Y0_fs
                                               //  Referenced by: '<S27>/Out1'

  SL_Bus_custom_msgs_ReadDmMotor Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                              //  Referenced by: '<S28>/Out1'

  SL_Bus_custom_msgs_ReadDmMotor Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                     //  Referenced by: '<S13>/Constant'

  SL_Bus_custom_msgs_ReadDmMotor Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                     //  Referenced by: '<S14>/Constant'

  SL_Bus_custom_msgs_ReadDmMotor Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                     //  Referenced by: '<S15>/Constant'

  SL_Bus_custom_msgs_ReadDmMotor Constant_Value_dl;// Computed Parameter: Constant_Value_dl
                                                      //  Referenced by: '<S16>/Constant'

  real_T Constant_Value_dt;            // Expression: 0.05
                                          //  Referenced by: '<Root>/Constant'

  real_T Constant1_Value;              // Expression: 0.0
                                          //  Referenced by: '<Root>/Constant1'

  real_T Constant2_Value;              // Expression: 0.05
                                          //  Referenced by: '<Root>/Constant2'

  real_T Constant3_Value;              // Expression: 0
                                          //  Referenced by: '<Root>/Constant3'

  real_T Constant26_Value;             // Expression: 3.3
                                          //  Referenced by: '<S17>/Constant26'

  real_T Constant27_Value;             // Expression: 0.09
                                          //  Referenced by: '<S17>/Constant27'

  real_T A_Value;                      // Expression: -0.24
                                          //  Referenced by: '<S17>/A'

  real_T B_Value;                      // Expression: 0.24
                                          //  Referenced by: '<S17>/B'

  real_T Constant26_Value_n;           // Expression: 3.3
                                          //  Referenced by: '<S18>/Constant26'

  real_T Constant27_Value_i;           // Expression: 0.09
                                          //  Referenced by: '<S18>/Constant27'

  real_T A_Value_p;                    // Expression: 0.24
                                          //  Referenced by: '<S18>/A'

  real_T B_Value_o;                    // Expression: -0.24
                                          //  Referenced by: '<S18>/B'

  real32_T LPF_GyroX_NumCoef;          // Computed Parameter: LPF_GyroX_NumCoef
                                          //  Referenced by: '<Root>/LPF_GyroX'

  real32_T LPF_GyroX_DenCoef[2];       // Computed Parameter: LPF_GyroX_DenCoef
                                          //  Referenced by: '<Root>/LPF_GyroX'

  real32_T LPF_GyroX_InitialStates;
                                  // Computed Parameter: LPF_GyroX_InitialStates
                                     //  Referenced by: '<Root>/LPF_GyroX'

  real32_T LPF_GyroY_NumCoef;          // Computed Parameter: LPF_GyroY_NumCoef
                                          //  Referenced by: '<Root>/LPF_GyroY'

  real32_T LPF_GyroY_DenCoef[2];       // Computed Parameter: LPF_GyroY_DenCoef
                                          //  Referenced by: '<Root>/LPF_GyroY'

  real32_T LPF_GyroY_InitialStates;
                                  // Computed Parameter: LPF_GyroY_InitialStates
                                     //  Referenced by: '<Root>/LPF_GyroY'

  real32_T Constant29_Value;           // Expression: single(0.003)
                                          //  Referenced by: '<S17>/Constant29'

  real32_T Constant30_Value;           // Expression: single(8.0)
                                          //  Referenced by: '<S17>/Constant30'

  real32_T Constant31_Value;           // Expression: single(0.5)
                                          //  Referenced by: '<S17>/Constant31'

  real32_T Constant29_Value_j;         // Expression: single(0.003)
                                          //  Referenced by: '<S18>/Constant29'

  real32_T Constant30_Value_b;         // Expression: single(8.0)
                                          //  Referenced by: '<S18>/Constant30'

  real32_T Constant31_Value_e;         // Expression: single(0.5)
                                          //  Referenced by: '<S18>/Constant31'

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

  // private member function(s) for subsystem '<S9>/Motor_Position_To_Joint'
  static void Import__Motor_Position_To_Joint(real32_T rtu_q_motor, real32_T
    rtu_q_motor_ref, real32_T rtu_q_joint_ref, real32_T rtu_motor_sign, real32_T
    rtu_motor_ratio, real32_T *rty_q_joint);

  // private member function(s) for subsystem '<S17>/Motor_Target_Velocity_LA'
  static void Import_Motor_Target_Velocity_LA(real32_T rtu_p_cmd, boolean_T
    rtu_enable, real32_T rtu_Ts, real32_T rtu_cutoff_hz, real32_T
    rtu_max_velocity, real32_T *rty_v_des, boolean_T *rty_valid,
    DW_Motor_Target_Velocity_LA_I_T *localDW);

  // private member function(s) for subsystem '<Root>'
  void Impo_SystemCore_setup_iufdy5ksq(ros_slros2_internal_block_Sub_T *obj);
  void Import_IMU_SystemCore_setup_i(ros_slros2_internal_block_Sub_T *obj);
  void Import_IMU_SystemCore_setup_iu(ros_slros2_internal_block_Sub_T *obj);
  void Import_IMU_SystemCore_setup(ros_slros2_internal_block_Sub_T *obj);
  void Import_IMU_SystemCore_setup_iuf(ros_slros2_internal_block_Sub_T *obj);
  void Import_IM_SystemCore_setup_iufd(ros_slros2_internal_block_Sub_T *obj);
  void Import_I_SystemCore_setup_iufdy(ros_slros2_internal_block_Pub_T *obj);
  void Import__SystemCore_setup_iufdy5(ros_slros2_internal_block_Pub_T *obj);
  void Import_SystemCore_setup_iufdy5k(ros_slros2_internal_block_Pub_T *obj);
  void Impor_SystemCore_setup_iufdy5ks(ros_slros2_internal_block_Pub_T *obj);

  // Real-Time Model
  RT_MODEL_Import_IMU_T Import_IMU_M;
};

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Display' : Unused code path elimination
//  Block '<Root>/Display1' : Unused code path elimination
//  Block '<Root>/Display2' : Unused code path elimination
//  Block '<Root>/Scope' : Unused code path elimination
//  Block '<Root>/Scope2' : Unused code path elimination
//  Block '<Root>/Scope3' : Unused code path elimination
//  Block '<Root>/Scope4' : Unused code path elimination
//  Block '<S17>/Sum' : Unused code path elimination
//  Block '<S17>/Sum1' : Unused code path elimination
//  Block '<S17>/position_err_A' : Unused code path elimination
//  Block '<S17>/position_err_B' : Unused code path elimination
//  Block '<S18>/Sum' : Unused code path elimination
//  Block '<S18>/Sum1' : Unused code path elimination
//  Block '<S18>/position_err_A' : Unused code path elimination
//  Block '<S18>/position_err_B' : Unused code path elimination
//  Block '<Root>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion2' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion3' : Eliminate redundant data type conversion
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
//  '<S2>'   : 'Import_IMU/Dual_Leg_Animation'
//  '<S3>'   : 'Import_IMU/FiveBar_FK_Left'
//  '<S4>'   : 'Import_IMU/FiveBar_FK_Right'
//  '<S5>'   : 'Import_IMU/FiveBar_IK_Left'
//  '<S6>'   : 'Import_IMU/FiveBar_IK_Right'
//  '<S7>'   : 'Import_IMU/IMU'
//  '<S8>'   : 'Import_IMU/IMU_Relative_RPY'
//  '<S9>'   : 'Import_IMU/Motor_To_Joint_LA'
//  '<S10>'  : 'Import_IMU/Motor_To_Joint_LB'
//  '<S11>'  : 'Import_IMU/Motor_To_Joint_RA'
//  '<S12>'  : 'Import_IMU/Motor_To_Joint_RB'
//  '<S13>'  : 'Import_IMU/Subscribe_Motor1_LA'
//  '<S14>'  : 'Import_IMU/Subscribe_Motor2_LB'
//  '<S15>'  : 'Import_IMU/Subscribe_Motor3_RA'
//  '<S16>'  : 'Import_IMU/Subscribe_Motor4_RB'
//  '<S17>'  : 'Import_IMU/Subsystem'
//  '<S18>'  : 'Import_IMU/Subsystem1'
//  '<S19>'  : 'Import_IMU/Switch'
//  '<S20>'  : 'Import_IMU/IMU/Enabled Subsystem'
//  '<S21>'  : 'Import_IMU/Motor_To_Joint_LA/Motor_Position_To_Joint'
//  '<S22>'  : 'Import_IMU/Motor_To_Joint_LB/Motor_Position_To_Joint'
//  '<S23>'  : 'Import_IMU/Motor_To_Joint_RA/Motor_Position_To_Joint'
//  '<S24>'  : 'Import_IMU/Motor_To_Joint_RB/Motor_Position_To_Joint'
//  '<S25>'  : 'Import_IMU/Subscribe_Motor1_LA/Enabled Subsystem'
//  '<S26>'  : 'Import_IMU/Subscribe_Motor2_LB/Enabled Subsystem'
//  '<S27>'  : 'Import_IMU/Subscribe_Motor3_RA/Enabled Subsystem'
//  '<S28>'  : 'Import_IMU/Subscribe_Motor4_RB/Enabled Subsystem'
//  '<S29>'  : 'Import_IMU/Subsystem/Left_Joint_To_Motor_L'
//  '<S30>'  : 'Import_IMU/Subsystem/Motor_Target_Velocity_LA'
//  '<S31>'  : 'Import_IMU/Subsystem/Motor_Target_Velocity_LB'
//  '<S32>'  : 'Import_IMU/Subsystem/Publish1'
//  '<S33>'  : 'Import_IMU/Subsystem/Publish2'
//  '<S34>'  : 'Import_IMU/Subsystem1/Motor_Target_Velocity_LA'
//  '<S35>'  : 'Import_IMU/Subsystem1/Motor_Target_Velocity_LB'
//  '<S36>'  : 'Import_IMU/Subsystem1/Publish1'
//  '<S37>'  : 'Import_IMU/Subsystem1/Publish2'
//  '<S38>'  : 'Import_IMU/Subsystem1/Right_Joint_To_Motor_R'
//  '<S39>'  : 'Import_IMU/Switch/RC_Safety_Gate'
//  '<S40>'  : 'Import_IMU/Switch/Subscribe'
//  '<S41>'  : 'Import_IMU/Switch/Subscribe/Enabled Subsystem'

#endif                                 // RTW_HEADER_Import_IMU_h_

//
// File trailer for generated code.
//
// [EOF]
//
