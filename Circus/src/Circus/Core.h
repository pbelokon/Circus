#pragma once

#ifdef CL_PLATFORM_WINDOWS
   #ifdef CI_BUILD_DLL
      #define CIRCUS_API __declspec(dllexport)
   #else
      #define CIRCUS_API __declspec(dllimport)
   #endif // CI_BUILD_DLL
#else 
   #error Circus only sopports Windows OS
#endif // CL_PLATFORM_WINDOWS
