//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Import_IMU.h
//
// Code generated for Simulink model 'Import_IMU'.
//
// Model version                  : 1.2
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Sun Jun 28 15:17:06 2026
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

// Block signals (default storage)
struct B_Import_IMU_T {
  SL_Bus_custom_msgs_ReadDmMotor In1;  // '<S19>/In1'
  SL_Bus_custom_msgs_ReadDmMotor In1_a;// '<S18>/In1'
  SL_Bus_custom_msgs_ReadDmMotor In1_j;// '<S17>/In1'
  SL_Bus_custom_msgs_ReadDmMotor In1_m;// '<S16>/In1'
  SL_Bus_custom_msgs_ReadDmMotor b_varargout_2;
  real32_T q_joint_m;
  real32_T q_joint_e;
};

// Block states (default storage) for system '<Root>'
struct DW_Import_IMU_T {
  ros_slros2_internal_block_Sub_T obj; // '<S11>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_d;// '<S10>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_g;// '<S9>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_n;// '<S8>/SourceBlock'
};

// Parameters (default storage)
struct P_Import_IMU_T_ {
  struct_DZAeZYKomWJ9aajLaQqeiD CAL;   // Variable: CAL
                                          //  Referenced by:
                                          //    '<S4>/qj0'
                                          //    '<S4>/qm0'
                                          //    '<S4>/ratio'
                                          //    '<S4>/sign'
                                          //    '<S5>/qj0'
                                          //    '<S5>/qm0'
                                          //    '<S5>/ratio'
                                          //    '<S5>/sign'
                                          //    '<S6>/qj0'
                                          //    '<S6>/qm0'
                                          //    '<S6>/ratio'
                                          //    '<S6>/sign'
                                          //    '<S7>/qj0'
                                          //    '<S7>/qm0'
                                          //    '<S7>/ratio'
                                          //    '<S7>/sign'

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

  SL_Bus_custom_msgs_ReadDmMotor Out1_Y0;// Computed Parameter: Out1_Y0
                                            //  Referenced by: '<S16>/Out1'

  SL_Bus_custom_msgs_ReadDmMotor Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                              //  Referenced by: '<S17>/Out1'

  SL_Bus_custom_msgs_ReadDmMotor Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                              //  Referenced by: '<S18>/Out1'

  SL_Bus_custom_msgs_ReadDmMotor Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                              //  Referenced by: '<S19>/Out1'

  SL_Bus_custom_msgs_ReadDmMotor Constant_Value;// Computed Parameter: Constant_Value
                                                   //  Referenced by: '<S8>/Constant'

  SL_Bus_custom_msgs_ReadDmMotor Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                     //  Referenced by: '<S9>/Constant'

  SL_Bus_custom_msgs_ReadDmMotor Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                     //  Referenced by: '<S10>/Constant'

  SL_Bus_custom_msgs_ReadDmMotor Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                     //  Referenced by: '<S11>/Constant'

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

  // private member function(s) for subsystem '<S4>/Motor_Position_To_Joint'
  static void Import__Motor_Position_To_Joint(real32_T rtu_q_motor, real32_T
    rtu_q_motor_ref, real32_T rtu_q_joint_ref, real32_T rtu_motor_sign, real32_T
    rtu_motor_ratio, real32_T *rty_q_joint);

  // private member function(s) for subsystem '<Root>'
  void Import_IMU_SystemCore_setup(ros_slros2_internal_block_Sub_T *obj);
  void Import_IMU_SystemCore_setup_i(ros_slros2_internal_block_Sub_T *obj);
  void Import_IMU_SystemCore_setup_iu(ros_slros2_internal_block_Sub_T *obj);
  void Import_IMU_SystemCore_setup_iuf(ros_slros2_internal_block_Sub_T *obj);

  // Real-Time Model
  RT_MODEL_Import_IMU_T Import_IMU_M;
};

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion2' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion3' : Eliminate redundant data type conversion


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
//  '<S1>'   : 'Import_IMU/Dual_Leg_Animation'
//  '<S2>'   : 'Import_IMU/FiveBar_FK_Left'
//  '<S3>'   : 'Import_IMU/FiveBar_FK_Right'
//  '<S4>'   : 'Import_IMU/Motor_To_Joint_LA'
//  '<S5>'   : 'Import_IMU/Motor_To_Joint_LB'
//  '<S6>'   : 'Import_IMU/Motor_To_Joint_RA'
//  '<S7>'   : 'Import_IMU/Motor_To_Joint_RB'
//  '<S8>'   : 'Import_IMU/Subscribe_Motor1_LA'
//  '<S9>'   : 'Import_IMU/Subscribe_Motor2_LB'
//  '<S10>'  : 'Import_IMU/Subscribe_Motor3_RA'
//  '<S11>'  : 'Import_IMU/Subscribe_Motor4_RB'
//  '<S12>'  : 'Import_IMU/Motor_To_Joint_LA/Motor_Position_To_Joint'
//  '<S13>'  : 'Import_IMU/Motor_To_Joint_LB/Motor_Position_To_Joint'
//  '<S14>'  : 'Import_IMU/Motor_To_Joint_RA/Motor_Position_To_Joint'
//  '<S15>'  : 'Import_IMU/Motor_To_Joint_RB/Motor_Position_To_Joint'
//  '<S16>'  : 'Import_IMU/Subscribe_Motor1_LA/Enabled Subsystem'
//  '<S17>'  : 'Import_IMU/Subscribe_Motor2_LB/Enabled Subsystem'
//  '<S18>'  : 'Import_IMU/Subscribe_Motor3_RA/Enabled Subsystem'
//  '<S19>'  : 'Import_IMU/Subscribe_Motor4_RB/Enabled Subsystem'

#endif                                 // RTW_HEADER_Import_IMU_h_

//
// File trailer for generated code.
//
// [EOF]
//
