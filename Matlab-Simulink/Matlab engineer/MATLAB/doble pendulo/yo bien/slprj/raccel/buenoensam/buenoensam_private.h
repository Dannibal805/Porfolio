#include "__cf_buenoensam.h"
#ifndef RTW_HEADER_buenoensam_private_h_
#define RTW_HEADER_buenoensam_private_h_
#include "rtwtypes.h"
#ifndef RTW_COMMON_DEFINES_
#define RTW_COMMON_DEFINES_
#define rt_VALIDATE_MEMORY(S, ptr)   if(!(ptr)) {\
  ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
  }
#if !defined(_WIN32)
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((ptr));\
  (ptr) = (NULL);\
  }
#else
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((void *)(ptr));\
  (ptr) = (NULL);\
  }
#endif
#endif
#ifdef rt_VALIDATE_MEMORY
#undef rt_VALIDATE_MEMORY
#define rt_VALIDATE_MEMORY(S, ptr)       if(!(ptr)) {\
      ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
      }
#endif
#ifndef __RTWTYPES_H__
#error This file requires rtwtypes.h to be included
#else
#ifdef TMWTYPES_PREVIOUSLY_INCLUDED
#error This file requires rtwtypes.h to be included before tmwtypes.h
#else
#ifndef RTWTYPES_ID_C08S16I32L32N32F1
#error This code was generated with a different "rtwtypes.h" than the file included
#endif
#endif
#endif
#include "mech_std.h"
#include "mtypes.h"
#include "simulation_data.h"
#include "mech_method_table.h"
#include "rt_mechanism.h"
#include "sim_mechanics_imports.h"
typedef struct { Mechanism * mechanism ; SimulationDataGeneral genSimData ;
SimulationDataOutputs outSimData ; } _rtMech_PWORK ; extern void e1t1z4hp05 (
real_T iw3fr1heh4 , real_T * lecjba5424 ) ; extern void e4wvvzd2u2 (
SimStruct * const rtS , int32_T tid , real_T ktiubh1reh , real_T * hcqt0q4nsj
, g5y1xvvspz * localB , etcjr0mlkv * localP ) ; extern void b0bats30si (
SimStruct * const rtS , int32_T tid , real_T jki3pksz1f , real_T * djttsybmrw
, nowrwmhpre * localB , fpimvfa1ln * localP ) ;
#if !defined(MULTITASKING) && !defined(NRT)
#error Model (buenoensam) was built \
in MultiTasking solver mode, however the MULTITASKING define \
is not present. Please verify that your template makefile is \
configured correctly.
#endif
#endif
