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

#ifndef API_BAKE_CONFIG_H
#define API_BAKE_CONFIG_H

/* Generated includes are specific to the bake environment. If a project is not
 * built with bake, it will have to provide alternative methods for including
 * its dependencies. */
#ifdef __BAKE__
/* Headers of public dependencies */
#include <flecs>
#include <bake.util>
#include <bake.test>

/* Headers of private dependencies */
#ifdef API_IMPL
/* No dependencies */
#endif
#endif

/* Convenience macro for exporting symbols */
#if API_IMPL && defined _MSC_VER
#define API_EXPORT __declspec(dllexport)
#elif API_IMPL
#define API_EXPORT __attribute__((__visibility__("default")))
#elif defined _MSC_VER
#define API_EXPORT __declspec(dllimport)
#else
#define API_EXPORT
#endif

#endif

