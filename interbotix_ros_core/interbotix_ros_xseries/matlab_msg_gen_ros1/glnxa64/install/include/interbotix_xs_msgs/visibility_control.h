#ifndef INTERBOTIX_XS_MSGS__VISIBILITY_CONTROL_H_
#define INTERBOTIX_XS_MSGS__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define INTERBOTIX_XS_MSGS_EXPORT __attribute__ ((dllexport))
    #define INTERBOTIX_XS_MSGS_IMPORT __attribute__ ((dllimport))
  #else
    #define INTERBOTIX_XS_MSGS_EXPORT __declspec(dllexport)
    #define INTERBOTIX_XS_MSGS_IMPORT __declspec(dllimport)
  #endif
  #ifdef INTERBOTIX_XS_MSGS_BUILDING_LIBRARY
    #define INTERBOTIX_XS_MSGS_PUBLIC INTERBOTIX_XS_MSGS_EXPORT
  #else
    #define INTERBOTIX_XS_MSGS_PUBLIC INTERBOTIX_XS_MSGS_IMPORT
  #endif
  #define INTERBOTIX_XS_MSGS_PUBLIC_TYPE INTERBOTIX_XS_MSGS_PUBLIC
  #define INTERBOTIX_XS_MSGS_LOCAL
#else
  #define INTERBOTIX_XS_MSGS_EXPORT __attribute__ ((visibility("default")))
  #define INTERBOTIX_XS_MSGS_IMPORT
  #if __GNUC__ >= 4
    #define INTERBOTIX_XS_MSGS_PUBLIC __attribute__ ((visibility("default")))
    #define INTERBOTIX_XS_MSGS_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define INTERBOTIX_XS_MSGS_PUBLIC
    #define INTERBOTIX_XS_MSGS_LOCAL
  #endif
  #define INTERBOTIX_XS_MSGS_PUBLIC_TYPE
#endif
#endif  // INTERBOTIX_XS_MSGS__VISIBILITY_CONTROL_H_
// Generated 01-Feb-2024 10:13:14
// Copyright 2019-2020 The MathWorks, Inc.
