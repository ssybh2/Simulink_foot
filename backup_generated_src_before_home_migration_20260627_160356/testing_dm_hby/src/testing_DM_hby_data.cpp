//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: testing_DM_hby_data.cpp
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

// Block parameters (default storage)
P_testing_DM_hby_T testing_DM_hby::testing_DM_hby_P = {
  // Variable: CAL
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

  {
    -0.340847969F,
    3.50454569F,
    -1.0F,
    1.0F,
    -0.629243851F,
    0.899913073F,
    -1.0F,
    1.0F,
    0.0F,
    2.32056F,
    1.0F,
    1.0F,
    0.0F,
    0.76986F,
    1.0F,
    1.0F
  },

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S16>/Out1'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header
    0U,                                // online
    0U,                                // disabled
    0U,                                // enabled
    0U,                                // overvoltage
    0U,                                // undervoltage
    0U,                                // overcurrent
    0U,                                // mos_overtemperature
    0U,                                // rotor_overtemperature
    0U,                                // communication_lost
    0U,                                // overload
    0.0F,                              // position
    0.0F,                              // velocity
    0.0F,                              // torque
    0U,                                // mos_temperature
    0U                                 // rotor_temperature
  },

  // Computed Parameter: Out1_Y0_h
  //  Referenced by: '<S17>/Out1'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header
    0U,                                // online
    0U,                                // disabled
    0U,                                // enabled
    0U,                                // overvoltage
    0U,                                // undervoltage
    0U,                                // overcurrent
    0U,                                // mos_overtemperature
    0U,                                // rotor_overtemperature
    0U,                                // communication_lost
    0U,                                // overload
    0.0F,                              // position
    0.0F,                              // velocity
    0.0F,                              // torque
    0U,                                // mos_temperature
    0U                                 // rotor_temperature
  },

  // Computed Parameter: Out1_Y0_d
  //  Referenced by: '<S18>/Out1'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header
    0U,                                // online
    0U,                                // disabled
    0U,                                // enabled
    0U,                                // overvoltage
    0U,                                // undervoltage
    0U,                                // overcurrent
    0U,                                // mos_overtemperature
    0U,                                // rotor_overtemperature
    0U,                                // communication_lost
    0U,                                // overload
    0.0F,                              // position
    0.0F,                              // velocity
    0.0F,                              // torque
    0U,                                // mos_temperature
    0U                                 // rotor_temperature
  },

  // Computed Parameter: Out1_Y0_k
  //  Referenced by: '<S19>/Out1'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header
    0U,                                // online
    0U,                                // disabled
    0U,                                // enabled
    0U,                                // overvoltage
    0U,                                // undervoltage
    0U,                                // overcurrent
    0U,                                // mos_overtemperature
    0U,                                // rotor_overtemperature
    0U,                                // communication_lost
    0U,                                // overload
    0.0F,                              // position
    0.0F,                              // velocity
    0.0F,                              // torque
    0U,                                // mos_temperature
    0U                                 // rotor_temperature
  },

  // Computed Parameter: Constant_Value
  //  Referenced by: '<S8>/Constant'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header
    0U,                                // online
    0U,                                // disabled
    0U,                                // enabled
    0U,                                // overvoltage
    0U,                                // undervoltage
    0U,                                // overcurrent
    0U,                                // mos_overtemperature
    0U,                                // rotor_overtemperature
    0U,                                // communication_lost
    0U,                                // overload
    0.0F,                              // position
    0.0F,                              // velocity
    0.0F,                              // torque
    0U,                                // mos_temperature
    0U                                 // rotor_temperature
  },

  // Computed Parameter: Constant_Value_l
  //  Referenced by: '<S9>/Constant'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header
    0U,                                // online
    0U,                                // disabled
    0U,                                // enabled
    0U,                                // overvoltage
    0U,                                // undervoltage
    0U,                                // overcurrent
    0U,                                // mos_overtemperature
    0U,                                // rotor_overtemperature
    0U,                                // communication_lost
    0U,                                // overload
    0.0F,                              // position
    0.0F,                              // velocity
    0.0F,                              // torque
    0U,                                // mos_temperature
    0U                                 // rotor_temperature
  },

  // Computed Parameter: Constant_Value_a
  //  Referenced by: '<S10>/Constant'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header
    0U,                                // online
    0U,                                // disabled
    0U,                                // enabled
    0U,                                // overvoltage
    0U,                                // undervoltage
    0U,                                // overcurrent
    0U,                                // mos_overtemperature
    0U,                                // rotor_overtemperature
    0U,                                // communication_lost
    0U,                                // overload
    0.0F,                              // position
    0.0F,                              // velocity
    0.0F,                              // torque
    0U,                                // mos_temperature
    0U                                 // rotor_temperature
  },

  // Computed Parameter: Constant_Value_l0
  //  Referenced by: '<S11>/Constant'

  {
    {
      {
        0,                             // sec
        0U                             // nanosec
      },                               // stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // frame_id

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // frame_id_SL_Info
    },                                 // header
    0U,                                // online
    0U,                                // disabled
    0U,                                // enabled
    0U,                                // overvoltage
    0U,                                // undervoltage
    0U,                                // overcurrent
    0U,                                // mos_overtemperature
    0U,                                // rotor_overtemperature
    0U,                                // communication_lost
    0U,                                // overload
    0.0F,                              // position
    0.0F,                              // velocity
    0.0F,                              // torque
    0U,                                // mos_temperature
    0U                                 // rotor_temperature
  },

  // Expression: 0.0804
  //  Referenced by: '<Root>/L6'

  0.0804,

  // Expression: 0.0804
  //  Referenced by: '<Root>/L9'

  0.0804,

  // Expression: 0.07
  //  Referenced by: '<Root>/L10'

  0.07,

  // Expression: 0.12
  //  Referenced by: '<Root>/L7'

  0.12,

  // Expression: 0.12
  //  Referenced by: '<Root>/L8'

  0.12
};

//
// File trailer for generated code.
//
// [EOF]
//
