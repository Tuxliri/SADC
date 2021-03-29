#ifndef RTW_HEADER_Final_project_private_h_
#define RTW_HEADER_Final_project_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "Final_project.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)   if(!(ptr)) {\
  ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
  }
#endif
#if !defined(rt_FREE)
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
extern real_T rt_urand_Upu32_Yd_f_pw_snf ( uint32_T * u ) ; extern real_T
rt_nrand_Upu32_Yd_f_pw_snf ( uint32_T * u ) ; extern void fmkuo41dvj ( real_T
am0hlmkbhi , real_T mbhwj00koy , real_T ozzcgsdwy2 , k24fnv1ek4 * localB ) ;
extern void khpt4qhny3 ( SimStruct * rtS_i ) ; extern void h4u2hnqzni (
SimStruct * rtS_e ) ; extern void geox5czrb3 ( SimStruct * rtS_m , real_T *
lhdt1fyvb5 , e305rupqk1 * localP ) ; extern void egnwzzaupu ( const real_T
bd30qtqp3d [ 3 ] , dhidnsjh4c * localB ) ; extern void jqjt2gjmnr ( SimStruct
* rtS_g ) ; extern void lt5jze22jh ( SimStruct * rtS_e ) ; extern void
jda3fmwzpy ( SimStruct * rtS_p , const real_T pylnevko0i [ 9 ] , real_T
o0q2ylkvyn [ 9 ] ) ; extern void ktmdijrt12 ( SimStruct * rtS_f ) ; extern
void o4znlsjred ( SimStruct * rtS_j ) ; extern void pwl3yyzylb ( SimStruct *
rtS_m , const real_T mavz1ocnar [ 3 ] , real_T dpvlx0cvj3 [ 3 ] ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
