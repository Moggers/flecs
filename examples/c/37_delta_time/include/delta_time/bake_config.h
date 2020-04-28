/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef DELTA_TIME_BAKE_CONFIG_H
#define DELTA_TIME_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <flecs.h>

/* Headers of private dependencies */
#ifdef DELTA_TIME_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#ifndef DELTA_TIME_STATIC
  #if DELTA_TIME_IMPL && (defined(_MSC_VER) || defined(__MINGW32__))
    #define DELTA_TIME_EXPORT __declspec(dllexport)
  #elif DELTA_TIME_IMPL
    #define DELTA_TIME_EXPORT __attribute__((__visibility__("default")))
  #elif defined _MSC_VER
    #define DELTA_TIME_EXPORT __declspec(dllimport)
  #else
    #define DELTA_TIME_EXPORT
  #endif
#else
  #define DELTA_TIME_EXPORT
#endif

#endif
