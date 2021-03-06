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

#ifndef PREFAB_VARIANT_BAKE_CONFIG_H
#define PREFAB_VARIANT_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <flecs.h>

/* Headers of private dependencies */
#ifdef PREFAB_VARIANT_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#ifndef PREFAB_VARIANT_STATIC
  #if PREFAB_VARIANT_IMPL && (defined(_MSC_VER) || defined(__MINGW32__))
    #define PREFAB_VARIANT_EXPORT __declspec(dllexport)
  #elif PREFAB_VARIANT_IMPL
    #define PREFAB_VARIANT_EXPORT __attribute__((__visibility__("default")))
  #elif defined _MSC_VER
    #define PREFAB_VARIANT_EXPORT __declspec(dllimport)
  #else
    #define PREFAB_VARIANT_EXPORT
  #endif
#else
  #define PREFAB_VARIANT_EXPORT
#endif

#endif

