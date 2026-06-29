//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Import_IMU.cpp
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
#include "Import_IMU.h"
#include "rtwtypes.h"
#include "Import_IMU_types.h"
#include <math.h>
#include "Import_IMU_private.h"

extern "C"
{

#include "rt_nonfinite.h"

}

#include "rmw/qos_profiles.h"
#include <stddef.h>
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
//    '<Root>/FiveBar_FK_Left'
//    '<Root>/FiveBar_FK_Right'
//
void Import_IMU::Import_IMU_FiveBar_FK_Left(real32_T rtu_alpha, real32_T
  rtu_beta, real32_T rtu_L1, real32_T rtu_L2, real32_T rtu_L3, real32_T rtu_L4,
  real32_T rtu_L5, real32_T *rty_xB, real32_T *rty_yB, real32_T *rty_leg_length,
  real32_T *rty_leg_angle, boolean_T *rty_valid)
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

  *rty_xB = h;
  *rty_yB = My;
}

// Function for MATLAB Function: '<Root>/FiveBar_IK_Left'
real32_T Import_IMU::Import_IMU_mod(real32_T x)
{
  real32_T r;
  if (rtIsNaNF(x)) {
    r = (rtNaNF);
  } else if (rtIsInfF(x)) {
    r = (rtNaNF);
  } else if (x == 0.0F) {
    r = 0.0F;
  } else {
    boolean_T rEQ0;
    r = static_cast<real32_T>(fmod(static_cast<real_T>(x), 6.2831854820251465));
    rEQ0 = (r == 0.0F);
    if (!rEQ0) {
      real32_T q;
      q = static_cast<real32_T>(fabs(static_cast<real_T>(x / 6.28318548F)));
      rEQ0 = !(static_cast<real32_T>(fabs(static_cast<real_T>(q -
                  static_cast<real32_T>(floor(static_cast<real_T>(q + 0.5F))))))
               > 1.1920929E-7F * q);
    }

    if (rEQ0) {
      r = 0.0F;
    } else if (x < 0.0F) {
      r += 6.28318548F;
    }
  }

  return r;
}

//
// Output and update for atomic system:
//    '<Root>/FiveBar_IK_Left'
//    '<Root>/FiveBar_IK_Right'
//
void Import_IMU::Import_IMU_FiveBar_IK_Left(real32_T rtu_xCmd, real32_T rtu_yCmd,
  real32_T rtu_alphaActual, real32_T rtu_betaActual, real32_T rtu_L1, real32_T
  rtu_L2, real32_T rtu_L3, real32_T rtu_L4, real32_T rtu_L5, real32_T
  *rty_alphaCmd, real32_T *rty_betaCmd, boolean_T *rty_valid)
{
  real32_T alphaCandidate2;
  real32_T dxBeta;
  real32_T phiBeta;
  real32_T rAlpha;
  real32_T rAlphaSquared;
  real32_T rBeta;
  real32_T rBetaSquared;
  alphaCandidate2 = rtu_alphaActual;
  phiBeta = rtu_betaActual;
  *rty_valid = false;
  if ((!rtIsInfF(rtu_xCmd)) && (!rtIsNaNF(rtu_xCmd)) && ((!rtIsInfF(rtu_yCmd)) &&
       (!rtIsNaNF(rtu_yCmd)) && ((!rtIsInfF(rtu_alphaActual)) && (!rtIsNaNF
         (rtu_alphaActual)) && ((!rtIsInfF(rtu_betaActual)) && (!rtIsNaNF
          (rtu_betaActual)) && ((!rtIsInfF(rtu_L1)) && (!rtIsNaNF(rtu_L1)) && ((
            !rtIsInfF(rtu_L2)) && (!rtIsNaNF(rtu_L2)) && ((!rtIsInfF(rtu_L3)) &&
            (!rtIsNaNF(rtu_L3)) && ((!rtIsInfF(rtu_L4)) && (!rtIsNaNF(rtu_L4)) &&
             ((!rtIsInfF(rtu_L5)) && (!rtIsNaNF(rtu_L5)))))))))) && (!(rtu_L1 <=
        0.0F)) && (!(rtu_L2 <= 0.0F)) && (!(rtu_L3 <= 0.0F)) && (!(rtu_L4 <=
        0.0F)) && (!(rtu_L5 <= 0.0F))) {
    rBetaSquared = rtu_yCmd * rtu_yCmd;
    rAlphaSquared = rtu_xCmd * rtu_xCmd + rBetaSquared;
    rAlpha = static_cast<real32_T>(sqrt(static_cast<real_T>(rAlphaSquared)));
    if ((!(rAlpha < 1.0E-6F)) && (!(rAlpha > rtu_L1 + rtu_L2)) && (!(rAlpha <
          static_cast<real32_T>(fabs(static_cast<real_T>(rtu_L1 - rtu_L2)))))) {
      rAlpha = ((rtu_L1 * rtu_L1 + rAlphaSquared) - rtu_L2 * rtu_L2) / (2.0F *
        rtu_L1 * rAlpha);
      if ((!(rAlpha > 1.00001F)) && (!(rAlpha < -1.00001F))) {
        if (rAlpha > 1.0F) {
          rAlpha = 1.0F;
        } else if (rAlpha < -1.0F) {
          rAlpha = -1.0F;
        }

        rAlphaSquared = rt_atan2f_snf(rtu_yCmd, rtu_xCmd);
        rAlpha = static_cast<real32_T>(acos(static_cast<real_T>(rAlpha)));
        dxBeta = rtu_xCmd - rtu_L5;
        rBetaSquared += dxBeta * dxBeta;
        rBeta = static_cast<real32_T>(sqrt(static_cast<real_T>(rBetaSquared)));
        if ((!(rBeta < 1.0E-6F)) && (!(rBeta > rtu_L4 + rtu_L3)) && (!(rBeta <
              static_cast<real32_T>(fabs(static_cast<real_T>(rtu_L4 - rtu_L3))))))
        {
          rBetaSquared = ((rtu_L4 * rtu_L4 + rBetaSquared) - rtu_L3 * rtu_L3) /
            (2.0F * rtu_L4 * rBeta);
          if ((!(rBetaSquared > 1.00001F)) && (!(rBetaSquared < -1.00001F))) {
            if (rBetaSquared > 1.0F) {
              rBetaSquared = 1.0F;
            } else if (rBetaSquared < -1.0F) {
              rBetaSquared = -1.0F;
            }

            phiBeta = rt_atan2f_snf(rtu_yCmd, dxBeta);
            dxBeta = static_cast<real32_T>(acos(static_cast<real_T>(rBetaSquared)));
            rBetaSquared = (Import_IMU_mod(((rAlphaSquared + rAlpha) -
              rtu_alphaActual) + 3.14159274F) - 3.14159274F) + rtu_alphaActual;
            alphaCandidate2 = (Import_IMU_mod(((rAlphaSquared - rAlpha) -
              rtu_alphaActual) + 3.14159274F) - 3.14159274F) + rtu_alphaActual;
            rAlphaSquared = (Import_IMU_mod(((phiBeta + dxBeta) - rtu_betaActual)
              + 3.14159274F) - 3.14159274F) + rtu_betaActual;
            phiBeta = (Import_IMU_mod(((phiBeta - dxBeta) - rtu_betaActual) +
                        3.14159274F) - 3.14159274F) + rtu_betaActual;
            if (static_cast<real32_T>(fabs(static_cast<real_T>(rBetaSquared -
                   rtu_alphaActual))) <= static_cast<real32_T>(fabs(static_cast<
                  real_T>(alphaCandidate2 - rtu_alphaActual)))) {
              alphaCandidate2 = rBetaSquared;
            }

            if (static_cast<real32_T>(fabs(static_cast<real_T>(rAlphaSquared -
                   rtu_betaActual))) <= static_cast<real32_T>(fabs(static_cast<
                  real_T>(phiBeta - rtu_betaActual)))) {
              phiBeta = rAlphaSquared;
            }

            if (rtIsInfF(alphaCandidate2) || rtIsNaNF(alphaCandidate2) ||
                (rtIsInfF(phiBeta) || rtIsNaNF(phiBeta))) {
              alphaCandidate2 = rtu_alphaActual;
              phiBeta = rtu_betaActual;
            } else {
              *rty_valid = true;
            }
          }
        }
      }
    }
  }

  *rty_alphaCmd = alphaCandidate2;
  *rty_betaCmd = phiBeta;
}

//
// Output and update for atomic system:
//    '<S9>/Motor_Position_To_Joint'
//    '<S10>/Motor_Position_To_Joint'
//    '<S11>/Motor_Position_To_Joint'
//    '<S12>/Motor_Position_To_Joint'
//
void Import_IMU::Import__Motor_Position_To_Joint(real32_T rtu_q_motor, real32_T
  rtu_q_motor_ref, real32_T rtu_q_joint_ref, real32_T rtu_motor_sign, real32_T
  rtu_motor_ratio, real32_T *rty_q_joint)
{
  *rty_q_joint = rtu_q_joint_ref;
  if (static_cast<real32_T>(fabs(static_cast<real_T>(rtu_motor_ratio))) >
      1.0E-6F) {
    *rty_q_joint = (rtu_q_motor - rtu_q_motor_ref) * rtu_motor_sign /
      rtu_motor_ratio + rtu_q_joint_ref;
  }
}

//
// Output and update for atomic system:
//    '<S17>/Motor_Target_Velocity_LA'
//    '<S17>/Motor_Target_Velocity_LB'
//    '<S18>/Motor_Target_Velocity_LA'
//    '<S18>/Motor_Target_Velocity_LB'
//
void Import_IMU::Import_Motor_Target_Velocity_LA(real32_T rtu_p_cmd, boolean_T
  rtu_enable, real32_T rtu_Ts, real32_T rtu_cutoff_hz, real32_T rtu_max_velocity,
  real32_T *rty_v_des, boolean_T *rty_valid, DW_Motor_Target_Velocity_LA_I_T
  *localDW)
{
  real32_T u0;
  u0 = 0.0F;
  *rty_valid = false;
  if (!rtu_enable) {
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

void Import_IMU::Impo_SystemCore_setup_iufdy5ksq(ros_slros2_internal_block_Sub_T
  *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[26];
  static const char_T b_zeroDelimTopic_0[26] = "/ecat/sn2228252/app1/read";

  // Start for MATLABSystem: '<S40>/SourceBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S40>/SourceBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT);
  for (int32_T i = 0; i < 26; i++) {
    // Start for MATLABSystem: '<S40>/SourceBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Sub_Import_IMU_104.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void Import_IMU::Import_IMU_SystemCore_setup_i(ros_slros2_internal_block_Sub_T
  *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[26];
  static const char_T b_zeroDelimTopic_0[26] = "/ecat/sn2228252/app2/read";

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

  Sub_Import_IMU_1.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void Import_IMU::Import_IMU_SystemCore_setup_iu(ros_slros2_internal_block_Sub_T *
  obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[26];
  static const char_T b_zeroDelimTopic_0[26] = "/ecat/sn2228252/app3/read";

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

  Sub_Import_IMU_2.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void Import_IMU::Import_IMU_SystemCore_setup(ros_slros2_internal_block_Sub_T
  *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[26];
  static const char_T b_zeroDelimTopic_0[26] = "/ecat/sn1966149/app1/read";

  // Start for MATLABSystem: '<S7>/SourceBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S7>/SourceBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT);
  for (int32_T i = 0; i < 26; i++) {
    // Start for MATLABSystem: '<S7>/SourceBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Sub_Import_IMU_74.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void Import_IMU::Import_IMU_SystemCore_setup_iuf(ros_slros2_internal_block_Sub_T
  *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[26];
  static const char_T b_zeroDelimTopic_0[26] = "/ecat/sn2228252/app5/read";

  // Start for MATLABSystem: '<S15>/SourceBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S15>/SourceBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT);
  for (int32_T i = 0; i < 26; i++) {
    // Start for MATLABSystem: '<S15>/SourceBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Sub_Import_IMU_3.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void Import_IMU::Import_IM_SystemCore_setup_iufd(ros_slros2_internal_block_Sub_T
  *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[26];
  static const char_T b_zeroDelimTopic_0[26] = "/ecat/sn2228252/app6/read";

  // Start for MATLABSystem: '<S16>/SourceBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S16>/SourceBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT);
  for (int32_T i = 0; i < 26; i++) {
    // Start for MATLABSystem: '<S16>/SourceBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Sub_Import_IMU_4.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void Import_IMU::Import_I_SystemCore_setup_iufdy(ros_slros2_internal_block_Pub_T
  *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[27];
  static const char_T b_zeroDelimTopic_0[27] = "/ecat/sn2228252/app2/write";

  // Start for MATLABSystem: '<S32>/SinkBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S32>/SinkBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT);
  for (int32_T i = 0; i < 27; i++) {
    // Start for MATLABSystem: '<S32>/SinkBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Pub_Import_IMU_208.createPublisher(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void Import_IMU::Import__SystemCore_setup_iufdy5(ros_slros2_internal_block_Pub_T
  *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[27];
  static const char_T b_zeroDelimTopic_0[27] = "/ecat/sn2228252/app3/write";

  // Start for MATLABSystem: '<S33>/SinkBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S33>/SinkBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT);
  for (int32_T i = 0; i < 27; i++) {
    // Start for MATLABSystem: '<S33>/SinkBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Pub_Import_IMU_209.createPublisher(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void Import_IMU::Import_SystemCore_setup_iufdy5k(ros_slros2_internal_block_Pub_T
  *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[27];
  static const char_T b_zeroDelimTopic_0[27] = "/ecat/sn2228252/app5/write";

  // Start for MATLABSystem: '<S36>/SinkBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S36>/SinkBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT);
  for (int32_T i = 0; i < 27; i++) {
    // Start for MATLABSystem: '<S36>/SinkBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Pub_Import_IMU_245.createPublisher(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void Import_IMU::Impor_SystemCore_setup_iufdy5ks(ros_slros2_internal_block_Pub_T
  *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[27];
  static const char_T b_zeroDelimTopic_0[27] = "/ecat/sn2228252/app6/write";

  // Start for MATLABSystem: '<S37>/SinkBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S37>/SinkBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT);
  for (int32_T i = 0; i < 27; i++) {
    // Start for MATLABSystem: '<S37>/SinkBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Pub_Import_IMU_246.createPublisher(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

// Model step function
void Import_IMU::step()
{
  real32_T q_joint_e;
  uint32_T qY;
  boolean_T enable_safe;
  boolean_T valid;
  boolean_T valid_bj;

  // MATLABSystem: '<S40>/SourceBlock'
  valid_bj = Sub_Import_IMU_104.getLatestMessage(&Import_IMU_B.b_varargout_2_m);

  // Outputs for Enabled SubSystem: '<S40>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S41>/Enable'

  // MATLAB Function: '<S19>/RC_Safety_Gate' incorporates:
  //   MATLABSystem: '<S40>/SourceBlock'
  //
  if (valid_bj) {
    // SignalConversion generated from: '<S41>/In1'
    Import_IMU_B.In1_c = Import_IMU_B.b_varargout_2_m;
    Import_IMU_DW.missedCount = 0U;
    Import_IMU_DW.receivedOnce = true;
  } else if (Import_IMU_DW.missedCount < 1000000U) {
    qY = Import_IMU_DW.missedCount + /*MW:OvSatOk*/ 1U;
    if (Import_IMU_DW.missedCount + 1U < Import_IMU_DW.missedCount) {
      qY = MAX_uint32_T;
    }

    Import_IMU_DW.missedCount = qY;
  }

  // End of Outputs for SubSystem: '<S40>/Enabled Subsystem'
  enable_safe = (Import_IMU_DW.receivedOnce && (Import_IMU_DW.missedCount < 34U)
                 && (Import_IMU_B.In1_c.online != 0) &&
                 ((Import_IMU_B.In1_c.right_switch >= 1) &&
                  (Import_IMU_B.In1_c.right_switch <= 3)));
  Import_IMU_DW.seenDisable = (enable_safe && ((Import_IMU_B.In1_c.right_switch <=
    2) || Import_IMU_DW.seenDisable));
  enable_safe = (enable_safe && Import_IMU_DW.seenDisable &&
                 (Import_IMU_B.In1_c.right_switch == 3));

  // End of MATLAB Function: '<S19>/RC_Safety_Gate'

  // MATLABSystem: '<S13>/SourceBlock'
  valid_bj = Sub_Import_IMU_1.getLatestMessage(&Import_IMU_B.b_varargout_2_c);

  // Outputs for Enabled SubSystem: '<S13>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S25>/Enable'

  // Start for MATLABSystem: '<S13>/SourceBlock'
  if (valid_bj) {
    // SignalConversion generated from: '<S25>/In1'
    Import_IMU_B.In1_m = Import_IMU_B.b_varargout_2_c;
  }

  // End of Start for MATLABSystem: '<S13>/SourceBlock'
  // End of Outputs for SubSystem: '<S13>/Enabled Subsystem'

  // MATLAB Function: '<S9>/Motor_Position_To_Joint' incorporates:
  //   Constant: '<S9>/qj0'
  //   Constant: '<S9>/qm0'
  //   Constant: '<S9>/ratio'
  //   Constant: '<S9>/sign'

  Import__Motor_Position_To_Joint(Import_IMU_B.In1_m.position,
    Import_IMU_P.CAL.qm0_LA, Import_IMU_P.CAL.qj0_LA, Import_IMU_P.CAL.sign_LA,
    Import_IMU_P.CAL.ratio_LA, &Import_IMU_B.q_joint_m);

  // MATLABSystem: '<S14>/SourceBlock'
  valid_bj = Sub_Import_IMU_2.getLatestMessage(&Import_IMU_B.b_varargout_2_c);

  // Outputs for Enabled SubSystem: '<S14>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S26>/Enable'

  // Start for MATLABSystem: '<S14>/SourceBlock'
  if (valid_bj) {
    // SignalConversion generated from: '<S26>/In1'
    Import_IMU_B.In1_j = Import_IMU_B.b_varargout_2_c;
  }

  // End of Start for MATLABSystem: '<S14>/SourceBlock'
  // End of Outputs for SubSystem: '<S14>/Enabled Subsystem'

  // MATLAB Function: '<S10>/Motor_Position_To_Joint' incorporates:
  //   Constant: '<S10>/qj0'
  //   Constant: '<S10>/qm0'
  //   Constant: '<S10>/ratio'
  //   Constant: '<S10>/sign'

  Import__Motor_Position_To_Joint(Import_IMU_B.In1_j.position,
    Import_IMU_P.CAL.qm0_LB, Import_IMU_P.CAL.qj0_LB, Import_IMU_P.CAL.sign_LB,
    Import_IMU_P.CAL.ratio_LB, &q_joint_e);

  // Clock: '<Root>/Clock1'
  Import_IMU_B.Clock1 = (&Import_IMU_M)->Timing.t[0];

  // MATLABSystem: '<S7>/SourceBlock'
  valid_bj = Sub_Import_IMU_74.getLatestMessage(&Import_IMU_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S20>/Enable'

  // Start for MATLABSystem: '<S7>/SourceBlock'
  if (valid_bj) {
    // SignalConversion generated from: '<S20>/In1'
    Import_IMU_B.In1 = Import_IMU_B.b_varargout_2;
  }

  // End of Start for MATLABSystem: '<S7>/SourceBlock'
  // End of Outputs for SubSystem: '<S7>/Enabled Subsystem'

  // MATLAB Function: '<Root>/IMU_Relative_RPY'
  Import_IMU_B.relativeNorm = 0.0F;
  Import_IMU_B.sinPitch = 0.0F;
  valid = false;
  if (rtIsInfF(static_cast<real32_T>(Import_IMU_B.In1.orientation.w)) ||
      rtIsNaNF(static_cast<real32_T>(Import_IMU_B.In1.orientation.w)) ||
      (rtIsInfF(static_cast<real32_T>(Import_IMU_B.In1.orientation.x)) ||
       rtIsNaNF(static_cast<real32_T>(Import_IMU_B.In1.orientation.x)) ||
       (rtIsInfF(static_cast<real32_T>(Import_IMU_B.In1.orientation.y)) ||
        rtIsNaNF(static_cast<real32_T>(Import_IMU_B.In1.orientation.y)) ||
        (rtIsInfF(static_cast<real32_T>(Import_IMU_B.In1.orientation.z)) ||
         rtIsNaNF(static_cast<real32_T>(Import_IMU_B.In1.orientation.z)))))) {
    Import_IMU_DW.previousCalibrate = false;
  } else {
    Import_IMU_B.normSquared = ((static_cast<real32_T>
      (Import_IMU_B.In1.orientation.w) * static_cast<real32_T>
      (Import_IMU_B.In1.orientation.w) + static_cast<real32_T>
      (Import_IMU_B.In1.orientation.x) * static_cast<real32_T>
      (Import_IMU_B.In1.orientation.x)) + static_cast<real32_T>
      (Import_IMU_B.In1.orientation.y) * static_cast<real32_T>
      (Import_IMU_B.In1.orientation.y)) + static_cast<real32_T>
      (Import_IMU_B.In1.orientation.z) * static_cast<real32_T>
      (Import_IMU_B.In1.orientation.z);
    if (Import_IMU_B.normSquared < 1.0E-8F) {
      Import_IMU_DW.previousCalibrate = false;
    } else {
      Import_IMU_B.normSquared = static_cast<real32_T>(sqrt(static_cast<real_T>
        (Import_IMU_B.normSquared)));
      Import_IMU_B.w = static_cast<real32_T>(Import_IMU_B.In1.orientation.w) /
        Import_IMU_B.normSquared;
      Import_IMU_B.x = static_cast<real32_T>(Import_IMU_B.In1.orientation.x) /
        Import_IMU_B.normSquared;
      Import_IMU_B.y = static_cast<real32_T>(Import_IMU_B.In1.orientation.y) /
        Import_IMU_B.normSquared;
      Import_IMU_B.z = static_cast<real32_T>(Import_IMU_B.In1.orientation.z) /
        Import_IMU_B.normSquared;
      if (!Import_IMU_DW.zeroValid) {
        Import_IMU_DW.q0w = Import_IMU_B.w;
        Import_IMU_DW.q0x = Import_IMU_B.x;
        Import_IMU_DW.q0y = Import_IMU_B.y;
        Import_IMU_DW.q0z = Import_IMU_B.z;
        Import_IMU_DW.zeroValid = true;
      }

      Import_IMU_DW.previousCalibrate = false;
      if (((Import_IMU_DW.q0w * Import_IMU_B.w + Import_IMU_DW.q0x *
            Import_IMU_B.x) + Import_IMU_DW.q0y * Import_IMU_B.y) +
          Import_IMU_DW.q0z * Import_IMU_B.z < 0.0F) {
        Import_IMU_B.w = -Import_IMU_B.w;
        Import_IMU_B.x = -Import_IMU_B.x;
        Import_IMU_B.y = -Import_IMU_B.y;
        Import_IMU_B.z = -Import_IMU_B.z;
      }

      Import_IMU_B.normSquared = ((Import_IMU_DW.q0w * Import_IMU_B.w +
        Import_IMU_DW.q0x * Import_IMU_B.x) + Import_IMU_DW.q0y * Import_IMU_B.y)
        + Import_IMU_DW.q0z * Import_IMU_B.z;
      Import_IMU_B.relativeX = ((Import_IMU_DW.q0w * Import_IMU_B.x -
        Import_IMU_DW.q0x * Import_IMU_B.w) - Import_IMU_DW.q0y * Import_IMU_B.z)
        + Import_IMU_DW.q0z * Import_IMU_B.y;
      Import_IMU_B.relativeY = ((Import_IMU_DW.q0w * Import_IMU_B.y +
        Import_IMU_DW.q0x * Import_IMU_B.z) - Import_IMU_DW.q0y * Import_IMU_B.w)
        - Import_IMU_DW.q0z * Import_IMU_B.x;
      Import_IMU_B.w = ((Import_IMU_DW.q0w * Import_IMU_B.z - Import_IMU_DW.q0x *
                         Import_IMU_B.y) + Import_IMU_DW.q0y * Import_IMU_B.x) -
        Import_IMU_DW.q0z * Import_IMU_B.w;
      Import_IMU_B.x = ((Import_IMU_B.normSquared * Import_IMU_B.normSquared +
                         Import_IMU_B.relativeX * Import_IMU_B.relativeX) +
                        Import_IMU_B.relativeY * Import_IMU_B.relativeY) +
        Import_IMU_B.w * Import_IMU_B.w;
      if (!(Import_IMU_B.x < 1.0E-8F)) {
        Import_IMU_B.relativeNorm = static_cast<real32_T>(sqrt(static_cast<
          real_T>(Import_IMU_B.x)));
        Import_IMU_B.normSquared /= Import_IMU_B.relativeNorm;
        Import_IMU_B.relativeX /= Import_IMU_B.relativeNorm;
        Import_IMU_B.relativeY /= Import_IMU_B.relativeNorm;
        Import_IMU_B.w /= Import_IMU_B.relativeNorm;
        Import_IMU_B.x = Import_IMU_B.relativeY * Import_IMU_B.relativeY;
        Import_IMU_B.relativeNorm = rt_atan2f_snf((Import_IMU_B.normSquared *
          Import_IMU_B.relativeX + Import_IMU_B.relativeY * Import_IMU_B.w) *
          2.0F, 1.0F - (Import_IMU_B.relativeX * Import_IMU_B.relativeX +
                        Import_IMU_B.x) * 2.0F);
        Import_IMU_B.sinPitch = (Import_IMU_B.normSquared *
          Import_IMU_B.relativeY - Import_IMU_B.w * Import_IMU_B.relativeX) *
          2.0F;
        if (Import_IMU_B.sinPitch > 1.0F) {
          Import_IMU_B.sinPitch = 1.0F;
        } else if (Import_IMU_B.sinPitch < -1.0F) {
          Import_IMU_B.sinPitch = -1.0F;
        }

        Import_IMU_B.sinPitch = static_cast<real32_T>(asin(static_cast<real_T>
          (Import_IMU_B.sinPitch)));
        Import_IMU_B.normSquared = rt_atan2f_snf((Import_IMU_B.normSquared *
          Import_IMU_B.w + Import_IMU_B.relativeX * Import_IMU_B.relativeY) *
          2.0F, 1.0F - (Import_IMU_B.w * Import_IMU_B.w + Import_IMU_B.x) * 2.0F);
        if ((!rtIsInfF(Import_IMU_B.relativeNorm)) && (!rtIsNaNF
             (Import_IMU_B.relativeNorm)) && ((!rtIsInfF(Import_IMU_B.sinPitch))
             && (!rtIsNaNF(Import_IMU_B.sinPitch))) && ((!rtIsInfF
              (Import_IMU_B.normSquared)) && (!rtIsNaNF(Import_IMU_B.normSquared))))
        {
          valid = true;
        } else {
          Import_IMU_B.relativeNorm = 0.0F;
          Import_IMU_B.sinPitch = 0.0F;
        }
      }
    }
  }

  // MATLAB Function: '<Root>/FiveBar_FK_Left' incorporates:
  //   Constant: '<Root>/L1'
  //   Constant: '<Root>/L2'
  //   Constant: '<Root>/L3'
  //   Constant: '<Root>/L4'
  //   Constant: '<Root>/L5'

  Import_IMU_FiveBar_FK_Left(Import_IMU_B.q_joint_m, q_joint_e, Import_IMU_P.L1,
    Import_IMU_P.L2, Import_IMU_P.L3, Import_IMU_P.L4, Import_IMU_P.L5,
    &Import_IMU_B.z, &Import_IMU_B.relativeY, &Import_IMU_B.normSquared,
    &Import_IMU_B.relativeX, &valid_bj);

  // MATLABSystem: '<S15>/SourceBlock'
  valid_bj = Sub_Import_IMU_3.getLatestMessage(&Import_IMU_B.b_varargout_2_c);

  // Outputs for Enabled SubSystem: '<S15>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S27>/Enable'

  // Start for MATLABSystem: '<S15>/SourceBlock'
  if (valid_bj) {
    // SignalConversion generated from: '<S27>/In1'
    Import_IMU_B.In1_a = Import_IMU_B.b_varargout_2_c;
  }

  // End of Start for MATLABSystem: '<S15>/SourceBlock'
  // End of Outputs for SubSystem: '<S15>/Enabled Subsystem'

  // MATLAB Function: '<S11>/Motor_Position_To_Joint' incorporates:
  //   Constant: '<S11>/qj0'
  //   Constant: '<S11>/qm0'
  //   Constant: '<S11>/ratio'
  //   Constant: '<S11>/sign'

  Import__Motor_Position_To_Joint(Import_IMU_B.In1_a.position,
    Import_IMU_P.CAL.qm0_RA, Import_IMU_P.CAL.qj0_RA, Import_IMU_P.CAL.sign_RA,
    Import_IMU_P.CAL.ratio_RA, &Import_IMU_B.normSquared);

  // MATLABSystem: '<S16>/SourceBlock'
  valid_bj = Sub_Import_IMU_4.getLatestMessage(&Import_IMU_B.b_varargout_2_c);

  // Outputs for Enabled SubSystem: '<S16>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S28>/Enable'

  // Start for MATLABSystem: '<S16>/SourceBlock'
  if (valid_bj) {
    // SignalConversion generated from: '<S28>/In1'
    Import_IMU_B.In1_c3 = Import_IMU_B.b_varargout_2_c;
  }

  // End of Start for MATLABSystem: '<S16>/SourceBlock'
  // End of Outputs for SubSystem: '<S16>/Enabled Subsystem'

  // MATLAB Function: '<S12>/Motor_Position_To_Joint' incorporates:
  //   Constant: '<S12>/qj0'
  //   Constant: '<S12>/qm0'
  //   Constant: '<S12>/ratio'
  //   Constant: '<S12>/sign'

  Import__Motor_Position_To_Joint(Import_IMU_B.In1_c3.position,
    Import_IMU_P.CAL.qm0_RB, Import_IMU_P.CAL.qj0_RB, Import_IMU_P.CAL.sign_RB,
    Import_IMU_P.CAL.ratio_RB, &Import_IMU_B.relativeX);

  // MATLAB Function: '<Root>/FiveBar_FK_Right' incorporates:
  //   Constant: '<Root>/L1'
  //   Constant: '<Root>/L2'
  //   Constant: '<Root>/L3'
  //   Constant: '<Root>/L4'
  //   Constant: '<Root>/L5'

  Import_IMU_FiveBar_FK_Left(Import_IMU_B.normSquared, Import_IMU_B.relativeX,
    Import_IMU_P.L1, Import_IMU_P.L2, Import_IMU_P.L3, Import_IMU_P.L4,
    Import_IMU_P.L5, &Import_IMU_B.xB, &Import_IMU_B.w, &Import_IMU_B.x,
    &Import_IMU_B.y, &valid_bj);

  // DiscreteTransferFcn: '<Root>/LPF_GyroX'
  Import_IMU_B.numAccum = Import_IMU_P.LPF_GyroX_NumCoef *
    Import_IMU_DW.LPF_GyroX_states;

  // DiscreteTransferFcn: '<Root>/LPF_GyroY'
  Import_IMU_B.numAccum_k = Import_IMU_P.LPF_GyroY_NumCoef *
    Import_IMU_DW.LPF_GyroY_states;

  // MATLAB Function: '<Root>/Balance_Target_XY' incorporates:
  //   Constant: '<Root>/Constant'
  //   Constant: '<Root>/Constant1'
  //   Constant: '<Root>/Constant2'
  //   Constant: '<Root>/Constant3'
  //   DiscreteTransferFcn: '<Root>/LPF_GyroX'
  //   DiscreteTransferFcn: '<Root>/LPF_GyroY'
  //   MATLAB Function: '<Root>/IMU_Relative_RPY'

  Import_IMU_B.x = Import_IMU_B.z;
  Import_IMU_B.yLeftCmd = Import_IMU_B.relativeY;
  Import_IMU_B.y = Import_IMU_B.xB;
  Import_IMU_B.homeBlend = Import_IMU_B.w;
  if ((!enable_safe) || (!valid) || (rtIsInfF(Import_IMU_B.z) || rtIsNaNF
       (Import_IMU_B.z) || (rtIsInfF(Import_IMU_B.relativeY) || rtIsNaNF
        (Import_IMU_B.relativeY) || (rtIsInfF(Import_IMU_B.xB) || rtIsNaNF
         (Import_IMU_B.xB) || (rtIsInfF(Import_IMU_B.w) || rtIsNaNF
          (Import_IMU_B.w) || (rtIsInfF(Import_IMU_B.relativeNorm) || rtIsNaNF
           (Import_IMU_B.relativeNorm) || (rtIsInfF(Import_IMU_B.sinPitch) ||
            rtIsNaNF(Import_IMU_B.sinPitch) || (rtIsInfF(Import_IMU_B.numAccum) ||
             rtIsNaNF(Import_IMU_B.numAccum) || (rtIsInfF
              (Import_IMU_B.numAccum_k) || rtIsNaNF(Import_IMU_B.numAccum_k))))))))))
  {
    Import_IMU_DW.previousEnable = false;
    Import_IMU_DW.toleranceStartTime = -1.0;
  } else {
    if (!Import_IMU_DW.previousEnable) {
      Import_IMU_DW.startTime = Import_IMU_B.Clock1;
      Import_IMU_DW.xLeftStart = Import_IMU_B.z;
      Import_IMU_DW.yLeftStart = Import_IMU_B.relativeY;
      Import_IMU_DW.xRightStart = Import_IMU_B.xB;
      Import_IMU_DW.yRightStart = Import_IMU_B.w;
      Import_IMU_DW.toleranceStartTime = -1.0;
    }

    Import_IMU_DW.previousEnable = true;
    Import_IMU_B.uBalance = Import_IMU_B.Clock1 - Import_IMU_DW.startTime;
    Import_IMU_B.uHome = Import_IMU_B.uBalance / 5.0;
    if (Import_IMU_B.uHome < 0.0) {
      Import_IMU_B.uHome = 0.0;
    } else if (Import_IMU_B.uHome > 1.0) {
      Import_IMU_B.uHome = 1.0;
    }

    Import_IMU_B.homeBlend = static_cast<real32_T>(0.5 - cos(3.1415926535897931 *
      Import_IMU_B.uHome) * 0.5);
    if (Import_IMU_B.uBalance < 0.0) {
      Import_IMU_B.uBalance = 0.0;
    } else if (Import_IMU_B.uBalance > 1.0) {
      Import_IMU_B.uBalance = 1.0;
    }

    Import_IMU_B.x = static_cast<real32_T>(0.5 - cos(3.1415926535897931 *
      Import_IMU_B.uBalance) * 0.5);
    Import_IMU_B.relativeNorm = (static_cast<real32_T>
      (Import_IMU_P.Constant_Value_dt) * Import_IMU_B.relativeNorm +
      static_cast<real32_T>(Import_IMU_P.Constant1_Value) *
      Import_IMU_B.numAccum) * Import_IMU_B.x;
    Import_IMU_B.sinPitch = (static_cast<real32_T>(Import_IMU_P.Constant2_Value)
      * Import_IMU_B.sinPitch + static_cast<real32_T>
      (Import_IMU_P.Constant3_Value) * Import_IMU_B.numAccum_k) *
      -Import_IMU_B.x;
    if (Import_IMU_B.relativeNorm > 0.003F) {
      Import_IMU_B.relativeNorm = 0.003F;
    } else if (Import_IMU_B.relativeNorm < -0.003F) {
      Import_IMU_B.relativeNorm = -0.003F;
    }

    if (Import_IMU_B.sinPitch > 0.003F) {
      Import_IMU_B.sinPitch = 0.003F;
    } else if (Import_IMU_B.sinPitch < -0.003F) {
      Import_IMU_B.sinPitch = -0.003F;
    }

    Import_IMU_B.x = ((0.035F - Import_IMU_DW.xLeftStart) *
                      Import_IMU_B.homeBlend + Import_IMU_DW.xLeftStart) +
      Import_IMU_B.sinPitch;
    Import_IMU_B.y = ((0.035F - Import_IMU_DW.xRightStart) *
                      Import_IMU_B.homeBlend + Import_IMU_DW.xRightStart) +
      Import_IMU_B.sinPitch;
    Import_IMU_B.yLeftCmd = ((0.1F - Import_IMU_DW.yLeftStart) *
      Import_IMU_B.homeBlend + Import_IMU_DW.yLeftStart) - 0.5F *
      Import_IMU_B.relativeNorm;
    Import_IMU_B.homeBlend = ((0.1F - Import_IMU_DW.yRightStart) *
      Import_IMU_B.homeBlend + Import_IMU_DW.yRightStart) + 0.5F *
      Import_IMU_B.relativeNorm;
    if (Import_IMU_B.uHome >= 1.0) {
      Import_IMU_B.relativeNorm = Import_IMU_B.z - Import_IMU_B.x;
      Import_IMU_B.sinPitch = Import_IMU_B.relativeY - Import_IMU_B.yLeftCmd;
      Import_IMU_B.relativeY = Import_IMU_B.xB - Import_IMU_B.y;
      Import_IMU_B.w -= Import_IMU_B.homeBlend;
      if (static_cast<real32_T>(sqrt(static_cast<real_T>
            (Import_IMU_B.relativeNorm * Import_IMU_B.relativeNorm +
             Import_IMU_B.sinPitch * Import_IMU_B.sinPitch))) <= 0.003F) {
        if (static_cast<real32_T>(sqrt(static_cast<real_T>
              (Import_IMU_B.relativeY * Import_IMU_B.relativeY + Import_IMU_B.w *
               Import_IMU_B.w))) <= 0.003F) {
          if (Import_IMU_DW.toleranceStartTime < 0.0) {
            Import_IMU_DW.toleranceStartTime = Import_IMU_B.Clock1;
          }
        } else {
          Import_IMU_DW.toleranceStartTime = -1.0;
        }
      } else {
        Import_IMU_DW.toleranceStartTime = -1.0;
      }
    }
  }

  // MATLAB Function: '<Root>/FiveBar_IK_Left' incorporates:
  //   Constant: '<Root>/L1'
  //   Constant: '<Root>/L2'
  //   Constant: '<Root>/L3'
  //   Constant: '<Root>/L4'
  //   Constant: '<Root>/L5'
  //   MATLAB Function: '<Root>/Balance_Target_XY'

  Import_IMU_FiveBar_IK_Left(Import_IMU_B.x, Import_IMU_B.yLeftCmd,
    Import_IMU_B.q_joint_m, q_joint_e, Import_IMU_P.L1, Import_IMU_P.L2,
    Import_IMU_P.L3, Import_IMU_P.L4, Import_IMU_P.L5,
    &Import_IMU_B.relativeNorm, &Import_IMU_B.sinPitch, &valid);

  // MATLAB Function: '<S17>/Left_Joint_To_Motor_L'
  Import_IMU_B.q_joint_m = -0.629243851F - (Import_IMU_B.sinPitch - 0.899913073F);

  // MATLAB Function: '<S17>/Motor_Target_Velocity_LA' incorporates:
  //   Constant: '<S17>/Constant29'
  //   Constant: '<S17>/Constant30'
  //   Constant: '<S17>/Constant31'
  //   MATLAB Function: '<S17>/Left_Joint_To_Motor_L'

  Import_Motor_Target_Velocity_LA(-0.340847969F - (Import_IMU_B.relativeNorm -
    3.50454569F), enable_safe, Import_IMU_P.Constant29_Value,
    Import_IMU_P.Constant30_Value, Import_IMU_P.Constant31_Value,
    &Import_IMU_B.sinPitch, &valid, &Import_IMU_DW.sf_Motor_Target_Velocity_LA);

  // BusCreator: '<S17>/Bus Creator1' incorporates:
  //   Constant: '<S17>/A'
  //   Constant: '<S17>/Constant26'
  //   Constant: '<S17>/Constant27'
  //   DataTypeConversion: '<S17>/Data Type Conversion'
  //   DataTypeConversion: '<S17>/Data Type Conversion46'
  //   DataTypeConversion: '<S17>/Data Type Conversion47'
  //   DataTypeConversion: '<S17>/Data Type Conversion48'
  //   MATLAB Function: '<S17>/Left_Joint_To_Motor_L'

  Import_IMU_B.BusCreator1.enable = enable_safe;
  Import_IMU_B.BusCreator1.p_des = -0.340847969F - (Import_IMU_B.relativeNorm -
    3.50454569F);
  Import_IMU_B.BusCreator1.v_des = Import_IMU_B.sinPitch;
  Import_IMU_B.BusCreator1.kp = static_cast<real32_T>
    (Import_IMU_P.Constant26_Value);
  Import_IMU_B.BusCreator1.kd = static_cast<real32_T>
    (Import_IMU_P.Constant27_Value);
  Import_IMU_B.BusCreator1.torque = static_cast<real32_T>(Import_IMU_P.A_Value);

  // MATLABSystem: '<S32>/SinkBlock'
  Pub_Import_IMU_208.publish(&Import_IMU_B.BusCreator1);

  // MATLAB Function: '<S17>/Motor_Target_Velocity_LB' incorporates:
  //   Constant: '<S17>/Constant29'
  //   Constant: '<S17>/Constant30'
  //   Constant: '<S17>/Constant31'

  Import_Motor_Target_Velocity_LA(Import_IMU_B.q_joint_m, enable_safe,
    Import_IMU_P.Constant29_Value, Import_IMU_P.Constant30_Value,
    Import_IMU_P.Constant31_Value, &Import_IMU_B.sinPitch, &valid,
    &Import_IMU_DW.sf_Motor_Target_Velocity_LB);

  // BusCreator: '<S17>/Bus Creator2' incorporates:
  //   Constant: '<S17>/B'
  //   Constant: '<S17>/Constant26'
  //   Constant: '<S17>/Constant27'
  //   DataTypeConversion: '<S17>/Data Type Conversion'
  //   DataTypeConversion: '<S17>/Data Type Conversion42'
  //   DataTypeConversion: '<S17>/Data Type Conversion46'
  //   DataTypeConversion: '<S17>/Data Type Conversion47'

  Import_IMU_B.BusCreator1.enable = enable_safe;
  Import_IMU_B.BusCreator1.p_des = Import_IMU_B.q_joint_m;
  Import_IMU_B.BusCreator1.v_des = Import_IMU_B.sinPitch;
  Import_IMU_B.BusCreator1.kp = static_cast<real32_T>
    (Import_IMU_P.Constant26_Value);
  Import_IMU_B.BusCreator1.kd = static_cast<real32_T>
    (Import_IMU_P.Constant27_Value);
  Import_IMU_B.BusCreator1.torque = static_cast<real32_T>(Import_IMU_P.B_Value);

  // MATLABSystem: '<S33>/SinkBlock'
  Pub_Import_IMU_209.publish(&Import_IMU_B.BusCreator1);

  // MATLAB Function: '<Root>/FiveBar_IK_Right' incorporates:
  //   Constant: '<Root>/L1'
  //   Constant: '<Root>/L2'
  //   Constant: '<Root>/L3'
  //   Constant: '<Root>/L4'
  //   Constant: '<Root>/L5'
  //   MATLAB Function: '<Root>/Balance_Target_XY'

  Import_IMU_FiveBar_IK_Left(Import_IMU_B.y, Import_IMU_B.homeBlend,
    Import_IMU_B.normSquared, Import_IMU_B.relativeX, Import_IMU_P.L1,
    Import_IMU_P.L2, Import_IMU_P.L3, Import_IMU_P.L4, Import_IMU_P.L5,
    &Import_IMU_B.sinPitch, &Import_IMU_B.relativeNorm, &valid);

  // BusCreator: '<S18>/Bus Creator1' incorporates:
  //   MATLAB Function: '<S18>/Right_Joint_To_Motor_R'

  Import_IMU_B.BusCreator1_g.p_des = (Import_IMU_B.sinPitch - 2.24167967F) -
    0.912680626F;

  // MATLAB Function: '<S18>/Motor_Target_Velocity_LA' incorporates:
  //   Constant: '<S18>/Constant29'
  //   Constant: '<S18>/Constant30'
  //   Constant: '<S18>/Constant31'
  //   MATLAB Function: '<S18>/Right_Joint_To_Motor_R'

  Import_Motor_Target_Velocity_LA((Import_IMU_B.sinPitch - 2.24167967F) -
    0.912680626F, enable_safe, Import_IMU_P.Constant29_Value_j,
    Import_IMU_P.Constant30_Value_b, Import_IMU_P.Constant31_Value_e,
    &Import_IMU_B.sinPitch, &valid, &Import_IMU_DW.sf_Motor_Target_Velocity_LA_l);

  // BusCreator: '<S18>/Bus Creator1' incorporates:
  //   Constant: '<S18>/A'
  //   Constant: '<S18>/Constant26'
  //   Constant: '<S18>/Constant27'
  //   DataTypeConversion: '<S17>/Data Type Conversion'
  //   DataTypeConversion: '<S18>/Data Type Conversion46'
  //   DataTypeConversion: '<S18>/Data Type Conversion47'
  //   DataTypeConversion: '<S18>/Data Type Conversion48'

  Import_IMU_B.BusCreator1_g.enable = enable_safe;
  Import_IMU_B.BusCreator1_g.v_des = Import_IMU_B.sinPitch;
  Import_IMU_B.BusCreator1_g.kp = static_cast<real32_T>
    (Import_IMU_P.Constant26_Value_n);
  Import_IMU_B.BusCreator1_g.kd = static_cast<real32_T>
    (Import_IMU_P.Constant27_Value_i);
  Import_IMU_B.BusCreator1_g.torque = static_cast<real32_T>
    (Import_IMU_P.A_Value_p);

  // MATLABSystem: '<S36>/SinkBlock'
  Pub_Import_IMU_245.publish(&Import_IMU_B.BusCreator1_g);

  // MATLAB Function: '<S18>/Motor_Target_Velocity_LB' incorporates:
  //   Constant: '<S18>/Constant29'
  //   Constant: '<S18>/Constant30'
  //   Constant: '<S18>/Constant31'
  //   MATLAB Function: '<S18>/Right_Joint_To_Motor_R'

  Import_Motor_Target_Velocity_LA((Import_IMU_B.relativeNorm - -0.362952948F) -
    0.60254097F, enable_safe, Import_IMU_P.Constant29_Value_j,
    Import_IMU_P.Constant30_Value_b, Import_IMU_P.Constant31_Value_e,
    &Import_IMU_B.sinPitch, &valid, &Import_IMU_DW.sf_Motor_Target_Velocity_LB_b);

  // BusCreator: '<S18>/Bus Creator2' incorporates:
  //   Constant: '<S18>/B'
  //   Constant: '<S18>/Constant26'
  //   Constant: '<S18>/Constant27'
  //   DataTypeConversion: '<S17>/Data Type Conversion'
  //   DataTypeConversion: '<S18>/Data Type Conversion42'
  //   DataTypeConversion: '<S18>/Data Type Conversion46'
  //   DataTypeConversion: '<S18>/Data Type Conversion47'
  //   MATLAB Function: '<S18>/Right_Joint_To_Motor_R'

  Import_IMU_B.BusCreator1_g.enable = enable_safe;
  Import_IMU_B.BusCreator1_g.p_des = (Import_IMU_B.relativeNorm - -0.362952948F)
    - 0.60254097F;
  Import_IMU_B.BusCreator1_g.v_des = Import_IMU_B.sinPitch;
  Import_IMU_B.BusCreator1_g.kp = static_cast<real32_T>
    (Import_IMU_P.Constant26_Value_n);
  Import_IMU_B.BusCreator1_g.kd = static_cast<real32_T>
    (Import_IMU_P.Constant27_Value_i);
  Import_IMU_B.BusCreator1_g.torque = static_cast<real32_T>
    (Import_IMU_P.B_Value_o);

  // MATLABSystem: '<S37>/SinkBlock'
  Pub_Import_IMU_246.publish(&Import_IMU_B.BusCreator1_g);

  // DataTypeConversion: '<Root>/Data Type Conversion4'
  Import_IMU_B.DataTypeConversion4 = static_cast<real32_T>
    (Import_IMU_B.In1.angular_velocity.x);

  // DataTypeConversion: '<Root>/Data Type Conversion5'
  Import_IMU_B.DataTypeConversion5 = static_cast<real32_T>
    (Import_IMU_B.In1.angular_velocity.y);

  // Update for DiscreteTransferFcn: '<Root>/LPF_GyroX'
  Import_IMU_DW.LPF_GyroX_states = (Import_IMU_B.DataTypeConversion4 -
    Import_IMU_P.LPF_GyroX_DenCoef[1] * Import_IMU_DW.LPF_GyroX_states) /
    Import_IMU_P.LPF_GyroX_DenCoef[0];

  // Update for DiscreteTransferFcn: '<Root>/LPF_GyroY'
  Import_IMU_DW.LPF_GyroY_states = (Import_IMU_B.DataTypeConversion5 -
    Import_IMU_P.LPF_GyroY_DenCoef[1] * Import_IMU_DW.LPF_GyroY_states) /
    Import_IMU_P.LPF_GyroY_DenCoef[0];

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  (&Import_IMU_M)->Timing.t[0] =
    ((time_T)(++(&Import_IMU_M)->Timing.clockTick0)) * (&Import_IMU_M)
    ->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.003s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.003, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    (&Import_IMU_M)->Timing.clockTick1++;
  }
}

// Model initialize function
void Import_IMU::initialize()
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&(&Import_IMU_M)->solverInfo, &(&Import_IMU_M)
                          ->Timing.simTimeStep);
    rtsiSetTPtr(&(&Import_IMU_M)->solverInfo, &rtmGetTPtr((&Import_IMU_M)));
    rtsiSetStepSizePtr(&(&Import_IMU_M)->solverInfo, &(&Import_IMU_M)
                       ->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&(&Import_IMU_M)->solverInfo, (&rtmGetErrorStatus
      ((&Import_IMU_M))));
    rtsiSetRTModelPtr(&(&Import_IMU_M)->solverInfo, (&Import_IMU_M));
  }

  rtsiSetSimTimeStep(&(&Import_IMU_M)->solverInfo, MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange(&(&Import_IMU_M)->solverInfo, false);
  rtsiSetSolverName(&(&Import_IMU_M)->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr((&Import_IMU_M), &(&Import_IMU_M)->Timing.tArray[0]);
  (&Import_IMU_M)->Timing.stepSize0 = 0.003;

  // InitializeConditions for DiscreteTransferFcn: '<Root>/LPF_GyroX'
  Import_IMU_DW.LPF_GyroX_states = Import_IMU_P.LPF_GyroX_InitialStates;

  // InitializeConditions for DiscreteTransferFcn: '<Root>/LPF_GyroY'
  Import_IMU_DW.LPF_GyroY_states = Import_IMU_P.LPF_GyroY_InitialStates;

  // SystemInitialize for Enabled SubSystem: '<S40>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S41>/In1' incorporates:
  //   Outport: '<S41>/Out1'

  Import_IMU_B.In1_c = Import_IMU_P.Out1_Y0_a;

  // End of SystemInitialize for SubSystem: '<S40>/Enabled Subsystem'

  // SystemInitialize for MATLAB Function: '<S19>/RC_Safety_Gate'
  Import_IMU_DW.missedCount = 34U;

  // SystemInitialize for Enabled SubSystem: '<S13>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S25>/In1' incorporates:
  //   Outport: '<S25>/Out1'

  Import_IMU_B.In1_m = Import_IMU_P.Out1_Y0_f;

  // End of SystemInitialize for SubSystem: '<S13>/Enabled Subsystem'

  // SystemInitialize for Enabled SubSystem: '<S14>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S26>/In1' incorporates:
  //   Outport: '<S26>/Out1'

  Import_IMU_B.In1_j = Import_IMU_P.Out1_Y0_e;

  // End of SystemInitialize for SubSystem: '<S14>/Enabled Subsystem'

  // SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S20>/In1' incorporates:
  //   Outport: '<S20>/Out1'

  Import_IMU_B.In1 = Import_IMU_P.Out1_Y0;

  // End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem'

  // SystemInitialize for MATLAB Function: '<Root>/IMU_Relative_RPY'
  Import_IMU_DW.q0w = 1.0F;

  // SystemInitialize for Enabled SubSystem: '<S15>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S27>/In1' incorporates:
  //   Outport: '<S27>/Out1'

  Import_IMU_B.In1_a = Import_IMU_P.Out1_Y0_fs;

  // End of SystemInitialize for SubSystem: '<S15>/Enabled Subsystem'

  // SystemInitialize for Enabled SubSystem: '<S16>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S28>/In1' incorporates:
  //   Outport: '<S28>/Out1'

  Import_IMU_B.In1_c3 = Import_IMU_P.Out1_Y0_h;

  // End of SystemInitialize for SubSystem: '<S16>/Enabled Subsystem'

  // SystemInitialize for MATLAB Function: '<Root>/Balance_Target_XY'
  Import_IMU_DW.xLeftStart = 0.035F;
  Import_IMU_DW.yLeftStart = 0.1F;
  Import_IMU_DW.xRightStart = 0.035F;
  Import_IMU_DW.yRightStart = 0.1F;
  Import_IMU_DW.toleranceStartTime = -1.0;

  // Start for MATLABSystem: '<S40>/SourceBlock'
  Impo_SystemCore_setup_iufdy5ksq(&Import_IMU_DW.obj);

  // Start for MATLABSystem: '<S13>/SourceBlock'
  Import_IMU_SystemCore_setup_i(&Import_IMU_DW.obj_n);

  // Start for MATLABSystem: '<S14>/SourceBlock'
  Import_IMU_SystemCore_setup_iu(&Import_IMU_DW.obj_g);

  // Start for MATLABSystem: '<S7>/SourceBlock'
  Import_IMU_SystemCore_setup(&Import_IMU_DW.obj_f);

  // Start for MATLABSystem: '<S15>/SourceBlock'
  Import_IMU_SystemCore_setup_iuf(&Import_IMU_DW.obj_d);

  // Start for MATLABSystem: '<S16>/SourceBlock'
  Import_IM_SystemCore_setup_iufd(&Import_IMU_DW.obj_m);

  // Start for MATLABSystem: '<S32>/SinkBlock'
  Import_I_SystemCore_setup_iufdy(&Import_IMU_DW.obj_p);

  // Start for MATLABSystem: '<S33>/SinkBlock'
  Import__SystemCore_setup_iufdy5(&Import_IMU_DW.obj_ff);

  // Start for MATLABSystem: '<S36>/SinkBlock'
  Import_SystemCore_setup_iufdy5k(&Import_IMU_DW.obj_na);

  // Start for MATLABSystem: '<S37>/SinkBlock'
  Impor_SystemCore_setup_iufdy5ks(&Import_IMU_DW.obj_gc);
}

// Model terminate function
void Import_IMU::terminate()
{
  // Terminate for MATLABSystem: '<S40>/SourceBlock'
  if (!Import_IMU_DW.obj.matlabCodegenIsDeleted) {
    Import_IMU_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S40>/SourceBlock'

  // Terminate for MATLABSystem: '<S13>/SourceBlock'
  if (!Import_IMU_DW.obj_n.matlabCodegenIsDeleted) {
    Import_IMU_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S13>/SourceBlock'

  // Terminate for MATLABSystem: '<S14>/SourceBlock'
  if (!Import_IMU_DW.obj_g.matlabCodegenIsDeleted) {
    Import_IMU_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S14>/SourceBlock'

  // Terminate for MATLABSystem: '<S7>/SourceBlock'
  if (!Import_IMU_DW.obj_f.matlabCodegenIsDeleted) {
    Import_IMU_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S7>/SourceBlock'

  // Terminate for MATLABSystem: '<S15>/SourceBlock'
  if (!Import_IMU_DW.obj_d.matlabCodegenIsDeleted) {
    Import_IMU_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S15>/SourceBlock'

  // Terminate for MATLABSystem: '<S16>/SourceBlock'
  if (!Import_IMU_DW.obj_m.matlabCodegenIsDeleted) {
    Import_IMU_DW.obj_m.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S16>/SourceBlock'

  // Terminate for MATLABSystem: '<S32>/SinkBlock'
  if (!Import_IMU_DW.obj_p.matlabCodegenIsDeleted) {
    Import_IMU_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S32>/SinkBlock'

  // Terminate for MATLABSystem: '<S33>/SinkBlock'
  if (!Import_IMU_DW.obj_ff.matlabCodegenIsDeleted) {
    Import_IMU_DW.obj_ff.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S33>/SinkBlock'

  // Terminate for MATLABSystem: '<S36>/SinkBlock'
  if (!Import_IMU_DW.obj_na.matlabCodegenIsDeleted) {
    Import_IMU_DW.obj_na.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S36>/SinkBlock'

  // Terminate for MATLABSystem: '<S37>/SinkBlock'
  if (!Import_IMU_DW.obj_gc.matlabCodegenIsDeleted) {
    Import_IMU_DW.obj_gc.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S37>/SinkBlock'
}

// Constructor
Import_IMU::Import_IMU() :
  Import_IMU_B(),
  Import_IMU_DW(),
  Import_IMU_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
Import_IMU::~Import_IMU()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
RT_MODEL_Import_IMU_T * Import_IMU::getRTM()
{
  return (&Import_IMU_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
