//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: testing_DM_hby_private.h
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
#ifndef RTW_HEADER_testing_DM_hby_private_h_
#define RTW_HEADER_testing_DM_hby_private_h_
#include "rtwtypes.h"
#include "testing_DM_hby_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

// Private macros used by the generated code to access rtModel
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern real32_T rt_atan2f_snf(real32_T u0, real32_T u1);

#endif                                 // RTW_HEADER_testing_DM_hby_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
