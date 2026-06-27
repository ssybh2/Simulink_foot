//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: testing_DM_hby.cpp
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
#include "testing_DM_hby.h"
#include "rtwtypes.h"
#include "testing_DM_hby_types.h"
#include <math.h>
#include "testing_DM_hby_private.h"
#include "rmw/qos_profiles.h"
#include <stddef.h>

extern "C"
{

#include "rt_nonfinite.h"

}

#include "rt_defines.h"

real32_T rt_atan2f_snf(real32_T u0, real32_T u1)
{
  real32_T y;
  if (rtIsNaNF(u0) || rtIsNaNF(u1)) {
    y = (rtNaNF);
  } else if (rtIsInfF(u0) && rtIsInfF(u1)) {
    int32_T tmp;
    int32_T tmp_0;
    if (u0 > 0.0F) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u1 > 0.0F) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = static_cast<real32_T>(atan2(static_cast<real_T>(static_cast<real32_T>
      (tmp)), static_cast<real_T>(static_cast<real32_T>(tmp_0))));
  } else if (u1 == 0.0F) {
    if (u0 > 0.0F) {
      y = RT_PIF / 2.0F;
    } else if (u0 < 0.0F) {
      y = -(RT_PIF / 2.0F);
    } else {
      y = 0.0F;
    }
  } else {
    y = static_cast<real32_T>(atan2(static_cast<real_T>(u0), static_cast<real_T>
      (u1)));
  }

  return y;
}

//
// Output and update for atomic system:
//    '<Root>/FiveBar_FK_Left_Actual'
//    '<Root>/FiveBar_FK_Right_Actual'
//
void testing_DM_hby::testing__FiveBar_FK_Left_Actual(real32_T rtu_alpha,
  real32_T rtu_beta, real32_T rtu_L1, real32_T rtu_L2, real32_T rtu_L3, real32_T
  rtu_L4, real32_T rtu_L5, real32_T *rty_x, real32_T *rty_y, real32_T
  *rty_leg_length, real32_T *rty_leg_angle, boolean_T *rty_valid)
{
  real32_T Ax;
  real32_T Ay;
  real32_T Dac;
  real32_T My;
  real32_T a;
  real32_T dx;
  real32_T dy;
  real32_T h;
  real32_T h2;
  h = 0.0F;
  My = 0.0F;
  *rty_leg_length = 0.0F;
  *rty_leg_angle = 0.0F;
  *rty_valid = false;
  Ax = rtu_L1 * static_cast<real32_T>(cos(static_cast<real_T>(rtu_alpha)));
  Ay = rtu_L1 * static_cast<real32_T>(sin(static_cast<real_T>(rtu_alpha)));
  dx = (rtu_L4 * static_cast<real32_T>(cos(static_cast<real_T>(rtu_beta))) +
        rtu_L5) - Ax;
  dy = rtu_L4 * static_cast<real32_T>(sin(static_cast<real_T>(rtu_beta))) - Ay;
  Dac = static_cast<real32_T>(sqrt(static_cast<real_T>(dx * dx + dy * dy)));
  if ((!(Dac < 1.0E-6F)) && (!(Dac > rtu_L2 + rtu_L3)) && (!(Dac <
        static_cast<real32_T>(fabs(static_cast<real_T>(rtu_L2 - rtu_L3)))))) {
    h2 = rtu_L2 * rtu_L2;
    a = ((h2 - rtu_L3 * rtu_L3) + Dac * Dac) / (2.0F * Dac);
    h2 -= a * a;
    if (!(h2 < -1.0E-7F)) {
      if (h2 < 0.0F) {
        h2 = 0.0F;
      }

      h = static_cast<real32_T>(sqrt(static_cast<real_T>(h2)));
      dx /= Dac;
      dy /= Dac;
      My = a * dy + Ay;
      Dac = h * dx;
      Ay = Dac + My;
      My -= Dac;
      if (Ay >= My) {
        h = (a * dx + Ax) - h * dy;
        My = Ay;
      } else {
        h = (a * dx + Ax) + h * dy;
      }

      Ax = h - rtu_L5 / 2.0F;
      *rty_leg_length = Ax * Ax + My * My;
      *rty_leg_length = static_cast<real32_T>(sqrt(static_cast<real_T>
        (*rty_leg_length)));
      *rty_leg_angle = rt_atan2f_snf(Ax, My);
      *rty_valid = true;
    }
  }

  *rty_x = h;
  *rty_y = My;
}

//
// Output and update for atomic system:
//    '<S4>/Motor_Position_To_Joint'
//    '<S5>/Motor_Position_To_Joint'
//    '<S6>/Motor_Position_To_Joint'
//    '<S7>/Motor_Position_To_Joint'
//
void testing_DM_hby::testing_Motor_Position_To_Joint(real32_T rtu_q_motor,
  real32_T rtu_q_motor_ref, real32_T rtu_q_joint_ref, real32_T rtu_motor_sign,
  real32_T rtu_motor_ratio, real32_T *rty_q_joint)
{
  *rty_q_joint = rtu_q_joint_ref;
  if (static_cast<real32_T>(fabs(static_cast<real_T>(rtu_motor_ratio))) >
      1.0E-6F) {
    *rty_q_joint = (rtu_q_motor - rtu_q_motor_ref) * rtu_motor_sign /
      rtu_motor_ratio + rtu_q_joint_ref;
  }
}

void testing_DM_hby::testing_DM_hby_SystemCore_setup
  (ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[26];
  static const char_T b_zeroDelimTopic_0[26] = "/ecat/sn2228252/app2/read";

  // Start for MATLABSystem: '<S8>/SourceBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S8>/SourceBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT);
  for (int32_T i = 0; i < 26; i++) {
    // Start for MATLABSystem: '<S8>/SourceBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Sub_testing_DM_hby_82.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void testing_DM_hby::testing_DM_h_SystemCore_setup_d
  (ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[26];
  static const char_T b_zeroDelimTopic_0[26] = "/ecat/sn2228252/app3/read";

  // Start for MATLABSystem: '<S9>/SourceBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S9>/SourceBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT);
  for (int32_T i = 0; i < 26; i++) {
    // Start for MATLABSystem: '<S9>/SourceBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Sub_testing_DM_hby_83.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void testing_DM_hby::testing_DM__SystemCore_setup_d0
  (ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[26];
  static const char_T b_zeroDelimTopic_0[26] = "/ecat/sn2228252/app5/read";

  // Start for MATLABSystem: '<S10>/SourceBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S10>/SourceBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT);
  for (int32_T i = 0; i < 26; i++) {
    // Start for MATLABSystem: '<S10>/SourceBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Sub_testing_DM_hby_84.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void testing_DM_hby::testing_DM_SystemCore_setup_d01
  (ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[26];
  static const char_T b_zeroDelimTopic_0[26] = "/ecat/sn2228252/app6/read";

  // Start for MATLABSystem: '<S11>/SourceBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S11>/SourceBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT);
  for (int32_T i = 0; i < 26; i++) {
    // Start for MATLABSystem: '<S11>/SourceBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Sub_testing_DM_hby_85.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

// Model step function
void testing_DM_hby::step()
{
  real32_T rtb_leg_angle_m;
  real32_T rtb_leg_length_h;
  real32_T x;
  real32_T y;
  boolean_T valid;

  // MATLABSystem: '<S8>/SourceBlock'
  valid = Sub_testing_DM_hby_82.getLatestMessage(&testing_DM_hby_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S8>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S16>/Enable'

  // Start for MATLABSystem: '<S8>/SourceBlock'
  if (valid) {
    // SignalConversion generated from: '<S16>/In1'
    testing_DM_hby_B.In1_ml = testing_DM_hby_B.b_varargout_2;
  }

  // End of Start for MATLABSystem: '<S8>/SourceBlock'
  // End of Outputs for SubSystem: '<S8>/Enabled Subsystem'

  // MATLAB Function: '<S4>/Motor_Position_To_Joint' incorporates:
  //   Constant: '<S4>/motor_ratio'
  //   Constant: '<S4>/motor_sign'
  //   Constant: '<S4>/q_joint_ref'
  //   Constant: '<S4>/q_motor_ref'

  testing_Motor_Position_To_Joint(testing_DM_hby_B.In1_ml.position,
    testing_DM_hby_P.CAL.qm0_LA, testing_DM_hby_P.CAL.qj0_LA,
    testing_DM_hby_P.CAL.sign_LA, testing_DM_hby_P.CAL.ratio_LA,
    &testing_DM_hby_B.q_joint_e);

  // MATLABSystem: '<S9>/SourceBlock'
  valid = Sub_testing_DM_hby_83.getLatestMessage(&testing_DM_hby_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S17>/Enable'

  // Start for MATLABSystem: '<S9>/SourceBlock'
  if (valid) {
    // SignalConversion generated from: '<S17>/In1'
    testing_DM_hby_B.In1_m = testing_DM_hby_B.b_varargout_2;
  }

  // End of Start for MATLABSystem: '<S9>/SourceBlock'
  // End of Outputs for SubSystem: '<S9>/Enabled Subsystem'

  // MATLAB Function: '<S5>/Motor_Position_To_Joint' incorporates:
  //   Constant: '<S5>/motor_ratio'
  //   Constant: '<S5>/motor_sign'
  //   Constant: '<S5>/q_joint_ref'
  //   Constant: '<S5>/q_motor_ref'
  //   SignalConversion generated from: '<Root>/Bus Selector4'

  testing_Motor_Position_To_Joint(testing_DM_hby_B.In1_m.position,
    testing_DM_hby_P.CAL.qm0_LB, testing_DM_hby_P.CAL.qj0_LB,
    testing_DM_hby_P.CAL.sign_LB, testing_DM_hby_P.CAL.ratio_LB,
    &testing_DM_hby_B.q_joint);

  // MATLAB Function: '<Root>/FiveBar_FK_Left_Actual' incorporates:
  //   Constant: '<Root>/L10'
  //   Constant: '<Root>/L6'
  //   Constant: '<Root>/L7'
  //   Constant: '<Root>/L8'
  //   Constant: '<Root>/L9'
  //   DataTypeConversion: '<Root>/Data Type Conversion25'
  //   DataTypeConversion: '<Root>/Data Type Conversion26'
  //   DataTypeConversion: '<Root>/Data Type Conversion27'
  //   DataTypeConversion: '<Root>/Data Type Conversion28'
  //   DataTypeConversion: '<Root>/Data Type Conversion29'

  testing__FiveBar_FK_Left_Actual(testing_DM_hby_B.q_joint_e,
    testing_DM_hby_B.q_joint, static_cast<real32_T>(testing_DM_hby_P.L6_Value),
    static_cast<real32_T>(testing_DM_hby_P.L7_Value), static_cast<real32_T>
    (testing_DM_hby_P.L8_Value), static_cast<real32_T>(testing_DM_hby_P.L9_Value),
    static_cast<real32_T>(testing_DM_hby_P.L10_Value), &x, &y, &rtb_leg_length_h,
    &rtb_leg_angle_m, &valid);

  // MATLABSystem: '<S10>/SourceBlock'
  valid = Sub_testing_DM_hby_84.getLatestMessage(&testing_DM_hby_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S10>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S18>/Enable'

  // Start for MATLABSystem: '<S10>/SourceBlock'
  if (valid) {
    // SignalConversion generated from: '<S18>/In1'
    testing_DM_hby_B.In1_i = testing_DM_hby_B.b_varargout_2;
  }

  // End of Start for MATLABSystem: '<S10>/SourceBlock'
  // End of Outputs for SubSystem: '<S10>/Enabled Subsystem'

  // MATLAB Function: '<S6>/Motor_Position_To_Joint' incorporates:
  //   Constant: '<S6>/motor_ratio'
  //   Constant: '<S6>/motor_sign'
  //   Constant: '<S6>/q_joint_ref'
  //   Constant: '<S6>/q_motor_ref'

  testing_Motor_Position_To_Joint(testing_DM_hby_B.In1_i.position,
    testing_DM_hby_P.CAL.qm0_RA, testing_DM_hby_P.CAL.qj0_RA,
    testing_DM_hby_P.CAL.sign_RA, testing_DM_hby_P.CAL.ratio_RA,
    &testing_DM_hby_B.q_joint_e);

  // MATLABSystem: '<S11>/SourceBlock'
  valid = Sub_testing_DM_hby_85.getLatestMessage(&testing_DM_hby_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S19>/Enable'

  // Start for MATLABSystem: '<S11>/SourceBlock'
  if (valid) {
    // SignalConversion generated from: '<S19>/In1'
    testing_DM_hby_B.In1 = testing_DM_hby_B.b_varargout_2;
  }

  // End of Start for MATLABSystem: '<S11>/SourceBlock'
  // End of Outputs for SubSystem: '<S11>/Enabled Subsystem'

  // MATLAB Function: '<S7>/Motor_Position_To_Joint' incorporates:
  //   Constant: '<S7>/motor_ratio'
  //   Constant: '<S7>/motor_sign'
  //   Constant: '<S7>/q_joint_ref'
  //   Constant: '<S7>/q_motor_ref'

  testing_Motor_Position_To_Joint(testing_DM_hby_B.In1.position,
    testing_DM_hby_P.CAL.qm0_RB, testing_DM_hby_P.CAL.qj0_RB,
    testing_DM_hby_P.CAL.sign_RB, testing_DM_hby_P.CAL.ratio_RB,
    &testing_DM_hby_B.q_joint);

  // MATLAB Function: '<Root>/FiveBar_FK_Right_Actual' incorporates:
  //   Constant: '<Root>/L10'
  //   Constant: '<Root>/L6'
  //   Constant: '<Root>/L7'
  //   Constant: '<Root>/L8'
  //   Constant: '<Root>/L9'
  //   DataTypeConversion: '<Root>/Data Type Conversion25'
  //   DataTypeConversion: '<Root>/Data Type Conversion26'
  //   DataTypeConversion: '<Root>/Data Type Conversion27'
  //   DataTypeConversion: '<Root>/Data Type Conversion28'
  //   DataTypeConversion: '<Root>/Data Type Conversion29'

  testing__FiveBar_FK_Left_Actual(testing_DM_hby_B.q_joint_e,
    testing_DM_hby_B.q_joint, static_cast<real32_T>(testing_DM_hby_P.L6_Value),
    static_cast<real32_T>(testing_DM_hby_P.L7_Value), static_cast<real32_T>
    (testing_DM_hby_P.L8_Value), static_cast<real32_T>(testing_DM_hby_P.L9_Value),
    static_cast<real32_T>(testing_DM_hby_P.L10_Value), &x, &y, &rtb_leg_length_h,
    &rtb_leg_angle_m, &valid);

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  (&testing_DM_hby_M)->Timing.t[0] =
    ((time_T)(++(&testing_DM_hby_M)->Timing.clockTick0)) * (&testing_DM_hby_M)
    ->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.01s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.01, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    (&testing_DM_hby_M)->Timing.clockTick1++;
  }
}

// Model initialize function
void testing_DM_hby::initialize()
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&(&testing_DM_hby_M)->solverInfo, &(&testing_DM_hby_M
                          )->Timing.simTimeStep);
    rtsiSetTPtr(&(&testing_DM_hby_M)->solverInfo, &rtmGetTPtr((&testing_DM_hby_M)));
    rtsiSetStepSizePtr(&(&testing_DM_hby_M)->solverInfo, &(&testing_DM_hby_M)
                       ->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&(&testing_DM_hby_M)->solverInfo, (&rtmGetErrorStatus
      ((&testing_DM_hby_M))));
    rtsiSetRTModelPtr(&(&testing_DM_hby_M)->solverInfo, (&testing_DM_hby_M));
  }

  rtsiSetSimTimeStep(&(&testing_DM_hby_M)->solverInfo, MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange(&(&testing_DM_hby_M)->solverInfo, false);
  rtsiSetSolverName(&(&testing_DM_hby_M)->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr((&testing_DM_hby_M), &(&testing_DM_hby_M)->Timing.tArray[0]);
  (&testing_DM_hby_M)->Timing.stepSize0 = 0.01;

  // SystemInitialize for Enabled SubSystem: '<S8>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S16>/In1' incorporates:
  //   Outport: '<S16>/Out1'

  testing_DM_hby_B.In1_ml = testing_DM_hby_P.Out1_Y0;

  // End of SystemInitialize for SubSystem: '<S8>/Enabled Subsystem'

  // SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S17>/In1' incorporates:
  //   Outport: '<S17>/Out1'

  testing_DM_hby_B.In1_m = testing_DM_hby_P.Out1_Y0_h;

  // End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem'

  // SystemInitialize for Enabled SubSystem: '<S10>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S18>/In1' incorporates:
  //   Outport: '<S18>/Out1'

  testing_DM_hby_B.In1_i = testing_DM_hby_P.Out1_Y0_d;

  // End of SystemInitialize for SubSystem: '<S10>/Enabled Subsystem'

  // SystemInitialize for Enabled SubSystem: '<S11>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S19>/In1' incorporates:
  //   Outport: '<S19>/Out1'

  testing_DM_hby_B.In1 = testing_DM_hby_P.Out1_Y0_k;

  // End of SystemInitialize for SubSystem: '<S11>/Enabled Subsystem'

  // Start for MATLABSystem: '<S8>/SourceBlock'
  testing_DM_hby_SystemCore_setup(&testing_DM_hby_DW.obj_h);

  // Start for MATLABSystem: '<S9>/SourceBlock'
  testing_DM_h_SystemCore_setup_d(&testing_DM_hby_DW.obj_k);

  // Start for MATLABSystem: '<S10>/SourceBlock'
  testing_DM__SystemCore_setup_d0(&testing_DM_hby_DW.obj_o);

  // Start for MATLABSystem: '<S11>/SourceBlock'
  testing_DM_SystemCore_setup_d01(&testing_DM_hby_DW.obj);
}

// Model terminate function
void testing_DM_hby::terminate()
{
  // Terminate for MATLABSystem: '<S8>/SourceBlock'
  if (!testing_DM_hby_DW.obj_h.matlabCodegenIsDeleted) {
    testing_DM_hby_DW.obj_h.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S8>/SourceBlock'

  // Terminate for MATLABSystem: '<S9>/SourceBlock'
  if (!testing_DM_hby_DW.obj_k.matlabCodegenIsDeleted) {
    testing_DM_hby_DW.obj_k.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S9>/SourceBlock'

  // Terminate for MATLABSystem: '<S10>/SourceBlock'
  if (!testing_DM_hby_DW.obj_o.matlabCodegenIsDeleted) {
    testing_DM_hby_DW.obj_o.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S10>/SourceBlock'

  // Terminate for MATLABSystem: '<S11>/SourceBlock'
  if (!testing_DM_hby_DW.obj.matlabCodegenIsDeleted) {
    testing_DM_hby_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/SourceBlock'
}

// Constructor
testing_DM_hby::testing_DM_hby() :
  testing_DM_hby_B(),
  testing_DM_hby_DW(),
  testing_DM_hby_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
testing_DM_hby::~testing_DM_hby()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
RT_MODEL_testing_DM_hby_T * testing_DM_hby::getRTM()
{
  return (&testing_DM_hby_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
