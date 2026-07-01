//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Import_IMU_data.cpp
//
// Code generated for Simulink model 'Import_IMU'.
//
// Model version                  : 1.112
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Wed Jul  1 20:32:50 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "Import_IMU.h"

// Block parameters (default storage)
P_Import_IMU_T Import_IMU::Import_IMU_P = {
  // Variable: CAL
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

  {
    -0.340847969F,
    3.50454569F,
    -1.0F,
    1.0F,
    -0.629243851F,
    0.899913073F,
    -1.0F,
    1.0F,
    -0.912680626F,
    2.24167967F,
    1.0F,
    1.0F,
    -0.60254097F,
    -0.362952948F,
    1.0F,
    1.0F
  },

  // Variable: L1
  //  Referenced by: '<Root>/L1'

  0.0804F,

  // Variable: L2
  //  Referenced by: '<Root>/L2'

  0.12F,

  // Variable: L3
  //  Referenced by: '<Root>/L3'

  0.12F,

  // Variable: L4
  //  Referenced by: '<Root>/L4'

  0.0804F,

  // Variable: L5
  //  Referenced by: '<Root>/L5'

  0.07F,

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S32>/Out1'

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

    {
      0.0,                             // x
      0.0,                             // y
      0.0,                             // z
      0.0                              // w
    },                                 // orientation

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // orientation_covariance

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // angular_velocity

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // angular_velocity_covariance

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // linear_acceleration

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    // linear_acceleration_covariance
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

    {
      0.0,                             // x
      0.0,                             // y
      0.0,                             // z
      0.0                              // w
    },                                 // orientation

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // orientation_covariance

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // angular_velocity

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    ,                                  // angular_velocity_covariance

    {
      0.0,                             // x
      0.0,                             // y
      0.0                              // z
    },                                 // linear_acceleration

    {
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
    // linear_acceleration_covariance
  },

  // Computed Parameter: Out1_Y0_a
  //  Referenced by: '<S67>/Out1'

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
    0.0F,                              // left_x
    0.0F,                              // left_y
    0.0F,                              // right_x
    0.0F,                              // right_y
    0.0F,                              // dial
    0U,                                // left_switch
    0U,                                // right_switch
    0U,                                // w
    0U,                                // s
    0U,                                // a
    0U,                                // d
    0U,                                // q
    0U,                                // e
    0U,                                // r
    0U,                                // f
    0U,                                // g
    0U,                                // z
    0U,                                // x
    0U,                                // c
    0U,                                // v
    0U,                                // b
    0U,                                // shift
    0U,                                // ctrl
    0,                                 // mouse_x
    0,                                 // mouse_y
    0U,                                // mouse_left_clicked
    0U                                 // mouse_right_clicked
  },

  // Computed Parameter: Constant_Value_f
  //  Referenced by: '<S66>/Constant'

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
    0.0F,                              // left_x
    0.0F,                              // left_y
    0.0F,                              // right_x
    0.0F,                              // right_y
    0.0F,                              // dial
    0U,                                // left_switch
    0U,                                // right_switch
    0U,                                // w
    0U,                                // s
    0U,                                // a
    0U,                                // d
    0U,                                // q
    0U,                                // e
    0U,                                // r
    0U,                                // f
    0U,                                // g
    0U,                                // z
    0U,                                // x
    0U,                                // c
    0U,                                // v
    0U,                                // b
    0U,                                // shift
    0U,                                // ctrl
    0,                                 // mouse_x
    0,                                 // mouse_y
    0U,                                // mouse_left_clicked
    0U                                 // mouse_right_clicked
  },

  // Computed Parameter: Out1_Y0_f
  //  Referenced by: '<S49>/Out1'

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

  // Computed Parameter: Out1_Y0_e
  //  Referenced by: '<S50>/Out1'

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

  // Computed Parameter: Out1_Y0_fs
  //  Referenced by: '<S51>/Out1'

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
  //  Referenced by: '<S52>/Out1'

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

  // Computed Parameter: Out1_Y0_j
  //  Referenced by: '<S53>/Out1'

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

  // Computed Parameter: Out1_Y0_p
  //  Referenced by: '<S54>/Out1'

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

  // Computed Parameter: Constant_Value_o
  //  Referenced by: '<S23>/Constant'

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

  // Computed Parameter: Constant_Value_d
  //  Referenced by: '<S24>/Constant'

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

  // Computed Parameter: Constant_Value_dx
  //  Referenced by: '<S19>/Constant'

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

  // Computed Parameter: Constant_Value_h
  //  Referenced by: '<S20>/Constant'

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

  // Computed Parameter: Constant_Value_j
  //  Referenced by: '<S21>/Constant'

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

  // Computed Parameter: Constant_Value_dl
  //  Referenced by: '<S22>/Constant'

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

  // Expression: 0.02
  //  Referenced by: '<Root>/KpVelocity'

  0.02,

  // Expression: 0
  //  Referenced by: '<Root>/KdVelocity'

  0.0,

  // Expression: 0.2
  //  Referenced by: '<Root>/KpPitch'

  0.2,

  // Expression: 0.05
  //  Referenced by: '<Root>/KdPitch'

  0.05,

  // Expression: 0.1
  //  Referenced by: '<Root>/TorqueLimit'

  0.1,

  // Expression: 0
  //  Referenced by: '<S26>/Constant10'

  0.0,

  // Expression: 0.2
  //  Referenced by: '<Root>/KpYaw'

  0.2,

  // Expression: 0.02
  //  Referenced by: '<Root>/KdYaw'

  0.02,

  // Expression: 0.05
  //  Referenced by: '<Root>/YawTorqueLimit'

  0.05,

  // Expression: 2
  //  Referenced by: '<Root>/Constant4'

  2.0,

  // Expression: 1
  //  Referenced by: '<Root>/YawDirection'

  1.0,

  // Expression: 0
  //  Referenced by: '<S25>/Constant10'

  0.0,

  // Expression: -1
  //  Referenced by: '<Root>/Constant5'

  -1.0,

  // Expression: 0.01
  //  Referenced by: '<Root>/Constant6'

  0.01,

  // Expression: 0.03
  //  Referenced by: '<Root>/Constant7'

  0.03,

  // Expression: 0.5
  //  Referenced by: '<Root>/Constant'

  0.5,

  // Expression: 0
  //  Referenced by: '<Root>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/Constant3'

  0.0,

  // Expression: 3.0
  //  Referenced by: '<Root>/Constant26'

  3.0,

  // Expression: 0.09
  //  Referenced by: '<Root>/Constant27'

  0.09,

  // Expression: -0.24
  //  Referenced by: '<Root>/A'

  -0.24,

  // Expression: 0.24
  //  Referenced by: '<Root>/B'

  0.24,

  // Computed Parameter: kd1_Value
  //  Referenced by: '<S25>/kd1'

  0.00907F,

  // Computed Parameter: Gain_Gain
  //  Referenced by: '<S57>/Gain'

  -1.0F,

  // Computed Parameter: Gain_Gain_h
  //  Referenced by: '<S58>/Gain'

  -1.0F,

  // Computed Parameter: Gain_Gain_b
  //  Referenced by: '<S59>/Gain'

  -1.0F,

  // Computed Parameter: Switch_Threshold
  //  Referenced by: '<S59>/Switch'

  0.0F,

  // Computed Parameter: DeadZone_Start
  //  Referenced by: '<S56>/Dead Zone'

  -0.009F,

  // Computed Parameter: DeadZone_End
  //  Referenced by: '<S56>/Dead Zone'

  0.009F,

  // Computed Parameter: Switch_Threshold_h
  //  Referenced by: '<S58>/Switch'

  0.0F,

  // Computed Parameter: Switch_Threshold_e
  //  Referenced by: '<S57>/Switch'

  0.0F,

  // Computed Parameter: DeadZone_Start_h
  //  Referenced by: '<S25>/Dead Zone'

  -0.007F,

  // Computed Parameter: DeadZone_End_h
  //  Referenced by: '<S25>/Dead Zone'

  0.007F,

  // Computed Parameter: Switch2_Threshold
  //  Referenced by: '<S25>/Switch2'

  0.0F,

  // Computed Parameter: Gain_Gain_p
  //  Referenced by: '<S55>/Gain'

  -1.0F,

  // Computed Parameter: kd1_Value_h
  //  Referenced by: '<S26>/kd1'

  0.007F,

  // Computed Parameter: Gain_Gain_e
  //  Referenced by: '<S62>/Gain'

  -1.0F,

  // Computed Parameter: Gain_Gain_d
  //  Referenced by: '<S63>/Gain'

  -1.0F,

  // Computed Parameter: Gain_Gain_d3
  //  Referenced by: '<S64>/Gain'

  -1.0F,

  // Computed Parameter: Switch_Threshold_l
  //  Referenced by: '<S64>/Switch'

  0.0F,

  // Computed Parameter: DeadZone_Start_c
  //  Referenced by: '<S61>/Dead Zone'

  -0.009F,

  // Computed Parameter: DeadZone_End_g
  //  Referenced by: '<S61>/Dead Zone'

  0.009F,

  // Computed Parameter: Switch_Threshold_i
  //  Referenced by: '<S63>/Switch'

  0.0F,

  // Computed Parameter: Switch_Threshold_a
  //  Referenced by: '<S62>/Switch'

  0.0F,

  // Computed Parameter: DeadZone_Start_cn
  //  Referenced by: '<S26>/Dead Zone'

  -0.007F,

  // Computed Parameter: DeadZone_End_c
  //  Referenced by: '<S26>/Dead Zone'

  0.007F,

  // Computed Parameter: Switch2_Threshold_j
  //  Referenced by: '<S26>/Switch2'

  0.0F,

  // Computed Parameter: Gain_Gain_j
  //  Referenced by: '<S60>/Gain'

  -1.0F,

  // Computed Parameter: Gain2_Gain
  //  Referenced by: '<S2>/Gain2'

  -1.0F,

  // Computed Parameter: LPF_GyroY_NumCoef
  //  Referenced by: '<Root>/LPF_GyroY'

  0.314077795F,

  // Computed Parameter: LPF_GyroY_DenCoef
  //  Referenced by: '<Root>/LPF_GyroY'

  { 1.0F, -0.685922205F },

  // Computed Parameter: LPF_GyroY_InitialStates
  //  Referenced by: '<Root>/LPF_GyroY'

  0.0F,

  // Computed Parameter: Gain_Gain_n
  //  Referenced by: '<Root>/Gain'

  -1.0F,

  // Computed Parameter: Gain1_Gain
  //  Referenced by: '<Root>/Gain1'

  1.0F,

  // Computed Parameter: p_des_Value
  //  Referenced by: '<Root>/p_des'

  0.0F,

  // Computed Parameter: v_des_Value
  //  Referenced by: '<Root>/v_des'

  0.0F,

  // Computed Parameter: kp_Value
  //  Referenced by: '<Root>/kp'

  0.0F,

  // Computed Parameter: Switch_Threshold_g
  //  Referenced by: '<S60>/Switch'

  0.0F,

  // Computed Parameter: LPF_GyroZ_NumCoef
  //  Referenced by: '<Root>/LPF_GyroZ'

  0.314077795F,

  // Computed Parameter: LPF_GyroZ_DenCoef
  //  Referenced by: '<Root>/LPF_GyroZ'

  { 1.0F, -0.685922205F },

  // Computed Parameter: LPF_GyroZ_InitialStates
  //  Referenced by: '<Root>/LPF_GyroZ'

  0.0F,

  // Computed Parameter: Switch1_Threshold
  //  Referenced by: '<S26>/Switch1'

  0.05F,

  // Computed Parameter: Left_wheel_Gain
  //  Referenced by: '<Root>/Left_wheel'

  1.0F,

  // Computed Parameter: Right_wheel_Gain
  //  Referenced by: '<Root>/Right_wheel'

  -1.0F,

  // Computed Parameter: Switch_Threshold_gc
  //  Referenced by: '<S55>/Switch'

  0.0F,

  // Computed Parameter: Switch1_Threshold_j
  //  Referenced by: '<S25>/Switch1'

  0.05F,

  // Computed Parameter: LPF_GyroX_NumCoef
  //  Referenced by: '<Root>/LPF_GyroX'

  0.314077795F,

  // Computed Parameter: LPF_GyroX_DenCoef
  //  Referenced by: '<Root>/LPF_GyroX'

  { 1.0F, -0.685922205F },

  // Computed Parameter: LPF_GyroX_InitialStates
  //  Referenced by: '<Root>/LPF_GyroX'

  0.0F,

  // Expression: single(0.003)
  //  Referenced by: '<S11>/Constant29'

  0.003F,

  // Expression: single(8.0)
  //  Referenced by: '<S11>/Constant30'

  8.0F,

  // Expression: single(0.5)
  //  Referenced by: '<S11>/Constant31'

  0.5F,

  // Expression: single(0.003)
  //  Referenced by: '<S18>/Constant29'

  0.003F,

  // Expression: single(8.0)
  //  Referenced by: '<S18>/Constant30'

  8.0F,

  // Expression: single(0.5)
  //  Referenced by: '<S18>/Constant31'

  0.5F
};

//
// File trailer for generated code.
//
// [EOF]
//
