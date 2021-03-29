#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Final_project_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "Final_project.h"
#include "Final_project_capi.h"
#include "Final_project_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Final_project/If Action Subsystem1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 0 } , { 1 , 0 , TARGET_STRING ( "Final_project/If Action Subsystem2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 21 , TARGET_STRING (
"Final_project/FULL STATE FEEDBACK CONTROLLER" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 3 , 24 , TARGET_STRING ( "Final_project/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 4 , 25 , TARGET_STRING (
"Final_project/MATLAB Function1" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0
} , { 5 , 27 , TARGET_STRING ( "Final_project/MATLAB Function13" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 6 , 28 , TARGET_STRING (
"Final_project/MATLAB Function2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 7 , 29 , TARGET_STRING ( "Final_project/MATLAB Function3" ) ,
TARGET_STRING ( "A_bn" ) , 0 , 0 , 3 , 0 , 0 } , { 8 , 30 , TARGET_STRING (
"Final_project/MATLAB Function4" ) , TARGET_STRING ( "TSRP" ) , 0 , 0 , 1 , 0
, 0 } , { 9 , 33 , TARGET_STRING ( "Final_project/MATLAB Function7" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 10 , 34 , TARGET_STRING (
"Final_project/MATLAB Function8" ) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0
} , { 11 , 34 , TARGET_STRING ( "Final_project/MATLAB Function8" ) ,
TARGET_STRING ( "omega_b_GYRO" ) , 1 , 0 , 1 , 0 , 0 } , { 12 , 0 ,
TARGET_STRING ( "Final_project/Clock" ) , TARGET_STRING ( "" ) , 0 , 0 , 5 ,
0 , 0 } , { 13 , 0 , TARGET_STRING ( "Final_project/Omega0 vector" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 14 , 0 , TARGET_STRING (
"Final_project/b(t=0)" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 15
, 0 , TARGET_STRING ( "Final_project/Integrator" ) , TARGET_STRING (
"omega_b_GYRO" ) , 0 , 0 , 4 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"Final_project/Integrator1" ) , TARGET_STRING ( "omega_vec" ) , 0 , 0 , 0 , 0
, 0 } , { 17 , 0 , TARGET_STRING ( "Final_project/Integrator2" ) ,
TARGET_STRING ( "RRW" ) , 0 , 0 , 0 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"Final_project/Integrator3" ) , TARGET_STRING ( "q" ) , 0 , 0 , 2 , 0 , 0 } ,
{ 19 , 0 , TARGET_STRING ( "Final_project/Integrator4" ) , TARGET_STRING (
"omega_b_OBS" ) , 0 , 0 , 0 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"Final_project/Integrator5" ) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } ,
{ 21 , 0 , TARGET_STRING ( "Final_project/Merge1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
"Final_project/Attitude Errror" ) , TARGET_STRING ( "A_e" ) , 0 , 0 , 3 , 0 ,
0 } , { 23 , 0 , TARGET_STRING ( "Final_project/ARW NOISE" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 2 } , { 24 , 0 , TARGET_STRING (
"Final_project/RRW NOISE " ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , {
25 , 0 , TARGET_STRING ( "Final_project/Sum" ) , TARGET_STRING (
"Disturbance torques" ) , 0 , 0 , 1 , 0 , 0 } , { 26 , 0 , TARGET_STRING (
"Final_project/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 27 ,
0 , TARGET_STRING ( "Final_project/Manual Switch" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
"Final_project/Zero-Order Hold" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2
} , { 29 , 0 , TARGET_STRING ( "Final_project/Zero-Order Hold1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 30 , 2 , TARGET_STRING (
"Final_project/AERODYNAMIC DRAG TORQUE/MATLAB Function6" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
"Final_project/AERODYNAMIC DRAG TORQUE/Derivative" ) , TARGET_STRING ( "v_n"
) , 0 , 0 , 0 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
"Final_project/AERODYNAMIC DRAG TORQUE/Product" ) , TARGET_STRING (
"v_rel _b" ) , 0 , 0 , 0 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
"Final_project/AERODYNAMIC DRAG TORQUE/Sum1" ) , TARGET_STRING ( "v_rel_N" )
, 0 , 0 , 0 , 0 , 0 } , { 34 , 5 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/If Action Subsystem" ) , TARGET_STRING
( "" ) , 0 , 0 , 3 , 0 , 0 } , { 35 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/If Action Subsystem1" ) , TARGET_STRING
( "" ) , 0 , 0 , 5 , 0 , 3 } , { 36 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/If Action Subsystem3" ) , TARGET_STRING
( "" ) , 0 , 0 , 5 , 0 , 3 } , { 37 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Merge" ) , TARGET_STRING ( "" ) , 0 , 0
, 5 , 0 , 3 } , { 38 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Switch" ) , TARGET_STRING ( "" ) , 0 ,
0 , 3 , 0 , 0 } , { 39 , 12 , TARGET_STRING (
"Final_project/Approximate orbit model/MATLAB Function1" ) , TARGET_STRING (
"S_n versor" ) , 0 , 0 , 0 , 0 , 0 } , { 40 , 14 , TARGET_STRING (
"Final_project/Approximate orbit model/MATLAB Function3" ) , TARGET_STRING (
"S_b versor" ) , 0 , 0 , 0 , 0 , 0 } , { 41 , 0 , TARGET_STRING (
"Final_project/Approximate orbit model/Matrix Multiply" ) , TARGET_STRING (
"r_b versor" ) , 0 , 0 , 0 , 0 , 0 } , { 42 , 0 , TARGET_STRING (
"Final_project/Approximate orbit model/Matrix Multiply1" ) , TARGET_STRING (
"S_b versor" ) , 0 , 0 , 0 , 0 , 0 } , { 43 , 0 , TARGET_STRING (
"Final_project/Attitude error/Sum" ) , TARGET_STRING ( "omega_B/L" ) , 0 , 0
, 0 , 0 , 0 } , { 44 , 0 , TARGET_STRING ( "Final_project/CMG actuator/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 1 } , { 45 , 0 , TARGET_STRING (
"Final_project/CMG actuator/Integrator" ) , TARGET_STRING ( "delta" ) , 0 , 0
, 2 , 0 , 0 } , { 46 , 0 , TARGET_STRING (
"Final_project/CMG actuator/Product" ) , TARGET_STRING ( "A_dot*h" ) , 0 , 0
, 0 , 0 , 0 } , { 47 , 0 , TARGET_STRING (
"Final_project/CMG actuator/Product1" ) , TARGET_STRING ( "delta_dot" ) , 0 ,
0 , 2 , 0 , 0 } , { 48 , 0 , TARGET_STRING (
"Final_project/CMG actuator/MAXIMUM GIMBAL RATE" ) , TARGET_STRING ( "" ) , 0
, 0 , 2 , 0 , 0 } , { 49 , 0 , TARGET_STRING (
"Final_project/CMG actuator/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 50 , 0 , TARGET_STRING ( "Final_project/CMG actuator/Sum1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 51 , 0 , TARGET_STRING (
"Final_project/Degrees to Radians/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 5
, 0 , 1 } , { 52 , 0 , TARGET_STRING (
"Final_project/Delay .5s/If Action Subsystem3" ) , TARGET_STRING ( "" ) , 0 ,
0 , 3 , 0 , 0 } , { 53 , 0 , TARGET_STRING (
"Final_project/Delay .5s/If Action Subsystem4" ) , TARGET_STRING ( "" ) , 0 ,
0 , 3 , 0 , 0 } , { 54 , 0 , TARGET_STRING ( "Final_project/Delay .5s/Clock1"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 55 , 0 , TARGET_STRING (
"Final_project/Delay .5s/Merge2" ) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0
} , { 56 , 0 , TARGET_STRING ( "Final_project/Gravity gradient torque/Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 57 , 0 , TARGET_STRING (
"Final_project/Gravity gradient torque/Gain1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 5 , 0 , 0 } , { 58 , 0 , TARGET_STRING (
"Final_project/Gravity gradient torque/Gain2" ) , TARGET_STRING ( "" ) , 0 ,
0 , 5 , 0 , 0 } , { 59 , 0 , TARGET_STRING (
"Final_project/Gravity gradient torque/Gain3" ) , TARGET_STRING ( "" ) , 0 ,
0 , 5 , 0 , 0 } , { 60 , 0 , TARGET_STRING (
"Final_project/Gravity gradient torque/Gain4" ) , TARGET_STRING ( "" ) , 0 ,
0 , 5 , 0 , 0 } , { 61 , 0 , TARGET_STRING (
"Final_project/Gravity gradient torque/Product" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 62 , 0 , TARGET_STRING (
"Final_project/Gravity gradient torque/Product1" ) , TARGET_STRING ( "" ) , 0
, 0 , 5 , 0 , 0 } , { 63 , 0 , TARGET_STRING (
"Final_project/Gravity gradient torque/Product2" ) , TARGET_STRING ( "" ) , 0
, 0 , 5 , 0 , 0 } , { 64 , 0 , TARGET_STRING (
"Final_project/Gravity gradient torque/Product3" ) , TARGET_STRING ( "" ) , 0
, 0 , 5 , 0 , 0 } , { 65 , 0 , TARGET_STRING (
"Final_project/Gravity gradient torque/Product4" ) , TARGET_STRING ( "c" ) ,
0 , 0 , 0 , 0 , 0 } , { 66 , 0 , TARGET_STRING (
"Final_project/If Action Subsystem1/In1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 0 } , { 67 , 0 , TARGET_STRING (
"Final_project/If Action Subsystem2/In1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 0 } , { 68 , 36 , TARGET_STRING (
"Final_project/Magnetic torque 13th order/ECI to GEO Coord" ) , TARGET_STRING
( "" ) , 0 , 0 , 5 , 0 , 0 } , { 69 , 0 , TARGET_STRING (
"Final_project/Magnetic torque 13th order/Product" ) , TARGET_STRING ( "b_b"
) , 0 , 0 , 0 , 0 , 0 } , { 70 , 0 , TARGET_STRING (
"Final_project/Matrix A_B//L/Transpose" ) , TARGET_STRING ( "" ) , 0 , 0 , 3
, 0 , 0 } , { 71 , 0 , TARGET_STRING ( "Final_project/Matrix A_B//L/ " ) ,
TARGET_STRING ( "A_B/L" ) , 0 , 0 , 3 , 0 , 0 } , { 72 , 0 , TARGET_STRING (
"Final_project/Subsystem1/Sqrt1" ) , TARGET_STRING ( "magnitude" ) , 0 , 0 ,
5 , 0 , 0 } , { 73 , 0 , TARGET_STRING (
"Final_project/AERODYNAMIC DRAG TORQUE/Cross Product/Element product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 74 , 0 , TARGET_STRING (
"Final_project/AERODYNAMIC DRAG TORQUE/Cross Product/Add3" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 75 , 3 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Earth Horizon Sensor/MATLAB Function" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 76 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Earth Horizon Sensor/Divide" ) ,
TARGET_STRING ( "inertial versor" ) , 0 , 0 , 0 , 0 , 0 } , { 77 , 0 ,
TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Earth Horizon Sensor/Matrix Multiply" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 78 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Earth Horizon Sensor/Matrix Multiply1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 79 , 4 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/If Action Subsystem/MATLAB Function9" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 80 , 5 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/If Action Subsystem/Integrator6" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 81 , 8 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Magnetic Sensor/MATLAB Function" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 82 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Magnetic Sensor/Matrix Multiply" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 83 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/NORMALIZER/Divide" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 84 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/NORMALIZER1/Divide" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 85 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/NORMALIZER2/Divide" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 86 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/QUEST Attitude Determination/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 87 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/QUEST Attitude Determination/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 88 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/QUEST Attitude Determination/Gain3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 89 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/QUEST Attitude Determination/Transpose"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 90 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/QUEST Attitude Determination/Transpose2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 91 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/QUEST Attitude Determination/Transpose3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 92 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/QUEST Attitude Determination/Product" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 93 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/QUEST Attitude Determination/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 94 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/QUEST Attitude Determination/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 95 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/QUEST Attitude Determination/Sum" ) ,
TARGET_STRING ( "B" ) , 0 , 0 , 3 , 0 , 0 } , { 96 , 11 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Real sun sensor/MATLAB Function1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 97 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Real sun sensor/Vector Concatenate" ) ,
TARGET_STRING ( "SENSOR ERROR" ) , 0 , 0 , 0 , 0 , 2 } , { 98 , 0 ,
TARGET_STRING ( "Final_project/ATTITUDE DETERMINATION/Real sun sensor/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 99 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Real sun sensor/Matrix Multiply" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 100 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Real sun sensor/phi" ) , TARGET_STRING
( "" ) , 0 , 0 , 5 , 0 , 2 } , { 101 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Real sun sensor/psi" ) , TARGET_STRING
( "" ) , 0 , 0 , 5 , 0 , 2 } , { 102 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Real sun sensor/xi" ) , TARGET_STRING (
"" ) , 0 , 0 , 5 , 0 , 2 } , { 103 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Real sun sensor/Sum" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 0 } , { 104 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Subsystem/Gain" ) , TARGET_STRING ( ""
) , 0 , 0 , 5 , 0 , 0 } , { 105 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Subsystem/Square1" ) , TARGET_STRING (
"" ) , 0 , 0 , 5 , 0 , 1 } , { 106 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Subsystem/Dot Product" ) ,
TARGET_STRING ( "dot(S_n,r_n)" ) , 0 , 0 , 5 , 0 , 0 } , { 107 , 0 ,
TARGET_STRING (
 "Final_project/Approximate orbit model/Sun direction wrt INERTIAL FRAME/Matrix Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 108 , 0 , TARGET_STRING (
"Final_project/Approximate orbit model/Sun direction wrt INERTIAL FRAME/Divide"
) , TARGET_STRING ( "n_sun" ) , 0 , 0 , 5 , 0 , 1 } , { 109 , 0 ,
TARGET_STRING (
"Final_project/Approximate orbit model/Sun direction wrt INERTIAL FRAME/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 110 , 0 , TARGET_STRING (
 "Final_project/Approximate orbit model/Sun direction wrt INERTIAL FRAME/Product1"
) , TARGET_STRING ( "n_sun*t" ) , 0 , 0 , 5 , 0 , 0 } , { 111 , 0 ,
TARGET_STRING (
 "Final_project/Approximate orbit model/Sun direction wrt INERTIAL FRAME/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 112 , 0 , TARGET_STRING (
 "Final_project/Approximate orbit model/Sun direction wrt INERTIAL FRAME/Product3"
) , TARGET_STRING ( "n_sun*t" ) , 0 , 0 , 0 , 0 , 0 } , { 113 , 0 ,
TARGET_STRING (
"Final_project/Approximate orbit model/Sun direction wrt INERTIAL FRAME/Cos"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 114 , 0 , TARGET_STRING (
"Final_project/Approximate orbit model/Sun direction wrt INERTIAL FRAME/Sin"
) , TARGET_STRING ( "sin(epsilon)" ) , 0 , 0 , 5 , 0 , 1 } , { 115 , 0 ,
TARGET_STRING (
 "Final_project/Approximate orbit model/Sun direction wrt INERTIAL FRAME/cos(epsilon)"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 1 } , { 116 , 15 , TARGET_STRING (
 "Final_project/Approximate orbit model/orbit model - S//C orbit wrt Earth/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 117 , 16 , TARGET_STRING (
 "Final_project/Approximate orbit model/orbit model - S//C orbit wrt Earth/MATLAB Function4"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 118 , 0 , TARGET_STRING (
 "Final_project/Approximate orbit model/orbit model - S//C orbit wrt Earth/Integrator"
) , TARGET_STRING ( "theta" ) , 0 , 0 , 5 , 0 , 0 } , { 119 , 0 ,
TARGET_STRING ( "Final_project/Attitude error/omega_L//N/Initial conditions"
) , TARGET_STRING ( "omega" ) , 0 , 0 , 0 , 0 , 1 } , { 120 , 0 ,
TARGET_STRING ( "Final_project/CMG actuator/Cross Product/Element product" )
, TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 121 , 0 , TARGET_STRING (
"Final_project/CMG actuator/Cross Product/Add3" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 122 , 0 , TARGET_STRING (
"Final_project/CMG actuator/Cross Product1/Element product" ) , TARGET_STRING
( "" ) , 0 , 0 , 4 , 0 , 0 } , { 123 , 0 , TARGET_STRING (
"Final_project/CMG actuator/Cross Product1/Add3" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 124 , 0 , TARGET_STRING (
"Final_project/CMG actuator/Degrees to Radians/Gain1" ) , TARGET_STRING ( ""
) , 0 , 0 , 5 , 0 , 1 } , { 125 , 0 , TARGET_STRING (
"Final_project/Delay .5s/If Action Subsystem3/In1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 3 , 0 , 0 } , { 126 , 0 , TARGET_STRING (
"Final_project/Delay .5s/If Action Subsystem4/In1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 3 , 0 , 0 } , { 127 , 0 , TARGET_STRING (
"Final_project/Magnetic torque 13th order/Cross Product/Element product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 128 , 0 , TARGET_STRING (
"Final_project/Magnetic torque 13th order/Cross Product/Add3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 129 , 0 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Magnetic Sensor/NORMALIZER/Divide" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 130 , TARGET_STRING ( "Final_project/Constant4" )
, TARGET_STRING ( "Value" ) , 0 , 6 , 0 } , { 131 , TARGET_STRING (
"Final_project/Inertia vector" ) , TARGET_STRING ( "Value" ) , 0 , 6 , 0 } ,
{ 132 , TARGET_STRING ( "Final_project/Inertia vector1" ) , TARGET_STRING (
"Value" ) , 0 , 6 , 0 } , { 133 , TARGET_STRING (
"Final_project/Omega0 vector" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , {
134 , TARGET_STRING ( "Final_project/Tuning coeff." ) , TARGET_STRING (
"Value" ) , 0 , 5 , 0 } , { 135 , TARGET_STRING (
"Final_project/Tuning parameter" ) , TARGET_STRING ( "Value" ) , 0 , 5 , 0 }
, { 136 , TARGET_STRING ( "Final_project/b(t=0)" ) , TARGET_STRING ( "Value"
) , 0 , 6 , 0 } , { 137 , TARGET_STRING ( "Final_project/omegad" ) ,
TARGET_STRING ( "Value" ) , 0 , 6 , 0 } , { 138 , TARGET_STRING (
"Final_project/Detumbling Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 5 , 0 } ,
{ 139 , TARGET_STRING ( "Final_project/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 7 , 0 } , { 140 , TARGET_STRING (
"Final_project/Integrator3" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 8
, 0 } , { 141 , TARGET_STRING ( "Final_project/Integrator4" ) , TARGET_STRING
( "InitialCondition" ) , 0 , 6 , 0 } , { 142 , TARGET_STRING (
"Final_project/Integrator5" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 3
, 0 } , { 143 , TARGET_STRING ( "Final_project/ARW NOISE" ) , TARGET_STRING (
"Mean" ) , 0 , 5 , 0 } , { 144 , TARGET_STRING ( "Final_project/ARW NOISE" )
, TARGET_STRING ( "StdDev" ) , 0 , 6 , 0 } , { 145 , TARGET_STRING (
"Final_project/ARW NOISE" ) , TARGET_STRING ( "Seed" ) , 0 , 5 , 0 } , { 146
, TARGET_STRING ( "Final_project/RRW NOISE " ) , TARGET_STRING ( "Mean" ) , 0
, 5 , 0 } , { 147 , TARGET_STRING ( "Final_project/RRW NOISE " ) ,
TARGET_STRING ( "StdDev" ) , 0 , 6 , 0 } , { 148 , TARGET_STRING (
"Final_project/RRW NOISE " ) , TARGET_STRING ( "Seed" ) , 0 , 5 , 0 } , { 149
, TARGET_STRING ( "Final_project/Manual Switch" ) , TARGET_STRING (
"CurrentSetting" ) , 1 , 5 , 0 } , { 150 , TARGET_STRING (
"Final_project/AERODYNAMIC DRAG TORQUE/rho" ) , TARGET_STRING ( "Value" ) , 0
, 5 , 0 } , { 151 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Switch" ) , TARGET_STRING ( "Threshold"
) , 0 , 5 , 0 } , { 152 , TARGET_STRING (
"Final_project/CMG actuator/Gymbal axis tilt1" ) , TARGET_STRING ( "Value" )
, 0 , 5 , 0 } , { 153 , TARGET_STRING (
"Final_project/CMG actuator/Gyro speed" ) , TARGET_STRING ( "Value" ) , 0 , 5
, 0 } , { 154 , TARGET_STRING ( "Final_project/CMG actuator/Inertia of wheel"
) , TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 155 , TARGET_STRING (
"Final_project/CMG actuator/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 5 , 0 }
, { 156 , TARGET_STRING ( "Final_project/CMG actuator/Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 8 , 0 } , { 157 , TARGET_STRING (
"Final_project/CMG actuator/MAXIMUM GIMBAL RATE" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 5 , 0 } , { 158 , TARGET_STRING (
"Final_project/CMG actuator/MAXIMUM GIMBAL RATE" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 5 , 0 } , { 159 , TARGET_STRING (
"Final_project/Degrees to Radians/Gain1" ) , TARGET_STRING ( "Gain" ) , 0 , 5
, 0 } , { 160 , TARGET_STRING ( "Final_project/Delay .5s/Constant6" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 161 , TARGET_STRING (
"Final_project/Gravity gradient torque/Constant1" ) , TARGET_STRING ( "Value"
) , 0 , 5 , 0 } , { 162 , TARGET_STRING (
"Final_project/Gravity gradient torque/Constant2" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 163 , TARGET_STRING (
"Final_project/Gravity gradient torque/Gain4" ) , TARGET_STRING ( "Gain" ) ,
0 , 5 , 0 } , { 164 , TARGET_STRING (
"Final_project/Magnetic torque 13th order/Constant1" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 165 , TARGET_STRING (
"Final_project/Magnetic torque 13th order/Constant3" ) , TARGET_STRING (
"Value" ) , 0 , 5 , 0 } , { 166 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Earth Horizon Sensor/phi" ) ,
TARGET_STRING ( "Mean" ) , 0 , 5 , 0 } , { 167 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Earth Horizon Sensor/phi" ) ,
TARGET_STRING ( "StdDev" ) , 0 , 5 , 0 } , { 168 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Earth Horizon Sensor/phi" ) ,
TARGET_STRING ( "Seed" ) , 0 , 5 , 0 } , { 169 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Earth Horizon Sensor/psi" ) ,
TARGET_STRING ( "Mean" ) , 0 , 5 , 0 } , { 170 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Earth Horizon Sensor/psi" ) ,
TARGET_STRING ( "StdDev" ) , 0 , 5 , 0 } , { 171 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Earth Horizon Sensor/psi" ) ,
TARGET_STRING ( "Seed" ) , 0 , 5 , 0 } , { 172 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Earth Horizon Sensor/theta" ) ,
TARGET_STRING ( "Mean" ) , 0 , 5 , 0 } , { 173 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Earth Horizon Sensor/theta" ) ,
TARGET_STRING ( "StdDev" ) , 0 , 5 , 0 } , { 174 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Earth Horizon Sensor/theta" ) ,
TARGET_STRING ( "Seed" ) , 0 , 5 , 0 } , { 175 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/If Action Subsystem/Integrator6" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 3 , 0 } , { 176 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/If Action Subsystem1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 177 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/If Action Subsystem3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 178 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Magnetic Sensor/phi" ) , TARGET_STRING
( "Mean" ) , 0 , 5 , 0 } , { 179 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Magnetic Sensor/phi" ) , TARGET_STRING
( "StdDev" ) , 0 , 5 , 0 } , { 180 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Magnetic Sensor/phi" ) , TARGET_STRING
( "Seed" ) , 0 , 5 , 0 } , { 181 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Magnetic Sensor/psi" ) , TARGET_STRING
( "Mean" ) , 0 , 5 , 0 } , { 182 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Magnetic Sensor/psi" ) , TARGET_STRING
( "StdDev" ) , 0 , 5 , 0 } , { 183 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Magnetic Sensor/psi" ) , TARGET_STRING
( "Seed" ) , 0 , 5 , 0 } , { 184 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Magnetic Sensor/theta" ) ,
TARGET_STRING ( "Mean" ) , 0 , 5 , 0 } , { 185 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Magnetic Sensor/theta" ) ,
TARGET_STRING ( "StdDev" ) , 0 , 5 , 0 } , { 186 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Magnetic Sensor/theta" ) ,
TARGET_STRING ( "Seed" ) , 0 , 5 , 0 } , { 187 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Real sun sensor/phi" ) , TARGET_STRING
( "Mean" ) , 0 , 5 , 0 } , { 188 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Real sun sensor/phi" ) , TARGET_STRING
( "StdDev" ) , 0 , 5 , 0 } , { 189 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Real sun sensor/phi" ) , TARGET_STRING
( "Seed" ) , 0 , 5 , 0 } , { 190 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Real sun sensor/psi" ) , TARGET_STRING
( "Mean" ) , 0 , 5 , 0 } , { 191 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Real sun sensor/psi" ) , TARGET_STRING
( "StdDev" ) , 0 , 5 , 0 } , { 192 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Real sun sensor/psi" ) , TARGET_STRING
( "Seed" ) , 0 , 5 , 0 } , { 193 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Real sun sensor/xi" ) , TARGET_STRING (
"Mean" ) , 0 , 5 , 0 } , { 194 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Real sun sensor/xi" ) , TARGET_STRING (
"StdDev" ) , 0 , 5 , 0 } , { 195 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Real sun sensor/xi" ) , TARGET_STRING (
"Seed" ) , 0 , 5 , 0 } , { 196 , TARGET_STRING (
"Final_project/ATTITUDE DETERMINATION/Subsystem/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 5 , 0 } , { 197 , TARGET_STRING (
"Final_project/Approximate orbit model/Sun direction wrt INERTIAL FRAME/ " )
, TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 198 , TARGET_STRING (
 "Final_project/Approximate orbit model/Sun direction wrt INERTIAL FRAME/Inclination of Earth's Rotation axis [deg]"
) , TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 199 , TARGET_STRING (
 "Final_project/Approximate orbit model/Sun direction wrt INERTIAL FRAME/mean radius of Earth orbit around Sun [Km]"
) , TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 200 , TARGET_STRING (
 "Final_project/Approximate orbit model/Sun direction wrt INERTIAL FRAME/period of Earth orbit around the sun"
) , TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 201 , TARGET_STRING (
 "Final_project/Approximate orbit model/orbit model - S//C orbit wrt Earth/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 202 ,
TARGET_STRING ( "Final_project/Attitude error/omega_L//N/w_x,w_y" ) ,
TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 203 , TARGET_STRING (
"Final_project/CMG actuator/Degrees to Radians/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 5 , 0 } , { 204 , TARGET_STRING (
 "Final_project/Approximate orbit model/Sun direction wrt INERTIAL FRAME/Degrees to Radians/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 5 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { {
205 , TARGET_STRING ( "F_e" ) , 0 , 5 , 0 } , { 206 , TARGET_STRING ( "G" ) ,
0 , 5 , 0 } , { 207 , TARGET_STRING ( "GK" ) , 0 , 9 , 0 } , { 208 ,
TARGET_STRING ( "I_x" ) , 0 , 5 , 0 } , { 209 , TARGET_STRING ( "I_y" ) , 0 ,
5 , 0 } , { 210 , TARGET_STRING ( "I_z" ) , 0 , 5 , 0 } , { 211 ,
TARGET_STRING ( "RAAN" ) , 0 , 5 , 0 } , { 212 , TARGET_STRING ( "R_e" ) , 0
, 5 , 0 } , { 213 , TARGET_STRING ( "a" ) , 0 , 5 , 0 } , { 214 ,
TARGET_STRING ( "alfa_earth" ) , 0 , 5 , 0 } , { 215 , TARGET_STRING (
"alfa_mag" ) , 0 , 5 , 0 } , { 216 , TARGET_STRING ( "alfa_sun" ) , 0 , 5 , 0
} , { 217 , TARGET_STRING ( "e" ) , 0 , 5 , 0 } , { 218 , TARGET_STRING (
"gm" ) , 0 , 10 , 0 } , { 219 , TARGET_STRING ( "gn" ) , 0 , 10 , 0 } , { 220
, TARGET_STRING ( "gvali" ) , 0 , 10 , 0 } , { 221 , TARGET_STRING ( "hm" ) ,
0 , 10 , 0 } , { 222 , TARGET_STRING ( "hn" ) , 0 , 10 , 0 } , { 223 ,
TARGET_STRING ( "hvali" ) , 0 , 10 , 0 } , { 224 , TARGET_STRING ( "i" ) , 0
, 5 , 0 } , { 225 , TARGET_STRING ( "m_earth" ) , 0 , 5 , 0 } , { 226 ,
TARGET_STRING ( "mu_e" ) , 0 , 5 , 0 } , { 227 , TARGET_STRING ( "n" ) , 0 ,
5 , 0 } , { 228 , TARGET_STRING ( "omega" ) , 0 , 5 , 0 } , { 229 ,
TARGET_STRING ( "omega_e" ) , 0 , 5 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . ne22ldnw5w [ 0 ] , & rtB .
ne22ldnw5w [ 0 ] , & rtB . ctszuq254c [ 0 ] , & rtB . ksru50glpy [ 0 ] , &
rtB . k3gozdqg2o [ 0 ] , & rtB . i5gni5jpn0 [ 0 ] , & rtB . gbopjhs31j [ 0 ]
, & rtB . hmhfxu54r4 [ 0 ] , & rtB . k33bzvkicz [ 0 ] , & rtB . b0w4srbueq [
0 ] , & rtB . brzazytz5j [ 0 ] , & rtB . eh54vwsh45 [ 0 ] , & rtB .
oqsaecduyj , & rtB . anr2sc1zx1 [ 0 ] , & rtB . gvact2smmw [ 0 ] , & rtB .
p3njf3b0vq [ 0 ] , & rtB . kb5c2c4jlf [ 0 ] , & rtB . h5ke22sfh5 [ 0 ] , &
rtB . h5hs4aw2rr [ 0 ] , & rtB . jnwqbmkojt [ 0 ] , & rtB . nhuthseoki [ 0 ]
, & rtB . ne22ldnw5w [ 0 ] , & rtB . kmm3rkbbyq [ 0 ] , & rtB . aefa10eb0v [
0 ] , & rtB . pvajrq2lxe [ 0 ] , & rtB . pgmvvyxdii [ 0 ] , & rtB .
ggcir2u5vz [ 0 ] , & rtB . p3iscummn3 [ 0 ] , & rtB . dmqnbaxtxv [ 0 ] , &
rtB . crc2i5ltsq [ 0 ] , & rtB . fqqi05xdci [ 0 ] , & rtB . hro3fstxlx [ 0 ]
, & rtB . jnvj0fqsds [ 0 ] , & rtB . aglermfqwf [ 0 ] , & rtB . aqboqamxb3 [
0 ] , & rtB . dsrxzkpxun , & rtB . dsrxzkpxun , & rtB . dsrxzkpxun , & rtB .
ngcynor04m [ 0 ] , & rtB . hyavuifm1w . bogehaw2ze [ 0 ] , & rtB . inz2gdmoa0
. bogehaw2ze [ 0 ] , & rtB . kvelh2qyt3 [ 0 ] , & rtB . i4btlqy2gt [ 0 ] , &
rtB . fp1tgwmu5f [ 0 ] , & rtB . e0jir2rqfh , & rtB . buaztywrb3 [ 0 ] , &
rtB . axsuqe43xb [ 0 ] , & rtB . db2roqckzz [ 0 ] , & rtB . decs43f2is [ 0 ]
, & rtB . di2wm3ewqa [ 0 ] , & rtB . o0ipnhiivw [ 0 ] , & rtB . mjfbd5uniz ,
& rtB . m5nfjzbcxv [ 0 ] , & rtB . m5nfjzbcxv [ 0 ] , & rtB . pmztpun2vh , &
rtB . m5nfjzbcxv [ 0 ] , & rtB . aj4jzc1bo5 [ 0 ] , & rtB . g0es3p0gmy , &
rtB . fwqwoogzcg , & rtB . eyxzlqyvry , & rtB . jr1yrgpnpl , & rtB .
j4jfsufayw [ 0 ] , & rtB . aqep4b5uwq , & rtB . kvkrilhl2b , & rtB .
ehlapyi5ev , & rtB . npupqbagjs [ 0 ] , & rtB . ne22ldnw5w [ 0 ] , & rtB .
ne22ldnw5w [ 0 ] , & rtB . jecmnvf0ab , & rtB . dolbb03las [ 0 ] , & rtB .
pwa11vfmjs [ 0 ] , & rtB . jofjaqksuy [ 0 ] , & rtB . hrixyxkgnl , & rtB .
fg3wanddgd [ 0 ] , & rtB . jagqjl2jmu [ 0 ] , & rtB . na14ipaqql . jkie4iyale
[ 0 ] , & rtB . m3vn1reta5 [ 0 ] , & rtB . nzytji2b3o [ 0 ] , & rtB .
ldpez2gepa [ 0 ] , & rtB . cmhel42bh2 [ 0 ] , & rtB . aqboqamxb3 [ 0 ] , &
rtB . my2dz1bzgp . jkie4iyale [ 0 ] , & rtB . dlyofrzwt5 [ 0 ] , & rtB .
k0ppvs40sj [ 0 ] , & rtB . kcfbhtallx [ 0 ] , & rtB . a5ucankgx3 [ 0 ] , &
rtB . pagbklhmrp [ 0 ] , & rtB . l0mxqqvkmc [ 0 ] , & rtB . ht5wzolgc1 [ 0 ]
, & rtB . mpqeirtcdu [ 0 ] , & rtB . lh2ujhpalo [ 0 ] , & rtB . ccgkybaogm [
0 ] , & rtB . d4qr1kojyz [ 0 ] , & rtB . j0fcylznkn [ 0 ] , & rtB .
m32spuuw4o [ 0 ] , & rtB . feu5kxotcq [ 0 ] , & rtB . hiw20ytj4e [ 0 ] , &
rtB . geyyaqa4ya [ 0 ] , & rtB . hannzdbw4i [ 0 ] , & rtB . jjadz2nwsm [ 0 ]
, ( & rtB . geyyaqa4ya [ 0 ] + 2 ) , ( & rtB . geyyaqa4ya [ 0 ] + 1 ) , & rtB
. geyyaqa4ya [ 0 ] , & rtB . hdla5n0zmc [ 0 ] , & rtB . ioqnm4rp2f , & rtB .
akz4wjrmo0 , & rtB . e4wdtksuab , & rtB . a1jmuxsaiv [ 0 ] , & rtB .
jdawsowjrv , ( & rtB . a1jmuxsaiv [ 0 ] + 2 ) , & rtB . iotd255tw0 , ( & rtB
. a1jmuxsaiv [ 0 ] + 1 ) , & rtB . kkrfakq0mg [ 0 ] , & rtB . a1jmuxsaiv [ 0
] , & rtB . lvaafrmesm , & rtB . pgla1jvh3e , & rtB . fkj0rfxikb [ 0 ] , &
rtB . ip4tnbacut , & rtB . kenhd3kcjp , & rtB . flarix3pcb [ 0 ] , & rtB .
mkahyb353c [ 0 ] , & rtB . oonndlkyas [ 0 ] , & rtB . onkbusalzg [ 0 ] , &
rtB . b3lvhbnsnu [ 0 ] , & rtB . cyqsqy0bbk , & rtB . m5nfjzbcxv [ 0 ] , &
rtB . m5nfjzbcxv [ 0 ] , & rtB . f1yvftaxo2 [ 0 ] , & rtB . cy1v1zxwf2 [ 0 ]
, & rtB . knn10a4nnc [ 0 ] , & rtP . Constant4_Value [ 0 ] , & rtP .
Inertiavector_Value [ 0 ] , & rtP . Inertiavector1_Value [ 0 ] , & rtP .
Omega0vector_Value [ 0 ] , & rtP . Tuningcoeff_Value , & rtP .
Tuningparameter_Value , & rtP . bt0_Value [ 0 ] , & rtP . omegad_Value [ 0 ]
, & rtP . DetumblingGain_Gain , & rtP . Integrator_IC_ltduz3t0gp [ 0 ] , &
rtP . Integrator3_IC [ 0 ] , & rtP . Integrator4_IC [ 0 ] , & rtP .
Integrator5_IC [ 0 ] , & rtP . ARWNOISE_Mean , & rtP . ARWNOISE_StdDev [ 0 ]
, & rtP . ARWNOISE_Seed , & rtP . RRWNOISE_Mean , & rtP . RRWNOISE_StdDev [ 0
] , & rtP . RRWNOISE_Seed , & rtP . ManualSwitch_CurrentSetting , & rtP .
rho_Value , & rtP . Switch_Threshold , & rtP . Gymbalaxistilt1_Value , & rtP
. Gyrospeed_Value , & rtP . Inertiaofwheel_Value , & rtP .
Gain_Gain_gegphuevyb , & rtP . Integrator_IC [ 0 ] , & rtP .
MAXIMUMGIMBALRATE_UpperSat , & rtP . MAXIMUMGIMBALRATE_LowerSat , & rtP .
Gain1_Gain_gamvzqgrli , & rtP . Constant6_Value [ 0 ] , & rtP .
Constant1_Value , & rtP . Constant2_Value [ 0 ] , & rtP . Gain4_Gain , & rtP
. Constant1_Value_ak2ogm0bur [ 0 ] , & rtP . Constant3_Value , & rtP .
phi_Mean , & rtP . phi_StdDev , & rtP . phi_Seed , & rtP . psi_Mean , & rtP .
psi_StdDev , & rtP . psi_Seed , & rtP . theta_Mean , & rtP . theta_StdDev , &
rtP . theta_Seed , & rtP . Integrator6_IC [ 0 ] , & rtP . geox5czrb34 .
Constant_Value , & rtP . pfanvlh2dr . Constant_Value , & rtP .
phi_Mean_p0kq0rtldo , & rtP . phi_StdDev_dkurksjsig , & rtP .
phi_Seed_irem2jkqzf , & rtP . psi_Mean_dw5aio5m2x , & rtP .
psi_StdDev_cxrntnbbi4 , & rtP . psi_Seed_j4mig0d0wa , & rtP .
theta_Mean_oiiju3ziio , & rtP . theta_StdDev_cz5h30rgng , & rtP .
theta_Seed_jytd3ezmcj , & rtP . phi_Mean_nqrm2dpg35 , & rtP .
phi_StdDev_msvebjj1dn , & rtP . phi_Seed_pxcyibbjyy , & rtP .
psi_Mean_iicgv5oqe1 , & rtP . psi_StdDev_i2auns3m0i , & rtP .
psi_Seed_nhbuxltuo0 , & rtP . xi_Mean , & rtP . xi_StdDev , & rtP . xi_Seed ,
& rtP . Gain_Gain , & rtP . _Value , & rtP .
InclinationofEarthsRotationaxisdeg_Value , & rtP .
meanradiusofEarthorbitaroundSunKm_Value , & rtP .
periodofEarthorbitaroundthesun_Value , & rtP . Integrator_IC_hsiqnplk4j , &
rtP . w_xw_y_Value , & rtP . Gain1_Gain_mn5dgmnkn4 , & rtP . Gain1_Gain , &
rtP . F_e , & rtP . G , & rtP . GK [ 0 ] , & rtP . I_x , & rtP . I_y , & rtP
. I_z , & rtP . RAAN , & rtP . R_e , & rtP . a , & rtP . alfa_earth , & rtP .
alfa_mag , & rtP . alfa_sun , & rtP . e , & rtP . gm [ 0 ] , & rtP . gn [ 0 ]
, & rtP . gvali [ 0 ] , & rtP . hm [ 0 ] , & rtP . hn [ 0 ] , & rtP . hvali [
0 ] , & rtP . i , & rtP . m_earth , & rtP . mu_e , & rtP . n , & rtP . omega
, & rtP . omega_e , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) }
;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } , {
"unsigned char" , "uint8_T" , 0 , 0 , sizeof ( uint8_T ) , SS_UINT8 , 0 , 0 ,
0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_SCALAR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 2 , 2 , 0 } , { rtwCAPI_VECTOR , 12 , 2 , 0 } , {
rtwCAPI_VECTOR , 14 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 16 , 2 , 0 } , {
rtwCAPI_VECTOR , 18 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] =
{ 3 , 1 , 1 , 3 , 4 , 1 , 3 , 3 , 6 , 1 , 1 , 1 , 1 , 6 , 1 , 4 , 3 , 6 , 104
, 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0 , 0.1 , 1.0 } ;
static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } , { ( NULL ) , ( NULL ) ,
3 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , 2 , 0 } , { ( const void * ) & rtcapiStoredFloats
[ 0 ] , ( const void * ) & rtcapiStoredFloats [ 2 ] , 1 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 130 , ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockParameters , 75 , rtModelParameters , 25 }
, { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap ,
rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" , { 733300408U
, 1652556171U , 1646324833U , 2685721454U } , ( NULL ) , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * Final_project_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Final_project_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Final_project_host_InitializeDataMapInfo (
Final_project_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
