#pragma once
#ifndef DEBUG_H_SCIOTO
#define DEBUG_H_SCIOTO

#include "OpenGL.h"

#ifdef _WIN32
#include "Windows.h"
#include <iostream>
#define  LOGI(...)  PrintToOutput(false,__VA_ARGS__)
//Use tostring()
#define  LOGE(...)  PrintToOutput(true,__VA_ARGS__)
void PrintToOutput(bool error, const char* format, ...);
#endif

#ifdef __ANDROID__
#include <android/log.h>
#define  LOG_TAG    "libKaNot"
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)
#endif

void checkGlError(const char* ErrorPlaceName);

void printGLString(const char *name, GLenum s);

#endif