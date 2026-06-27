#ifndef TESTING_DM_HBY__VISIBILITY_CONTROL_H_
#define TESTING_DM_HBY__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define TESTING_DM_HBY_EXPORT __attribute__ ((dllexport))
    #define TESTING_DM_HBY_IMPORT __attribute__ ((dllimport))
  #else
    #define TESTING_DM_HBY_EXPORT __declspec(dllexport)
    #define TESTING_DM_HBY_IMPORT __declspec(dllimport)
  #endif
  #ifdef TESTING_DM_HBY_BUILDING_LIBRARY
    #define TESTING_DM_HBY_PUBLIC TESTING_DM_HBY_EXPORT
  #else
    #define TESTING_DM_HBY_PUBLIC TESTING_DM_HBY_IMPORT
  #endif
  #define TESTING_DM_HBY_PUBLIC_TYPE TESTING_DM_HBY_PUBLIC
  #define TESTING_DM_HBY_LOCAL
#else
  #define TESTING_DM_HBY_EXPORT __attribute__ ((visibility("default")))
  #define TESTING_DM_HBY_IMPORT
  #if __GNUC__ >= 4
    #define TESTING_DM_HBY_PUBLIC __attribute__ ((visibility("default")))
    #define TESTING_DM_HBY_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define TESTING_DM_HBY_PUBLIC
    #define TESTING_DM_HBY_LOCAL
  #endif
  #define TESTING_DM_HBY_PUBLIC_TYPE
#endif
#endif  // TESTING_DM_HBY__VISIBILITY_CONTROL_H_
// Generated 27-Jun-2026 23:29:06
 