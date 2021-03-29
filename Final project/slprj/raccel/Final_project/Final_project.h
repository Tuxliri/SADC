#ifndef RTW_HEADER_Final_project_h_
#define RTW_HEADER_Final_project_h_
#include <stddef.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef Final_project_COMMON_INCLUDES_
#define Final_project_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "Final_project_types.h"
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#define MODEL_NAME Final_project
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (113) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (42)   
#elif NCSTATES != 42
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T jkie4iyale [ 9 ] ; } k24fnv1ek4 ; typedef struct {
int8_T ie02gmwcra ; } najuzfo151 ; typedef struct { real_T bogehaw2ze [ 3 ] ;
} dhidnsjh4c ; typedef struct { int8_T fjromfvqvr ; } oaxjcbbmyf ; typedef
struct { int8_T iod0jhjcju ; } kcz5rf35iq ; typedef struct { real_T
buaztywrb3 [ 4 ] ; real_T jnwqbmkojt [ 3 ] ; real_T oqsaecduyj ; real_T
nhuthseoki [ 9 ] ; real_T kenhd3kcjp ; real_T kmm3rkbbyq [ 9 ] ; real_T
crc2i5ltsq [ 3 ] ; real_T ne22ldnw5w [ 3 ] ; real_T p3iscummn3 [ 3 ] ; real_T
dmqnbaxtxv [ 3 ] ; real_T kb5c2c4jlf [ 3 ] ; real_T onkbusalzg [ 6 ] ; real_T
b3lvhbnsnu [ 3 ] ; real_T o0ipnhiivw [ 3 ] ; real_T db2roqckzz [ 4 ] ; real_T
decs43f2is [ 4 ] ; real_T axsuqe43xb [ 3 ] ; real_T mkahyb353c [ 6 ] ; real_T
oonndlkyas [ 3 ] ; real_T di2wm3ewqa [ 3 ] ; real_T p3njf3b0vq [ 6 ] ; real_T
aefa10eb0v [ 3 ] ; real_T h5ke22sfh5 [ 3 ] ; real_T ggcir2u5vz [ 3 ] ; real_T
h5hs4aw2rr [ 4 ] ; real_T pmztpun2vh ; real_T m3vn1reta5 [ 3 ] ; real_T
nzytji2b3o [ 3 ] ; real_T iotd255tw0 ; real_T a1jmuxsaiv [ 3 ] ; real_T
kkrfakq0mg [ 3 ] ; real_T e4wdtksuab ; real_T ioqnm4rp2f ; real_T dsrxzkpxun
; real_T geyyaqa4ya [ 3 ] ; real_T hannzdbw4i [ 3 ] ; real_T jjadz2nwsm [ 3 ]
; real_T hdla5n0zmc [ 3 ] ; real_T pagbklhmrp [ 3 ] ; real_T k0ppvs40sj [ 3 ]
; real_T mpqeirtcdu [ 3 ] ; real_T d4qr1kojyz [ 9 ] ; real_T knn10a4nnc [ 3 ]
; real_T dlyofrzwt5 [ 3 ] ; real_T l0mxqqvkmc [ 3 ] ; real_T kcfbhtallx [ 3 ]
; real_T lh2ujhpalo [ 3 ] ; real_T j0fcylznkn [ 9 ] ; real_T ht5wzolgc1 [ 3 ]
; real_T a5ucankgx3 [ 3 ] ; real_T ccgkybaogm [ 3 ] ; real_T m32spuuw4o [ 9 ]
; real_T feu5kxotcq [ 9 ] ; real_T ngcynor04m [ 9 ] ; real_T m5nfjzbcxv [ 9 ]
; real_T i4btlqy2gt [ 3 ] ; real_T pwa11vfmjs [ 9 ] ; real_T jofjaqksuy [ 9 ]
; real_T fp1tgwmu5f [ 3 ] ; real_T kvelh2qyt3 [ 3 ] ; real_T hrixyxkgnl ;
real_T fg3wanddgd [ 6 ] ; real_T jagqjl2jmu [ 3 ] ; real_T hro3fstxlx [ 3 ] ;
real_T aglermfqwf [ 3 ] ; real_T jnvj0fqsds [ 3 ] ; real_T ldpez2gepa [ 3 ] ;
real_T npupqbagjs [ 3 ] ; real_T ehlapyi5ev ; real_T eyxzlqyvry ; real_T
kvkrilhl2b ; real_T fwqwoogzcg ; real_T aqep4b5uwq ; real_T g0es3p0gmy ;
real_T jr1yrgpnpl ; real_T j4jfsufayw [ 3 ] ; real_T aj4jzc1bo5 [ 3 ] ;
real_T dolbb03las [ 3 ] ; real_T f1yvftaxo2 [ 6 ] ; real_T cy1v1zxwf2 [ 3 ] ;
real_T pgmvvyxdii [ 3 ] ; real_T pvajrq2lxe [ 3 ] ; real_T akz4wjrmo0 ;
real_T jdawsowjrv ; real_T lvaafrmesm ; real_T pgla1jvh3e ; real_T mjfbd5uniz
; real_T flarix3pcb [ 3 ] ; real_T cyqsqy0bbk ; real_T e0jir2rqfh ; real_T
anr2sc1zx1 [ 3 ] ; real_T gvact2smmw [ 3 ] ; real_T jecmnvf0ab ; real_T
brzazytz5j [ 6 ] ; real_T eh54vwsh45 [ 3 ] ; real_T b0w4srbueq [ 3 ] ; real_T
k33bzvkicz [ 3 ] ; real_T hmhfxu54r4 [ 9 ] ; real_T gbopjhs31j [ 3 ] ; real_T
i5gni5jpn0 [ 9 ] ; real_T k3gozdqg2o [ 4 ] ; real_T ksru50glpy [ 3 ] ; real_T
ctszuq254c [ 3 ] ; real_T ip4tnbacut ; real_T fkj0rfxikb [ 3 ] ; real_T
hiw20ytj4e [ 3 ] ; real_T aqboqamxb3 [ 9 ] ; real_T cmhel42bh2 [ 9 ] ; real_T
fqqi05xdci [ 3 ] ; dhidnsjh4c inz2gdmoa0 ; dhidnsjh4c hyavuifm1w ; k24fnv1ek4
my2dz1bzgp ; k24fnv1ek4 na14ipaqql ; } B ; typedef struct { real_T ibb0msb3ue
[ 3 ] ; real_T nhf0go2f0l ; real_T fa3l1x4zjw ; real_T ec4iczeuop ; real_T
mxct422gc5 ; real_T hjp0iqtsnv ; real_T i1kfofikbc ; real_T jkyamiugmq ;
real_T o4n211i2ui ; real_T mfs3ug1ss0 ; real_T dslujyjxf5 ; real_T b3ejbi1eqr
[ 3 ] ; real_T bvvwmumrhs ; real_T c4dd1uf5cu [ 3 ] ; real_T mpbkk0mzty [ 3 ]
; struct { void * LoggedData ; } bf0wx5i3d2 ; struct { void * LoggedData ; }
lmbiyygj1j ; struct { void * LoggedData [ 2 ] ; } odovor5zlm ; struct { void
* LoggedData ; } aciexyi41t ; struct { void * LoggedData ; } fezqwh42l5 ;
struct { void * LoggedData ; } bg1zgnoceo ; struct { void * LoggedData ; }
extsqgayhv ; struct { void * LoggedData ; } cxxenrhbyw ; struct { void *
LoggedData ; } ed4pfucocc ; struct { void * LoggedData [ 2 ] ; } oaunodnfaz ;
struct { void * LoggedData ; } fswxmqi5q4 ; struct { void * LoggedData ; }
iyacpvhnn1 ; struct { void * LoggedData [ 3 ] ; } afpyxf3dpg ; struct { void
* LoggedData ; } ebogxyqrct ; struct { void * LoggedData ; } b0orvbplq1 ;
struct { void * LoggedData ; } mz5jbmjnbk ; struct { void * LoggedData ; }
ee1yufqlgj ; struct { void * LoggedData ; } lqoeexexlc ; struct { void *
LoggedData ; } pzl0ps1sgf ; struct { void * LoggedData ; } fzu0j0csxd ;
struct { void * LoggedData ; } m0ewcdi1la ; struct { void * LoggedData ; }
pyfpqeegkx ; struct { void * LoggedData ; } ktfoff0c1y ; struct { void *
LoggedData ; } hcmgx2hc5x ; struct { void * LoggedData ; } m1hkca3izs ;
uint32_T azi1v4q3r4 [ 3 ] ; uint32_T ajwa5oigiq ; uint32_T k1cyo3ic4z ;
uint32_T gzh33iv0mh ; uint32_T gpmzgjuozq ; uint32_T erahgh0zpk ; uint32_T
b0fewzdtg1 ; uint32_T jzbfaxoaz4 ; uint32_T dc0ryh5mbb ; uint32_T a41rrbiaut
; uint32_T mjetb5jzdi [ 3 ] ; int_T o15the1ksz ; int_T btxv3caz21 ; int_T
ipolmn11w5 [ 4 ] ; int8_T jzg2v02ptv ; int8_T b2pp5qcbxs ; int8_T ifnw2qfqxj
; int8_T o03ihhvu3e ; int8_T ic2qykr33o ; int8_T cfspruispf ; int8_T
fmsxqmnuh0 ; int8_T fo0xzwvgga ; int8_T b2iz5oj0mf ; int8_T l3rcki4h0b ;
int8_T dmalgfdtrs ; int8_T mn0b4y0wpz ; kcz5rf35iq atqljxdp0d ; kcz5rf35iq
pwl3yyzylbp ; oaxjcbbmyf kzyworijhb ; oaxjcbbmyf jda3fmwzpyl ; najuzfo151
pfanvlh2dr ; najuzfo151 geox5czrb34 ; } DW ; typedef struct { real_T
nw3lgdo4ll [ 4 ] ; real_T dspzybtrlj [ 3 ] ; real_T jwpzday0b1 [ 9 ] ; real_T
cihjvn0cmd ; real_T m5cncmmh3t [ 3 ] ; real_T jvfedonto2 [ 6 ] ; real_T
hqsmobf5wk [ 3 ] ; real_T iva5vtj1tw [ 4 ] ; real_T ka0tu4yhzy [ 9 ] ; } X ;
typedef struct { real_T nw3lgdo4ll [ 4 ] ; real_T dspzybtrlj [ 3 ] ; real_T
jwpzday0b1 [ 9 ] ; real_T cihjvn0cmd ; real_T m5cncmmh3t [ 3 ] ; real_T
jvfedonto2 [ 6 ] ; real_T hqsmobf5wk [ 3 ] ; real_T iva5vtj1tw [ 4 ] ; real_T
ka0tu4yhzy [ 9 ] ; } XDot ; typedef struct { boolean_T nw3lgdo4ll [ 4 ] ;
boolean_T dspzybtrlj [ 3 ] ; boolean_T jwpzday0b1 [ 9 ] ; boolean_T
cihjvn0cmd ; boolean_T m5cncmmh3t [ 3 ] ; boolean_T jvfedonto2 [ 6 ] ;
boolean_T hqsmobf5wk [ 3 ] ; boolean_T iva5vtj1tw [ 4 ] ; boolean_T
ka0tu4yhzy [ 9 ] ; } XDis ; typedef struct { real_T nw3lgdo4ll [ 4 ] ; real_T
dspzybtrlj [ 3 ] ; real_T jwpzday0b1 [ 9 ] ; real_T cihjvn0cmd ; real_T
m5cncmmh3t [ 3 ] ; real_T jvfedonto2 [ 6 ] ; real_T hqsmobf5wk [ 3 ] ; real_T
iva5vtj1tw [ 4 ] ; real_T ka0tu4yhzy [ 9 ] ; } CStateAbsTol ; typedef struct
{ real_T nw3lgdo4ll [ 4 ] ; real_T dspzybtrlj [ 3 ] ; real_T jwpzday0b1 [ 9 ]
; real_T cihjvn0cmd ; real_T m5cncmmh3t [ 3 ] ; real_T jvfedonto2 [ 6 ] ;
real_T hqsmobf5wk [ 3 ] ; real_T iva5vtj1tw [ 4 ] ; real_T ka0tu4yhzy [ 9 ] ;
} CXPtMin ; typedef struct { real_T nw3lgdo4ll [ 4 ] ; real_T dspzybtrlj [ 3
] ; real_T jwpzday0b1 [ 9 ] ; real_T cihjvn0cmd ; real_T m5cncmmh3t [ 3 ] ;
real_T jvfedonto2 [ 6 ] ; real_T hqsmobf5wk [ 3 ] ; real_T iva5vtj1tw [ 4 ] ;
real_T ka0tu4yhzy [ 9 ] ; } CXPtMax ; typedef struct { real_T m3tmoqy1t5 ;
real_T mpzxzkrlod [ 4 ] ; real_T jn1mzxwqhi [ 4 ] ; real_T mhpqdkuiqh ;
real_T l0ba1zqnns ; } ZCV ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
DataMapInfo ; struct e305rupqk1_ { real_T Constant_Value ; } ; struct P_ {
real_T F_e ; real_T G ; real_T GK [ 18 ] ; real_T I_x ; real_T I_y ; real_T
I_z ; real_T RAAN ; real_T R_e ; real_T a ; real_T alfa_earth ; real_T
alfa_mag ; real_T alfa_sun ; real_T e ; real_T gm [ 104 ] ; real_T gn [ 104 ]
; real_T gvali [ 104 ] ; real_T hm [ 104 ] ; real_T hn [ 104 ] ; real_T hvali
[ 104 ] ; real_T i ; real_T m_earth ; real_T mu_e ; real_T n ; real_T omega ;
real_T omega_e ; real_T DetumblingGain_Gain ; real_T Integrator6_IC [ 9 ] ;
real_T Integrator_IC [ 4 ] ; real_T Integrator4_IC [ 3 ] ; real_T
Integrator5_IC [ 9 ] ; real_T Integrator_IC_hsiqnplk4j ; real_T
MAXIMUMGIMBALRATE_UpperSat ; real_T MAXIMUMGIMBALRATE_LowerSat ; real_T
Integrator_IC_ltduz3t0gp [ 6 ] ; real_T ARWNOISE_Mean ; real_T
ARWNOISE_StdDev [ 3 ] ; real_T ARWNOISE_Seed ; real_T Integrator3_IC [ 4 ] ;
real_T theta_Mean ; real_T theta_StdDev ; real_T theta_Seed ; real_T psi_Mean
; real_T psi_StdDev ; real_T psi_Seed ; real_T phi_Mean ; real_T phi_StdDev ;
real_T phi_Seed ; real_T Gain_Gain ; real_T xi_Mean ; real_T xi_StdDev ;
real_T xi_Seed ; real_T psi_Mean_iicgv5oqe1 ; real_T psi_StdDev_i2auns3m0i ;
real_T psi_Seed_nhbuxltuo0 ; real_T phi_Mean_nqrm2dpg35 ; real_T
phi_StdDev_msvebjj1dn ; real_T phi_Seed_pxcyibbjyy ; real_T
theta_Mean_oiiju3ziio ; real_T theta_StdDev_cz5h30rgng ; real_T
theta_Seed_jytd3ezmcj ; real_T psi_Mean_dw5aio5m2x ; real_T
psi_StdDev_cxrntnbbi4 ; real_T psi_Seed_j4mig0d0wa ; real_T
phi_Mean_p0kq0rtldo ; real_T phi_StdDev_dkurksjsig ; real_T
phi_Seed_irem2jkqzf ; real_T Switch_Threshold ; real_T Gain4_Gain ; real_T
RRWNOISE_Mean ; real_T RRWNOISE_StdDev [ 3 ] ; real_T RRWNOISE_Seed ; real_T
rho_Value ; real_T _Value ; real_T InclinationofEarthsRotationaxisdeg_Value ;
real_T Gain1_Gain ; real_T periodofEarthorbitaroundthesun_Value ; real_T
meanradiusofEarthorbitaroundSunKm_Value ; real_T Gain1_Gain_gamvzqgrli ;
real_T w_xw_y_Value ; real_T Gymbalaxistilt1_Value ; real_T
Gain1_Gain_mn5dgmnkn4 ; real_T Gyrospeed_Value ; real_T Gain_Gain_gegphuevyb
; real_T Inertiaofwheel_Value ; real_T Constant4_Value [ 3 ] ; real_T
Constant6_Value [ 9 ] ; real_T Constant1_Value ; real_T Constant2_Value [ 3 ]
; real_T Inertiavector_Value [ 3 ] ; real_T Inertiavector1_Value [ 3 ] ;
real_T Tuningparameter_Value ; real_T omegad_Value [ 3 ] ; real_T
Tuningcoeff_Value ; real_T Constant1_Value_ak2ogm0bur [ 3 ] ; real_T
Constant3_Value ; real_T Omega0vector_Value [ 3 ] ; real_T bt0_Value [ 3 ] ;
uint8_T ManualSwitch_CurrentSetting ; e305rupqk1 pfanvlh2dr ; e305rupqk1
geox5czrb34 ; } ; extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern B
rtB ; extern X rtX ; extern DW rtDW ; extern P rtP ; extern const
rtwCAPI_ModelMappingStaticInfo * Final_project_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( void
) ;
#endif
