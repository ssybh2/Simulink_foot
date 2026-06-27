//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: testing_DM_hby.cpp
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
#include "testing_DM_hby.h"
#include "rtwtypes.h"
#include "testing_DM_hby_types.h"

extern "C"
{

#include "rt_nonfinite.h"

}

#include <math.h>
#include "testing_DM_hby_private.h"
#include "rmw/qos_profiles.h"
#include <stddef.h>
#include "rt_defines.h"

//
// Output and update for atomic system:
//    '<Root>/Motor_Position_To_Joint_LA'
//    '<Root>/Motor_Position_To_Joint_LB'
//
void testing_DM_hby::test_Motor_Position_To_Joint_LA(real32_T rtu_q_motor,
  real32_T rtu_qm0, real32_T rtu_qj0, real32_T rtu_motor_sign, real32_T
  rtu_motor_ratio, real32_T *rty_q_joint, boolean_T *rty_valid)
{
  real32_T q_joint;
  q_joint = rtu_qj0;
  *rty_valid = false;
  if ((!rtIsInfF(rtu_q_motor)) && (!rtIsNaNF(rtu_q_motor)) && ((!rtIsInfF
        (rtu_qm0)) && (!rtIsNaNF(rtu_qm0))) && ((!rtIsInfF(rtu_qj0)) &&
       (!rtIsNaNF(rtu_qj0))) && ((!rtIsInfF(rtu_motor_sign)) && (!rtIsNaNF
        (rtu_motor_sign))) && ((!rtIsInfF(rtu_motor_ratio)) && (!rtIsNaNF
        (rtu_motor_ratio))) && (!(static_cast<real32_T>(fabs(static_cast<real_T>
          (rtu_motor_ratio))) < 1.0E-6F))) {
    q_joint = (rtu_q_motor - rtu_qm0) * rtu_motor_sign / rtu_motor_ratio +
      rtu_qj0;
    *rty_valid = ((!rtIsInfF(q_joint)) && (!rtIsNaNF(q_joint)));
  }

  *rty_q_joint = q_joint;
}

//
// Output and update for atomic system:
//    '<Root>/Motor_Target_Velocity_LA'
//    '<Root>/Motor_Target_Velocity_LB'
//
void testing_DM_hby::testin_Motor_Target_Velocity_LA(real32_T rtu_p_cmd, uint8_T
  rtu_enable, real32_T rtu_Ts, real32_T rtu_cutoff_hz, real32_T rtu_max_velocity,
  real32_T *rty_v_des, boolean_T *rty_valid, DW_Motor_Target_Velocity_LA_t_T
  *localDW)
{
  real32_T u0;
  u0 = 0.0F;
  *rty_valid = false;
  if (rtu_enable == 0) {
    localDW->p_previous = rtu_p_cmd;
    localDW->v_previous = 0.0F;
    localDW->was_enabled = false;
  } else if ((!rtIsInfF(rtu_p_cmd)) && (!rtIsNaNF(rtu_p_cmd)) && ((!rtIsInfF
               (rtu_Ts)) && (!rtIsNaNF(rtu_Ts))) && ((!rtIsInfF(rtu_cutoff_hz)) &&
              (!rtIsNaNF(rtu_cutoff_hz)))) {
    boolean_T tmp;
    tmp = !rtIsNaNF(rtu_max_velocity);
    if ((!rtIsInfF(rtu_max_velocity)) && tmp && (!(rtu_Ts <= 1.0E-6F))) {
      if (!localDW->was_enabled) {
        localDW->p_previous = rtu_p_cmd;
        localDW->v_previous = 0.0F;
        localDW->was_enabled = true;
        *rty_valid = true;
      } else {
        if (rtu_cutoff_hz > 0.0F) {
          real32_T filter_coefficient;
          filter_coefficient = static_cast<real32_T>(exp(static_cast<real_T>
            (-6.28318548F * rtu_cutoff_hz * rtu_Ts)));
          u0 = (rtu_p_cmd - localDW->p_previous) / rtu_Ts;
          if ((!(u0 >= -rtu_max_velocity)) && (!rtIsNaNF(-rtu_max_velocity))) {
            u0 = -rtu_max_velocity;
          }

          if ((!(u0 <= rtu_max_velocity)) && tmp) {
            u0 = rtu_max_velocity;
          }

          u0 = (1.0F - filter_coefficient) * u0 + filter_coefficient *
            localDW->v_previous;
        } else {
          u0 = (rtu_p_cmd - localDW->p_previous) / rtu_Ts;
          if ((!(u0 >= -rtu_max_velocity)) && (!rtIsNaNF(-rtu_max_velocity))) {
            u0 = -rtu_max_velocity;
          }

          if ((!(u0 <= rtu_max_velocity)) && tmp) {
            u0 = rtu_max_velocity;
          }
        }

        if ((!(u0 >= -rtu_max_velocity)) && (!rtIsNaNF(-rtu_max_velocity))) {
          u0 = -rtu_max_velocity;
        }

        if ((!(u0 <= rtu_max_velocity)) && tmp) {
          u0 = rtu_max_velocity;
        }

        localDW->p_previous = rtu_p_cmd;
        localDW->v_previous = u0;
        *rty_valid = ((!rtIsInfF(u0)) && (!rtIsNaNF(u0)));
      }
    }
  }

  *rty_v_des = u0;
}

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

void testing_DM_hby::testing_DM_SystemCore_setup_d01
  (ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[26];
  static const char_T b_zeroDelimTopic_0[26] = "/ecat/sn2228252/app1/read";

  // Start for MATLABSystem: '<S13>/SourceBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S13>/SourceBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT);
  for (int32_T i = 0; i < 26; i++) {
    // Start for MATLABSystem: '<S13>/SourceBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Sub_testing_DM_hby_244.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void testing_DM_hby::testing_D_SystemCore_setup_d01g
  (ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[26];
  static const char_T b_zeroDelimTopic_0[26] = "/ecat/sn2228252/app2/read";

  // Start for MATLABSystem: '<S14>/SourceBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S14>/SourceBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT);
  for (int32_T i = 0; i < 26; i++) {
    // Start for MATLABSystem: '<S14>/SourceBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Sub_testing_DM_hby_168.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void testing_DM_hby::testing_DM__SystemCore_setup_d0
  (ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[26];
  static const char_T b_zeroDelimTopic_0[26] = "/ecat/sn2228252/app3/read";

  // Start for MATLABSystem: '<S12>/SourceBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S12>/SourceBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT);
  for (int32_T i = 0; i < 26; i++) {
    // Start for MATLABSystem: '<S12>/SourceBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Sub_testing_DM_hby_175.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void testing_DM_hby::testing_DM_hby_SystemCore_setup
  (ros_slros2_internal_block_Pub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[27];
  static const char_T b_zeroDelimTopic_0[27] = "/ecat/sn2228252/app2/write";

  // Start for MATLABSystem: '<S10>/SinkBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S10>/SinkBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT);
  for (int32_T i = 0; i < 27; i++) {
    // Start for MATLABSystem: '<S10>/SinkBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Pub_testing_DM_hby_229.createPublisher(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void testing_DM_hby::testing_DM_h_SystemCore_setup_d
  (ros_slros2_internal_block_Pub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[27];
  static const char_T b_zeroDelimTopic_0[27] = "/ecat/sn2228252/app3/write";

  // Start for MATLABSystem: '<S11>/SinkBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S11>/SinkBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT);
  for (int32_T i = 0; i < 27; i++) {
    // Start for MATLABSystem: '<S11>/SinkBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Pub_testing_DM_hby_230.createPublisher(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

// Model step function
void testing_DM_hby::step()
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
  real32_T q_joint;
  real32_T q_joint_g;
  uint8_T enable_k;
  boolean_T rtb_valid_ht;

  // MATLABSystem: '<S13>/SourceBlock'
  rtb_valid_ht = Sub_testing_DM_hby_244.getLatestMessage
    (&testing_DM_hby_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S13>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S16>/Enable'

  // Start for MATLABSystem: '<S13>/SourceBlock'
  if (rtb_valid_ht) {
    // SignalConversion generated from: '<S16>/In1'
    testing_DM_hby_B.In1 = testing_DM_hby_B.b_varargout_2;
  }

  // End of Start for MATLABSystem: '<S13>/SourceBlock'
  // End of Outputs for SubSystem: '<S13>/Enabled Subsystem'

  // Switch: '<Root>/Switch1'
  if (testing_DM_hby_B.In1.right_switch > testing_DM_hby_P.Switch1_Threshold) {
    // DataTypeConversion: '<Root>/Data Type Conversion41' incorporates:
    //   Constant: '<Root>/Constant23'

    testing_DM_hby_B.Clock4 = floor(testing_DM_hby_P.Constant23_Value);
    if (rtIsNaN(testing_DM_hby_B.Clock4) || rtIsInf(testing_DM_hby_B.Clock4)) {
      testing_DM_hby_B.Clock4 = 0.0;
    } else {
      testing_DM_hby_B.Clock4 = fmod(testing_DM_hby_B.Clock4, 256.0);
    }

    if (testing_DM_hby_B.Clock4 < 0.0) {
      // DataTypeConversion: '<Root>/Data Type Conversion41'
      enable_k = static_cast<uint8_T>(-static_cast<int8_T>(static_cast<uint8_T>(
        -testing_DM_hby_B.Clock4)));
    } else {
      // DataTypeConversion: '<Root>/Data Type Conversion41'
      enable_k = static_cast<uint8_T>(testing_DM_hby_B.Clock4);
    }
  } else {
    // DataTypeConversion: '<Root>/Data Type Conversion41' incorporates:
    //   Constant: '<Root>/Constant24'

    testing_DM_hby_B.Clock4 = floor(testing_DM_hby_P.Constant24_Value);
    if (rtIsNaN(testing_DM_hby_B.Clock4) || rtIsInf(testing_DM_hby_B.Clock4)) {
      testing_DM_hby_B.Clock4 = 0.0;
    } else {
      testing_DM_hby_B.Clock4 = fmod(testing_DM_hby_B.Clock4, 256.0);
    }

    if (testing_DM_hby_B.Clock4 < 0.0) {
      // DataTypeConversion: '<Root>/Data Type Conversion41'
      enable_k = static_cast<uint8_T>(-static_cast<int8_T>(static_cast<uint8_T>(
        -testing_DM_hby_B.Clock4)));
    } else {
      // DataTypeConversion: '<Root>/Data Type Conversion41'
      enable_k = static_cast<uint8_T>(testing_DM_hby_B.Clock4);
    }
  }

  // End of Switch: '<Root>/Switch1'

  // Clock: '<Root>/Clock4'
  testing_DM_hby_B.Clock4 = (&testing_DM_hby_M)->Timing.t[0];

  // MATLABSystem: '<S14>/SourceBlock'
  rtb_valid_ht = Sub_testing_DM_hby_168.getLatestMessage
    (&testing_DM_hby_B.b_varargout_2_m);

  // Outputs for Enabled SubSystem: '<S14>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S17>/Enable'

  // Start for MATLABSystem: '<S14>/SourceBlock'
  if (rtb_valid_ht) {
    // SignalConversion generated from: '<S17>/In1'
    testing_DM_hby_B.In1_p = testing_DM_hby_B.b_varargout_2_m;
  }

  // End of Start for MATLABSystem: '<S14>/SourceBlock'
  // End of Outputs for SubSystem: '<S14>/Enabled Subsystem'

  // MATLAB Function: '<Root>/Motor_Position_To_Joint_LA' incorporates:
  //   Constant: '<Root>/Constant10'
  //   Constant: '<Root>/Constant7'
  //   Constant: '<Root>/Constant8'
  //   Constant: '<Root>/Constant9'

  test_Motor_Position_To_Joint_LA(testing_DM_hby_B.In1_p.position,
    testing_DM_hby_P.CAL.qm0_LA, testing_DM_hby_P.CAL.qj0_LA,
    testing_DM_hby_P.CAL.sign_LA, testing_DM_hby_P.CAL.ratio_LA, &q_joint_g,
    &rtb_valid_ht);

  // MATLABSystem: '<S12>/SourceBlock'
  rtb_valid_ht = Sub_testing_DM_hby_175.getLatestMessage
    (&testing_DM_hby_B.b_varargout_2_m);

  // Outputs for Enabled SubSystem: '<S12>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S15>/Enable'

  // Start for MATLABSystem: '<S12>/SourceBlock'
  if (rtb_valid_ht) {
    // SignalConversion generated from: '<S15>/In1'
    testing_DM_hby_B.In1_m = testing_DM_hby_B.b_varargout_2_m;
  }

  // End of Start for MATLABSystem: '<S12>/SourceBlock'
  // End of Outputs for SubSystem: '<S12>/Enabled Subsystem'

  // MATLAB Function: '<Root>/Motor_Position_To_Joint_LB' incorporates:
  //   Constant: '<Root>/Constant11'
  //   Constant: '<Root>/Constant12'
  //   Constant: '<Root>/Constant13'
  //   Constant: '<Root>/Constant14'

  test_Motor_Position_To_Joint_LA(testing_DM_hby_B.In1_m.position,
    testing_DM_hby_P.CAL.qm0_LB, testing_DM_hby_P.CAL.qj0_LB,
    testing_DM_hby_P.CAL.sign_LB, testing_DM_hby_P.CAL.ratio_LB, &q_joint,
    &rtb_valid_ht);

  // MATLAB Function: '<Root>/FiveBar_FK1' incorporates:
  //   Constant: '<Root>/L11'
  //   Constant: '<Root>/L12'
  //   Constant: '<Root>/L13'
  //   Constant: '<Root>/L14'
  //   Constant: '<Root>/L15'
  //   DataTypeConversion: '<Root>/Data Type Conversion30'
  //   DataTypeConversion: '<Root>/Data Type Conversion31'
  //   DataTypeConversion: '<Root>/Data Type Conversion32'
  //   DataTypeConversion: '<Root>/Data Type Conversion33'
  //   DataTypeConversion: '<Root>/Data Type Conversion34'

  h = 0.0F;
  My = 0.0F;
  Ax = static_cast<real32_T>(testing_DM_hby_P.L11_Value) * static_cast<real32_T>
    (cos(static_cast<real_T>(q_joint_g)));
  Ay = static_cast<real32_T>(testing_DM_hby_P.L11_Value) * static_cast<real32_T>
    (sin(static_cast<real_T>(q_joint_g)));
  dx = (static_cast<real32_T>(testing_DM_hby_P.L14_Value) * static_cast<real32_T>
        (cos(static_cast<real_T>(q_joint))) + static_cast<real32_T>
        (testing_DM_hby_P.L15_Value)) - Ax;
  dy = static_cast<real32_T>(testing_DM_hby_P.L14_Value) * static_cast<real32_T>
    (sin(static_cast<real_T>(q_joint))) - Ay;
  Dac = static_cast<real32_T>(sqrt(static_cast<real_T>(dx * dx + dy * dy)));
  if ((!(Dac < 1.0E-6F)) && (!(Dac > static_cast<real32_T>
        (testing_DM_hby_P.L12_Value) + static_cast<real32_T>
        (testing_DM_hby_P.L13_Value))) && (!(Dac < static_cast<real32_T>(fabs(
          static_cast<real_T>(static_cast<real32_T>(testing_DM_hby_P.L12_Value)
           - static_cast<real32_T>(testing_DM_hby_P.L13_Value))))))) {
    h2 = static_cast<real32_T>(testing_DM_hby_P.L12_Value) *
      static_cast<real32_T>(testing_DM_hby_P.L12_Value);
    a = ((h2 - static_cast<real32_T>(testing_DM_hby_P.L13_Value) *
          static_cast<real32_T>(testing_DM_hby_P.L13_Value)) + Dac * Dac) /
      (2.0F * Dac);
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
    }
  }

  // MATLAB Function: '<Root>/Foot_Home_Then_Sine' incorporates:
  //   Constant: '<Root>/Constant16'
  //   Constant: '<Root>/Constant17'
  //   Constant: '<Root>/Constant18'
  //   Constant: '<Root>/Constant19'
  //   Constant: '<Root>/Constant20'
  //   Constant: '<Root>/Constant21'
  //   Constant: '<Root>/Constant22'
  //   Constant: '<Root>/Constant25'
  //   MATLAB Function: '<Root>/FiveBar_FK1'

  a = h;
  Ax = My;
  if (rtIsInfF(h) || rtIsNaNF(h) || (rtIsInfF(My) || rtIsNaNF(My) || (rtIsInfF
        (testing_DM_hby_P.Constant19_Value) || rtIsNaNF
        (testing_DM_hby_P.Constant19_Value) || (rtIsInfF
         (testing_DM_hby_P.Constant20_Value) || rtIsNaNF
         (testing_DM_hby_P.Constant20_Value) || (rtIsInfF
          (testing_DM_hby_P.Constant21_Value) || rtIsNaNF
          (testing_DM_hby_P.Constant21_Value) || (rtIsInfF
           (testing_DM_hby_P.Constant22_Value) || rtIsNaNF
           (testing_DM_hby_P.Constant22_Value) || (rtIsInfF
            (testing_DM_hby_P.Constant25_Value) || rtIsNaNF
            (testing_DM_hby_P.Constant25_Value) || (rtIsInfF
             (testing_DM_hby_P.Constant16_Value) || rtIsNaNF
             (testing_DM_hby_P.Constant16_Value) || (rtIsInfF
              (testing_DM_hby_P.Constant17_Value) || rtIsNaNF
              (testing_DM_hby_P.Constant17_Value) || (rtIsInfF
               (testing_DM_hby_P.Constant18_Value) || rtIsNaNF
               (testing_DM_hby_P.Constant18_Value))))))))))) {
    testing_DM_hby_DW.state = 0U;
    testing_DM_hby_DW.last_enable = false;
  } else if ((testing_DM_hby_P.Constant21_Value <= 0.01F) ||
             (testing_DM_hby_P.Constant22_Value <= 0.0F) ||
             (testing_DM_hby_P.Constant25_Value < 0.0F) ||
             (testing_DM_hby_P.Constant18_Value <= 0.01F)) {
    testing_DM_hby_DW.state = 0U;
    testing_DM_hby_DW.last_enable = false;
  } else if (enable_k == 0) {
    testing_DM_hby_DW.state = 0U;
    testing_DM_hby_DW.last_enable = false;
    testing_DM_hby_DW.tolerance_start_time = -1.0;
  } else {
    if (!testing_DM_hby_DW.last_enable) {
      testing_DM_hby_DW.state = 1U;
      testing_DM_hby_DW.t_phase_start = testing_DM_hby_B.Clock4;
      testing_DM_hby_DW.x_begin = h;
      testing_DM_hby_DW.y_begin = My;
      testing_DM_hby_DW.tolerance_start_time = -1.0;
    }

    testing_DM_hby_DW.last_enable = true;
    switch (testing_DM_hby_DW.state) {
     case 1:
      testing_DM_hby_B.u = (testing_DM_hby_B.Clock4 -
                            testing_DM_hby_DW.t_phase_start) /
        testing_DM_hby_P.Constant21_Value;
      if (testing_DM_hby_B.u < 0.0) {
        testing_DM_hby_B.u = 0.0;
      } else if (testing_DM_hby_B.u > 1.0) {
        testing_DM_hby_B.u = 1.0;
      }

      testing_DM_hby_B.blend = 0.5 - cos(3.1415926535897931 * testing_DM_hby_B.u)
        * 0.5;
      a = (testing_DM_hby_P.Constant19_Value - testing_DM_hby_DW.x_begin) *
        static_cast<real32_T>(testing_DM_hby_B.blend) +
        testing_DM_hby_DW.x_begin;
      Ax = (testing_DM_hby_P.Constant20_Value - testing_DM_hby_DW.y_begin) *
        static_cast<real32_T>(testing_DM_hby_B.blend) +
        testing_DM_hby_DW.y_begin;
      if (testing_DM_hby_B.u >= 1.0) {
        h -= testing_DM_hby_P.Constant19_Value;
        Ay = My - testing_DM_hby_P.Constant20_Value;
        if (static_cast<real32_T>(sqrt(static_cast<real_T>(h * h + Ay * Ay))) <=
            testing_DM_hby_P.Constant22_Value) {
          if (testing_DM_hby_DW.tolerance_start_time < 0.0) {
            testing_DM_hby_DW.tolerance_start_time = testing_DM_hby_B.Clock4;
          }

          if (testing_DM_hby_B.Clock4 - testing_DM_hby_DW.tolerance_start_time >=
              testing_DM_hby_P.Constant25_Value) {
            testing_DM_hby_DW.state = 2U;
            testing_DM_hby_DW.t_phase_start = testing_DM_hby_B.Clock4;
            a = testing_DM_hby_P.Constant19_Value;
            Ax = testing_DM_hby_P.Constant20_Value;
          }
        } else {
          testing_DM_hby_DW.tolerance_start_time = -1.0;
        }
      }
      break;

     case 2:
      testing_DM_hby_B.u = testing_DM_hby_B.Clock4 -
        testing_DM_hby_DW.t_phase_start;
      if (testing_DM_hby_B.u < 0.0) {
        testing_DM_hby_B.u = 0.0;
      }

      testing_DM_hby_B.Clock4 = testing_DM_hby_B.u;
      if (testing_DM_hby_P.Constant18_Value == 0.0F) {
        if (testing_DM_hby_B.u == 0.0) {
          testing_DM_hby_B.Clock4 = testing_DM_hby_P.Constant18_Value;
        }
      } else if (rtIsNaN(testing_DM_hby_B.u)) {
        testing_DM_hby_B.Clock4 = (rtNaN);
      } else if (rtIsNaN(static_cast<real_T>(testing_DM_hby_P.Constant18_Value)))
      {
        testing_DM_hby_B.Clock4 = (rtNaN);
      } else if (rtIsInf(testing_DM_hby_B.u)) {
        testing_DM_hby_B.Clock4 = (rtNaN);
      } else if (testing_DM_hby_B.u == 0.0) {
        testing_DM_hby_B.Clock4 = 0.0 / testing_DM_hby_P.Constant18_Value;
      } else if (rtIsInf(static_cast<real_T>(testing_DM_hby_P.Constant18_Value)))
      {
        if (testing_DM_hby_P.Constant18_Value < 0.0F) {
          testing_DM_hby_B.Clock4 = testing_DM_hby_P.Constant18_Value;
        }
      } else {
        testing_DM_hby_B.Clock4 = fmod(testing_DM_hby_B.u, static_cast<real_T>
          (testing_DM_hby_P.Constant18_Value));
        rtb_valid_ht = (testing_DM_hby_B.Clock4 == 0.0);
        if ((!rtb_valid_ht) && (testing_DM_hby_P.Constant18_Value > floor(
              static_cast<real_T>(testing_DM_hby_P.Constant18_Value)))) {
          testing_DM_hby_B.u = fabs(testing_DM_hby_B.u /
            testing_DM_hby_P.Constant18_Value);
          rtb_valid_ht = !(fabs(testing_DM_hby_B.u - floor(testing_DM_hby_B.u +
            0.5)) > 2.2204460492503131E-16 * testing_DM_hby_B.u);
        }

        if (rtb_valid_ht) {
          testing_DM_hby_B.Clock4 = testing_DM_hby_P.Constant18_Value * 0.0;
        } else if (testing_DM_hby_P.Constant18_Value < 0.0F) {
          testing_DM_hby_B.Clock4 += testing_DM_hby_P.Constant18_Value;
        }
      }

      My = static_cast<real32_T>(0.5 - cos(6.2831853071795862 *
        testing_DM_hby_B.Clock4 / testing_DM_hby_P.Constant18_Value) * 0.5);
      a = My * testing_DM_hby_P.Constant16_Value +
        testing_DM_hby_P.Constant19_Value;
      Ax = static_cast<real32_T>(sin(static_cast<real_T>(My * 6.28318548F))) *
        testing_DM_hby_P.Constant17_Value + testing_DM_hby_P.Constant20_Value;
      break;

     default:
      testing_DM_hby_DW.state = 0U;
      break;
    }
  }

  // End of MATLAB Function: '<Root>/Foot_Home_Then_Sine'

  // MATLAB Function: '<Root>/FiveBar_IK1' incorporates:
  //   Constant: '<Root>/L11'
  //   Constant: '<Root>/L12'
  //   Constant: '<Root>/L13'
  //   Constant: '<Root>/L14'
  //   Constant: '<Root>/L15'
  //   DataTypeConversion: '<Root>/Data Type Conversion30'
  //   DataTypeConversion: '<Root>/Data Type Conversion31'
  //   DataTypeConversion: '<Root>/Data Type Conversion32'
  //   DataTypeConversion: '<Root>/Data Type Conversion33'
  //   DataTypeConversion: '<Root>/Data Type Conversion34'

  My = Ax * Ax;
  h = static_cast<real32_T>(sqrt(static_cast<real_T>(a * a + My)));
  if (!(h < 1.0E-6F)) {
    Ay = ((h * h + static_cast<real32_T>(testing_DM_hby_P.L11_Value) *
           static_cast<real32_T>(testing_DM_hby_P.L11_Value)) -
          static_cast<real32_T>(testing_DM_hby_P.L12_Value) *
          static_cast<real32_T>(testing_DM_hby_P.L12_Value)) / (2.0F *
      static_cast<real32_T>(testing_DM_hby_P.L11_Value) * h);
    if ((!(Ay > 1.0F)) && (!(Ay < -1.0F))) {
      h = rt_atan2f_snf(Ax, a);
      if (!(Ay >= -1.0F)) {
        Ay = -1.0F;
      }

      Ay = static_cast<real32_T>(acos(static_cast<real_T>(Ay)));
      dy = h + Ay;
      Dac = h - Ay;
      h = dy - q_joint_g;
      Ay = Dac - q_joint_g;
      if (static_cast<real32_T>(fabs(static_cast<real_T>(rt_atan2f_snf(
              static_cast<real32_T>(sin(static_cast<real_T>(h))),
              static_cast<real32_T>(cos(static_cast<real_T>(h))))))) <=
          static_cast<real32_T>(fabs(static_cast<real_T>(rt_atan2f_snf(
              static_cast<real32_T>(sin(static_cast<real_T>(Ay))), static_cast<
              real32_T>(cos(static_cast<real_T>(Ay)))))))) {
        q_joint_g = dy;
      } else {
        q_joint_g = Dac;
      }

      a -= static_cast<real32_T>(testing_DM_hby_P.L15_Value);
      My = static_cast<real32_T>(sqrt(static_cast<real_T>(a * a + My)));
      if (!(My < 1.0E-6F)) {
        My = ((My * My + static_cast<real32_T>(testing_DM_hby_P.L14_Value) *
               static_cast<real32_T>(testing_DM_hby_P.L14_Value)) - static_cast<
              real32_T>(testing_DM_hby_P.L13_Value) * static_cast<real32_T>
              (testing_DM_hby_P.L13_Value)) / (2.0F * static_cast<real32_T>
          (testing_DM_hby_P.L14_Value) * My);
        if ((!(My > 1.0F)) && (!(My < -1.0F))) {
          Ax = rt_atan2f_snf(Ax, a);
          if (!(My >= -1.0F)) {
            My = -1.0F;
          }

          a = static_cast<real32_T>(acos(static_cast<real_T>(My)));
          My = Ax + a;
          Ax -= a;
          h = My - q_joint;
          Ay = Ax - q_joint;
          if (static_cast<real32_T>(fabs(static_cast<real_T>(rt_atan2f_snf(
                  static_cast<real32_T>(sin(static_cast<real_T>(h))),
                  static_cast<real32_T>(cos(static_cast<real_T>(h))))))) <=
              static_cast<real32_T>(fabs(static_cast<real_T>(rt_atan2f_snf(
                  static_cast<real32_T>(sin(static_cast<real_T>(Ay))),
                  static_cast<real32_T>(cos(static_cast<real_T>(Ay)))))))) {
            q_joint = My;
          } else {
            q_joint = Ax;
          }
        }
      }
    }
  }

  // End of MATLAB Function: '<Root>/FiveBar_IK1'

  // BusCreator: '<Root>/Bus Creator1' incorporates:
  //   Constant: '<Root>/A'
  //   Constant: '<Root>/Constant26'
  //   Constant: '<Root>/Constant27'
  //   Constant: '<Root>/Constant29'
  //   Constant: '<Root>/Constant30'
  //   Constant: '<Root>/Constant31'
  //   DataTypeConversion: '<Root>/Data Type Conversion46'
  //   DataTypeConversion: '<Root>/Data Type Conversion47'
  //   DataTypeConversion: '<Root>/Data Type Conversion48'
  //   MATLAB Function: '<Root>/Left_Joint_To_Motor_L'
  //   MATLAB Function: '<Root>/Motor_Target_Velocity_LA'

  testin_Motor_Target_Velocity_LA(-0.340847969F - (q_joint_g - 3.50454569F),
    enable_k, testing_DM_hby_P.Constant29_Value,
    testing_DM_hby_P.Constant30_Value, testing_DM_hby_P.Constant31_Value,
    &testing_DM_hby_B.BusCreator1.v_des, &rtb_valid_ht,
    &testing_DM_hby_DW.sf_Motor_Target_Velocity_LA);
  testing_DM_hby_B.BusCreator1.enable = enable_k;
  testing_DM_hby_B.BusCreator1.p_des = -0.340847969F - (q_joint_g - 3.50454569F);
  testing_DM_hby_B.BusCreator1.kp = static_cast<real32_T>
    (testing_DM_hby_P.Constant26_Value);
  testing_DM_hby_B.BusCreator1.kd = static_cast<real32_T>
    (testing_DM_hby_P.Constant27_Value);
  testing_DM_hby_B.BusCreator1.torque = static_cast<real32_T>
    (testing_DM_hby_P.A_Value);

  // MATLABSystem: '<S10>/SinkBlock'
  Pub_testing_DM_hby_229.publish(&testing_DM_hby_B.BusCreator1);

  // BusCreator: '<Root>/Bus Creator2' incorporates:
  //   Constant: '<Root>/B'
  //   Constant: '<Root>/Constant26'
  //   Constant: '<Root>/Constant27'
  //   Constant: '<Root>/Constant29'
  //   Constant: '<Root>/Constant30'
  //   Constant: '<Root>/Constant31'
  //   DataTypeConversion: '<Root>/Data Type Conversion42'
  //   DataTypeConversion: '<Root>/Data Type Conversion46'
  //   DataTypeConversion: '<Root>/Data Type Conversion47'
  //   MATLAB Function: '<Root>/Left_Joint_To_Motor_L'
  //   MATLAB Function: '<Root>/Motor_Target_Velocity_LB'

  testin_Motor_Target_Velocity_LA(-0.629243851F - (q_joint - 0.899913073F),
    enable_k, testing_DM_hby_P.Constant29_Value,
    testing_DM_hby_P.Constant30_Value, testing_DM_hby_P.Constant31_Value,
    &testing_DM_hby_B.BusCreator2.v_des, &rtb_valid_ht,
    &testing_DM_hby_DW.sf_Motor_Target_Velocity_LB);
  testing_DM_hby_B.BusCreator2.enable = enable_k;
  testing_DM_hby_B.BusCreator2.p_des = -0.629243851F - (q_joint - 0.899913073F);
  testing_DM_hby_B.BusCreator2.kp = static_cast<real32_T>
    (testing_DM_hby_P.Constant26_Value);
  testing_DM_hby_B.BusCreator2.kd = static_cast<real32_T>
    (testing_DM_hby_P.Constant27_Value);
  testing_DM_hby_B.BusCreator2.torque = static_cast<real32_T>
    (testing_DM_hby_P.B_Value);

  // MATLABSystem: '<S11>/SinkBlock'
  Pub_testing_DM_hby_230.publish(&testing_DM_hby_B.BusCreator2);

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  (&testing_DM_hby_M)->Timing.t[0] =
    ((time_T)(++(&testing_DM_hby_M)->Timing.clockTick0)) * (&testing_DM_hby_M)
    ->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.003s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.003, which is the step size
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
  (&testing_DM_hby_M)->Timing.stepSize0 = 0.003;

  // SystemInitialize for Enabled SubSystem: '<S13>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S16>/In1' incorporates:
  //   Outport: '<S16>/Out1'

  testing_DM_hby_B.In1 = testing_DM_hby_P.Out1_Y0;

  // End of SystemInitialize for SubSystem: '<S13>/Enabled Subsystem'

  // SystemInitialize for Enabled SubSystem: '<S14>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S17>/In1' incorporates:
  //   Outport: '<S17>/Out1'

  testing_DM_hby_B.In1_p = testing_DM_hby_P.Out1_Y0_p;

  // End of SystemInitialize for SubSystem: '<S14>/Enabled Subsystem'

  // SystemInitialize for Enabled SubSystem: '<S12>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S15>/In1' incorporates:
  //   Outport: '<S15>/Out1'

  testing_DM_hby_B.In1_m = testing_DM_hby_P.Out1_Y0_g;

  // End of SystemInitialize for SubSystem: '<S12>/Enabled Subsystem'

  // SystemInitialize for MATLAB Function: '<Root>/Foot_Home_Then_Sine'
  testing_DM_hby_DW.tolerance_start_time = -1.0;

  // Start for MATLABSystem: '<S13>/SourceBlock'
  testing_DM_SystemCore_setup_d01(&testing_DM_hby_DW.obj_n);

  // Start for MATLABSystem: '<S14>/SourceBlock'
  testing_D_SystemCore_setup_d01g(&testing_DM_hby_DW.obj_a);

  // Start for MATLABSystem: '<S12>/SourceBlock'
  testing_DM__SystemCore_setup_d0(&testing_DM_hby_DW.obj_n3);

  // Start for MATLABSystem: '<S10>/SinkBlock'
  testing_DM_hby_SystemCore_setup(&testing_DM_hby_DW.obj_i);

  // Start for MATLABSystem: '<S11>/SinkBlock'
  testing_DM_h_SystemCore_setup_d(&testing_DM_hby_DW.obj);
}

// Model terminate function
void testing_DM_hby::terminate()
{
  // Terminate for MATLABSystem: '<S13>/SourceBlock'
  if (!testing_DM_hby_DW.obj_n.matlabCodegenIsDeleted) {
    testing_DM_hby_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S13>/SourceBlock'

  // Terminate for MATLABSystem: '<S14>/SourceBlock'
  if (!testing_DM_hby_DW.obj_a.matlabCodegenIsDeleted) {
    testing_DM_hby_DW.obj_a.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S14>/SourceBlock'

  // Terminate for MATLABSystem: '<S12>/SourceBlock'
  if (!testing_DM_hby_DW.obj_n3.matlabCodegenIsDeleted) {
    testing_DM_hby_DW.obj_n3.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S12>/SourceBlock'

  // Terminate for MATLABSystem: '<S10>/SinkBlock'
  if (!testing_DM_hby_DW.obj_i.matlabCodegenIsDeleted) {
    testing_DM_hby_DW.obj_i.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S10>/SinkBlock'

  // Terminate for MATLABSystem: '<S11>/SinkBlock'
  if (!testing_DM_hby_DW.obj.matlabCodegenIsDeleted) {
    testing_DM_hby_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/SinkBlock'
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
