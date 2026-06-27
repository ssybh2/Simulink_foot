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
// C/C++ source code generated on : Sat Jun 27 22:20:33 2026
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

// Block states (default storage) for system '<Root>/Motor_Target_Velocity_LA'
struct DW_Motor_Target_Velocity_LA_t_T {
  real32_T p_previous;                 // '<Root>/Motor_Target_Velocity_LA'
  real32_T v_previous;                 // '<Root>/Motor_Target_Velocity_LA'
  boolean_T was_enabled;               // '<Root>/Motor_Target_Velocity_LA'
};

// Block signals (default storage)
struct B_testing_DM_hby_T {
  SL_Bus_custom_msgs_ReadDJIRC In1;    // '<S16>/In1'
  SL_Bus_custom_msgs_ReadDJIRC b_varargout_2;
  SL_Bus_custom_msgs_ReadDmMotor In1_p;// '<S17>/In1'
  SL_Bus_custom_msgs_ReadDmMotor In1_m;// '<S15>/In1'
  SL_Bus_custom_msgs_ReadDmMotor b_varargout_2_m;
  SL_Bus_custom_msgs_WriteDmMotorMITControl BusCreator1;// '<Root>/Bus Creator1' 
  SL_Bus_custom_msgs_WriteDmMotorMITControl BusCreator2;// '<Root>/Bus Creator2' 
  real_T u;
  real_T blend;
  real_T Clock4;                       // '<Root>/Clock4'
};

// Block states (default storage) for system '<Root>'
struct DW_testing_DM_hby_T {
  ros_slros2_internal_block_Pub_T obj; // '<S11>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_i;// '<S10>/SinkBlock'
  ros_slros2_internal_block_Sub_T obj_a;// '<S14>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_n;// '<S13>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_n3;// '<S12>/SourceBlock'
  real_T t_phase_start;                // '<Root>/Foot_Home_Then_Sine'
  real_T tolerance_start_time;         // '<Root>/Foot_Home_Then_Sine'
  real32_T x_begin;                    // '<Root>/Foot_Home_Then_Sine'
  real32_T y_begin;                    // '<Root>/Foot_Home_Then_Sine'
  uint8_T state;                       // '<Root>/Foot_Home_Then_Sine'
  boolean_T last_enable;               // '<Root>/Foot_Home_Then_Sine'
  DW_Motor_Target_Velocity_LA_t_T sf_Motor_Target_Velocity_LB;// '<Root>/Motor_Target_Velocity_LB' 
  DW_Motor_Target_Velocity_LA_t_T sf_Motor_Target_Velocity_LA;// '<Root>/Motor_Target_Velocity_LA' 
};

// Parameters (default storage)
struct P_testing_DM_hby_T_ {
  struct_DZAeZYKomWJ9aajLaQqeiD CAL;   // Variable: CAL
                                          //  Referenced by:
                                          //    '<Root>/Constant10'
                                          //    '<Root>/Constant11'
                                          //    '<Root>/Constant12'
                                          //    '<Root>/Constant13'
                                          //    '<Root>/Constant14'
                                          //    '<Root>/Constant7'
                                          //    '<Root>/Constant8'
                                          //    '<Root>/Constant9'

  SL_Bus_custom_msgs_ReadDJIRC Out1_Y0;// Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S16>/Out1'

  SL_Bus_custom_msgs_ReadDJIRC Constant_Value;// Computed Parameter: Constant_Value
                                                 //  Referenced by: '<S13>/Constant'

  SL_Bus_custom_msgs_ReadDmMotor Out1_Y0_g;// Computed Parameter: Out1_Y0_g
                                              //  Referenced by: '<S15>/Out1'

  SL_Bus_custom_msgs_ReadDmMotor Out1_Y0_p;// Computed Parameter: Out1_Y0_p
                                              //  Referenced by: '<S17>/Out1'

  SL_Bus_custom_msgs_ReadDmMotor Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                     //  Referenced by: '<S14>/Constant'

  SL_Bus_custom_msgs_ReadDmMotor Constant_Value_hk;// Computed Parameter: Constant_Value_hk
                                                      //  Referenced by: '<S12>/Constant'

  real_T Constant23_Value;             // Expression: 1
                                          //  Referenced by: '<Root>/Constant23'

  real_T Constant24_Value;             // Expression: 0
                                          //  Referenced by: '<Root>/Constant24'

  real_T L11_Value;                    // Expression: 0.0804
                                          //  Referenced by: '<Root>/L11'

  real_T L12_Value;                    // Expression: 0.12
                                          //  Referenced by: '<Root>/L12'

  real_T L13_Value;                    // Expression: 0.12
                                          //  Referenced by: '<Root>/L13'

  real_T L14_Value;                    // Expression: 0.0804
                                          //  Referenced by: '<Root>/L14'

  real_T L15_Value;                    // Expression: 0.07
                                          //  Referenced by: '<Root>/L15'

  real_T Constant26_Value;             // Expression: 3.3
                                          //  Referenced by: '<Root>/Constant26'

  real_T Constant27_Value;             // Expression: 0.09
                                          //  Referenced by: '<Root>/Constant27'

  real_T A_Value;                      // Expression: -0.24
                                          //  Referenced by: '<Root>/A'

  real_T B_Value;                      // Expression: 0.24
                                          //  Referenced by: '<Root>/B'

  real32_T Constant19_Value;           // Expression: single(0.035)
                                          //  Referenced by: '<Root>/Constant19'

  real32_T Constant20_Value;           // Expression: single(0.1)
                                          //  Referenced by: '<Root>/Constant20'

  real32_T Constant21_Value;           // Expression: single(5.0)
                                          //  Referenced by: '<Root>/Constant21'

  real32_T Constant22_Value;           // Expression: single(0.003)
                                          //  Referenced by: '<Root>/Constant22'

  real32_T Constant25_Value;           // Expression: single(0.5)
                                          //  Referenced by: '<Root>/Constant25'

  real32_T Constant16_Value;           // Expression: single(0.05)
                                          //  Referenced by: '<Root>/Constant16'

  real32_T Constant17_Value;           // Expression: single(0.02)
                                          //  Referenced by: '<Root>/Constant17'

  real32_T Constant18_Value;           // Expression: single(20)
                                          //  Referenced by: '<Root>/Constant18'

  real32_T Constant29_Value;           // Expression: single(0.003)
                                          //  Referenced by: '<Root>/Constant29'

  real32_T Constant30_Value;           // Expression: single(8.0)
                                          //  Referenced by: '<Root>/Constant30'

  real32_T Constant31_Value;           // Expression: single(0.5)
                                          //  Referenced by: '<Root>/Constant31'

  uint8_T Switch1_Threshold;           // Computed Parameter: Switch1_Threshold
                                          //  Referenced by: '<Root>/Switch1'

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

  // private member function(s) for subsystem '<Root>/Motor_Position_To_Joint_LA'
  static void test_Motor_Position_To_Joint_LA(real32_T rtu_q_motor, real32_T
    rtu_qm0, real32_T rtu_qj0, real32_T rtu_motor_sign, real32_T rtu_motor_ratio,
    real32_T *rty_q_joint, boolean_T *rty_valid);

  // private member function(s) for subsystem '<Root>/Motor_Target_Velocity_LA'
  static void testin_Motor_Target_Velocity_LA(real32_T rtu_p_cmd, uint8_T
    rtu_enable, real32_T rtu_Ts, real32_T rtu_cutoff_hz, real32_T
    rtu_max_velocity, real32_T *rty_v_des, boolean_T *rty_valid,
    DW_Motor_Target_Velocity_LA_t_T *localDW);

  // private member function(s) for subsystem '<Root>'
  void testing_DM_SystemCore_setup_d01(ros_slros2_internal_block_Sub_T *obj);
  void testing_D_SystemCore_setup_d01g(ros_slros2_internal_block_Sub_T *obj);
  void testing_DM__SystemCore_setup_d0(ros_slros2_internal_block_Sub_T *obj);
  void testing_DM_hby_SystemCore_setup(ros_slros2_internal_block_Pub_T *obj);
  void testing_DM_h_SystemCore_setup_d(ros_slros2_internal_block_Pub_T *obj);

  // Real-Time Model
  RT_MODEL_testing_DM_hby_T testing_DM_hby_M;
};

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Clock3' : Unused code path elimination
//  Block '<Root>/Constant15' : Unused code path elimination
//  Block '<Root>/Constant32' : Unused code path elimination
//  Block '<Root>/Display12' : Unused code path elimination
//  Block '<Root>/Display13' : Unused code path elimination
//  Block '<Root>/Sum' : Unused code path elimination
//  Block '<Root>/Sum1' : Unused code path elimination
//  Block '<Root>/Switch2' : Unused code path elimination
//  Block '<Root>/position_err_A' : Unused code path elimination
//  Block '<Root>/position_err_B' : Unused code path elimination
//  Block '<Root>/Data Type Conversion35' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion36' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion37' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion38' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion39' : Eliminate redundant data type conversion
//  Block '<Root>/Data Type Conversion40' : Eliminate redundant data type conversion


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
//  '<S1>'   : 'testing_DM_hby/FiveBar_Animation_Compare'
//  '<S2>'   : 'testing_DM_hby/FiveBar_FK1'
//  '<S3>'   : 'testing_DM_hby/FiveBar_IK1'
//  '<S4>'   : 'testing_DM_hby/Foot_Home_Then_Sine'
//  '<S5>'   : 'testing_DM_hby/Left_Joint_To_Motor_L'
//  '<S6>'   : 'testing_DM_hby/Motor_Position_To_Joint_LA'
//  '<S7>'   : 'testing_DM_hby/Motor_Position_To_Joint_LB'
//  '<S8>'   : 'testing_DM_hby/Motor_Target_Velocity_LA'
//  '<S9>'   : 'testing_DM_hby/Motor_Target_Velocity_LB'
//  '<S10>'  : 'testing_DM_hby/Publish1'
//  '<S11>'  : 'testing_DM_hby/Publish2'
//  '<S12>'  : 'testing_DM_hby/Subscribe3'
//  '<S13>'  : 'testing_DM_hby/Subscribe4'
//  '<S14>'  : 'testing_DM_hby/Subscribe_LA1'
//  '<S15>'  : 'testing_DM_hby/Subscribe3/Enabled Subsystem'
//  '<S16>'  : 'testing_DM_hby/Subscribe4/Enabled Subsystem'
//  '<S17>'  : 'testing_DM_hby/Subscribe_LA1/Enabled Subsystem'

#endif                                 // RTW_HEADER_testing_DM_hby_h_

//
// File trailer for generated code.
//
// [EOF]
//
