#ifndef IMPORT_IMU__VISIBILITY_CONTROL_H_
#define IMPORT_IMU__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define IMPORT_IMU_EXPORT __attribute__ ((dllexport))
    #define IMPORT_IMU_IMPORT __attribute__ ((dllimport))
  #else
    #define IMPORT_IMU_EXPORT __declspec(dllexport)
    #define IMPORT_IMU_IMPORT __declspec(dllimport)
  #endif
  #ifdef IMPORT_IMU_BUILDING_LIBRARY
    #define IMPORT_IMU_PUBLIC IMPORT_IMU_EXPORT
  #else
    #define IMPORT_IMU_PUBLIC IMPORT_IMU_IMPORT
  #endif
  #define IMPORT_IMU_PUBLIC_TYPE IMPORT_IMU_PUBLIC
  #define IMPORT_IMU_LOCAL
#else
  #define IMPORT_IMU_EXPORT __attribute__ ((visibility("default")))
  #define IMPORT_IMU_IMPORT
  #if __GNUC__ >= 4
    #define IMPORT_IMU_PUBLIC __attribute__ ((visibility("default")))
    #define IMPORT_IMU_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define IMPORT_IMU_PUBLIC
    #define IMPORT_IMU_LOCAL
  #endif
  #define IMPORT_IMU_PUBLIC_TYPE
#endif
#endif  // IMPORT_IMU__VISIBILITY_CONTROL_H_
// Generated 30-Jun-2026 17:47:35
 