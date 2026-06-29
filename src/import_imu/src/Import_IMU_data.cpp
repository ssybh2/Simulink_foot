//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Import_IMU_data.cpp
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

// Block parameters (default storage)
P_Import_IMU_T Import_IMU::Import_IMU_P = {
  // Variable: CAL
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
  //  Referenced by: '<S20>/Out1'

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
  //  Referenced by: '<S7>/Constant'

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
  //  Referenced by: '<S41>/Out1'

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
  //  Referenced by: '<S40>/Constant'

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
  //  Referenced by: '<S25>/Out1'

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
  //  Referenced by: '<S26>/Out1'

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
  //  Referenced by: '<S27>/Out1'

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
  //  Referenced by: '<S28>/Out1'

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
  //  Referenced by: '<S13>/Constant'

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
  //  Referenced by: '<S14>/Constant'

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
  //  Referenced by: '<S15>/Constant'

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
  //  Referenced by: '<S16>/Constant'

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

  // Expression: 0.05
  //  Referenced by: '<Root>/Constant'

  0.05,

  // Expression: 0.0
  //  Referenced by: '<Root>/Constant1'

  0.0,

  // Expression: 0.05
  //  Referenced by: '<Root>/Constant2'

  0.05,

  // Expression: 0
  //  Referenced by: '<Root>/Constant3'

  0.0,

  // Expression: 3.3
  //  Referenced by: '<S17>/Constant26'

  3.3,

  // Expression: 0.09
  //  Referenced by: '<S17>/Constant27'

  0.09,

  // Expression: -0.24
  //  Referenced by: '<S17>/A'

  -0.24,

  // Expression: 0.24
  //  Referenced by: '<S17>/B'

  0.24,

  // Expression: 3.3
  //  Referenced by: '<S18>/Constant26'

  3.3,

  // Expression: 0.09
  //  Referenced by: '<S18>/Constant27'

  0.09,

  // Expression: 0.24
  //  Referenced by: '<S18>/A'

  0.24,

  // Expression: -0.24
  //  Referenced by: '<S18>/B'

  -0.24,

  // Computed Parameter: LPF_GyroX_NumCoef
  //  Referenced by: '<Root>/LPF_GyroX'

  0.314077795F,

  // Computed Parameter: LPF_GyroX_DenCoef
  //  Referenced by: '<Root>/LPF_GyroX'

  { 1.0F, -0.685922205F },

  // Computed Parameter: LPF_GyroX_InitialStates
  //  Referenced by: '<Root>/LPF_GyroX'

  0.0F,

  // Computed Parameter: LPF_GyroY_NumCoef
  //  Referenced by: '<Root>/LPF_GyroY'

  0.314077795F,

  // Computed Parameter: LPF_GyroY_DenCoef
  //  Referenced by: '<Root>/LPF_GyroY'

  { 1.0F, -0.685922205F },

  // Computed Parameter: LPF_GyroY_InitialStates
  //  Referenced by: '<Root>/LPF_GyroY'

  0.0F,

  // Expression: single(0.003)
  //  Referenced by: '<S17>/Constant29'

  0.003F,

  // Expression: single(8.0)
  //  Referenced by: '<S17>/Constant30'

  8.0F,

  // Expression: single(0.5)
  //  Referenced by: '<S17>/Constant31'

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
