//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: testing_DM_hby.h
//
// Code generated for Simulink model 'testing_DM_hby'.
//
// Model version                  : 1.43
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Sat Jun 27 23:29:02 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_testing_DM_hby_h_
#define RTW_HEADER_testing_DM_hby_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros2_initialize.h"
#include "testing_DM_hby_types.h"

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
struct B_testing_DM_hby_T {
  SL_Bus_custom_msgs_ReadDmMotor In1;  // '<S19>/In1'
  SL_Bus_custom_msgs_ReadDmMotor In1_i;// '<S18>/In1'
  SL_Bus_custom_msgs_ReadDmMotor In1_m;// '<S17>/In1'
  SL_Bus_custom_msgs_ReadDmMotor In1_b;// '<S16>/In1'
  SL_Bus_custom_msgs_ReadDmMotor b_varargout_2;
  real32_T q_joint_e;
  real32_T q_joint;
};

// Block states (default storage) for system '<Root>'
struct DW_testing_DM_hby_T {
  ros_slros2_internal_block_Sub_T obj; // '<S11>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_o;// '<S10>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_h;// '<S9>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_l;// '<S8>/SourceBlock'
};

// Parameters (default storage)
struct P_testing_DM_hby_T_ {
  struct_DZAeZYKomWJ9aajLaQqeiD CAL;   // Variable: CAL
                                          //  Referenced by:
                                          //    '<S4>/motor_ratio'
                                          //    '<S4>/motor_sign'
                                          //    '<S4>/q_joint_ref'
                                          //    '<S4>/q_motor_ref'
                                          //    '<S5>/motor_ratio'
                                          //    '<S5>/motor_sign'
                                          //    '<S5>/q_joint_ref'
                                          //    '<S5>/q_motor_ref'
                                          //    '<S6>/motor_ratio'
                                          //    '<S6>/motor_sign'
                                          //    '<S6>/q_joint_ref'
                                          //    '<S6>/q_motor_ref'
                                          //    '<S7>/motor_ratio'
                                          //    '<S7>/motor_sign'
                                          //    '<S7>/q_joint_ref'
                                          //    '<S7>/q_motor_ref'

  SL_Bus_custom_msgs_ReadDmMotor Out1_Y0;// Computed Parameter: Out1_Y0
                                            //  Referenced by: '<S16>/Out1'

  SL_Bus_custom_msgs_ReadDmMotor Out1_Y0_m;// Computed Parameter: Out1_Y0_m
                                              //  Referenced by: '<S17>/Out1'

  SL_Bus_custom_msgs_ReadDmMotor Out1_Y0_d;// Computed Parameter: Out1_Y0_d
                                              //  Referenced by: '<S18>/Out1'

  SL_Bus_custom_msgs_ReadDmMotor Out1_Y0_k;// Computed Parameter: Out1_Y0_k
                                              //  Referenced by: '<S19>/Out1'

  SL_Bus_custom_msgs_ReadDmMotor Constant_Value;// Computed Parameter: Constant_Value
                                                   //  Referenced by: '<S9>/Constant'

  SL_Bus_custom_msgs_ReadDmMotor Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                     //  Referenced by: '<S8>/Constant'

  SL_Bus_custom_msgs_ReadDmMotor Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                     //  Referenced by: '<S10>/Constant'

  SL_Bus_custom_msgs_ReadDmMotor Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                     //  Referenced by: '<S11>/Constant'

  real_T L6_Value;                     // Expression: 0.0804
                                          //  Referenced by: '<Root>/L6'

  real_T L9_Value;                     // Expression: 0.0804
                                          //  Referenced by: '<Root>/L9'

  real_T L10_Value;                    // Expression: 0.07
                                          //  Referenced by: '<Root>/L10'

  real_T L7_Value;                     // Expression: 0.12
                                          //  Referenced by: '<Root>/L7'

  real_T L8_Value;                     // Expression: 0.12
                                          //  Referenced by: '<Root>/L8'

};

// Real-time Model Data Structure
struct tag_RTM_testing_DM_hby_T {
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

// Class declaration for model testing_DM_hby
class testing_DM_hby
{
  // public data and function members
 public:
  // Real-Time Model get method
  RT_MODEL_testing_DM_hby_T * getRTM();

  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  testing_DM_hby();

  // Destructor
  ~testing_DM_hby();

  // private data and function members
 private:
  // Block signals
  B_testing_DM_hby_T testing_DM_hby_B;

  // Block states
  DW_testing_DM_hby_T testing_DM_hby_DW;

  // Tunable parameters
  static P_testing_DM_hby_T testing_DM_hby_P;

  // private member function(s) for subsystem '<Root>/FiveBar_FK_Left_Actual'
  static void testing__FiveBar_FK_Left_Actual(real32_T rtu_alpha, real32_T
    rtu_beta, real32_T rtu_L1, real32_T rtu_L2, real32_T rtu_L3, real32_T rtu_L4,
    real32_T rtu_L5, real32_T *rty_x, real32_T *rty_y, real32_T *rty_leg_length,
    real32_T *rty_leg_angle, boolean_T *rty_valid);

  // private member function(s) for subsystem '<S4>/Motor_Position_To_Joint'
  static void testing_Motor_Position_To_Joint(real32_T rtu_q_motor, real32_T
    rtu_q_motor_ref, real32_T rtu_q_joint_ref, real32_T rtu_motor_sign, real32_T
    rtu_motor_ratio, real32_T *rty_q_joint);

  // private member function(s) for subsystem '<Root>'
  void testing_DM_h_SystemCore_setup_d(ros_slros2_internal_block_Sub_T *obj);
  void testing_DM_hby_SystemCore_setup(ros_slros2_internal_block_Sub_T *obj);
  void testing_DM__SystemCore_setup_d0(ros_slros2_internal_block_Sub_T *obj);
  void testing_DM_SystemCore_setup_d01(ros_slros2_internal_block_Sub_T *obj);

  // Real-Time Model
  RT_MODEL_testing_DM_hby_T testing_DM_hby_M;
};

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Display10' : Unused code path elimination
//  Block '<Root>/Display11' : Unused code path elimination
//  Block '<Root>/Display6' : Unused code path elimination
//  Block '<Root>/Display7' : Unused code path elimination
//  Block '<Root>/Display8' : Unused code path elimination
//  Block '<Root>/Display9' : Unused code path elimination
//  Block '<Root>/Scope3' : Unused code path elimination
//  Block '<Root>/Scope4' : Unused code path elimination
//  Block '<Root>/Scope5' : Unused code path elimination
//  Block '<Root>/Data Type Conversion15' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion22' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion23' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion24' : Eliminate redundant data type conversion


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
//  '<Root>' : 'testing_DM_hby'
//  '<S1>'   : 'testing_DM_hby/FiveBar_Animation_Left_Actual'
//  '<S2>'   : 'testing_DM_hby/FiveBar_FK_Left_Actual'
//  '<S3>'   : 'testing_DM_hby/FiveBar_FK_Right_Actual'
//  '<S4>'   : 'testing_DM_hby/Motor_To_Joint_LA'
//  '<S5>'   : 'testing_DM_hby/Motor_To_Joint_LB'
//  '<S6>'   : 'testing_DM_hby/Motor_To_Joint_RA'
//  '<S7>'   : 'testing_DM_hby/Motor_To_Joint_RB'
//  '<S8>'   : 'testing_DM_hby/Subscribe2'
//  '<S9>'   : 'testing_DM_hby/Subscribe_LA'
//  '<S10>'  : 'testing_DM_hby/Subscribe_RA'
//  '<S11>'  : 'testing_DM_hby/Subscribe_RB'
//  '<S12>'  : 'testing_DM_hby/Motor_To_Joint_LA/Motor_Position_To_Joint'
//  '<S13>'  : 'testing_DM_hby/Motor_To_Joint_LB/Motor_Position_To_Joint'
//  '<S14>'  : 'testing_DM_hby/Motor_To_Joint_RA/Motor_Position_To_Joint'
//  '<S15>'  : 'testing_DM_hby/Motor_To_Joint_RB/Motor_Position_To_Joint'
//  '<S16>'  : 'testing_DM_hby/Subscribe2/Enabled Subsystem'
//  '<S17>'  : 'testing_DM_hby/Subscribe_LA/Enabled Subsystem'
//  '<S18>'  : 'testing_DM_hby/Subscribe_RA/Enabled Subsystem'
//  '<S19>'  : 'testing_DM_hby/Subscribe_RB/Enabled Subsystem'

#endif                                 // RTW_HEADER_testing_DM_hby_h_

//
// File trailer for generated code.
//
// [EOF]
//
