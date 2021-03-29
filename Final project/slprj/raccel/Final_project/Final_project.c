#include "rt_logging_mmi.h"
#include "Final_project_capi.h"
#include <math.h>
#include "Final_project.h"
#include "Final_project_private.h"
#include "Final_project_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , & stopRequested ) ; }
rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "10.1 (R2020a) 18-Nov-2019" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
"slprj\\raccel\\Final_project\\Final_project_Jpattern.mat" ; const int_T
gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern void * gblAperiodicPartitionHitTimes ; const int_T
gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [ ] = { - 1 }
; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 , 1 } ; const char *
raccelLoadInputsAndAperiodicHitTimes ( const char * inportFileName , int *
matFileFormat ) { return rt_RapidReadInportsMatFile ( inportFileName ,
matFileFormat , 1 ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; static real_T h0a4zynezg ( int32_T n , const real_T x [ 12 ] ,
int32_T ix0 ) ; static real_T h0a4zynezgl ( int32_T n , const real_T x [ 4 ]
, int32_T ix0 ) ; static void olndydqhymzo ( int32_T n , real_T a , const
real_T x [ 3 ] , int32_T ix0 , real_T y [ 12 ] , int32_T iy0 ) ; static void
olndydqhymz ( int32_T n , real_T a , const real_T x [ 12 ] , int32_T ix0 ,
real_T y [ 3 ] , int32_T iy0 ) ; static real_T ioaya51wqz ( int32_T n , const
real_T x [ 9 ] , int32_T ix0 , const real_T y [ 9 ] , int32_T iy0 ) ; static
void cclwscof0a ( int32_T n , real_T a , int32_T ix0 , real_T y [ 9 ] ,
int32_T iy0 ) ; static real_T a5z0o2j2vlhi ( int32_T n , const real_T x [ 16
] , int32_T ix0 , const real_T y [ 16 ] , int32_T iy0 ) ; static void
olndydqhymzouf ( int32_T n , real_T a , int32_T ix0 , real_T y [ 16 ] ,
int32_T iy0 ) ; static void jcpc2pyitk ( real_T a , real_T x [ 9 ] , int32_T
ix0 ) ; static void czrnbyswklf ( real_T a , real_T x [ 16 ] , int32_T ix0 )
; static void d1nrspa04o ( real_T x [ 16 ] , int32_T ix0 , int32_T iy0 ) ;
static void bqzpevnceh ( real_T x [ 9 ] , int32_T ix0 , int32_T iy0 ) ;
static void gooahaodf4 ( real_T * a , real_T * b , real_T * c , real_T * s )
; static void pxcaga2q2e ( real_T x [ 16 ] , int32_T ix0 , int32_T iy0 ,
real_T c , real_T s ) ; static void gi4gcqiapd ( real_T x [ 9 ] , int32_T ix0
, int32_T iy0 , real_T c , real_T s ) ; static real_T a5z0o2j2vl ( int32_T n
, const real_T x [ 12 ] , int32_T ix0 , const real_T y [ 12 ] , int32_T iy0 )
; static void olndydqhym ( int32_T n , real_T a , int32_T ix0 , real_T y [ 12
] , int32_T iy0 ) ; static void gsbjhe5ea4 ( const real_T A [ 12 ] , real_T U
[ 9 ] , real_T s [ 3 ] , real_T V [ 16 ] ) ; static real_T acgt4hcqdm2 (
const real_T x [ 3 ] , int32_T ix0 ) ; static void galivxgzcmbr ( int32_T n ,
real_T a , const real_T x [ 4 ] , int32_T ix0 , real_T y [ 12 ] , int32_T iy0
) ; static void galivxgzcmb ( int32_T n , real_T a , const real_T x [ 12 ] ,
int32_T ix0 , real_T y [ 4 ] , int32_T iy0 ) ; static real_T ky341jio0qi (
const real_T x [ 9 ] , const real_T y [ 9 ] , int32_T iy0 ) ; static void
galivxgzcmbrl ( real_T a , real_T y [ 9 ] , int32_T iy0 ) ; static void
ateam5s5ep ( real_T a , real_T x [ 12 ] , int32_T ix0 ) ; static void
h25o40llpqi ( real_T x [ 12 ] , int32_T ix0 , int32_T iy0 ) ; static void
nnfhk5hxiv2 ( real_T x [ 12 ] , int32_T ix0 , int32_T iy0 , real_T c , real_T
s ) ; static void ahliv2534q ( const real_T A [ 12 ] , real_T U [ 12 ] ,
real_T s [ 3 ] , real_T V [ 9 ] ) ; static void i2hqjg5goj ( e0o14le1ty * *
pEmxArray , int32_T numDimensions ) ; static void cijenupcsy ( e0o14le1ty *
emxArray , int32_T oldNumel ) ; static void m3xbjjaurx ( e0o14le1ty * *
pEmxArray ) ; static real_T acgt4hcqdm ( int32_T n , const real_T x [ 9 ] ,
int32_T ix0 ) ; static void cclwscof0ale ( int32_T n , real_T a , const
real_T x [ 3 ] , int32_T ix0 , real_T y [ 9 ] , int32_T iy0 ) ; static void
cclwscof0al ( int32_T n , real_T a , const real_T x [ 9 ] , int32_T ix0 ,
real_T y [ 3 ] , int32_T iy0 ) ; static void famffl5fga ( const real_T A [ 9
] , real_T U [ 9 ] , real_T s [ 3 ] , real_T V [ 9 ] ) ; static real_T
gtyczxxc3d ( const real_T x [ 9 ] ) ; static real_T c4hcjrkkwl ( const real_T
x [ 3 ] ) ; void fmkuo41dvj ( real_T am0hlmkbhi , real_T mbhwj00koy , real_T
ozzcgsdwy2 , k24fnv1ek4 * localB ) { localB -> jkie4iyale [ 0 ] =
muDoubleScalarCos ( mbhwj00koy ) * muDoubleScalarCos ( am0hlmkbhi ) ; localB
-> jkie4iyale [ 3 ] = muDoubleScalarCos ( mbhwj00koy ) * muDoubleScalarSin (
am0hlmkbhi ) * muDoubleScalarSin ( ozzcgsdwy2 ) + muDoubleScalarSin (
mbhwj00koy ) * muDoubleScalarCos ( ozzcgsdwy2 ) ; localB -> jkie4iyale [ 6 ]
= - muDoubleScalarCos ( mbhwj00koy ) * muDoubleScalarSin ( am0hlmkbhi ) *
muDoubleScalarCos ( ozzcgsdwy2 ) + muDoubleScalarSin ( mbhwj00koy ) *
muDoubleScalarSin ( ozzcgsdwy2 ) ; localB -> jkie4iyale [ 1 ] = -
muDoubleScalarSin ( mbhwj00koy ) * muDoubleScalarCos ( am0hlmkbhi ) ; localB
-> jkie4iyale [ 4 ] = - muDoubleScalarSin ( mbhwj00koy ) * muDoubleScalarSin
( am0hlmkbhi ) * muDoubleScalarSin ( ozzcgsdwy2 ) + muDoubleScalarCos (
mbhwj00koy ) * muDoubleScalarCos ( ozzcgsdwy2 ) ; localB -> jkie4iyale [ 7 ]
= muDoubleScalarSin ( mbhwj00koy ) * muDoubleScalarSin ( am0hlmkbhi ) *
muDoubleScalarCos ( ozzcgsdwy2 ) + muDoubleScalarCos ( mbhwj00koy ) *
muDoubleScalarSin ( ozzcgsdwy2 ) ; localB -> jkie4iyale [ 2 ] =
muDoubleScalarSin ( am0hlmkbhi ) ; localB -> jkie4iyale [ 5 ] = -
muDoubleScalarCos ( am0hlmkbhi ) * muDoubleScalarSin ( ozzcgsdwy2 ) ; localB
-> jkie4iyale [ 8 ] = muDoubleScalarCos ( am0hlmkbhi ) * muDoubleScalarCos (
ozzcgsdwy2 ) ; } void khpt4qhny3 ( SimStruct * rtS_i ) { if ( ssGetTaskTime (
rtS_i , 0 ) != ssGetTStart ( rtS_i ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ; } } void h4u2hnqzni (
SimStruct * rtS_e ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_e ) ;
} void geox5czrb3 ( SimStruct * rtS_m , real_T * lhdt1fyvb5 , e305rupqk1 *
localP ) { if ( ssIsSampleHit ( rtS_m , 1 , 0 ) ) { * lhdt1fyvb5 = localP ->
Constant_Value ; } } void egnwzzaupu ( const real_T bd30qtqp3d [ 3 ] ,
dhidnsjh4c * localB ) { real_T y ; real_T scale ; real_T absxk ; real_T t ;
scale = 3.3121686421112381E-170 ; absxk = muDoubleScalarAbs ( bd30qtqp3d [ 0
] ) ; if ( absxk > 3.3121686421112381E-170 ) { y = 1.0 ; scale = absxk ; }
else { t = absxk / 3.3121686421112381E-170 ; y = t * t ; } absxk =
muDoubleScalarAbs ( bd30qtqp3d [ 1 ] ) ; if ( absxk > scale ) { t = scale /
absxk ; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk / scale ; y
+= t * t ; } absxk = muDoubleScalarAbs ( bd30qtqp3d [ 2 ] ) ; if ( absxk >
scale ) { t = scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; } else {
t = absxk / scale ; y += t * t ; } y = scale * muDoubleScalarSqrt ( y ) ;
localB -> bogehaw2ze [ 0 ] = bd30qtqp3d [ 0 ] / y ; localB -> bogehaw2ze [ 1
] = bd30qtqp3d [ 1 ] / y ; localB -> bogehaw2ze [ 2 ] = bd30qtqp3d [ 2 ] / y
; } void jqjt2gjmnr ( SimStruct * rtS_g ) { if ( ssGetTaskTime ( rtS_g , 0 )
!= ssGetTStart ( rtS_g ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS_g ) ; } } void lt5jze22jh ( SimStruct * rtS_e ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_e ) ; } void jda3fmwzpy (
SimStruct * rtS_p , const real_T pylnevko0i [ 9 ] , real_T o0q2ylkvyn [ 9 ] )
{ if ( ssIsSampleHit ( rtS_p , 1 , 0 ) ) { memcpy ( & o0q2ylkvyn [ 0 ] , &
pylnevko0i [ 0 ] , 9U * sizeof ( real_T ) ) ; } } void ktmdijrt12 ( SimStruct
* rtS_f ) { if ( ssGetTaskTime ( rtS_f , 0 ) != ssGetTStart ( rtS_f ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_f ) ; } } void o4znlsjred (
SimStruct * rtS_j ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_j ) ;
} void pwl3yyzylb ( SimStruct * rtS_m , const real_T mavz1ocnar [ 3 ] ,
real_T dpvlx0cvj3 [ 3 ] ) { if ( ssIsSampleHit ( rtS_m , 1 , 0 ) ) {
dpvlx0cvj3 [ 0 ] = mavz1ocnar [ 0 ] ; dpvlx0cvj3 [ 1 ] = mavz1ocnar [ 1 ] ;
dpvlx0cvj3 [ 2 ] = mavz1ocnar [ 2 ] ; } } real_T rt_urand_Upu32_Yd_f_pw_snf (
uint32_T * u ) { uint32_T lo ; uint32_T hi ; lo = * u % 127773U * 16807U ; hi
= * u / 127773U * 2836U ; if ( lo < hi ) { * u = 2147483647U - ( hi - lo ) ;
} else { * u = lo - hi ; } return ( real_T ) * u * 4.6566128752457969E-10 ; }
real_T rt_nrand_Upu32_Yd_f_pw_snf ( uint32_T * u ) { real_T y ; real_T sr ;
real_T si ; do { sr = 2.0 * rt_urand_Upu32_Yd_f_pw_snf ( u ) - 1.0 ; si = 2.0
* rt_urand_Upu32_Yd_f_pw_snf ( u ) - 1.0 ; si = sr * sr + si * si ; } while (
si > 1.0 ) ; y = muDoubleScalarSqrt ( - 2.0 * muDoubleScalarLog ( si ) / si )
* sr ; return y ; } static real_T h0a4zynezg ( int32_T n , const real_T x [
12 ] , int32_T ix0 ) { real_T y ; real_T scale ; int32_T kend ; real_T absxk
; real_T t ; int32_T k ; y = 0.0 ; scale = 3.3121686421112381E-170 ; kend = (
ix0 + n ) - 1 ; for ( k = ix0 ; k <= kend ; k ++ ) { absxk =
muDoubleScalarAbs ( x [ k - 1 ] ) ; if ( absxk > scale ) { t = scale / absxk
; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk / scale ; y += t *
t ; } } return scale * muDoubleScalarSqrt ( y ) ; } static real_T h0a4zynezgl
( int32_T n , const real_T x [ 4 ] , int32_T ix0 ) { real_T y ; real_T scale
; int32_T kend ; real_T absxk ; real_T t ; int32_T k ; y = 0.0 ; scale =
3.3121686421112381E-170 ; kend = ( ix0 + n ) - 1 ; for ( k = ix0 ; k <= kend
; k ++ ) { absxk = muDoubleScalarAbs ( x [ k - 1 ] ) ; if ( absxk > scale ) {
t = scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk
/ scale ; y += t * t ; } } return scale * muDoubleScalarSqrt ( y ) ; } static
void olndydqhymzo ( int32_T n , real_T a , const real_T x [ 3 ] , int32_T ix0
, real_T y [ 12 ] , int32_T iy0 ) { int32_T ix ; int32_T iy ; int32_T k ; if
( ! ( a == 0.0 ) ) { ix = ix0 - 1 ; iy = iy0 - 1 ; for ( k = 0 ; k < n ; k ++
) { y [ iy ] += a * x [ ix ] ; ix ++ ; iy ++ ; } } } static void olndydqhymz
( int32_T n , real_T a , const real_T x [ 12 ] , int32_T ix0 , real_T y [ 3 ]
, int32_T iy0 ) { int32_T ix ; int32_T iy ; int32_T k ; if ( ! ( a == 0.0 ) )
{ ix = ix0 - 1 ; iy = iy0 - 1 ; for ( k = 0 ; k < n ; k ++ ) { y [ iy ] += a
* x [ ix ] ; ix ++ ; iy ++ ; } } } static real_T ioaya51wqz ( int32_T n ,
const real_T x [ 9 ] , int32_T ix0 , const real_T y [ 9 ] , int32_T iy0 ) {
real_T d ; int32_T ix ; int32_T iy ; int32_T k ; d = 0.0 ; ix = ix0 ; iy =
iy0 ; for ( k = 0 ; k < n ; k ++ ) { d += x [ ix - 1 ] * y [ iy - 1 ] ; ix ++
; iy ++ ; } return d ; } static void cclwscof0a ( int32_T n , real_T a ,
int32_T ix0 , real_T y [ 9 ] , int32_T iy0 ) { int32_T ix ; int32_T iy ;
int32_T k ; if ( ! ( a == 0.0 ) ) { ix = ix0 - 1 ; iy = iy0 - 1 ; for ( k = 0
; k < n ; k ++ ) { y [ iy ] += a * y [ ix ] ; ix ++ ; iy ++ ; } } } static
real_T a5z0o2j2vlhi ( int32_T n , const real_T x [ 16 ] , int32_T ix0 , const
real_T y [ 16 ] , int32_T iy0 ) { real_T d ; int32_T ix ; int32_T iy ;
int32_T k ; d = 0.0 ; ix = ix0 ; iy = iy0 ; for ( k = 0 ; k < n ; k ++ ) { d
+= x [ ix - 1 ] * y [ iy - 1 ] ; ix ++ ; iy ++ ; } return d ; } static void
olndydqhymzouf ( int32_T n , real_T a , int32_T ix0 , real_T y [ 16 ] ,
int32_T iy0 ) { int32_T ix ; int32_T iy ; int32_T k ; if ( ! ( a == 0.0 ) ) {
ix = ix0 - 1 ; iy = iy0 - 1 ; for ( k = 0 ; k < n ; k ++ ) { y [ iy ] += a *
y [ ix ] ; ix ++ ; iy ++ ; } } } static void jcpc2pyitk ( real_T a , real_T x
[ 9 ] , int32_T ix0 ) { int32_T k ; for ( k = ix0 ; k <= ix0 + 2 ; k ++ ) { x
[ k - 1 ] *= a ; } } static void czrnbyswklf ( real_T a , real_T x [ 16 ] ,
int32_T ix0 ) { int32_T k ; for ( k = ix0 ; k <= ix0 + 3 ; k ++ ) { x [ k - 1
] *= a ; } } static void d1nrspa04o ( real_T x [ 16 ] , int32_T ix0 , int32_T
iy0 ) { int32_T ix ; int32_T iy ; real_T temp ; ix = ix0 - 1 ; iy = iy0 - 1 ;
temp = x [ ix ] ; x [ ix ] = x [ iy ] ; x [ iy ] = temp ; ix ++ ; iy ++ ;
temp = x [ ix ] ; x [ ix ] = x [ iy ] ; x [ iy ] = temp ; ix ++ ; iy ++ ;
temp = x [ ix ] ; x [ ix ] = x [ iy ] ; x [ iy ] = temp ; ix ++ ; iy ++ ;
temp = x [ ix ] ; x [ ix ] = x [ iy ] ; x [ iy ] = temp ; } static void
bqzpevnceh ( real_T x [ 9 ] , int32_T ix0 , int32_T iy0 ) { int32_T ix ;
int32_T iy ; real_T temp ; ix = ix0 - 1 ; iy = iy0 - 1 ; temp = x [ ix ] ; x
[ ix ] = x [ iy ] ; x [ iy ] = temp ; ix ++ ; iy ++ ; temp = x [ ix ] ; x [
ix ] = x [ iy ] ; x [ iy ] = temp ; ix ++ ; iy ++ ; temp = x [ ix ] ; x [ ix
] = x [ iy ] ; x [ iy ] = temp ; } static void gooahaodf4 ( real_T * a ,
real_T * b , real_T * c , real_T * s ) { real_T roe ; real_T absa ; real_T
absb ; real_T scale ; real_T ads ; real_T bds ; roe = * b ; absa =
muDoubleScalarAbs ( * a ) ; absb = muDoubleScalarAbs ( * b ) ; if ( absa >
absb ) { roe = * a ; } scale = absa + absb ; if ( scale == 0.0 ) { * s = 0.0
; * c = 1.0 ; * b = 0.0 ; } else { ads = absa / scale ; bds = absb / scale ;
scale *= muDoubleScalarSqrt ( ads * ads + bds * bds ) ; if ( roe < 0.0 ) {
scale = - scale ; } * c = * a / scale ; * s = * b / scale ; if ( absa > absb
) { * b = * s ; } else if ( * c != 0.0 ) { * b = 1.0 / * c ; } else { * b =
1.0 ; } } * a = scale ; } static void pxcaga2q2e ( real_T x [ 16 ] , int32_T
ix0 , int32_T iy0 , real_T c , real_T s ) { int32_T ix ; int32_T iy ; real_T
temp ; ix = ix0 - 1 ; iy = iy0 - 1 ; temp = c * x [ ix ] + s * x [ iy ] ; x [
iy ] = c * x [ iy ] - s * x [ ix ] ; x [ ix ] = temp ; iy ++ ; ix ++ ; temp =
c * x [ ix ] + s * x [ iy ] ; x [ iy ] = c * x [ iy ] - s * x [ ix ] ; x [ ix
] = temp ; iy ++ ; ix ++ ; temp = c * x [ ix ] + s * x [ iy ] ; x [ iy ] = c
* x [ iy ] - s * x [ ix ] ; x [ ix ] = temp ; iy ++ ; ix ++ ; temp = c * x [
ix ] + s * x [ iy ] ; x [ iy ] = c * x [ iy ] - s * x [ ix ] ; x [ ix ] =
temp ; } static void gi4gcqiapd ( real_T x [ 9 ] , int32_T ix0 , int32_T iy0
, real_T c , real_T s ) { int32_T ix ; int32_T iy ; real_T temp ; ix = ix0 -
1 ; iy = iy0 - 1 ; temp = c * x [ ix ] + s * x [ iy ] ; x [ iy ] = c * x [ iy
] - s * x [ ix ] ; x [ ix ] = temp ; iy ++ ; ix ++ ; temp = c * x [ ix ] + s
* x [ iy ] ; x [ iy ] = c * x [ iy ] - s * x [ ix ] ; x [ ix ] = temp ; iy ++
; ix ++ ; temp = c * x [ ix ] + s * x [ iy ] ; x [ iy ] = c * x [ iy ] - s *
x [ ix ] ; x [ ix ] = temp ; } static real_T a5z0o2j2vl ( int32_T n , const
real_T x [ 12 ] , int32_T ix0 , const real_T y [ 12 ] , int32_T iy0 ) {
real_T d ; int32_T ix ; int32_T iy ; int32_T k ; d = 0.0 ; ix = ix0 ; iy =
iy0 ; for ( k = 0 ; k < n ; k ++ ) { d += x [ ix - 1 ] * y [ iy - 1 ] ; ix ++
; iy ++ ; } return d ; } static void olndydqhym ( int32_T n , real_T a ,
int32_T ix0 , real_T y [ 12 ] , int32_T iy0 ) { int32_T ix ; int32_T iy ;
int32_T k ; if ( ! ( a == 0.0 ) ) { ix = ix0 - 1 ; iy = iy0 - 1 ; for ( k = 0
; k < n ; k ++ ) { y [ iy ] += a * y [ ix ] ; ix ++ ; iy ++ ; } } } static
void gsbjhe5ea4 ( const real_T A [ 12 ] , real_T U [ 9 ] , real_T s [ 3 ] ,
real_T V [ 16 ] ) { real_T b_A [ 12 ] ; real_T b_s [ 4 ] ; real_T e [ 4 ] ;
real_T work [ 3 ] ; int32_T qq ; boolean_T apply_transform ; real_T nrm ;
int32_T qjj ; int32_T qp1jj ; int32_T m ; int32_T qp1q ; real_T rt ; real_T
ztest ; real_T smm1 ; real_T emm1 ; real_T sqds ; real_T shift ; int32_T k_ii
; int32_T exitg1 ; boolean_T exitg2 ; memcpy ( & b_A [ 0 ] , & A [ 0 ] , 12U
* sizeof ( real_T ) ) ; e [ 0 ] = 0.0 ; e [ 1 ] = 0.0 ; e [ 2 ] = 0.0 ; e [ 3
] = 0.0 ; work [ 0 ] = 0.0 ; work [ 1 ] = 0.0 ; work [ 2 ] = 0.0 ; memset ( &
U [ 0 ] , 0 , 9U * sizeof ( real_T ) ) ; memset ( & V [ 0 ] , 0 , sizeof (
real_T ) << 4U ) ; qq = 0 ; apply_transform = false ; nrm = h0a4zynezg ( 3 ,
b_A , 1 ) ; if ( nrm > 0.0 ) { apply_transform = true ; if ( b_A [ 0 ] < 0.0
) { b_s [ 0 ] = - nrm ; } else { b_s [ 0 ] = nrm ; } if ( muDoubleScalarAbs (
b_s [ 0 ] ) >= 1.0020841800044864E-292 ) { nrm = 1.0 / b_s [ 0 ] ; for ( qjj
= 0 ; qjj < 3 ; qjj ++ ) { b_A [ qjj ] *= nrm ; } } else { for ( qjj = 0 ;
qjj < 3 ; qjj ++ ) { b_A [ qjj ] /= b_s [ 0 ] ; } } b_A [ 0 ] ++ ; b_s [ 0 ]
= - b_s [ 0 ] ; } else { b_s [ 0 ] = 0.0 ; } for ( qp1q = 1 ; qp1q + 1 < 5 ;
qp1q ++ ) { qjj = 3 * qp1q ; if ( apply_transform ) { olndydqhym ( 3 , - (
a5z0o2j2vl ( 3 , b_A , 1 , b_A , qjj + 1 ) / b_A [ 0 ] ) , 1 , b_A , qjj + 1
) ; } e [ qp1q ] = b_A [ qjj ] ; } while ( qq + 1 < 4 ) { U [ qq ] = b_A [ qq
] ; qq ++ ; } nrm = h0a4zynezgl ( 3 , e , 2 ) ; if ( nrm == 0.0 ) { e [ 0 ] =
0.0 ; } else { if ( e [ 1 ] < 0.0 ) { e [ 0 ] = - nrm ; } else { e [ 0 ] =
nrm ; } nrm = e [ 0 ] ; if ( muDoubleScalarAbs ( e [ 0 ] ) >=
1.0020841800044864E-292 ) { nrm = 1.0 / e [ 0 ] ; for ( qq = 1 ; qq < 4 ; qq
++ ) { e [ qq ] *= nrm ; } } else { for ( qq = 1 ; qq < 4 ; qq ++ ) { e [ qq
] /= nrm ; } } e [ 1 ] ++ ; e [ 0 ] = - e [ 0 ] ; for ( qq = 1 ; qq + 1 < 4 ;
qq ++ ) { work [ qq ] = 0.0 ; } for ( qq = 1 ; qq + 1 < 5 ; qq ++ ) {
olndydqhymz ( 2 , e [ qq ] , b_A , 3 * qq + 2 , work , 2 ) ; } for ( qq = 1 ;
qq + 1 < 5 ; qq ++ ) { olndydqhymzo ( 2 , - e [ qq ] / e [ 1 ] , work , 2 ,
b_A , 3 * qq + 2 ) ; } } for ( qq = 1 ; qq + 1 < 5 ; qq ++ ) { V [ qq ] = e [
qq ] ; } apply_transform = false ; nrm = h0a4zynezg ( 2 , b_A , 5 ) ; if (
nrm > 0.0 ) { apply_transform = true ; if ( b_A [ 4 ] < 0.0 ) { b_s [ 1 ] = -
nrm ; } else { b_s [ 1 ] = nrm ; } if ( muDoubleScalarAbs ( b_s [ 1 ] ) >=
1.0020841800044864E-292 ) { nrm = 1.0 / b_s [ 1 ] ; for ( qjj = 4 ; qjj < 6 ;
qjj ++ ) { b_A [ qjj ] *= nrm ; } } else { for ( qjj = 4 ; qjj < 6 ; qjj ++ )
{ b_A [ qjj ] /= b_s [ 1 ] ; } } b_A [ 4 ] ++ ; b_s [ 1 ] = - b_s [ 1 ] ; }
else { b_s [ 1 ] = 0.0 ; } for ( qp1q = 2 ; qp1q + 1 < 5 ; qp1q ++ ) { qjj =
3 * qp1q + 1 ; if ( apply_transform ) { olndydqhym ( 2 , - ( a5z0o2j2vl ( 2 ,
b_A , 5 , b_A , qjj + 1 ) / b_A [ 4 ] ) , 5 , b_A , qjj + 1 ) ; } e [ qp1q ]
= b_A [ qjj ] ; } for ( qq = 1 ; qq + 1 < 4 ; qq ++ ) { U [ qq + 3 ] = b_A [
qq + 3 ] ; } nrm = h0a4zynezgl ( 2 , e , 3 ) ; if ( nrm == 0.0 ) { e [ 1 ] =
0.0 ; } else { if ( e [ 2 ] < 0.0 ) { e [ 1 ] = - nrm ; } else { e [ 1 ] =
nrm ; } nrm = e [ 1 ] ; if ( muDoubleScalarAbs ( e [ 1 ] ) >=
1.0020841800044864E-292 ) { nrm = 1.0 / e [ 1 ] ; for ( qq = 2 ; qq < 4 ; qq
++ ) { e [ qq ] *= nrm ; } } else { for ( qq = 2 ; qq < 4 ; qq ++ ) { e [ qq
] /= nrm ; } } e [ 2 ] ++ ; e [ 1 ] = - e [ 1 ] ; for ( qq = 2 ; qq + 1 < 4 ;
qq ++ ) { work [ qq ] = 0.0 ; } for ( qq = 2 ; qq + 1 < 5 ; qq ++ ) {
olndydqhymz ( 1 , e [ qq ] , b_A , 3 * qq + 3 , work , 3 ) ; } for ( qq = 2 ;
qq + 1 < 5 ; qq ++ ) { olndydqhymzo ( 1 , - e [ qq ] / e [ 2 ] , work , 3 ,
b_A , 3 * qq + 3 ) ; } } for ( qq = 2 ; qq + 1 < 5 ; qq ++ ) { V [ qq + 4 ] =
e [ qq ] ; } m = 2 ; b_s [ 2 ] = b_A [ 8 ] ; b_s [ 3 ] = 0.0 ; e [ 2 ] = b_A
[ 11 ] ; e [ 3 ] = 0.0 ; U [ 6 ] = 0.0 ; U [ 7 ] = 0.0 ; U [ 8 ] = 1.0 ; for
( qp1q = 1 ; qp1q >= 0 ; qp1q -- ) { qq = 3 * qp1q + qp1q ; if ( b_s [ qp1q ]
!= 0.0 ) { for ( qp1jj = qp1q + 1 ; qp1jj + 1 < 4 ; qp1jj ++ ) { qjj = ( 3 *
qp1jj + qp1q ) + 1 ; cclwscof0a ( 3 - qp1q , - ( ioaya51wqz ( 3 - qp1q , U ,
qq + 1 , U , qjj ) / U [ qq ] ) , qq + 1 , U , qjj ) ; } for ( qjj = qp1q ;
qjj + 1 < 4 ; qjj ++ ) { U [ qjj + 3 * qp1q ] = - U [ 3 * qp1q + qjj ] ; } U
[ qq ] ++ ; if ( 0 <= qp1q - 1 ) { U [ 3 * qp1q ] = 0.0 ; } } else { U [ 3 *
qp1q ] = 0.0 ; U [ 3 * qp1q + 1 ] = 0.0 ; U [ 3 * qp1q + 2 ] = 0.0 ; U [ qq ]
= 1.0 ; } } for ( qq = 3 ; qq >= 0 ; qq -- ) { if ( ( qq + 1 <= 2 ) && ( e [
qq ] != 0.0 ) ) { qp1q = ( ( qq << 2 ) + qq ) + 2 ; for ( qjj = qq + 1 ; qjj
+ 1 < 5 ; qjj ++ ) { qp1jj = ( ( qjj << 2 ) + qq ) + 2 ; olndydqhymzouf ( 3 -
qq , - ( a5z0o2j2vlhi ( 3 - qq , V , qp1q , V , qp1jj ) / V [ qp1q - 1 ] ) ,
qp1q , V , qp1jj ) ; } } V [ qq << 2 ] = 0.0 ; V [ ( qq << 2 ) + 1 ] = 0.0 ;
V [ ( qq << 2 ) + 2 ] = 0.0 ; V [ ( qq << 2 ) + 3 ] = 0.0 ; V [ qq + ( qq <<
2 ) ] = 1.0 ; } ztest = e [ 0 ] ; if ( b_s [ 0 ] != 0.0 ) { rt =
muDoubleScalarAbs ( b_s [ 0 ] ) ; nrm = b_s [ 0 ] / rt ; b_s [ 0 ] = rt ;
ztest = e [ 0 ] / nrm ; jcpc2pyitk ( nrm , U , 1 ) ; } if ( ztest != 0.0 ) {
rt = muDoubleScalarAbs ( ztest ) ; nrm = rt / ztest ; ztest = rt ; b_s [ 1 ]
*= nrm ; czrnbyswklf ( nrm , V , 5 ) ; } e [ 0 ] = ztest ; ztest = e [ 1 ] ;
if ( b_s [ 1 ] != 0.0 ) { rt = muDoubleScalarAbs ( b_s [ 1 ] ) ; nrm = b_s [
1 ] / rt ; b_s [ 1 ] = rt ; ztest = e [ 1 ] / nrm ; jcpc2pyitk ( nrm , U , 4
) ; } if ( ztest != 0.0 ) { rt = muDoubleScalarAbs ( ztest ) ; nrm = rt /
ztest ; ztest = rt ; b_s [ 2 ] = b_A [ 8 ] * nrm ; czrnbyswklf ( nrm , V , 9
) ; } e [ 1 ] = ztest ; ztest = b_A [ 11 ] ; if ( b_s [ 2 ] != 0.0 ) { rt =
muDoubleScalarAbs ( b_s [ 2 ] ) ; nrm = b_s [ 2 ] / rt ; b_s [ 2 ] = rt ;
ztest = b_A [ 11 ] / nrm ; jcpc2pyitk ( nrm , U , 7 ) ; } if ( ztest != 0.0 )
{ rt = muDoubleScalarAbs ( ztest ) ; nrm = rt / ztest ; ztest = rt ; b_s [ 3
] = 0.0 * nrm ; czrnbyswklf ( nrm , V , 13 ) ; } e [ 2 ] = ztest ; if ( b_s [
3 ] != 0.0 ) { b_s [ 3 ] = ( rtNaN ) ; } e [ 3 ] = 0.0 ; qq = 0 ; nrm =
muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax ( b_s [ 0 ] , e [ 0
] ) , muDoubleScalarMax ( b_s [ 1 ] , e [ 1 ] ) ) , muDoubleScalarMax ( b_s [
2 ] , ztest ) ) ; while ( ( m + 2 > 0 ) && ( qq < 75 ) ) { qp1jj = m + 1 ; do
{ exitg1 = 0 ; qp1q = qp1jj ; if ( qp1jj == 0 ) { exitg1 = 1 ; } else { rt =
muDoubleScalarAbs ( e [ qp1jj - 1 ] ) ; if ( ( rt <= ( muDoubleScalarAbs (
b_s [ qp1jj - 1 ] ) + muDoubleScalarAbs ( b_s [ qp1jj ] ) ) *
2.2204460492503131E-16 ) || ( ( rt <= 1.0020841800044864E-292 ) || ( ( qq >
20 ) && ( rt <= 2.2204460492503131E-16 * nrm ) ) ) ) { e [ qp1jj - 1 ] = 0.0
; exitg1 = 1 ; } else { qp1jj -- ; } } } while ( exitg1 == 0 ) ; if ( m + 1
== qp1jj ) { qp1jj = 4 ; } else { qjj = m + 2 ; k_ii = m + 2 ; exitg2 = false
; while ( ( ! exitg2 ) && ( k_ii >= qp1jj ) ) { qjj = k_ii ; if ( k_ii ==
qp1jj ) { exitg2 = true ; } else { rt = 0.0 ; if ( k_ii < m + 2 ) { rt =
muDoubleScalarAbs ( e [ k_ii - 1 ] ) ; } if ( k_ii > qp1jj + 1 ) { rt +=
muDoubleScalarAbs ( e [ k_ii - 2 ] ) ; } ztest = muDoubleScalarAbs ( b_s [
k_ii - 1 ] ) ; if ( ( ztest <= 2.2204460492503131E-16 * rt ) || ( ztest <=
1.0020841800044864E-292 ) ) { b_s [ k_ii - 1 ] = 0.0 ; exitg2 = true ; } else
{ k_ii -- ; } } } if ( qjj == qp1jj ) { qp1jj = 3 ; } else if ( m + 2 == qjj
) { qp1jj = 1 ; } else { qp1jj = 2 ; qp1q = qjj ; } } switch ( qp1jj ) { case
1 : rt = e [ m ] ; e [ m ] = 0.0 ; for ( qjj = m ; qjj + 1 >= qp1q + 1 ; qjj
-- ) { gooahaodf4 ( & b_s [ qjj ] , & rt , & ztest , & sqds ) ; if ( qjj + 1
> qp1q + 1 ) { rt = e [ qjj - 1 ] * - sqds ; e [ qjj - 1 ] *= ztest ; }
pxcaga2q2e ( V , ( qjj << 2 ) + 1 , ( ( m + 1 ) << 2 ) + 1 , ztest , sqds ) ;
} break ; case 2 : rt = e [ qp1q - 1 ] ; e [ qp1q - 1 ] = 0.0 ; for ( qjj =
qp1q ; qjj < m + 2 ; qjj ++ ) { gooahaodf4 ( & b_s [ qjj ] , & rt , & ztest ,
& sqds ) ; rt = - sqds * e [ qjj ] ; e [ qjj ] *= ztest ; gi4gcqiapd ( U , 3
* qjj + 1 , 3 * ( qp1q - 1 ) + 1 , ztest , sqds ) ; } break ; case 3 : ztest
= muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax (
muDoubleScalarMax ( muDoubleScalarAbs ( b_s [ m + 1 ] ) , muDoubleScalarAbs (
b_s [ m ] ) ) , muDoubleScalarAbs ( e [ m ] ) ) , muDoubleScalarAbs ( b_s [
qp1q ] ) ) , muDoubleScalarAbs ( e [ qp1q ] ) ) ; rt = b_s [ m + 1 ] / ztest
; smm1 = b_s [ m ] / ztest ; emm1 = e [ m ] / ztest ; sqds = b_s [ qp1q ] /
ztest ; smm1 = ( ( smm1 + rt ) * ( smm1 - rt ) + emm1 * emm1 ) / 2.0 ; emm1
*= rt ; emm1 *= emm1 ; if ( ( smm1 != 0.0 ) || ( emm1 != 0.0 ) ) { shift =
muDoubleScalarSqrt ( smm1 * smm1 + emm1 ) ; if ( smm1 < 0.0 ) { shift = -
shift ; } shift = emm1 / ( smm1 + shift ) ; } else { shift = 0.0 ; } rt = (
sqds + rt ) * ( sqds - rt ) + shift ; ztest = e [ qp1q ] / ztest * sqds ; for
( qjj = qp1q + 1 ; qjj <= m + 1 ; qjj ++ ) { gooahaodf4 ( & rt , & ztest , &
sqds , & smm1 ) ; if ( qjj > qp1q + 1 ) { e [ qjj - 2 ] = rt ; } rt = b_s [
qjj - 1 ] * sqds + e [ qjj - 1 ] * smm1 ; e [ qjj - 1 ] = e [ qjj - 1 ] *
sqds - b_s [ qjj - 1 ] * smm1 ; ztest = smm1 * b_s [ qjj ] ; b_s [ qjj ] *=
sqds ; pxcaga2q2e ( V , ( ( qjj - 1 ) << 2 ) + 1 , ( qjj << 2 ) + 1 , sqds ,
smm1 ) ; gooahaodf4 ( & rt , & ztest , & sqds , & smm1 ) ; b_s [ qjj - 1 ] =
rt ; rt = e [ qjj - 1 ] * sqds + smm1 * b_s [ qjj ] ; b_s [ qjj ] = e [ qjj -
1 ] * - smm1 + sqds * b_s [ qjj ] ; ztest = smm1 * e [ qjj ] ; e [ qjj ] *=
sqds ; if ( qjj < 3 ) { gi4gcqiapd ( U , 3 * ( qjj - 1 ) + 1 , 3 * qjj + 1 ,
sqds , smm1 ) ; } } e [ m ] = rt ; qq ++ ; break ; default : if ( b_s [ qp1q
] < 0.0 ) { b_s [ qp1q ] = - b_s [ qp1q ] ; czrnbyswklf ( - 1.0 , V , ( qp1q
<< 2 ) + 1 ) ; } qq = qp1q + 1 ; while ( ( qp1q + 1 < 4 ) && ( b_s [ qp1q ] <
b_s [ qq ] ) ) { rt = b_s [ qp1q ] ; b_s [ qp1q ] = b_s [ qq ] ; b_s [ qq ] =
rt ; d1nrspa04o ( V , ( qp1q << 2 ) + 1 , ( ( qp1q + 1 ) << 2 ) + 1 ) ; if (
qp1q + 1 < 3 ) { bqzpevnceh ( U , 3 * qp1q + 1 , 3 * ( qp1q + 1 ) + 1 ) ; }
qp1q = qq ; qq ++ ; } qq = 0 ; m -- ; break ; } } s [ 0 ] = b_s [ 0 ] ; s [ 1
] = b_s [ 1 ] ; s [ 2 ] = b_s [ 2 ] ; } static real_T acgt4hcqdm2 ( const
real_T x [ 3 ] , int32_T ix0 ) { real_T y ; real_T scale ; real_T absxk ;
real_T t ; int32_T k ; y = 0.0 ; scale = 3.3121686421112381E-170 ; for ( k =
ix0 ; k <= ix0 + 1 ; k ++ ) { absxk = muDoubleScalarAbs ( x [ k - 1 ] ) ; if
( absxk > scale ) { t = scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ;
} else { t = absxk / scale ; y += t * t ; } } return scale *
muDoubleScalarSqrt ( y ) ; } static void galivxgzcmbr ( int32_T n , real_T a
, const real_T x [ 4 ] , int32_T ix0 , real_T y [ 12 ] , int32_T iy0 ) {
int32_T ix ; int32_T iy ; int32_T k ; if ( ! ( a == 0.0 ) ) { ix = ix0 - 1 ;
iy = iy0 - 1 ; for ( k = 0 ; k < n ; k ++ ) { y [ iy ] += a * x [ ix ] ; ix
++ ; iy ++ ; } } } static void galivxgzcmb ( int32_T n , real_T a , const
real_T x [ 12 ] , int32_T ix0 , real_T y [ 4 ] , int32_T iy0 ) { int32_T ix ;
int32_T iy ; int32_T k ; if ( ! ( a == 0.0 ) ) { ix = ix0 - 1 ; iy = iy0 - 1
; for ( k = 0 ; k < n ; k ++ ) { y [ iy ] += a * x [ ix ] ; ix ++ ; iy ++ ; }
} } static real_T ky341jio0qi ( const real_T x [ 9 ] , const real_T y [ 9 ] ,
int32_T iy0 ) { return y [ iy0 ] * x [ 2 ] + y [ iy0 - 1 ] * x [ 1 ] ; }
static void galivxgzcmbrl ( real_T a , real_T y [ 9 ] , int32_T iy0 ) {
int32_T iy ; if ( ! ( a == 0.0 ) ) { iy = iy0 - 1 ; y [ iy ] += a * y [ 1 ] ;
iy ++ ; y [ iy ] += a * y [ 2 ] ; } } static void ateam5s5ep ( real_T a ,
real_T x [ 12 ] , int32_T ix0 ) { int32_T k ; for ( k = ix0 ; k <= ix0 + 3 ;
k ++ ) { x [ k - 1 ] *= a ; } } static void h25o40llpqi ( real_T x [ 12 ] ,
int32_T ix0 , int32_T iy0 ) { int32_T ix ; int32_T iy ; real_T temp ; ix =
ix0 - 1 ; iy = iy0 - 1 ; temp = x [ ix ] ; x [ ix ] = x [ iy ] ; x [ iy ] =
temp ; ix ++ ; iy ++ ; temp = x [ ix ] ; x [ ix ] = x [ iy ] ; x [ iy ] =
temp ; ix ++ ; iy ++ ; temp = x [ ix ] ; x [ ix ] = x [ iy ] ; x [ iy ] =
temp ; ix ++ ; iy ++ ; temp = x [ ix ] ; x [ ix ] = x [ iy ] ; x [ iy ] =
temp ; } static void nnfhk5hxiv2 ( real_T x [ 12 ] , int32_T ix0 , int32_T
iy0 , real_T c , real_T s ) { int32_T ix ; int32_T iy ; real_T temp ; ix =
ix0 - 1 ; iy = iy0 - 1 ; temp = c * x [ ix ] + s * x [ iy ] ; x [ iy ] = c *
x [ iy ] - s * x [ ix ] ; x [ ix ] = temp ; iy ++ ; ix ++ ; temp = c * x [ ix
] + s * x [ iy ] ; x [ iy ] = c * x [ iy ] - s * x [ ix ] ; x [ ix ] = temp ;
iy ++ ; ix ++ ; temp = c * x [ ix ] + s * x [ iy ] ; x [ iy ] = c * x [ iy ]
- s * x [ ix ] ; x [ ix ] = temp ; iy ++ ; ix ++ ; temp = c * x [ ix ] + s *
x [ iy ] ; x [ iy ] = c * x [ iy ] - s * x [ ix ] ; x [ ix ] = temp ; }
static void ahliv2534q ( const real_T A [ 12 ] , real_T U [ 12 ] , real_T s [
3 ] , real_T V [ 9 ] ) { real_T b_A [ 12 ] ; real_T b_s [ 3 ] ; real_T e [ 3
] ; real_T work [ 4 ] ; real_T Vf [ 9 ] ; int32_T qq ; boolean_T
apply_transform ; real_T nrm ; int32_T qjj ; int32_T m ; real_T rt ; int32_T
kase ; real_T ztest ; real_T smm1 ; real_T emm1 ; real_T sqds ; real_T shift
; int32_T j_ii ; int32_T d ; int32_T exitg1 ; boolean_T exitg2 ; e [ 0 ] =
0.0 ; e [ 1 ] = 0.0 ; e [ 2 ] = 0.0 ; work [ 0 ] = 0.0 ; work [ 1 ] = 0.0 ;
work [ 2 ] = 0.0 ; work [ 3 ] = 0.0 ; for ( qq = 0 ; qq < 12 ; qq ++ ) { b_A
[ qq ] = A [ qq ] ; U [ qq ] = 0.0 ; } memset ( & Vf [ 0 ] , 0 , 9U * sizeof
( real_T ) ) ; qq = 0 ; apply_transform = false ; nrm = h0a4zynezg ( 4 , b_A
, 1 ) ; if ( nrm > 0.0 ) { apply_transform = true ; if ( b_A [ 0 ] < 0.0 ) {
b_s [ 0 ] = - nrm ; } else { b_s [ 0 ] = nrm ; } if ( muDoubleScalarAbs ( b_s
[ 0 ] ) >= 1.0020841800044864E-292 ) { nrm = 1.0 / b_s [ 0 ] ; for ( qjj = 0
; qjj < 4 ; qjj ++ ) { b_A [ qjj ] *= nrm ; } } else { for ( qjj = 0 ; qjj <
4 ; qjj ++ ) { b_A [ qjj ] /= b_s [ 0 ] ; } } b_A [ 0 ] ++ ; b_s [ 0 ] = -
b_s [ 0 ] ; } else { b_s [ 0 ] = 0.0 ; } for ( d = 1 ; d + 1 < 4 ; d ++ ) {
qjj = d << 2 ; if ( apply_transform ) { olndydqhym ( 4 , - ( a5z0o2j2vl ( 4 ,
b_A , 1 , b_A , qjj + 1 ) / b_A [ 0 ] ) , 1 , b_A , qjj + 1 ) ; } e [ d ] =
b_A [ qjj ] ; } while ( qq + 1 < 5 ) { U [ qq ] = b_A [ qq ] ; qq ++ ; } nrm
= acgt4hcqdm2 ( e , 2 ) ; if ( nrm == 0.0 ) { e [ 0 ] = 0.0 ; } else { if ( e
[ 1 ] < 0.0 ) { nrm = - nrm ; } e [ 0 ] = nrm ; if ( muDoubleScalarAbs ( nrm
) >= 1.0020841800044864E-292 ) { nrm = 1.0 / nrm ; for ( qq = 1 ; qq < 3 ; qq
++ ) { e [ qq ] *= nrm ; } } else { for ( qq = 1 ; qq < 3 ; qq ++ ) { e [ qq
] /= nrm ; } } e [ 1 ] ++ ; e [ 0 ] = - e [ 0 ] ; for ( qq = 2 ; qq < 5 ; qq
++ ) { work [ qq - 1 ] = 0.0 ; } for ( qq = 1 ; qq + 1 < 4 ; qq ++ ) {
galivxgzcmb ( 3 , e [ qq ] , b_A , ( qq << 2 ) + 2 , work , 2 ) ; } for ( qq
= 1 ; qq + 1 < 4 ; qq ++ ) { galivxgzcmbr ( 3 , - e [ qq ] / e [ 1 ] , work ,
2 , b_A , ( qq << 2 ) + 2 ) ; } } for ( qq = 1 ; qq + 1 < 4 ; qq ++ ) { Vf [
qq ] = e [ qq ] ; } apply_transform = false ; nrm = h0a4zynezg ( 3 , b_A , 6
) ; if ( nrm > 0.0 ) { apply_transform = true ; if ( b_A [ 5 ] < 0.0 ) { b_s
[ 1 ] = - nrm ; } else { b_s [ 1 ] = nrm ; } if ( muDoubleScalarAbs ( b_s [ 1
] ) >= 1.0020841800044864E-292 ) { nrm = 1.0 / b_s [ 1 ] ; for ( qjj = 5 ;
qjj < 8 ; qjj ++ ) { b_A [ qjj ] *= nrm ; } } else { for ( qjj = 5 ; qjj < 8
; qjj ++ ) { b_A [ qjj ] /= b_s [ 1 ] ; } } b_A [ 5 ] ++ ; b_s [ 1 ] = - b_s
[ 1 ] ; } else { b_s [ 1 ] = 0.0 ; } for ( d = 2 ; d + 1 < 4 ; d ++ ) { qjj =
( d << 2 ) + 1 ; if ( apply_transform ) { olndydqhym ( 3 , - ( a5z0o2j2vl ( 3
, b_A , 6 , b_A , qjj + 1 ) / b_A [ 5 ] ) , 6 , b_A , qjj + 1 ) ; } e [ d ] =
b_A [ qjj ] ; } for ( qq = 1 ; qq + 1 < 5 ; qq ++ ) { U [ qq + 4 ] = b_A [ qq
+ 4 ] ; } nrm = h0a4zynezg ( 2 , b_A , 11 ) ; if ( nrm > 0.0 ) { if ( b_A [
10 ] < 0.0 ) { b_s [ 2 ] = - nrm ; } else { b_s [ 2 ] = nrm ; } if (
muDoubleScalarAbs ( b_s [ 2 ] ) >= 1.0020841800044864E-292 ) { nrm = 1.0 /
b_s [ 2 ] ; for ( qjj = 10 ; qjj < 12 ; qjj ++ ) { b_A [ qjj ] *= nrm ; } }
else { for ( qjj = 10 ; qjj < 12 ; qjj ++ ) { b_A [ qjj ] /= b_s [ 2 ] ; } }
b_A [ 10 ] ++ ; b_s [ 2 ] = - b_s [ 2 ] ; } else { b_s [ 2 ] = 0.0 ; } for (
qq = 2 ; qq + 1 < 5 ; qq ++ ) { U [ qq + 8 ] = b_A [ qq + 8 ] ; } m = 1 ; for
( d = 2 ; d >= 0 ; d -- ) { qq = ( d << 2 ) + d ; if ( b_s [ d ] != 0.0 ) {
for ( kase = d + 1 ; kase + 1 < 4 ; kase ++ ) { qjj = ( ( kase << 2 ) + d ) +
1 ; olndydqhym ( 4 - d , - ( a5z0o2j2vl ( 4 - d , U , qq + 1 , U , qjj ) / U
[ qq ] ) , qq + 1 , U , qjj ) ; } for ( qjj = d ; qjj + 1 < 5 ; qjj ++ ) { U
[ qjj + ( d << 2 ) ] = - U [ ( d << 2 ) + qjj ] ; } U [ qq ] ++ ; for ( qq =
0 ; qq < d ; qq ++ ) { U [ qq + ( d << 2 ) ] = 0.0 ; } } else { U [ d << 2 ]
= 0.0 ; U [ ( d << 2 ) + 1 ] = 0.0 ; U [ ( d << 2 ) + 2 ] = 0.0 ; U [ ( d <<
2 ) + 3 ] = 0.0 ; U [ qq ] = 1.0 ; } } for ( qq = 2 ; qq >= 0 ; qq -- ) { if
( ( qq + 1 <= 1 ) && ( e [ 0 ] != 0.0 ) ) { galivxgzcmbrl ( - ( ky341jio0qi (
Vf , Vf , 5 ) / Vf [ 1 ] ) , Vf , 5 ) ; galivxgzcmbrl ( - ( ky341jio0qi ( Vf
, Vf , 8 ) / Vf [ 1 ] ) , Vf , 8 ) ; } Vf [ 3 * qq ] = 0.0 ; Vf [ 3 * qq + 1
] = 0.0 ; Vf [ 3 * qq + 2 ] = 0.0 ; Vf [ qq + 3 * qq ] = 1.0 ; } ztest = e [
0 ] ; if ( b_s [ 0 ] != 0.0 ) { rt = muDoubleScalarAbs ( b_s [ 0 ] ) ; nrm =
b_s [ 0 ] / rt ; b_s [ 0 ] = rt ; ztest = e [ 0 ] / nrm ; ateam5s5ep ( nrm ,
U , 1 ) ; } if ( ztest != 0.0 ) { rt = muDoubleScalarAbs ( ztest ) ; nrm = rt
/ ztest ; ztest = rt ; b_s [ 1 ] *= nrm ; jcpc2pyitk ( nrm , Vf , 4 ) ; } e [
0 ] = ztest ; ztest = b_A [ 9 ] ; if ( b_s [ 1 ] != 0.0 ) { rt =
muDoubleScalarAbs ( b_s [ 1 ] ) ; nrm = b_s [ 1 ] / rt ; b_s [ 1 ] = rt ;
ztest = b_A [ 9 ] / nrm ; ateam5s5ep ( nrm , U , 5 ) ; } if ( ztest != 0.0 )
{ rt = muDoubleScalarAbs ( ztest ) ; nrm = rt / ztest ; ztest = rt ; b_s [ 2
] *= nrm ; jcpc2pyitk ( nrm , Vf , 7 ) ; } e [ 1 ] = ztest ; if ( b_s [ 2 ]
!= 0.0 ) { rt = muDoubleScalarAbs ( b_s [ 2 ] ) ; nrm = b_s [ 2 ] / rt ; b_s
[ 2 ] = rt ; ateam5s5ep ( nrm , U , 9 ) ; } e [ 2 ] = 0.0 ; qq = 0 ; nrm =
muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax ( b_s [ 0 ] , e [ 0
] ) , muDoubleScalarMax ( b_s [ 1 ] , ztest ) ) , muDoubleScalarMax ( b_s [ 2
] , 0.0 ) ) ; while ( ( m + 2 > 0 ) && ( qq < 75 ) ) { kase = m + 1 ; do {
exitg1 = 0 ; d = kase ; if ( kase == 0 ) { exitg1 = 1 ; } else { rt =
muDoubleScalarAbs ( e [ kase - 1 ] ) ; if ( ( rt <= ( muDoubleScalarAbs ( b_s
[ kase - 1 ] ) + muDoubleScalarAbs ( b_s [ kase ] ) ) *
2.2204460492503131E-16 ) || ( ( rt <= 1.0020841800044864E-292 ) || ( ( qq >
20 ) && ( rt <= 2.2204460492503131E-16 * nrm ) ) ) ) { e [ kase - 1 ] = 0.0 ;
exitg1 = 1 ; } else { kase -- ; } } } while ( exitg1 == 0 ) ; if ( m + 1 ==
kase ) { kase = 4 ; } else { qjj = m + 2 ; j_ii = m + 2 ; exitg2 = false ;
while ( ( ! exitg2 ) && ( j_ii >= kase ) ) { qjj = j_ii ; if ( j_ii == kase )
{ exitg2 = true ; } else { rt = 0.0 ; if ( j_ii < m + 2 ) { rt =
muDoubleScalarAbs ( e [ j_ii - 1 ] ) ; } if ( j_ii > kase + 1 ) { rt +=
muDoubleScalarAbs ( e [ j_ii - 2 ] ) ; } ztest = muDoubleScalarAbs ( b_s [
j_ii - 1 ] ) ; if ( ( ztest <= 2.2204460492503131E-16 * rt ) || ( ztest <=
1.0020841800044864E-292 ) ) { b_s [ j_ii - 1 ] = 0.0 ; exitg2 = true ; } else
{ j_ii -- ; } } } if ( qjj == kase ) { kase = 3 ; } else if ( m + 2 == qjj )
{ kase = 1 ; } else { kase = 2 ; d = qjj ; } } switch ( kase ) { case 1 : rt
= e [ m ] ; e [ m ] = 0.0 ; for ( qjj = m ; qjj + 1 >= d + 1 ; qjj -- ) {
gooahaodf4 ( & b_s [ qjj ] , & rt , & ztest , & sqds ) ; if ( qjj + 1 > d + 1
) { rt = - sqds * e [ 0 ] ; e [ 0 ] *= ztest ; } gi4gcqiapd ( Vf , 3 * qjj +
1 , 3 * ( m + 1 ) + 1 , ztest , sqds ) ; } break ; case 2 : rt = e [ d - 1 ]
; e [ d - 1 ] = 0.0 ; for ( qjj = d ; qjj < m + 2 ; qjj ++ ) { gooahaodf4 ( &
b_s [ qjj ] , & rt , & ztest , & sqds ) ; rt = - sqds * e [ qjj ] ; e [ qjj ]
*= ztest ; nnfhk5hxiv2 ( U , ( qjj << 2 ) + 1 , ( ( d - 1 ) << 2 ) + 1 ,
ztest , sqds ) ; } break ; case 3 : ztest = muDoubleScalarMax (
muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarAbs
( b_s [ m + 1 ] ) , muDoubleScalarAbs ( b_s [ m ] ) ) , muDoubleScalarAbs ( e
[ m ] ) ) , muDoubleScalarAbs ( b_s [ d ] ) ) , muDoubleScalarAbs ( e [ d ] )
) ; rt = b_s [ m + 1 ] / ztest ; smm1 = b_s [ m ] / ztest ; emm1 = e [ m ] /
ztest ; sqds = b_s [ d ] / ztest ; smm1 = ( ( smm1 + rt ) * ( smm1 - rt ) +
emm1 * emm1 ) / 2.0 ; emm1 *= rt ; emm1 *= emm1 ; if ( ( smm1 != 0.0 ) || (
emm1 != 0.0 ) ) { shift = muDoubleScalarSqrt ( smm1 * smm1 + emm1 ) ; if (
smm1 < 0.0 ) { shift = - shift ; } shift = emm1 / ( smm1 + shift ) ; } else {
shift = 0.0 ; } rt = ( sqds + rt ) * ( sqds - rt ) + shift ; ztest = e [ d ]
/ ztest * sqds ; for ( qjj = d + 1 ; qjj <= m + 1 ; qjj ++ ) { gooahaodf4 ( &
rt , & ztest , & sqds , & smm1 ) ; if ( qjj > d + 1 ) { e [ 0 ] = rt ; } rt =
b_s [ qjj - 1 ] * sqds + e [ qjj - 1 ] * smm1 ; e [ qjj - 1 ] = e [ qjj - 1 ]
* sqds - b_s [ qjj - 1 ] * smm1 ; ztest = smm1 * b_s [ qjj ] ; b_s [ qjj ] *=
sqds ; gi4gcqiapd ( Vf , 3 * ( qjj - 1 ) + 1 , 3 * qjj + 1 , sqds , smm1 ) ;
gooahaodf4 ( & rt , & ztest , & sqds , & smm1 ) ; b_s [ qjj - 1 ] = rt ; rt =
e [ qjj - 1 ] * sqds + smm1 * b_s [ qjj ] ; b_s [ qjj ] = e [ qjj - 1 ] * -
smm1 + sqds * b_s [ qjj ] ; ztest = smm1 * e [ qjj ] ; e [ qjj ] *= sqds ;
nnfhk5hxiv2 ( U , ( ( qjj - 1 ) << 2 ) + 1 , ( qjj << 2 ) + 1 , sqds , smm1 )
; } e [ m ] = rt ; qq ++ ; break ; default : if ( b_s [ d ] < 0.0 ) { b_s [ d
] = - b_s [ d ] ; jcpc2pyitk ( - 1.0 , Vf , 3 * d + 1 ) ; } qq = d + 1 ;
while ( ( d + 1 < 3 ) && ( b_s [ d ] < b_s [ qq ] ) ) { rt = b_s [ d ] ; b_s
[ d ] = b_s [ qq ] ; b_s [ qq ] = rt ; bqzpevnceh ( Vf , 3 * d + 1 , 3 * ( d
+ 1 ) + 1 ) ; h25o40llpqi ( U , ( d << 2 ) + 1 , ( ( d + 1 ) << 2 ) + 1 ) ; d
= qq ; qq ++ ; } qq = 0 ; m -- ; break ; } } for ( m = 0 ; m < 3 ; m ++ ) { s
[ m ] = b_s [ m ] ; V [ 3 * m ] = Vf [ 3 * m ] ; V [ 3 * m + 1 ] = Vf [ 3 * m
+ 1 ] ; V [ 3 * m + 2 ] = Vf [ 3 * m + 2 ] ; } } static void i2hqjg5goj (
e0o14le1ty * * pEmxArray , int32_T numDimensions ) { e0o14le1ty * emxArray ;
int32_T i ; * pEmxArray = ( e0o14le1ty * ) malloc ( sizeof ( e0o14le1ty ) ) ;
emxArray = * pEmxArray ; emxArray -> data = ( real_T * ) NULL ; emxArray ->
numDimensions = numDimensions ; emxArray -> size = ( int32_T * ) malloc (
sizeof ( int32_T ) * numDimensions ) ; emxArray -> allocatedSize = 0 ;
emxArray -> canFreeData = true ; for ( i = 0 ; i < numDimensions ; i ++ ) {
emxArray -> size [ i ] = 0 ; } } static void cijenupcsy ( e0o14le1ty *
emxArray , int32_T oldNumel ) { int32_T newNumel ; int32_T i ; void * newData
; if ( oldNumel < 0 ) { oldNumel = 0 ; } newNumel = 1 ; for ( i = 0 ; i <
emxArray -> numDimensions ; i ++ ) { newNumel *= emxArray -> size [ i ] ; }
if ( newNumel > emxArray -> allocatedSize ) { i = emxArray -> allocatedSize ;
if ( i < 16 ) { i = 16 ; } while ( i < newNumel ) { if ( i > 1073741823 ) { i
= MAX_int32_T ; } else { i <<= 1 ; } } newData = calloc ( ( uint32_T ) i ,
sizeof ( real_T ) ) ; if ( emxArray -> data != NULL ) { memcpy ( newData ,
emxArray -> data , sizeof ( real_T ) * oldNumel ) ; if ( emxArray ->
canFreeData ) { free ( emxArray -> data ) ; } } emxArray -> data = ( real_T *
) newData ; emxArray -> allocatedSize = i ; emxArray -> canFreeData = true ;
} } static void m3xbjjaurx ( e0o14le1ty * * pEmxArray ) { if ( * pEmxArray !=
( e0o14le1ty * ) NULL ) { if ( ( ( * pEmxArray ) -> data != ( real_T * ) NULL
) && ( * pEmxArray ) -> canFreeData ) { free ( ( * pEmxArray ) -> data ) ; }
free ( ( * pEmxArray ) -> size ) ; free ( * pEmxArray ) ; * pEmxArray = (
e0o14le1ty * ) NULL ; } } static real_T acgt4hcqdm ( int32_T n , const real_T
x [ 9 ] , int32_T ix0 ) { real_T y ; real_T scale ; int32_T kend ; real_T
absxk ; real_T t ; int32_T k ; y = 0.0 ; scale = 3.3121686421112381E-170 ;
kend = ( ix0 + n ) - 1 ; for ( k = ix0 ; k <= kend ; k ++ ) { absxk =
muDoubleScalarAbs ( x [ k - 1 ] ) ; if ( absxk > scale ) { t = scale / absxk
; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk / scale ; y += t *
t ; } } return scale * muDoubleScalarSqrt ( y ) ; } static void cclwscof0ale
( int32_T n , real_T a , const real_T x [ 3 ] , int32_T ix0 , real_T y [ 9 ]
, int32_T iy0 ) { int32_T ix ; int32_T iy ; int32_T k ; if ( ! ( a == 0.0 ) )
{ ix = ix0 - 1 ; iy = iy0 - 1 ; for ( k = 0 ; k < n ; k ++ ) { y [ iy ] += a
* x [ ix ] ; ix ++ ; iy ++ ; } } } static void cclwscof0al ( int32_T n ,
real_T a , const real_T x [ 9 ] , int32_T ix0 , real_T y [ 3 ] , int32_T iy0
) { int32_T ix ; int32_T iy ; int32_T k ; if ( ! ( a == 0.0 ) ) { ix = ix0 -
1 ; iy = iy0 - 1 ; for ( k = 0 ; k < n ; k ++ ) { y [ iy ] += a * x [ ix ] ;
ix ++ ; iy ++ ; } } } static void famffl5fga ( const real_T A [ 9 ] , real_T
U [ 9 ] , real_T s [ 3 ] , real_T V [ 9 ] ) { real_T b_A [ 9 ] ; real_T b_s [
3 ] ; real_T e [ 3 ] ; real_T work [ 3 ] ; int32_T qq ; boolean_T
apply_transform ; real_T nrm ; int32_T qjj ; int32_T m ; real_T rt ; int32_T
kase ; real_T ztest ; real_T smm1 ; real_T emm1 ; real_T sqds ; real_T shift
; int32_T k_ii ; int32_T d ; int32_T exitg1 ; boolean_T exitg2 ; e [ 0 ] =
0.0 ; work [ 0 ] = 0.0 ; e [ 1 ] = 0.0 ; work [ 1 ] = 0.0 ; e [ 2 ] = 0.0 ;
work [ 2 ] = 0.0 ; for ( qq = 0 ; qq < 9 ; qq ++ ) { b_A [ qq ] = A [ qq ] ;
U [ qq ] = 0.0 ; V [ qq ] = 0.0 ; } qq = 0 ; apply_transform = false ; nrm =
acgt4hcqdm ( 3 , b_A , 1 ) ; if ( nrm > 0.0 ) { apply_transform = true ; if (
b_A [ 0 ] < 0.0 ) { b_s [ 0 ] = - nrm ; } else { b_s [ 0 ] = nrm ; } if (
muDoubleScalarAbs ( b_s [ 0 ] ) >= 1.0020841800044864E-292 ) { nrm = 1.0 /
b_s [ 0 ] ; for ( qjj = 0 ; qjj < 3 ; qjj ++ ) { b_A [ qjj ] *= nrm ; } }
else { for ( qjj = 0 ; qjj < 3 ; qjj ++ ) { b_A [ qjj ] /= b_s [ 0 ] ; } }
b_A [ 0 ] ++ ; b_s [ 0 ] = - b_s [ 0 ] ; } else { b_s [ 0 ] = 0.0 ; } for ( d
= 1 ; d + 1 < 4 ; d ++ ) { qjj = 3 * d ; if ( apply_transform ) { cclwscof0a
( 3 , - ( ioaya51wqz ( 3 , b_A , 1 , b_A , qjj + 1 ) / b_A [ 0 ] ) , 1 , b_A
, qjj + 1 ) ; } e [ d ] = b_A [ qjj ] ; } while ( qq + 1 < 4 ) { U [ qq ] =
b_A [ qq ] ; qq ++ ; } nrm = acgt4hcqdm2 ( e , 2 ) ; if ( nrm == 0.0 ) { e [
0 ] = 0.0 ; } else { if ( e [ 1 ] < 0.0 ) { nrm = - nrm ; } e [ 0 ] = nrm ;
if ( muDoubleScalarAbs ( nrm ) >= 1.0020841800044864E-292 ) { nrm = 1.0 / nrm
; for ( qq = 1 ; qq < 3 ; qq ++ ) { e [ qq ] *= nrm ; } } else { for ( qq = 1
; qq < 3 ; qq ++ ) { e [ qq ] /= nrm ; } } e [ 1 ] ++ ; e [ 0 ] = - e [ 0 ] ;
for ( qq = 2 ; qq < 4 ; qq ++ ) { work [ qq - 1 ] = 0.0 ; } for ( qq = 1 ; qq
+ 1 < 4 ; qq ++ ) { cclwscof0al ( 2 , e [ qq ] , b_A , 3 * qq + 2 , work , 2
) ; } for ( qq = 1 ; qq + 1 < 4 ; qq ++ ) { cclwscof0ale ( 2 , - e [ qq ] / e
[ 1 ] , work , 2 , b_A , 3 * qq + 2 ) ; } } for ( qq = 1 ; qq + 1 < 4 ; qq ++
) { V [ qq ] = e [ qq ] ; } apply_transform = false ; nrm = acgt4hcqdm ( 2 ,
b_A , 5 ) ; if ( nrm > 0.0 ) { apply_transform = true ; if ( b_A [ 4 ] < 0.0
) { b_s [ 1 ] = - nrm ; } else { b_s [ 1 ] = nrm ; } if ( muDoubleScalarAbs (
b_s [ 1 ] ) >= 1.0020841800044864E-292 ) { nrm = 1.0 / b_s [ 1 ] ; for ( qjj
= 4 ; qjj < 6 ; qjj ++ ) { b_A [ qjj ] *= nrm ; } } else { for ( qjj = 4 ;
qjj < 6 ; qjj ++ ) { b_A [ qjj ] /= b_s [ 1 ] ; } } b_A [ 4 ] ++ ; b_s [ 1 ]
= - b_s [ 1 ] ; } else { b_s [ 1 ] = 0.0 ; } for ( d = 2 ; d + 1 < 4 ; d ++ )
{ qjj = 3 * d + 1 ; if ( apply_transform ) { cclwscof0a ( 2 , - ( ioaya51wqz
( 2 , b_A , 5 , b_A , qjj + 1 ) / b_A [ 4 ] ) , 5 , b_A , qjj + 1 ) ; } e [ d
] = b_A [ qjj ] ; } for ( qq = 1 ; qq + 1 < 4 ; qq ++ ) { U [ qq + 3 ] = b_A
[ qq + 3 ] ; } m = 1 ; b_s [ 2 ] = b_A [ 8 ] ; U [ 6 ] = 0.0 ; U [ 7 ] = 0.0
; U [ 8 ] = 1.0 ; for ( d = 1 ; d >= 0 ; d -- ) { qq = 3 * d + d ; if ( b_s [
d ] != 0.0 ) { for ( kase = d + 1 ; kase + 1 < 4 ; kase ++ ) { qjj = ( 3 *
kase + d ) + 1 ; cclwscof0a ( 3 - d , - ( ioaya51wqz ( 3 - d , U , qq + 1 , U
, qjj ) / U [ qq ] ) , qq + 1 , U , qjj ) ; } for ( qjj = d ; qjj + 1 < 4 ;
qjj ++ ) { U [ qjj + 3 * d ] = - U [ 3 * d + qjj ] ; } U [ qq ] ++ ; if ( 0
<= d - 1 ) { U [ 3 * d ] = 0.0 ; } } else { U [ 3 * d ] = 0.0 ; U [ 3 * d + 1
] = 0.0 ; U [ 3 * d + 2 ] = 0.0 ; U [ qq ] = 1.0 ; } } for ( qq = 2 ; qq >= 0
; qq -- ) { if ( ( qq + 1 <= 1 ) && ( e [ 0 ] != 0.0 ) ) { cclwscof0a ( 2 , -
( ioaya51wqz ( 2 , V , 2 , V , 5 ) / V [ 1 ] ) , 2 , V , 5 ) ; cclwscof0a ( 2
, - ( ioaya51wqz ( 2 , V , 2 , V , 8 ) / V [ 1 ] ) , 2 , V , 8 ) ; } V [ 3 *
qq ] = 0.0 ; V [ 3 * qq + 1 ] = 0.0 ; V [ 3 * qq + 2 ] = 0.0 ; V [ qq + 3 *
qq ] = 1.0 ; } ztest = e [ 0 ] ; if ( b_s [ 0 ] != 0.0 ) { rt =
muDoubleScalarAbs ( b_s [ 0 ] ) ; nrm = b_s [ 0 ] / rt ; b_s [ 0 ] = rt ;
ztest = e [ 0 ] / nrm ; jcpc2pyitk ( nrm , U , 1 ) ; } if ( ztest != 0.0 ) {
rt = muDoubleScalarAbs ( ztest ) ; nrm = rt / ztest ; ztest = rt ; b_s [ 1 ]
*= nrm ; jcpc2pyitk ( nrm , V , 4 ) ; } e [ 0 ] = ztest ; ztest = b_A [ 7 ] ;
if ( b_s [ 1 ] != 0.0 ) { rt = muDoubleScalarAbs ( b_s [ 1 ] ) ; nrm = b_s [
1 ] / rt ; b_s [ 1 ] = rt ; ztest = b_A [ 7 ] / nrm ; jcpc2pyitk ( nrm , U ,
4 ) ; } if ( ztest != 0.0 ) { rt = muDoubleScalarAbs ( ztest ) ; nrm = rt /
ztest ; ztest = rt ; b_s [ 2 ] = b_A [ 8 ] * nrm ; jcpc2pyitk ( nrm , V , 7 )
; } e [ 1 ] = ztest ; if ( b_s [ 2 ] != 0.0 ) { rt = muDoubleScalarAbs ( b_s
[ 2 ] ) ; nrm = b_s [ 2 ] / rt ; b_s [ 2 ] = rt ; jcpc2pyitk ( nrm , U , 7 )
; } e [ 2 ] = 0.0 ; qq = 0 ; nrm = muDoubleScalarMax ( muDoubleScalarMax (
muDoubleScalarMax ( b_s [ 0 ] , e [ 0 ] ) , muDoubleScalarMax ( b_s [ 1 ] ,
ztest ) ) , muDoubleScalarMax ( b_s [ 2 ] , 0.0 ) ) ; while ( ( m + 2 > 0 )
&& ( qq < 75 ) ) { kase = m + 1 ; do { exitg1 = 0 ; d = kase ; if ( kase == 0
) { exitg1 = 1 ; } else { rt = muDoubleScalarAbs ( e [ kase - 1 ] ) ; if ( (
rt <= ( muDoubleScalarAbs ( b_s [ kase - 1 ] ) + muDoubleScalarAbs ( b_s [
kase ] ) ) * 2.2204460492503131E-16 ) || ( ( rt <= 1.0020841800044864E-292 )
|| ( ( qq > 20 ) && ( rt <= 2.2204460492503131E-16 * nrm ) ) ) ) { e [ kase -
1 ] = 0.0 ; exitg1 = 1 ; } else { kase -- ; } } } while ( exitg1 == 0 ) ; if
( m + 1 == kase ) { kase = 4 ; } else { qjj = m + 2 ; k_ii = m + 2 ; exitg2 =
false ; while ( ( ! exitg2 ) && ( k_ii >= kase ) ) { qjj = k_ii ; if ( k_ii
== kase ) { exitg2 = true ; } else { rt = 0.0 ; if ( k_ii < m + 2 ) { rt =
muDoubleScalarAbs ( e [ k_ii - 1 ] ) ; } if ( k_ii > kase + 1 ) { rt +=
muDoubleScalarAbs ( e [ k_ii - 2 ] ) ; } ztest = muDoubleScalarAbs ( b_s [
k_ii - 1 ] ) ; if ( ( ztest <= 2.2204460492503131E-16 * rt ) || ( ztest <=
1.0020841800044864E-292 ) ) { b_s [ k_ii - 1 ] = 0.0 ; exitg2 = true ; } else
{ k_ii -- ; } } } if ( qjj == kase ) { kase = 3 ; } else if ( m + 2 == qjj )
{ kase = 1 ; } else { kase = 2 ; d = qjj ; } } switch ( kase ) { case 1 : rt
= e [ m ] ; e [ m ] = 0.0 ; for ( qjj = m ; qjj + 1 >= d + 1 ; qjj -- ) {
gooahaodf4 ( & b_s [ qjj ] , & rt , & ztest , & sqds ) ; if ( qjj + 1 > d + 1
) { rt = - sqds * e [ 0 ] ; e [ 0 ] *= ztest ; } gi4gcqiapd ( V , 3 * qjj + 1
, 3 * ( m + 1 ) + 1 , ztest , sqds ) ; } break ; case 2 : rt = e [ d - 1 ] ;
e [ d - 1 ] = 0.0 ; for ( qjj = d ; qjj < m + 2 ; qjj ++ ) { gooahaodf4 ( &
b_s [ qjj ] , & rt , & ztest , & sqds ) ; rt = - sqds * e [ qjj ] ; e [ qjj ]
*= ztest ; gi4gcqiapd ( U , 3 * qjj + 1 , 3 * ( d - 1 ) + 1 , ztest , sqds )
; } break ; case 3 : ztest = muDoubleScalarMax ( muDoubleScalarMax (
muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarAbs ( b_s [ m + 1 ] ) ,
muDoubleScalarAbs ( b_s [ m ] ) ) , muDoubleScalarAbs ( e [ m ] ) ) ,
muDoubleScalarAbs ( b_s [ d ] ) ) , muDoubleScalarAbs ( e [ d ] ) ) ; rt =
b_s [ m + 1 ] / ztest ; smm1 = b_s [ m ] / ztest ; emm1 = e [ m ] / ztest ;
sqds = b_s [ d ] / ztest ; smm1 = ( ( smm1 + rt ) * ( smm1 - rt ) + emm1 *
emm1 ) / 2.0 ; emm1 *= rt ; emm1 *= emm1 ; if ( ( smm1 != 0.0 ) || ( emm1 !=
0.0 ) ) { shift = muDoubleScalarSqrt ( smm1 * smm1 + emm1 ) ; if ( smm1 < 0.0
) { shift = - shift ; } shift = emm1 / ( smm1 + shift ) ; } else { shift =
0.0 ; } rt = ( sqds + rt ) * ( sqds - rt ) + shift ; ztest = e [ d ] / ztest
* sqds ; for ( qjj = d + 1 ; qjj <= m + 1 ; qjj ++ ) { gooahaodf4 ( & rt , &
ztest , & sqds , & smm1 ) ; if ( qjj > d + 1 ) { e [ 0 ] = rt ; } rt = b_s [
qjj - 1 ] * sqds + e [ qjj - 1 ] * smm1 ; e [ qjj - 1 ] = e [ qjj - 1 ] *
sqds - b_s [ qjj - 1 ] * smm1 ; ztest = smm1 * b_s [ qjj ] ; b_s [ qjj ] *=
sqds ; gi4gcqiapd ( V , 3 * ( qjj - 1 ) + 1 , 3 * qjj + 1 , sqds , smm1 ) ;
gooahaodf4 ( & rt , & ztest , & sqds , & smm1 ) ; b_s [ qjj - 1 ] = rt ; rt =
e [ qjj - 1 ] * sqds + smm1 * b_s [ qjj ] ; b_s [ qjj ] = e [ qjj - 1 ] * -
smm1 + sqds * b_s [ qjj ] ; ztest = smm1 * e [ qjj ] ; e [ qjj ] *= sqds ;
gi4gcqiapd ( U , 3 * ( qjj - 1 ) + 1 , 3 * qjj + 1 , sqds , smm1 ) ; } e [ m
] = rt ; qq ++ ; break ; default : if ( b_s [ d ] < 0.0 ) { b_s [ d ] = - b_s
[ d ] ; jcpc2pyitk ( - 1.0 , V , 3 * d + 1 ) ; } qq = d + 1 ; while ( ( d + 1
< 3 ) && ( b_s [ d ] < b_s [ qq ] ) ) { rt = b_s [ d ] ; b_s [ d ] = b_s [ qq
] ; b_s [ qq ] = rt ; bqzpevnceh ( V , 3 * d + 1 , 3 * ( d + 1 ) + 1 ) ;
bqzpevnceh ( U , 3 * d + 1 , 3 * ( d + 1 ) + 1 ) ; d = qq ; qq ++ ; } qq = 0
; m -- ; break ; } } s [ 0 ] = b_s [ 0 ] ; s [ 1 ] = b_s [ 1 ] ; s [ 2 ] =
b_s [ 2 ] ; } static real_T gtyczxxc3d ( const real_T x [ 9 ] ) { real_T y ;
boolean_T isodd ; real_T A [ 9 ] ; int8_T ipiv [ 3 ] ; int32_T j ; int32_T c
; int32_T ix ; real_T smax ; int32_T c_k ; int32_T iy ; real_T b_y ; int32_T
c_ix ; int32_T d ; int32_T ijA ; memcpy ( & A [ 0 ] , & x [ 0 ] , 9U * sizeof
( real_T ) ) ; ipiv [ 0 ] = 1 ; ipiv [ 1 ] = 2 ; for ( j = 0 ; j < 2 ; j ++ )
{ c = j << 2 ; iy = 0 ; ix = c ; smax = muDoubleScalarAbs ( A [ c ] ) ; for (
c_k = 2 ; c_k <= 3 - j ; c_k ++ ) { ix ++ ; b_y = muDoubleScalarAbs ( A [ ix
] ) ; if ( b_y > smax ) { iy = c_k - 1 ; smax = b_y ; } } if ( A [ c + iy ]
!= 0.0 ) { if ( iy != 0 ) { ipiv [ j ] = ( int8_T ) ( ( j + iy ) + 1 ) ; iy
+= j ; smax = A [ j ] ; A [ j ] = A [ iy ] ; A [ iy ] = smax ; ix = j + 3 ;
iy += 3 ; smax = A [ ix ] ; A [ ix ] = A [ iy ] ; A [ iy ] = smax ; ix += 3 ;
iy += 3 ; smax = A [ ix ] ; A [ ix ] = A [ iy ] ; A [ iy ] = smax ; } iy = (
c - j ) + 3 ; for ( ix = c + 1 ; ix < iy ; ix ++ ) { A [ ix ] /= A [ c ] ; }
} iy = c ; ix = c + 3 ; for ( c_k = 0 ; c_k <= 1 - j ; c_k ++ ) { smax = A [
ix ] ; if ( A [ ix ] != 0.0 ) { c_ix = c + 1 ; d = ( iy - j ) + 6 ; for ( ijA
= iy + 4 ; ijA < d ; ijA ++ ) { A [ ijA ] += A [ c_ix ] * - smax ; c_ix ++ ;
} } ix += 3 ; iy += 3 ; } } isodd = ( ipiv [ 0 ] > 1 ) ; y = A [ 0 ] * A [ 4
] * A [ 8 ] ; if ( ipiv [ 1 ] > 2 ) { isodd = ! isodd ; } if ( isodd ) { y =
- y ; } return y ; } static real_T c4hcjrkkwl ( const real_T x [ 3 ] ) {
real_T y ; real_T scale ; real_T absxk ; real_T t ; scale =
3.3121686421112381E-170 ; absxk = muDoubleScalarAbs ( x [ 0 ] ) ; if ( absxk
> 3.3121686421112381E-170 ) { y = 1.0 ; scale = absxk ; } else { t = absxk /
3.3121686421112381E-170 ; y = t * t ; } absxk = muDoubleScalarAbs ( x [ 1 ] )
; if ( absxk > scale ) { t = scale / absxk ; y = y * t * t + 1.0 ; scale =
absxk ; } else { t = absxk / scale ; y += t * t ; } absxk = muDoubleScalarAbs
( x [ 2 ] ) ; if ( absxk > scale ) { t = scale / absxk ; y = y * t * t + 1.0
; scale = absxk ; } else { t = absxk / scale ; y += t * t ; } return scale *
muDoubleScalarSqrt ( y ) ; } void MdlInitialize ( void ) { boolean_T tmp ;
uint32_T tseed ; int32_T t ; int32_T i ; real_T tmp_p ; rtX . nw3lgdo4ll [ 0
] = rtP . Integrator_IC [ 0 ] ; rtX . nw3lgdo4ll [ 1 ] = rtP . Integrator_IC
[ 1 ] ; rtX . nw3lgdo4ll [ 2 ] = rtP . Integrator_IC [ 2 ] ; rtX . nw3lgdo4ll
[ 3 ] = rtP . Integrator_IC [ 3 ] ; rtX . dspzybtrlj [ 0 ] = rtP .
Integrator4_IC [ 0 ] ; rtX . dspzybtrlj [ 1 ] = rtP . Integrator4_IC [ 1 ] ;
rtX . dspzybtrlj [ 2 ] = rtP . Integrator4_IC [ 2 ] ; memcpy ( & rtX .
jwpzday0b1 [ 0 ] , & rtP . Integrator5_IC [ 0 ] , 9U * sizeof ( real_T ) ) ;
rtX . cihjvn0cmd = rtP . Integrator_IC_hsiqnplk4j ; rtDW . o15the1ksz = 1 ;
if ( ssIsFirstInitCond ( rtS ) ) { rtX . m5cncmmh3t [ 0 ] = 0.001 ; rtX .
m5cncmmh3t [ 1 ] = 0.001 ; rtX . m5cncmmh3t [ 2 ] = 0.001 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW . o15the1ksz = ! tmp ; }
else { rtDW . o15the1ksz = 1 ; } } for ( i = 0 ; i < 6 ; i ++ ) { rtX .
jvfedonto2 [ i ] = rtP . Integrator_IC_ltduz3t0gp [ i ] ; } tmp_p =
muDoubleScalarFloor ( rtP . ARWNOISE_Seed ) ; if ( muDoubleScalarIsNaN (
tmp_p ) || muDoubleScalarIsInf ( tmp_p ) ) { tmp_p = 0.0 ; } else { tmp_p =
muDoubleScalarRem ( tmp_p , 4.294967296E+9 ) ; } tseed = tmp_p < 0.0 ? (
uint32_T ) - ( int32_T ) ( uint32_T ) - tmp_p : ( uint32_T ) tmp_p ; i = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) i << 16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } rtDW . azi1v4q3r4 [ 0 ] = tseed ; rtDW . ibb0msb3ue [ 0 ] =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . azi1v4q3r4 [ 0 ] ) * rtP .
ARWNOISE_StdDev [ 0 ] + rtP . ARWNOISE_Mean ; tmp_p = muDoubleScalarFloor (
rtP . ARWNOISE_Seed ) ; if ( muDoubleScalarIsNaN ( tmp_p ) ||
muDoubleScalarIsInf ( tmp_p ) ) { tmp_p = 0.0 ; } else { tmp_p =
muDoubleScalarRem ( tmp_p , 4.294967296E+9 ) ; } tseed = tmp_p < 0.0 ? (
uint32_T ) - ( int32_T ) ( uint32_T ) - tmp_p : ( uint32_T ) tmp_p ; i = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) i << 16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } rtDW . azi1v4q3r4 [ 1 ] = tseed ; rtDW . ibb0msb3ue [ 1 ] =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . azi1v4q3r4 [ 1 ] ) * rtP .
ARWNOISE_StdDev [ 1 ] + rtP . ARWNOISE_Mean ; tmp_p = muDoubleScalarFloor (
rtP . ARWNOISE_Seed ) ; if ( muDoubleScalarIsNaN ( tmp_p ) ||
muDoubleScalarIsInf ( tmp_p ) ) { tmp_p = 0.0 ; } else { tmp_p =
muDoubleScalarRem ( tmp_p , 4.294967296E+9 ) ; } tseed = tmp_p < 0.0 ? (
uint32_T ) - ( int32_T ) ( uint32_T ) - tmp_p : ( uint32_T ) tmp_p ; i = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) i << 16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } rtDW . azi1v4q3r4 [ 2 ] = tseed ; rtDW . ibb0msb3ue [ 2 ] =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . azi1v4q3r4 [ 2 ] ) * rtP .
ARWNOISE_StdDev [ 2 ] + rtP . ARWNOISE_Mean ; rtDW . btxv3caz21 = 1 ; if (
ssIsFirstInitCond ( rtS ) ) { rtX . hqsmobf5wk [ 0 ] = 0.017453292519943295 ;
rtX . hqsmobf5wk [ 1 ] = 0.017453292519943295 ; rtX . hqsmobf5wk [ 2 ] =
0.017453292519943295 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp )
{ tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW . btxv3caz21 = ! tmp
; } else { rtDW . btxv3caz21 = 1 ; } } rtX . iva5vtj1tw [ 0 ] = rtP .
Integrator3_IC [ 0 ] ; rtX . iva5vtj1tw [ 1 ] = rtP . Integrator3_IC [ 1 ] ;
rtX . iva5vtj1tw [ 2 ] = rtP . Integrator3_IC [ 2 ] ; rtX . iva5vtj1tw [ 3 ]
= rtP . Integrator3_IC [ 3 ] ; tmp_p = muDoubleScalarFloor ( rtP . theta_Seed
) ; if ( muDoubleScalarIsNaN ( tmp_p ) || muDoubleScalarIsInf ( tmp_p ) ) {
tmp_p = 0.0 ; } else { tmp_p = muDoubleScalarRem ( tmp_p , 4.294967296E+9 ) ;
} tseed = tmp_p < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - tmp_p : (
uint32_T ) tmp_p ; i = ( int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed
& 32768U ) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) i << 16U ) ) + t ) << 16U
) + t ) + i ; if ( tseed < 1U ) { tseed = 1144108930U ; } else { if ( tseed >
2147483646U ) { tseed = 2147483646U ; } } rtDW . ajwa5oigiq = tseed ; rtDW .
nhf0go2f0l = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . ajwa5oigiq ) * rtP .
theta_StdDev + rtP . theta_Mean ; tmp_p = muDoubleScalarFloor ( rtP .
psi_Seed ) ; if ( muDoubleScalarIsNaN ( tmp_p ) || muDoubleScalarIsInf (
tmp_p ) ) { tmp_p = 0.0 ; } else { tmp_p = muDoubleScalarRem ( tmp_p ,
4.294967296E+9 ) ; } tseed = tmp_p < 0.0 ? ( uint32_T ) - ( int32_T ) (
uint32_T ) - tmp_p : ( uint32_T ) tmp_p ; i = ( int32_T ) ( tseed >> 16U ) ;
t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) i
<< 16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed < 1U ) { tseed = 1144108930U
; } else { if ( tseed > 2147483646U ) { tseed = 2147483646U ; } } rtDW .
k1cyo3ic4z = tseed ; rtDW . fa3l1x4zjw = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW
. k1cyo3ic4z ) * rtP . psi_StdDev + rtP . psi_Mean ; tmp_p =
muDoubleScalarFloor ( rtP . phi_Seed ) ; if ( muDoubleScalarIsNaN ( tmp_p )
|| muDoubleScalarIsInf ( tmp_p ) ) { tmp_p = 0.0 ; } else { tmp_p =
muDoubleScalarRem ( tmp_p , 4.294967296E+9 ) ; } tseed = tmp_p < 0.0 ? (
uint32_T ) - ( int32_T ) ( uint32_T ) - tmp_p : ( uint32_T ) tmp_p ; i = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) i << 16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } rtDW . gzh33iv0mh = tseed ; rtDW . ec4iczeuop =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . gzh33iv0mh ) * rtP . phi_StdDev + rtP .
phi_Mean ; tmp_p = muDoubleScalarFloor ( rtP . xi_Seed ) ; if (
muDoubleScalarIsNaN ( tmp_p ) || muDoubleScalarIsInf ( tmp_p ) ) { tmp_p =
0.0 ; } else { tmp_p = muDoubleScalarRem ( tmp_p , 4.294967296E+9 ) ; } tseed
= tmp_p < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - tmp_p : ( uint32_T
) tmp_p ; i = ( int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U
) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) i << 16U ) ) + t ) << 16U ) + t )
+ i ; if ( tseed < 1U ) { tseed = 1144108930U ; } else { if ( tseed >
2147483646U ) { tseed = 2147483646U ; } } rtDW . gpmzgjuozq = tseed ; rtDW .
mxct422gc5 = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . gpmzgjuozq ) * rtP .
xi_StdDev + rtP . xi_Mean ; tmp_p = muDoubleScalarFloor ( rtP .
psi_Seed_nhbuxltuo0 ) ; if ( muDoubleScalarIsNaN ( tmp_p ) ||
muDoubleScalarIsInf ( tmp_p ) ) { tmp_p = 0.0 ; } else { tmp_p =
muDoubleScalarRem ( tmp_p , 4.294967296E+9 ) ; } tseed = tmp_p < 0.0 ? (
uint32_T ) - ( int32_T ) ( uint32_T ) - tmp_p : ( uint32_T ) tmp_p ; i = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) i << 16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } rtDW . erahgh0zpk = tseed ; rtDW . hjp0iqtsnv =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . erahgh0zpk ) * rtP .
psi_StdDev_i2auns3m0i + rtP . psi_Mean_iicgv5oqe1 ; tmp_p =
muDoubleScalarFloor ( rtP . phi_Seed_pxcyibbjyy ) ; if ( muDoubleScalarIsNaN
( tmp_p ) || muDoubleScalarIsInf ( tmp_p ) ) { tmp_p = 0.0 ; } else { tmp_p =
muDoubleScalarRem ( tmp_p , 4.294967296E+9 ) ; } tseed = tmp_p < 0.0 ? (
uint32_T ) - ( int32_T ) ( uint32_T ) - tmp_p : ( uint32_T ) tmp_p ; i = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) i << 16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } rtDW . b0fewzdtg1 = tseed ; rtDW . i1kfofikbc =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . b0fewzdtg1 ) * rtP .
phi_StdDev_msvebjj1dn + rtP . phi_Mean_nqrm2dpg35 ; tmp_p =
muDoubleScalarFloor ( rtP . theta_Seed_jytd3ezmcj ) ; if (
muDoubleScalarIsNaN ( tmp_p ) || muDoubleScalarIsInf ( tmp_p ) ) { tmp_p =
0.0 ; } else { tmp_p = muDoubleScalarRem ( tmp_p , 4.294967296E+9 ) ; } tseed
= tmp_p < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - tmp_p : ( uint32_T
) tmp_p ; i = ( int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U
) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) i << 16U ) ) + t ) << 16U ) + t )
+ i ; if ( tseed < 1U ) { tseed = 1144108930U ; } else { if ( tseed >
2147483646U ) { tseed = 2147483646U ; } } rtDW . jzbfaxoaz4 = tseed ; rtDW .
jkyamiugmq = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . jzbfaxoaz4 ) * rtP .
theta_StdDev_cz5h30rgng + rtP . theta_Mean_oiiju3ziio ; tmp_p =
muDoubleScalarFloor ( rtP . psi_Seed_j4mig0d0wa ) ; if ( muDoubleScalarIsNaN
( tmp_p ) || muDoubleScalarIsInf ( tmp_p ) ) { tmp_p = 0.0 ; } else { tmp_p =
muDoubleScalarRem ( tmp_p , 4.294967296E+9 ) ; } tseed = tmp_p < 0.0 ? (
uint32_T ) - ( int32_T ) ( uint32_T ) - tmp_p : ( uint32_T ) tmp_p ; i = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) i << 16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } rtDW . dc0ryh5mbb = tseed ; rtDW . o4n211i2ui =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . dc0ryh5mbb ) * rtP .
psi_StdDev_cxrntnbbi4 + rtP . psi_Mean_dw5aio5m2x ; tmp_p =
muDoubleScalarFloor ( rtP . phi_Seed_irem2jkqzf ) ; if ( muDoubleScalarIsNaN
( tmp_p ) || muDoubleScalarIsInf ( tmp_p ) ) { tmp_p = 0.0 ; } else { tmp_p =
muDoubleScalarRem ( tmp_p , 4.294967296E+9 ) ; } tseed = tmp_p < 0.0 ? (
uint32_T ) - ( int32_T ) ( uint32_T ) - tmp_p : ( uint32_T ) tmp_p ; i = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) i << 16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } rtDW . a41rrbiaut = tseed ; rtDW . mfs3ug1ss0 =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . a41rrbiaut ) * rtP .
phi_StdDev_dkurksjsig + rtP . phi_Mean_p0kq0rtldo ; rtDW . dslujyjxf5 = (
rtInf ) ; rtDW . bvvwmumrhs = ( rtInf ) ; tmp_p = muDoubleScalarFloor ( rtP .
RRWNOISE_Seed ) ; if ( muDoubleScalarIsNaN ( tmp_p ) || muDoubleScalarIsInf (
tmp_p ) ) { tmp_p = 0.0 ; } else { tmp_p = muDoubleScalarRem ( tmp_p ,
4.294967296E+9 ) ; } tseed = tmp_p < 0.0 ? ( uint32_T ) - ( int32_T ) (
uint32_T ) - tmp_p : ( uint32_T ) tmp_p ; i = ( int32_T ) ( tseed >> 16U ) ;
t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) i
<< 16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed < 1U ) { tseed = 1144108930U
; } else { if ( tseed > 2147483646U ) { tseed = 2147483646U ; } } rtDW .
mjetb5jzdi [ 0 ] = tseed ; rtDW . mpbkk0mzty [ 0 ] =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . mjetb5jzdi [ 0 ] ) * rtP .
RRWNOISE_StdDev [ 0 ] + rtP . RRWNOISE_Mean ; tmp_p = muDoubleScalarFloor (
rtP . RRWNOISE_Seed ) ; if ( muDoubleScalarIsNaN ( tmp_p ) ||
muDoubleScalarIsInf ( tmp_p ) ) { tmp_p = 0.0 ; } else { tmp_p =
muDoubleScalarRem ( tmp_p , 4.294967296E+9 ) ; } tseed = tmp_p < 0.0 ? (
uint32_T ) - ( int32_T ) ( uint32_T ) - tmp_p : ( uint32_T ) tmp_p ; i = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) i << 16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } rtDW . mjetb5jzdi [ 1 ] = tseed ; rtDW . mpbkk0mzty [ 1 ] =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . mjetb5jzdi [ 1 ] ) * rtP .
RRWNOISE_StdDev [ 1 ] + rtP . RRWNOISE_Mean ; tmp_p = muDoubleScalarFloor (
rtP . RRWNOISE_Seed ) ; if ( muDoubleScalarIsNaN ( tmp_p ) ||
muDoubleScalarIsInf ( tmp_p ) ) { tmp_p = 0.0 ; } else { tmp_p =
muDoubleScalarRem ( tmp_p , 4.294967296E+9 ) ; } tseed = tmp_p < 0.0 ? (
uint32_T ) - ( int32_T ) ( uint32_T ) - tmp_p : ( uint32_T ) tmp_p ; i = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) i << 16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } rtDW . mjetb5jzdi [ 2 ] = tseed ; rtDW . mpbkk0mzty [ 2 ] =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . mjetb5jzdi [ 2 ] ) * rtP .
RRWNOISE_StdDev [ 2 ] + rtP . RRWNOISE_Mean ; memcpy ( & rtX . ka0tu4yhzy [ 0
] , & rtP . Integrator6_IC [ 0 ] , 9U * sizeof ( real_T ) ) ; } void MdlStart
( void ) { { void * * slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; void *
r2 = ( NULL ) ; void * * pOSigstreamManagerAddr = ( NULL ) ; const int
maxErrorBufferSize = 16384 ; char errMsgCreatingOSigstreamManager [ 16384 ] ;
bool errorCreatingOSigstreamManager = false ; const char *
errorAddingR2SharedResource = ( NULL ) ; * slioCatalogueAddr =
rtwGetNewSlioCatalogue ( rt_GetMatSigLogSelectorFileName ( ) ) ;
errorAddingR2SharedResource = rtwAddR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) , 1 ) ; if (
errorAddingR2SharedResource != ( NULL ) ) { rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = ( NULL ) ; ssSetErrorStatus ( rtS
, errorAddingR2SharedResource ) ; return ; } r2 = rtwGetR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ) ;
pOSigstreamManagerAddr = rt_GetOSigstreamManagerAddr ( ) ;
errorCreatingOSigstreamManager = rtwOSigstreamManagerCreateInstance (
rt_GetMatSigLogSelectorFileName ( ) , r2 , pOSigstreamManagerAddr ,
errMsgCreatingOSigstreamManager , maxErrorBufferSize ) ; if (
errorCreatingOSigstreamManager ) { * pOSigstreamManagerAddr = ( NULL ) ;
ssSetErrorStatus ( rtS , errMsgCreatingOSigstreamManager ) ; return ; } } {
bool externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
externalInputIsInDatasetFormat ) { } } rtB . anr2sc1zx1 [ 0 ] = rtP .
Omega0vector_Value [ 0 ] ; rtB . gvact2smmw [ 0 ] = rtP . bt0_Value [ 0 ] ;
rtB . anr2sc1zx1 [ 1 ] = rtP . Omega0vector_Value [ 1 ] ; rtB . gvact2smmw [
1 ] = rtP . bt0_Value [ 1 ] ; rtB . anr2sc1zx1 [ 2 ] = rtP .
Omega0vector_Value [ 2 ] ; rtB . gvact2smmw [ 2 ] = rtP . bt0_Value [ 2 ] ;
rtDW . jzg2v02ptv = - 1 ; rtDW . b2pp5qcbxs = 0 ; rtDW . ifnw2qfqxj = 0 ;
rtDW . o03ihhvu3e = 0 ; rtDW . ic2qykr33o = - 1 ; rtDW . cfspruispf = 0 ;
rtDW . fmsxqmnuh0 = 0 ; rtDW . fo0xzwvgga = 0 ; rtDW . b2iz5oj0mf = 0 ; rtDW
. l3rcki4h0b = 0 ; rtDW . dmalgfdtrs = - 1 ; rtDW . mn0b4y0wpz = 0 ;
MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) { real_T maxeoqgvnt ;
real_T b43myd2lx4 ; real_T enmo4qqvvf ; real_T f0z2u2ketc ; real_T nmnsncpmd4
; real_T c3firpzw41 ; real_T ( * lastU ) [ 3 ] ; real_T hr ; real_T V [ 16 ]
; real_T absx ; int32_T b_k ; real_T A [ 12 ] ; real_T V_p [ 9 ] ; int32_T r
; int32_T vcol ; real_T U [ 12 ] ; int32_T br ; int32_T ia ; int32_T b_ic ;
real_T scale ; real_T absxk ; real_T t ; boolean_T rEQ0 ; real_T b_t ; real_T
N ; e0o14le1ty * g ; e0o14le1ty * h ; real_T Bt ; real_T P11 ; real_T P10 ;
real_T dP11 ; real_T dP10 ; real_T P20 ; real_T dP20 ; real_T P2 ; real_T K ;
real_T M [ 9 ] ; int8_T rtPrevAction ; int8_T rtAction ; real_T dghj2fsjsm [
3 ] ; real_T p1ztmtvx4f [ 3 ] ; real_T ftoyuad4xo [ 12 ] ; real_T os1yn0v0kz
[ 9 ] ; real_T pikft3nvkg [ 3 ] ; real_T hr_p [ 12 ] ; real_T c [ 9 ] ;
real_T tmp [ 18 ] ; real_T tmp_p [ 6 ] ; real_T U_p [ 9 ] ; real_T
mocgl1xiux_idx_0 ; real_T mocgl1xiux_idx_1 ; real_T mocgl1xiux_idx_2 ; real_T
mocgl1xiux_idx_3 ; static const int8_T b [ 3 ] = { 0 , 0 , 1 } ; static const
int8_T a [ 3 ] = { 1 , 0 , 0 } ; static const int8_T b_a [ 3 ] = { 0 , 1 , 0
} ; static const int8_T N_b [ 30 ] = { 1 , 0 , 0 , - 1 , 0 , 0 , 1 , - 1 , 1
, - 1 , 0 , 1 , 0 , 0 , - 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , - 1 , 0
, 0 , 0 , 0 } ; static const real_T A_p [ 10 ] = { 0.034 ,
0.010000000000000002 , 0.034 , 0.034 , 0.010000000000000002 , 0.034 , 0.102 ,
0.102 , 0.102 , 0.102 } ; static const real_T R_b [ 30 ] = { 0.032 , - 0.018
, - 0.018 , - 0.032 , 0.018 , 0.018 , 0.0 , 0.0 , - 0.0 , - 0.0 , 0.0 , 0.17
, 0.0 , - 0.0 , - 0.17 , - 0.0 , 0.035 , 0.035 , - 0.035 , - 0.035 , 0.0 ,
0.0 , 0.05 , - 0.0 , - 0.0 , - 0.05 , 0.0 , 0.0 , - 0.0 , - 0.0 } ; boolean_T
exitg1 ; srClearBC ( rtDW . geox5czrb34 . ie02gmwcra ) ; srClearBC ( rtDW .
jda3fmwzpyl . fjromfvqvr ) ; srClearBC ( rtDW . pwl3yyzylbp . iod0jhjcju ) ;
rtB . buaztywrb3 [ 0 ] = rtX . nw3lgdo4ll [ 0 ] ; rtB . buaztywrb3 [ 1 ] =
rtX . nw3lgdo4ll [ 1 ] ; rtB . buaztywrb3 [ 2 ] = rtX . nw3lgdo4ll [ 2 ] ;
rtB . buaztywrb3 [ 3 ] = rtX . nw3lgdo4ll [ 3 ] ; hr = rtB . e0jir2rqfh * rtP
. Inertiaofwheel_Value ; ftoyuad4xo [ 0 ] = - muDoubleScalarCos ( rtB .
cyqsqy0bbk ) * muDoubleScalarCos ( rtB . buaztywrb3 [ 0 ] ) * hr ; ftoyuad4xo
[ 3 ] = hr * muDoubleScalarSin ( rtB . buaztywrb3 [ 1 ] ) ; ftoyuad4xo [ 6 ]
= muDoubleScalarCos ( rtB . cyqsqy0bbk ) * muDoubleScalarCos ( rtB .
buaztywrb3 [ 2 ] ) * hr ; ftoyuad4xo [ 9 ] = hr * - muDoubleScalarSin ( rtB .
buaztywrb3 [ 3 ] ) ; ftoyuad4xo [ 1 ] = hr * - muDoubleScalarSin ( rtB .
buaztywrb3 [ 0 ] ) ; ftoyuad4xo [ 4 ] = - muDoubleScalarCos ( rtB .
cyqsqy0bbk ) * muDoubleScalarCos ( rtB . buaztywrb3 [ 1 ] ) * hr ; ftoyuad4xo
[ 7 ] = hr * muDoubleScalarSin ( rtB . buaztywrb3 [ 2 ] ) ; ftoyuad4xo [ 10 ]
= muDoubleScalarCos ( rtB . cyqsqy0bbk ) * muDoubleScalarCos ( rtB .
buaztywrb3 [ 3 ] ) * hr ; ftoyuad4xo [ 2 ] = muDoubleScalarSin ( rtB .
cyqsqy0bbk ) * muDoubleScalarCos ( rtB . buaztywrb3 [ 0 ] ) * hr ; ftoyuad4xo
[ 5 ] = muDoubleScalarSin ( rtB . cyqsqy0bbk ) * muDoubleScalarCos ( rtB .
buaztywrb3 [ 1 ] ) * hr ; ftoyuad4xo [ 8 ] = muDoubleScalarSin ( rtB .
cyqsqy0bbk ) * muDoubleScalarCos ( rtB . buaztywrb3 [ 2 ] ) * hr ; ftoyuad4xo
[ 11 ] = muDoubleScalarSin ( rtB . cyqsqy0bbk ) * muDoubleScalarCos ( rtB .
buaztywrb3 [ 3 ] ) * hr ; rEQ0 = true ; for ( b_k = 0 ; b_k < 12 ; b_k ++ ) {
if ( rEQ0 && ( ( ! muDoubleScalarIsInf ( ftoyuad4xo [ b_k ] ) ) && ( !
muDoubleScalarIsNaN ( ftoyuad4xo [ b_k ] ) ) ) ) { } else { rEQ0 = false ; }
} if ( rEQ0 ) { gsbjhe5ea4 ( ftoyuad4xo , V_p , p1ztmtvx4f , V ) ; absx =
muDoubleScalarAbs ( p1ztmtvx4f [ 0 ] ) ; if ( ( ! muDoubleScalarIsInf ( absx
) ) && ( ! muDoubleScalarIsNaN ( absx ) ) && ( ! ( absx <=
2.2250738585072014E-308 ) ) ) { frexp ( absx , & br ) ; } } hr_p [ 0 ] = -
muDoubleScalarCos ( rtB . cyqsqy0bbk ) * muDoubleScalarSin ( rtB . buaztywrb3
[ 0 ] ) * hr ; hr_p [ 3 ] = hr * - muDoubleScalarCos ( rtB . buaztywrb3 [ 1 ]
) ; hr_p [ 6 ] = muDoubleScalarCos ( rtB . cyqsqy0bbk ) * muDoubleScalarSin (
rtB . buaztywrb3 [ 2 ] ) * hr ; hr_p [ 9 ] = hr * muDoubleScalarCos ( rtB .
buaztywrb3 [ 3 ] ) ; hr_p [ 1 ] = hr * muDoubleScalarCos ( rtB . buaztywrb3 [
0 ] ) ; hr_p [ 4 ] = - muDoubleScalarCos ( rtB . cyqsqy0bbk ) *
muDoubleScalarSin ( rtB . buaztywrb3 [ 1 ] ) * hr ; hr_p [ 7 ] = hr * -
muDoubleScalarCos ( rtB . buaztywrb3 [ 2 ] ) ; hr_p [ 10 ] =
muDoubleScalarCos ( rtB . cyqsqy0bbk ) * muDoubleScalarSin ( rtB . buaztywrb3
[ 3 ] ) * hr ; hr_p [ 2 ] = muDoubleScalarSin ( rtB . cyqsqy0bbk ) *
muDoubleScalarSin ( rtB . buaztywrb3 [ 0 ] ) * hr ; hr_p [ 5 ] =
muDoubleScalarSin ( rtB . cyqsqy0bbk ) * muDoubleScalarSin ( rtB . buaztywrb3
[ 1 ] ) * hr ; hr_p [ 8 ] = muDoubleScalarSin ( rtB . cyqsqy0bbk ) *
muDoubleScalarSin ( rtB . buaztywrb3 [ 2 ] ) * hr ; hr_p [ 11 ] =
muDoubleScalarSin ( rtB . cyqsqy0bbk ) * muDoubleScalarSin ( rtB . buaztywrb3
[ 3 ] ) * hr ; for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { A [ vcol << 2 ] =
ftoyuad4xo [ vcol ] ; A [ ( vcol << 2 ) + 1 ] = ftoyuad4xo [ vcol + 3 ] ; A [
( vcol << 2 ) + 2 ] = ftoyuad4xo [ vcol + 6 ] ; A [ ( vcol << 2 ) + 3 ] =
ftoyuad4xo [ vcol + 9 ] ; mocgl1xiux_idx_0 = hr_p [ vcol + 9 ] + ( hr_p [
vcol + 6 ] + ( hr_p [ vcol + 3 ] + hr_p [ vcol ] ) ) ; dghj2fsjsm [ vcol ] =
mocgl1xiux_idx_0 ; } rEQ0 = true ; for ( b_k = 0 ; b_k < 12 ; b_k ++ ) { hr_p
[ b_k ] = 0.0 ; if ( rEQ0 && ( ( ! muDoubleScalarIsInf ( A [ b_k ] ) ) && ( !
muDoubleScalarIsNaN ( A [ b_k ] ) ) ) ) { } else { rEQ0 = false ; } } if ( !
rEQ0 ) { for ( vcol = 0 ; vcol < 12 ; vcol ++ ) { hr_p [ vcol ] = ( rtNaN ) ;
} } else { ahliv2534q ( A , U , p1ztmtvx4f , V_p ) ; absx = muDoubleScalarAbs
( p1ztmtvx4f [ 0 ] ) ; if ( ( ! muDoubleScalarIsInf ( absx ) ) && ( !
muDoubleScalarIsNaN ( absx ) ) ) { if ( absx <= 2.2250738585072014E-308 ) {
hr = 4.94065645841247E-324 ; } else { frexp ( absx , & r ) ; hr = ldexp ( 1.0
, r - 53 ) ; } } else { hr = ( rtNaN ) ; } hr *= 4.0 ; r = - 1 ; b_k = 0 ;
while ( ( b_k < 3 ) && ( p1ztmtvx4f [ b_k ] > hr ) ) { r ++ ; b_k ++ ; } if (
r + 1 > 0 ) { vcol = 0 ; for ( br = 0 ; br <= r ; br ++ ) { hr = 1.0 /
p1ztmtvx4f [ br ] ; for ( b_k = vcol ; b_k < vcol + 3 ; b_k ++ ) { V_p [ b_k
] *= hr ; } vcol += 3 ; } for ( br = 0 ; br < 3 ; br ++ ) { hr_p [ br ] = 0.0
; } for ( br = 3 ; br < 6 ; br ++ ) { hr_p [ br ] = 0.0 ; } for ( br = 6 ; br
< 9 ; br ++ ) { hr_p [ br ] = 0.0 ; } for ( br = 9 ; br < 12 ; br ++ ) { hr_p
[ br ] = 0.0 ; } vcol = - 1 ; b_k = ( r << 2 ) + 1 ; for ( br = 1 ; br <= b_k
; br += 4 ) { ia = vcol ; for ( b_ic = 0 ; b_ic < 3 ; b_ic ++ ) { ia ++ ;
hr_p [ b_ic ] += U [ br - 1 ] * V_p [ ia ] ; } vcol += 3 ; } vcol = - 1 ; b_k
= ( r << 2 ) + 2 ; for ( br = 2 ; br <= b_k ; br += 4 ) { ia = vcol ; for (
b_ic = 3 ; b_ic < 6 ; b_ic ++ ) { ia ++ ; hr_p [ b_ic ] += U [ br - 1 ] * V_p
[ ia ] ; } vcol += 3 ; } vcol = - 1 ; b_k = ( r << 2 ) + 3 ; for ( br = 3 ;
br <= b_k ; br += 4 ) { ia = vcol ; for ( b_ic = 6 ; b_ic < 9 ; b_ic ++ ) {
ia ++ ; hr_p [ b_ic ] += U [ br - 1 ] * V_p [ ia ] ; } vcol += 3 ; } vcol = -
1 ; b_k = ( r << 2 ) + 4 ; for ( br = 4 ; br <= b_k ; br += 4 ) { ia = vcol ;
for ( b_ic = 9 ; b_ic < 12 ; b_ic ++ ) { ia ++ ; hr_p [ b_ic ] += U [ br - 1
] * V_p [ ia ] ; } vcol += 3 ; } } } rtB . jnwqbmkojt [ 0 ] = rtX .
dspzybtrlj [ 0 ] ; rtB . jnwqbmkojt [ 1 ] = rtX . dspzybtrlj [ 1 ] ; rtB .
jnwqbmkojt [ 2 ] = rtX . dspzybtrlj [ 2 ] ; p1ztmtvx4f [ 0 ] = rtB .
jnwqbmkojt [ 0 ] ; p1ztmtvx4f [ 1 ] = rtB . jnwqbmkojt [ 1 ] ; p1ztmtvx4f [ 2
] = rtB . jnwqbmkojt [ 2 ] ; rtB . oqsaecduyj = ssGetT ( rtS ) ; memcpy ( &
rtB . nhuthseoki [ 0 ] , & rtX . jwpzday0b1 [ 0 ] , 9U * sizeof ( real_T ) )
; rtB . kenhd3kcjp = rtX . cihjvn0cmd ; V_p [ 0 ] = muDoubleScalarCos ( rtB .
kenhd3kcjp + rtP . omega ) ; V_p [ 3 ] = muDoubleScalarSin ( rtB . kenhd3kcjp
+ rtP . omega ) ; V_p [ 6 ] = 0.0 ; V_p [ 1 ] = - muDoubleScalarSin ( rtB .
kenhd3kcjp + rtP . omega ) ; V_p [ 4 ] = muDoubleScalarCos ( rtB . kenhd3kcjp
+ rtP . omega ) ; V_p [ 7 ] = 0.0 ; V_p [ 2 ] = 0.0 ; c [ 0 ] = 1.0 ; V_p [ 5
] = 0.0 ; c [ 3 ] = 0.0 ; V_p [ 8 ] = 1.0 ; c [ 6 ] = 0.0 ; c [ 1 ] = 0.0 ; c
[ 4 ] = muDoubleScalarCos ( rtB . mjfbd5uniz ) ; c [ 7 ] = muDoubleScalarSin
( rtB . mjfbd5uniz ) ; c [ 2 ] = 0.0 ; c [ 5 ] = - muDoubleScalarSin ( rtB .
mjfbd5uniz ) ; c [ 8 ] = muDoubleScalarCos ( rtB . mjfbd5uniz ) ; U_p [ 0 ] =
muDoubleScalarCos ( rtP . RAAN ) ; U_p [ 3 ] = muDoubleScalarSin ( rtP . RAAN
) ; U_p [ 6 ] = 0.0 ; U_p [ 1 ] = - muDoubleScalarSin ( rtP . RAAN ) ; U_p [
4 ] = muDoubleScalarCos ( rtP . RAAN ) ; U_p [ 7 ] = 0.0 ; for ( vcol = 0 ;
vcol < 3 ; vcol ++ ) { for ( r = 0 ; r < 3 ; r ++ ) { M [ vcol + 3 * r ] =
0.0 ; M [ vcol + 3 * r ] += c [ 3 * r ] * V_p [ vcol ] ; M [ vcol + 3 * r ]
+= c [ 3 * r + 1 ] * V_p [ vcol + 3 ] ; M [ vcol + 3 * r ] += c [ 3 * r + 2 ]
* V_p [ vcol + 6 ] ; } U_p [ 3 * vcol + 2 ] = b [ vcol ] ; } for ( vcol = 0 ;
vcol < 3 ; vcol ++ ) { for ( r = 0 ; r < 3 ; r ++ ) { os1yn0v0kz [ r + 3 *
vcol ] = 0.0 ; os1yn0v0kz [ r + 3 * vcol ] += U_p [ 3 * vcol ] * M [ r ] ;
os1yn0v0kz [ r + 3 * vcol ] += U_p [ 3 * vcol + 1 ] * M [ r + 3 ] ;
os1yn0v0kz [ r + 3 * vcol ] += U_p [ 3 * vcol + 2 ] * M [ r + 6 ] ; } } for (
vcol = 0 ; vcol < 3 ; vcol ++ ) { t = 0.0 ; for ( r = 0 ; r < 3 ; r ++ ) {
rtB . kmm3rkbbyq [ vcol + 3 * r ] = 0.0 ; V_p [ vcol + 3 * r ] = 0.0 ; rtB .
kmm3rkbbyq [ vcol + 3 * r ] += rtB . nhuthseoki [ vcol ] * os1yn0v0kz [ r ] ;
V_p [ vcol + 3 * r ] += rtB . nhuthseoki [ vcol ] * os1yn0v0kz [ r ] ;
mocgl1xiux_idx_0 = os1yn0v0kz [ r + 3 ] ; rtB . kmm3rkbbyq [ vcol + 3 * r ]
+= rtB . nhuthseoki [ vcol + 3 ] * mocgl1xiux_idx_0 ; V_p [ vcol + 3 * r ] +=
rtB . nhuthseoki [ vcol + 3 ] * mocgl1xiux_idx_0 ; mocgl1xiux_idx_0 =
os1yn0v0kz [ r + 6 ] ; rtB . kmm3rkbbyq [ vcol + 3 * r ] += rtB . nhuthseoki
[ vcol + 6 ] * mocgl1xiux_idx_0 ; V_p [ vcol + 3 * r ] += rtB . nhuthseoki [
vcol + 6 ] * mocgl1xiux_idx_0 ; t += V_p [ 3 * r + vcol ] * rtP .
omegad_Value [ r ] ; } rtB . gbopjhs31j [ vcol ] = rtB . jnwqbmkojt [ vcol ]
- t ; } for ( vcol = 0 ; vcol < 18 ; vcol ++ ) { tmp [ vcol ] = - rtP . GK [
vcol ] ; } tmp_p [ 0 ] = rtB . kmm3rkbbyq [ 7 ] ; tmp_p [ 1 ] = rtB .
kmm3rkbbyq [ 2 ] ; tmp_p [ 2 ] = rtB . kmm3rkbbyq [ 3 ] ; tmp_p [ 3 ] = rtB .
gbopjhs31j [ 0 ] ; tmp_p [ 4 ] = rtB . gbopjhs31j [ 1 ] ; tmp_p [ 5 ] = rtB .
gbopjhs31j [ 2 ] ; for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { rtB . ctszuq254c [
vcol ] = 0.0 ; for ( r = 0 ; r < 6 ; r ++ ) { rtB . ctszuq254c [ vcol ] +=
tmp [ 3 * r + vcol ] * tmp_p [ r ] ; } } if ( ssIsSampleHit ( rtS , 2 , 0 ) )
{ rtB . crc2i5ltsq [ 0 ] = rtB . ctszuq254c [ 0 ] ; rtB . crc2i5ltsq [ 1 ] =
rtB . ctszuq254c [ 1 ] ; rtB . crc2i5ltsq [ 2 ] = rtB . ctszuq254c [ 2 ] ; }
rtPrevAction = rtDW . jzg2v02ptv ; if ( ssIsMajorTimeStep ( rtS ) ) {
rtAction = ( int8_T ) ! ( rtB . oqsaecduyj < 10.0 ) ; rtDW . jzg2v02ptv =
rtAction ; } else { rtAction = rtDW . jzg2v02ptv ; } if ( rtPrevAction !=
rtAction ) { switch ( rtPrevAction ) { case 0 : o4znlsjred ( rtS ) ; break ;
case 1 : o4znlsjred ( rtS ) ; break ; } } switch ( rtAction ) { case 0 : if (
rtAction != rtPrevAction ) { ktmdijrt12 ( rtS ) ; } pwl3yyzylb ( rtS , rtP .
Constant4_Value , rtB . ne22ldnw5w ) ; if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( rtDW . pwl3yyzylbp . iod0jhjcju ) ; } break ; case 1 : if (
rtAction != rtPrevAction ) { ktmdijrt12 ( rtS ) ; } pwl3yyzylb ( rtS , rtB .
crc2i5ltsq , rtB . ne22ldnw5w ) ; if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( rtDW . atqljxdp0d . iod0jhjcju ) ; } break ; } if ( rtP .
ManualSwitch_CurrentSetting == 1 ) { rtB . p3iscummn3 [ 0 ] = rtP .
DetumblingGain_Gain * p1ztmtvx4f [ 0 ] ; rtB . p3iscummn3 [ 1 ] = rtP .
DetumblingGain_Gain * p1ztmtvx4f [ 1 ] ; rtB . p3iscummn3 [ 2 ] = rtP .
DetumblingGain_Gain * p1ztmtvx4f [ 2 ] ; } else { rtB . p3iscummn3 [ 0 ] =
rtB . ne22ldnw5w [ 0 ] ; rtB . p3iscummn3 [ 1 ] = rtB . ne22ldnw5w [ 1 ] ;
rtB . p3iscummn3 [ 2 ] = rtB . ne22ldnw5w [ 2 ] ; } if ( ssIsSampleHit ( rtS
, 2 , 0 ) ) { rtB . dmqnbaxtxv [ 0 ] = rtB . p3iscummn3 [ 0 ] ; rtB .
dmqnbaxtxv [ 1 ] = rtB . p3iscummn3 [ 1 ] ; rtB . dmqnbaxtxv [ 2 ] = rtB .
p3iscummn3 [ 2 ] ; } if ( rtDW . o15the1ksz != 0 ) { rtX . m5cncmmh3t [ 0 ] =
rtB . anr2sc1zx1 [ 0 ] ; rtX . m5cncmmh3t [ 1 ] = rtB . anr2sc1zx1 [ 1 ] ;
rtX . m5cncmmh3t [ 2 ] = rtB . anr2sc1zx1 [ 2 ] ; } rtB . kb5c2c4jlf [ 0 ] =
rtX . m5cncmmh3t [ 0 ] ; rtB . kb5c2c4jlf [ 1 ] = rtX . m5cncmmh3t [ 1 ] ;
rtB . kb5c2c4jlf [ 2 ] = rtX . m5cncmmh3t [ 2 ] ; rtB . onkbusalzg [ 0 ] =
rtB . kb5c2c4jlf [ 1 ] * dghj2fsjsm [ 2 ] ; rtB . onkbusalzg [ 1 ] = rtB .
kb5c2c4jlf [ 2 ] * dghj2fsjsm [ 0 ] ; rtB . onkbusalzg [ 2 ] = rtB .
kb5c2c4jlf [ 0 ] * dghj2fsjsm [ 1 ] ; rtB . onkbusalzg [ 3 ] = rtB .
kb5c2c4jlf [ 2 ] * dghj2fsjsm [ 1 ] ; rtB . onkbusalzg [ 4 ] = rtB .
kb5c2c4jlf [ 0 ] * dghj2fsjsm [ 2 ] ; rtB . onkbusalzg [ 5 ] = rtB .
kb5c2c4jlf [ 1 ] * dghj2fsjsm [ 0 ] ; rtB . b3lvhbnsnu [ 0 ] = rtB .
onkbusalzg [ 0 ] - rtB . onkbusalzg [ 3 ] ; rtB . o0ipnhiivw [ 0 ] = ( 0.0 -
rtB . dmqnbaxtxv [ 0 ] ) - rtB . b3lvhbnsnu [ 0 ] ; rtB . b3lvhbnsnu [ 1 ] =
rtB . onkbusalzg [ 1 ] - rtB . onkbusalzg [ 4 ] ; rtB . o0ipnhiivw [ 1 ] = (
0.0 - rtB . dmqnbaxtxv [ 1 ] ) - rtB . b3lvhbnsnu [ 1 ] ; rtB . b3lvhbnsnu [
2 ] = rtB . onkbusalzg [ 2 ] - rtB . onkbusalzg [ 5 ] ; rtB . o0ipnhiivw [ 2
] = ( 0.0 - rtB . dmqnbaxtxv [ 2 ] ) - rtB . b3lvhbnsnu [ 2 ] ; for ( vcol =
0 ; vcol < 4 ; vcol ++ ) { rtB . db2roqckzz [ vcol ] = 0.0 ; rtB . db2roqckzz
[ vcol ] += hr_p [ 3 * vcol ] * rtB . o0ipnhiivw [ 0 ] ; rtB . db2roqckzz [
vcol ] += hr_p [ 3 * vcol + 1 ] * rtB . o0ipnhiivw [ 1 ] ; rtB . db2roqckzz [
vcol ] += hr_p [ 3 * vcol + 2 ] * rtB . o0ipnhiivw [ 2 ] ; } if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . ipolmn11w5 [ 0 ] = rtB . db2roqckzz [ 0
] >= rtP . MAXIMUMGIMBALRATE_UpperSat ? 1 : rtB . db2roqckzz [ 0 ] > rtP .
MAXIMUMGIMBALRATE_LowerSat ? 0 : - 1 ; rtDW . ipolmn11w5 [ 1 ] = rtB .
db2roqckzz [ 1 ] >= rtP . MAXIMUMGIMBALRATE_UpperSat ? 1 : rtB . db2roqckzz [
1 ] > rtP . MAXIMUMGIMBALRATE_LowerSat ? 0 : - 1 ; rtDW . ipolmn11w5 [ 2 ] =
rtB . db2roqckzz [ 2 ] >= rtP . MAXIMUMGIMBALRATE_UpperSat ? 1 : rtB .
db2roqckzz [ 2 ] > rtP . MAXIMUMGIMBALRATE_LowerSat ? 0 : - 1 ; rtDW .
ipolmn11w5 [ 3 ] = rtB . db2roqckzz [ 3 ] >= rtP . MAXIMUMGIMBALRATE_UpperSat
? 1 : rtB . db2roqckzz [ 3 ] > rtP . MAXIMUMGIMBALRATE_LowerSat ? 0 : - 1 ; }
rtB . decs43f2is [ 0 ] = rtDW . ipolmn11w5 [ 0 ] == 1 ? rtP .
MAXIMUMGIMBALRATE_UpperSat : rtDW . ipolmn11w5 [ 0 ] == - 1 ? rtP .
MAXIMUMGIMBALRATE_LowerSat : rtB . db2roqckzz [ 0 ] ; rtB . decs43f2is [ 1 ]
= rtDW . ipolmn11w5 [ 1 ] == 1 ? rtP . MAXIMUMGIMBALRATE_UpperSat : rtDW .
ipolmn11w5 [ 1 ] == - 1 ? rtP . MAXIMUMGIMBALRATE_LowerSat : rtB . db2roqckzz
[ 1 ] ; rtB . decs43f2is [ 2 ] = rtDW . ipolmn11w5 [ 2 ] == 1 ? rtP .
MAXIMUMGIMBALRATE_UpperSat : rtDW . ipolmn11w5 [ 2 ] == - 1 ? rtP .
MAXIMUMGIMBALRATE_LowerSat : rtB . db2roqckzz [ 2 ] ; rtB . decs43f2is [ 3 ]
= rtDW . ipolmn11w5 [ 3 ] == 1 ? rtP . MAXIMUMGIMBALRATE_UpperSat : rtDW .
ipolmn11w5 [ 3 ] == - 1 ? rtP . MAXIMUMGIMBALRATE_LowerSat : rtB . db2roqckzz
[ 3 ] ; rtB . mkahyb353c [ 0 ] = rtB . kb5c2c4jlf [ 1 ] * dghj2fsjsm [ 2 ] ;
rtB . mkahyb353c [ 1 ] = rtB . kb5c2c4jlf [ 2 ] * dghj2fsjsm [ 0 ] ; rtB .
mkahyb353c [ 2 ] = rtB . kb5c2c4jlf [ 0 ] * dghj2fsjsm [ 1 ] ; rtB .
mkahyb353c [ 3 ] = rtB . kb5c2c4jlf [ 2 ] * dghj2fsjsm [ 1 ] ; rtB .
mkahyb353c [ 4 ] = rtB . kb5c2c4jlf [ 0 ] * dghj2fsjsm [ 2 ] ; rtB .
mkahyb353c [ 5 ] = rtB . kb5c2c4jlf [ 1 ] * dghj2fsjsm [ 0 ] ; for ( r = 0 ;
r < 3 ; r ++ ) { rtB . axsuqe43xb [ r ] = 0.0 ; rtB . axsuqe43xb [ r ] +=
ftoyuad4xo [ r ] * rtB . decs43f2is [ 0 ] ; rtB . axsuqe43xb [ r ] +=
ftoyuad4xo [ r + 3 ] * rtB . decs43f2is [ 1 ] ; rtB . axsuqe43xb [ r ] +=
ftoyuad4xo [ r + 6 ] * rtB . decs43f2is [ 2 ] ; rtB . axsuqe43xb [ r ] +=
ftoyuad4xo [ r + 9 ] * rtB . decs43f2is [ 3 ] ; rtB . oonndlkyas [ r ] = rtB
. mkahyb353c [ r ] - rtB . mkahyb353c [ r + 3 ] ; rtB . di2wm3ewqa [ r ] = (
0.0 - rtB . axsuqe43xb [ r ] ) - rtB . oonndlkyas [ r ] ; } for ( r = 0 ; r <
6 ; r ++ ) { rtB . p3njf3b0vq [ r ] = rtX . jvfedonto2 [ r ] ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB . aefa10eb0v [ 0 ] = rtDW . ibb0msb3ue
[ 0 ] ; rtB . aefa10eb0v [ 1 ] = rtDW . ibb0msb3ue [ 1 ] ; rtB . aefa10eb0v [
2 ] = rtDW . ibb0msb3ue [ 2 ] ; } if ( rtDW . btxv3caz21 != 0 ) { rtX .
hqsmobf5wk [ 0 ] = rtB . gvact2smmw [ 0 ] ; rtX . hqsmobf5wk [ 1 ] = rtB .
gvact2smmw [ 1 ] ; rtX . hqsmobf5wk [ 2 ] = rtB . gvact2smmw [ 2 ] ; } rtB .
h5ke22sfh5 [ 0 ] = rtX . hqsmobf5wk [ 0 ] ; rtB . ggcir2u5vz [ 0 ] = ( rtB .
kb5c2c4jlf [ 0 ] + rtB . aefa10eb0v [ 0 ] ) + rtB . h5ke22sfh5 [ 0 ] ; rtB .
h5ke22sfh5 [ 1 ] = rtX . hqsmobf5wk [ 1 ] ; rtB . ggcir2u5vz [ 1 ] = ( rtB .
kb5c2c4jlf [ 1 ] + rtB . aefa10eb0v [ 1 ] ) + rtB . h5ke22sfh5 [ 1 ] ; rtB .
h5ke22sfh5 [ 2 ] = rtX . hqsmobf5wk [ 2 ] ; rtB . ggcir2u5vz [ 2 ] = ( rtB .
kb5c2c4jlf [ 2 ] + rtB . aefa10eb0v [ 2 ] ) + rtB . h5ke22sfh5 [ 2 ] ; rtB .
brzazytz5j [ 0 ] = rtB . p3njf3b0vq [ 3 ] ; rtB . brzazytz5j [ 1 ] = rtB .
p3njf3b0vq [ 4 ] ; rtB . brzazytz5j [ 2 ] = rtB . p3njf3b0vq [ 5 ] ; rtB .
brzazytz5j [ 3 ] = ( - 0.87266462599716477 * rtB . ggcir2u5vz [ 0 ] - 14000.0
* rtB . p3njf3b0vq [ 3 ] ) - 5.0E+7 * rtB . p3njf3b0vq [ 0 ] ; rtB .
brzazytz5j [ 4 ] = ( - 0.87266462599716477 * rtB . ggcir2u5vz [ 1 ] - 14000.0
* rtB . p3njf3b0vq [ 4 ] ) - 5.0E+7 * rtB . p3njf3b0vq [ 1 ] ; rtB .
brzazytz5j [ 5 ] = ( - 0.87266462599716477 * rtB . ggcir2u5vz [ 2 ] - 14000.0
* rtB . p3njf3b0vq [ 5 ] ) - 5.0E+7 * rtB . p3njf3b0vq [ 2 ] ; rtB .
eh54vwsh45 [ 0 ] = - 10.0 * rtB . p3njf3b0vq [ 0 ] / 1.7453292519943294E-7 ;
rtB . eh54vwsh45 [ 1 ] = - 10.0 * rtB . p3njf3b0vq [ 1 ] /
1.7453292519943294E-7 ; rtB . eh54vwsh45 [ 2 ] = - 10.0 * rtB . p3njf3b0vq [
2 ] / 1.7453292519943294E-7 ; scale = 3.3121686421112381E-170 ; rtB .
h5hs4aw2rr [ 0 ] = rtX . iva5vtj1tw [ 0 ] ; absxk = muDoubleScalarAbs ( rtB .
h5hs4aw2rr [ 0 ] ) ; if ( absxk > 3.3121686421112381E-170 ) { absx = 1.0 ;
scale = absxk ; } else { t = absxk / 3.3121686421112381E-170 ; absx = t * t ;
} rtB . h5hs4aw2rr [ 1 ] = rtX . iva5vtj1tw [ 1 ] ; absxk = muDoubleScalarAbs
( rtB . h5hs4aw2rr [ 1 ] ) ; if ( absxk > scale ) { t = scale / absxk ; absx
= absx * t * t + 1.0 ; scale = absxk ; } else { t = absxk / scale ; absx += t
* t ; } rtB . h5hs4aw2rr [ 2 ] = rtX . iva5vtj1tw [ 2 ] ; absxk =
muDoubleScalarAbs ( rtB . h5hs4aw2rr [ 2 ] ) ; if ( absxk > scale ) { t =
scale / absxk ; absx = absx * t * t + 1.0 ; scale = absxk ; } else { t =
absxk / scale ; absx += t * t ; } rtB . h5hs4aw2rr [ 3 ] = rtX . iva5vtj1tw [
3 ] ; absxk = muDoubleScalarAbs ( rtB . h5hs4aw2rr [ 3 ] ) ; if ( absxk >
scale ) { t = scale / absxk ; absx = absx * t * t + 1.0 ; scale = absxk ; }
else { t = absxk / scale ; absx += t * t ; } absx = scale *
muDoubleScalarSqrt ( absx ) ; mocgl1xiux_idx_0 = rtB . h5hs4aw2rr [ 0 ] /
absx ; mocgl1xiux_idx_1 = rtB . h5hs4aw2rr [ 1 ] / absx ; mocgl1xiux_idx_2 =
rtB . h5hs4aw2rr [ 2 ] / absx ; mocgl1xiux_idx_3 = rtB . h5hs4aw2rr [ 3 ] /
absx ; rtB . hmhfxu54r4 [ 0 ] = ( ( mocgl1xiux_idx_0 * mocgl1xiux_idx_0 -
mocgl1xiux_idx_1 * mocgl1xiux_idx_1 ) - mocgl1xiux_idx_2 * mocgl1xiux_idx_2 )
+ mocgl1xiux_idx_3 * mocgl1xiux_idx_3 ; rtB . hmhfxu54r4 [ 3 ] = (
mocgl1xiux_idx_0 * mocgl1xiux_idx_1 + mocgl1xiux_idx_2 * mocgl1xiux_idx_3 ) *
2.0 ; rtB . hmhfxu54r4 [ 6 ] = ( mocgl1xiux_idx_0 * mocgl1xiux_idx_2 -
mocgl1xiux_idx_1 * mocgl1xiux_idx_3 ) * 2.0 ; rtB . hmhfxu54r4 [ 1 ] = (
mocgl1xiux_idx_0 * mocgl1xiux_idx_1 - mocgl1xiux_idx_2 * mocgl1xiux_idx_3 ) *
2.0 ; rtB . hmhfxu54r4 [ 4 ] = ( ( - ( mocgl1xiux_idx_0 * mocgl1xiux_idx_0 )
+ mocgl1xiux_idx_1 * mocgl1xiux_idx_1 ) - mocgl1xiux_idx_2 * mocgl1xiux_idx_2
) + mocgl1xiux_idx_3 * mocgl1xiux_idx_3 ; rtB . hmhfxu54r4 [ 7 ] = (
mocgl1xiux_idx_1 * mocgl1xiux_idx_2 + mocgl1xiux_idx_0 * mocgl1xiux_idx_3 ) *
2.0 ; rtB . hmhfxu54r4 [ 2 ] = ( mocgl1xiux_idx_0 * mocgl1xiux_idx_2 +
mocgl1xiux_idx_1 * mocgl1xiux_idx_3 ) * 2.0 ; rtB . hmhfxu54r4 [ 5 ] = (
mocgl1xiux_idx_1 * mocgl1xiux_idx_2 - mocgl1xiux_idx_0 * mocgl1xiux_idx_3 ) *
2.0 ; rtB . hmhfxu54r4 [ 8 ] = ( ( - ( mocgl1xiux_idx_0 * mocgl1xiux_idx_0 )
- mocgl1xiux_idx_1 * mocgl1xiux_idx_1 ) + mocgl1xiux_idx_2 * mocgl1xiux_idx_2
) + mocgl1xiux_idx_3 * mocgl1xiux_idx_3 ; rtB . pmztpun2vh = ssGetT ( rtS ) ;
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { maxeoqgvnt = rtDW . nhf0go2f0l ;
b43myd2lx4 = rtDW . fa3l1x4zjw ; enmo4qqvvf = rtDW . ec4iczeuop ; fmkuo41dvj
( maxeoqgvnt , b43myd2lx4 , enmo4qqvvf , & rtB . na14ipaqql ) ; } hr = ( 1.0
- rtP . e * rtP . e ) * rtP . a / ( rtP . e * muDoubleScalarCos ( rtB .
kenhd3kcjp ) + 1.0 ) ; V_p [ 0 ] = muDoubleScalarCos ( rtP . omega ) ; V_p [
3 ] = muDoubleScalarSin ( rtP . omega ) ; V_p [ 6 ] = 0.0 ; V_p [ 1 ] = -
muDoubleScalarSin ( rtP . omega ) ; V_p [ 4 ] = muDoubleScalarCos ( rtP .
omega ) ; V_p [ 7 ] = 0.0 ; V_p [ 2 ] = 0.0 ; c [ 0 ] = 1.0 ; V_p [ 5 ] = 0.0
; c [ 3 ] = 0.0 ; V_p [ 8 ] = 1.0 ; c [ 6 ] = 0.0 ; c [ 1 ] = 0.0 ; c [ 4 ] =
muDoubleScalarCos ( rtB . mjfbd5uniz ) ; c [ 7 ] = muDoubleScalarSin ( rtB .
mjfbd5uniz ) ; c [ 2 ] = 0.0 ; c [ 5 ] = - muDoubleScalarSin ( rtB .
mjfbd5uniz ) ; c [ 8 ] = muDoubleScalarCos ( rtB . mjfbd5uniz ) ; U_p [ 0 ] =
muDoubleScalarCos ( rtP . RAAN ) ; U_p [ 3 ] = muDoubleScalarSin ( rtP . RAAN
) ; U_p [ 6 ] = 0.0 ; U_p [ 1 ] = - muDoubleScalarSin ( rtP . RAAN ) ; U_p [
4 ] = muDoubleScalarCos ( rtP . RAAN ) ; U_p [ 7 ] = 0.0 ; for ( vcol = 0 ;
vcol < 3 ; vcol ++ ) { for ( r = 0 ; r < 3 ; r ++ ) { M [ vcol + 3 * r ] =
0.0 ; M [ vcol + 3 * r ] += c [ 3 * r ] * V_p [ vcol ] ; M [ vcol + 3 * r ]
+= c [ 3 * r + 1 ] * V_p [ vcol + 3 ] ; M [ vcol + 3 * r ] += c [ 3 * r + 2 ]
* V_p [ vcol + 6 ] ; } U_p [ 3 * vcol + 2 ] = b [ vcol ] ; } p1ztmtvx4f [ 0 ]
= hr * muDoubleScalarCos ( rtB . kenhd3kcjp ) ; p1ztmtvx4f [ 1 ] = hr *
muDoubleScalarSin ( rtB . kenhd3kcjp ) ; p1ztmtvx4f [ 2 ] = hr * 0.0 ; t =
0.0 ; for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { rtB . fkj0rfxikb [ vcol ] = 0.0
; for ( r = 0 ; r < 3 ; r ++ ) { V_p [ vcol + 3 * r ] = 0.0 ; V_p [ vcol + 3
* r ] += U_p [ 3 * vcol ] * M [ r ] ; V_p [ vcol + 3 * r ] += U_p [ 3 * vcol
+ 1 ] * M [ r + 3 ] ; V_p [ vcol + 3 * r ] += U_p [ 3 * vcol + 2 ] * M [ r +
6 ] ; rtB . fkj0rfxikb [ vcol ] += V_p [ 3 * r + vcol ] * p1ztmtvx4f [ r ] ;
} t += rtB . fkj0rfxikb [ vcol ] * rtB . fkj0rfxikb [ vcol ] ; } if (
ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . b2pp5qcbxs != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . b2pp5qcbxs = 0 ;
} absx = muDoubleScalarSqrt ( t ) ; } else if ( t < 0.0 ) { absx = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( t ) ) ; rtDW . b2pp5qcbxs = 1 ; }
else { absx = muDoubleScalarSqrt ( t ) ; } rtB . m3vn1reta5 [ 0 ] = rtB .
fkj0rfxikb [ 0 ] / absx ; rtB . m3vn1reta5 [ 1 ] = rtB . fkj0rfxikb [ 1 ] /
absx ; rtB . m3vn1reta5 [ 2 ] = rtB . fkj0rfxikb [ 2 ] / absx ; for ( vcol =
0 ; vcol < 3 ; vcol ++ ) { p1ztmtvx4f [ vcol ] = rtB . hmhfxu54r4 [ vcol + 6
] * rtB . m3vn1reta5 [ 2 ] + ( rtB . hmhfxu54r4 [ vcol + 3 ] * rtB .
m3vn1reta5 [ 1 ] + rtB . hmhfxu54r4 [ vcol ] * rtB . m3vn1reta5 [ 0 ] ) ; }
for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { rtB . nzytji2b3o [ vcol ] = 0.0 ; rtB
. nzytji2b3o [ vcol ] += rtB . na14ipaqql . jkie4iyale [ vcol ] * p1ztmtvx4f
[ 0 ] ; rtB . nzytji2b3o [ vcol ] += rtB . na14ipaqql . jkie4iyale [ vcol + 3
] * p1ztmtvx4f [ 1 ] ; rtB . nzytji2b3o [ vcol ] += rtB . na14ipaqql .
jkie4iyale [ vcol + 6 ] * p1ztmtvx4f [ 2 ] ; } memcpy ( & rtB . aqboqamxb3 [
0 ] , & rtX . ka0tu4yhzy [ 0 ] , 9U * sizeof ( real_T ) ) ; scale =
3.3121686421112381E-170 ; absxk = muDoubleScalarAbs ( rtB . fkj0rfxikb [ 0 ]
) ; if ( absxk > 3.3121686421112381E-170 ) { absx = 1.0 ; scale = absxk ; }
else { t = absxk / 3.3121686421112381E-170 ; absx = t * t ; } absxk =
muDoubleScalarAbs ( rtB . fkj0rfxikb [ 1 ] ) ; if ( absxk > scale ) { t =
scale / absxk ; absx = absx * t * t + 1.0 ; scale = absxk ; } else { t =
absxk / scale ; absx += t * t ; } absxk = muDoubleScalarAbs ( rtB .
fkj0rfxikb [ 2 ] ) ; if ( absxk > scale ) { t = scale / absxk ; absx = absx *
t * t + 1.0 ; scale = absxk ; } else { t = absxk / scale ; absx += t * t ; }
absx = scale * muDoubleScalarSqrt ( absx ) ; for ( vcol = 0 ; vcol < 3 ; vcol
++ ) { p1ztmtvx4f [ vcol ] = ( ( rtB . aqboqamxb3 [ vcol + 3 ] * rtB .
fkj0rfxikb [ 1 ] + rtB . aqboqamxb3 [ vcol ] * rtB . fkj0rfxikb [ 0 ] ) + rtB
. aqboqamxb3 [ vcol + 6 ] * rtB . fkj0rfxikb [ 2 ] ) / absx ; } dghj2fsjsm [
0 ] = rtB . nzytji2b3o [ 1 ] * p1ztmtvx4f [ 2 ] - rtB . nzytji2b3o [ 2 ] *
p1ztmtvx4f [ 1 ] ; dghj2fsjsm [ 1 ] = rtB . nzytji2b3o [ 2 ] * p1ztmtvx4f [ 0
] - rtB . nzytji2b3o [ 0 ] * p1ztmtvx4f [ 2 ] ; dghj2fsjsm [ 2 ] = rtB .
nzytji2b3o [ 0 ] * p1ztmtvx4f [ 1 ] - rtB . nzytji2b3o [ 1 ] * p1ztmtvx4f [ 0
] ; V_p [ 0 ] = 0.0 ; V_p [ 3 ] = - dghj2fsjsm [ 2 ] ; V_p [ 6 ] = dghj2fsjsm
[ 1 ] ; V_p [ 1 ] = dghj2fsjsm [ 2 ] ; V_p [ 4 ] = 0.0 ; V_p [ 7 ] = -
dghj2fsjsm [ 0 ] ; V_p [ 2 ] = - dghj2fsjsm [ 1 ] ; V_p [ 5 ] = dghj2fsjsm [
0 ] ; V_p [ 8 ] = 0.0 ; M [ 0 ] = 0.0 ; M [ 3 ] = - rtB . jnwqbmkojt [ 2 ] ;
M [ 6 ] = rtB . jnwqbmkojt [ 1 ] ; M [ 1 ] = rtB . jnwqbmkojt [ 2 ] ; M [ 4 ]
= 0.0 ; M [ 7 ] = - rtB . jnwqbmkojt [ 0 ] ; M [ 2 ] = - rtB . jnwqbmkojt [ 1
] ; M [ 5 ] = rtB . jnwqbmkojt [ 0 ] ; M [ 8 ] = 0.0 ; for ( vcol = 0 ; vcol
< 9 ; vcol ++ ) { U_p [ vcol ] = - ( V_p [ vcol ] + M [ vcol ] ) ; } rtB .
iotd255tw0 = rtB . jdawsowjrv * ssGetT ( rtS ) ; rtB . a1jmuxsaiv [ 0 ] =
muDoubleScalarCos ( rtB . iotd255tw0 ) ; hr = muDoubleScalarSin ( rtB .
iotd255tw0 ) ; rtB . a1jmuxsaiv [ 1 ] = rtB . pgla1jvh3e * hr ; rtB .
a1jmuxsaiv [ 2 ] = rtB . lvaafrmesm * hr ; t = 0.0 ; absx = 0.0 ; for ( r = 0
; r < 3 ; r ++ ) { for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { rtB . cmhel42bh2 [
r + 3 * vcol ] = 0.0 ; rtB . cmhel42bh2 [ r + 3 * vcol ] += rtB . aqboqamxb3
[ 3 * vcol ] * U_p [ r ] ; rtB . cmhel42bh2 [ r + 3 * vcol ] += rtB .
aqboqamxb3 [ 3 * vcol + 1 ] * U_p [ r + 3 ] ; rtB . cmhel42bh2 [ r + 3 * vcol
] += rtB . aqboqamxb3 [ 3 * vcol + 2 ] * U_p [ r + 6 ] ; } rtB . kkrfakq0mg [
r ] = rtP . meanradiusofEarthorbitaroundSunKm_Value * rtB . a1jmuxsaiv [ r ]
; t += rtB . kkrfakq0mg [ r ] * rtB . fkj0rfxikb [ r ] ; absx += rtB .
fkj0rfxikb [ r ] * rtB . fkj0rfxikb [ r ] ; } rtB . e4wdtksuab = t ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . ifnw2qfqxj != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . ifnw2qfqxj = 0 ;
} absx = muDoubleScalarSqrt ( absx ) ; } else if ( absx < 0.0 ) { absx = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( absx ) ) ; rtDW . ifnw2qfqxj = 1 ; }
else { absx = muDoubleScalarSqrt ( absx ) ; } hr = absx * absx - rtB .
akz4wjrmo0 ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . o03ihhvu3e != 0 )
{ ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . o03ihhvu3e = 0
; } absx = muDoubleScalarSqrt ( hr ) ; } else if ( hr < 0.0 ) { absx = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( hr ) ) ; rtDW . o03ihhvu3e = 1 ; }
else { absx = muDoubleScalarSqrt ( hr ) ; } rtB . ioqnm4rp2f = rtP .
Gain_Gain * absx ; rtPrevAction = rtDW . ic2qykr33o ; if ( ssIsMajorTimeStep
( rtS ) ) { rtAction = ( int8_T ) ! ( rtB . e4wdtksuab < rtB . ioqnm4rp2f ) ;
rtDW . ic2qykr33o = rtAction ; } else { rtAction = rtDW . ic2qykr33o ; } if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 : h4u2hnqzni (
rtS ) ; break ; case 1 : h4u2hnqzni ( rtS ) ; break ; } } switch ( rtAction )
{ case 0 : if ( rtAction != rtPrevAction ) { khpt4qhny3 ( rtS ) ; }
geox5czrb3 ( rtS , & rtB . dsrxzkpxun , & rtP . geox5czrb34 ) ; if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . geox5czrb34 . ie02gmwcra )
; } break ; case 1 : if ( rtAction != rtPrevAction ) { khpt4qhny3 ( rtS ) ; }
geox5czrb3 ( rtS , & rtB . dsrxzkpxun , & rtP . pfanvlh2dr ) ; if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . pfanvlh2dr . ie02gmwcra ) ;
} break ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB . geyyaqa4ya [ 0 ] =
rtDW . mxct422gc5 ; rtB . geyyaqa4ya [ 1 ] = rtDW . hjp0iqtsnv ; rtB .
geyyaqa4ya [ 2 ] = rtDW . i1kfofikbc ; } t = ( rtB . kkrfakq0mg [ 0 ] * rtB .
kkrfakq0mg [ 0 ] + rtB . kkrfakq0mg [ 1 ] * rtB . kkrfakq0mg [ 1 ] ) + rtB .
kkrfakq0mg [ 2 ] * rtB . kkrfakq0mg [ 2 ] ; if ( ssIsMajorTimeStep ( rtS ) )
{ if ( rtDW . cfspruispf != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; rtDW . cfspruispf = 0 ; } absx = muDoubleScalarSqrt ( t ) ; } else
if ( t < 0.0 ) { absx = - muDoubleScalarSqrt ( muDoubleScalarAbs ( t ) ) ;
rtDW . cfspruispf = 1 ; } else { absx = muDoubleScalarSqrt ( t ) ; } rtB .
hannzdbw4i [ 0 ] = rtB . kkrfakq0mg [ 0 ] / absx ; rtB . hannzdbw4i [ 1 ] =
rtB . kkrfakq0mg [ 1 ] / absx ; rtB . hannzdbw4i [ 2 ] = rtB . kkrfakq0mg [ 2
] / absx ; hr = 0.0 ; absxk = 0.0 ; scale = 0.0 ; for ( b_k = 0 ; b_k < 3 ;
b_k ++ ) { rtB . jjadz2nwsm [ b_k ] = 0.0 ; rtB . jjadz2nwsm [ b_k ] += rtB .
hmhfxu54r4 [ b_k ] * rtB . hannzdbw4i [ 0 ] ; rtB . jjadz2nwsm [ b_k ] += rtB
. hmhfxu54r4 [ b_k + 3 ] * rtB . hannzdbw4i [ 1 ] ; rtB . jjadz2nwsm [ b_k ]
+= rtB . hmhfxu54r4 [ b_k + 6 ] * rtB . hannzdbw4i [ 2 ] ; hr += ( real_T ) a
[ b_k ] * rtB . jjadz2nwsm [ b_k ] ; absxk += ( real_T ) b_a [ b_k ] * rtB .
jjadz2nwsm [ b_k ] ; scale += ( real_T ) b [ b_k ] * rtB . jjadz2nwsm [ b_k ]
; } rtB . hdla5n0zmc [ 0 ] = rtB . geyyaqa4ya [ 0 ] + muDoubleScalarAcos (
muDoubleScalarMax ( muDoubleScalarMin ( hr , 1.0 ) , - 1.0 ) ) ; pikft3nvkg [
0 ] = muDoubleScalarCos ( rtB . hdla5n0zmc [ 0 ] ) ; rtB . hdla5n0zmc [ 1 ] =
rtB . geyyaqa4ya [ 1 ] + muDoubleScalarAcos ( muDoubleScalarMax (
muDoubleScalarMin ( absxk , 1.0 ) , - 1.0 ) ) ; rtB . hdla5n0zmc [ 2 ] = rtB
. geyyaqa4ya [ 2 ] + muDoubleScalarAcos ( muDoubleScalarMax (
muDoubleScalarMin ( scale , 1.0 ) , - 1.0 ) ) ; rtB . hiw20ytj4e [ 1 ] =
muDoubleScalarCos ( rtB . hdla5n0zmc [ 1 ] ) - pikft3nvkg [ 0 ] * 0.0 ; rtB .
hiw20ytj4e [ 2 ] = ( muDoubleScalarCos ( rtB . hdla5n0zmc [ 2 ] ) -
pikft3nvkg [ 0 ] * 0.0 ) - rtB . hiw20ytj4e [ 1 ] * 0.0 ; rtB . hiw20ytj4e [
0 ] = pikft3nvkg [ 0 ] - rtB . hiw20ytj4e [ 2 ] * 0.0 ; rtB . hiw20ytj4e [ 1
] -= rtB . hiw20ytj4e [ 2 ] * 0.0 ; rtB . hiw20ytj4e [ 0 ] -= rtB .
hiw20ytj4e [ 1 ] * 0.0 ; rtB . pagbklhmrp [ 0 ] = rtP . alfa_sun * rtB .
hiw20ytj4e [ 0 ] ; rtB . pagbklhmrp [ 1 ] = rtP . alfa_sun * rtB . hiw20ytj4e
[ 1 ] ; rtB . pagbklhmrp [ 2 ] = rtP . alfa_sun * rtB . hiw20ytj4e [ 2 ] ; t
= ( rtB . kkrfakq0mg [ 0 ] * rtB . kkrfakq0mg [ 0 ] + rtB . kkrfakq0mg [ 1 ]
* rtB . kkrfakq0mg [ 1 ] ) + rtB . kkrfakq0mg [ 2 ] * rtB . kkrfakq0mg [ 2 ]
; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . fmsxqmnuh0 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . fmsxqmnuh0 = 0 ;
} absx = muDoubleScalarSqrt ( t ) ; } else if ( t < 0.0 ) { absx = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( t ) ) ; rtDW . fmsxqmnuh0 = 1 ; }
else { absx = muDoubleScalarSqrt ( t ) ; } for ( r = 0 ; r < 3 ; r ++ ) { rtB
. k0ppvs40sj [ r ] = rtB . kkrfakq0mg [ r ] / absx ; rtB . mpqeirtcdu [ r ] =
rtB . k0ppvs40sj [ r ] ; rtB . d4qr1kojyz [ 3 * r ] = rtB . pagbklhmrp [ 0 ]
* rtB . mpqeirtcdu [ r ] ; rtB . d4qr1kojyz [ 3 * r + 1 ] = rtB . pagbklhmrp
[ 1 ] * rtB . mpqeirtcdu [ r ] ; rtB . d4qr1kojyz [ 3 * r + 2 ] = rtB .
pagbklhmrp [ 2 ] * rtB . mpqeirtcdu [ r ] ; } if ( ssIsSampleHit ( rtS , 2 ,
0 ) ) { f0z2u2ketc = rtDW . jkyamiugmq ; nmnsncpmd4 = rtDW . o4n211i2ui ;
c3firpzw41 = rtDW . mfs3ug1ss0 ; fmkuo41dvj ( f0z2u2ketc , nmnsncpmd4 ,
c3firpzw41 , & rtB . my2dz1bzgp ) ; } scale = 3.3121686421112381E-170 ; absxk
= muDoubleScalarAbs ( rtB . fkj0rfxikb [ 0 ] ) ; if ( absxk >
3.3121686421112381E-170 ) { absx = 1.0 ; scale = absxk ; } else { t = absxk /
3.3121686421112381E-170 ; absx = t * t ; } absxk = muDoubleScalarAbs ( rtB .
fkj0rfxikb [ 1 ] ) ; if ( absxk > scale ) { t = scale / absxk ; absx = absx *
t * t + 1.0 ; scale = absxk ; } else { t = absxk / scale ; absx += t * t ; }
absx = scale * muDoubleScalarSqrt ( absx ) ; hr = muDoubleScalarAcos ( ( rtB
. fkj0rfxikb [ 1 ] * 0.0 + rtB . fkj0rfxikb [ 0 ] ) / absx ) ; if ( rtB .
fkj0rfxikb [ 1 ] < 0.0 ) { hr = 6.2831853071795862 - hr ; } absx = hr - ( rtP
. omega_e * ssGetT ( rtS ) + rtP . Constant3_Value ) ; if (
muDoubleScalarIsNaN ( absx ) || muDoubleScalarIsInf ( absx ) ) { scale = (
rtNaN ) ; } else if ( absx == 0.0 ) { scale = 0.0 ; } else { scale =
muDoubleScalarRem ( absx , 6.2831853071795862 ) ; rEQ0 = ( scale == 0.0 ) ;
if ( ! rEQ0 ) { t = muDoubleScalarAbs ( absx / 6.2831853071795862 ) ; rEQ0 =
! ( muDoubleScalarAbs ( t - muDoubleScalarFloor ( t + 0.5 ) ) >
2.2204460492503131E-16 * t ) ; } if ( rEQ0 ) { scale = 0.0 ; } else { if (
absx < 0.0 ) { scale += 6.2831853071795862 ; } } } absxk =
3.3121686421112381E-170 ; t = muDoubleScalarAbs ( rtB . fkj0rfxikb [ 0 ] ) ;
if ( t > 3.3121686421112381E-170 ) { absx = 1.0 ; absxk = t ; } else { b_t =
t / 3.3121686421112381E-170 ; absx = b_t * b_t ; } t = muDoubleScalarAbs (
rtB . fkj0rfxikb [ 1 ] ) ; if ( t > absxk ) { b_t = absxk / t ; absx = absx *
b_t * b_t + 1.0 ; absxk = t ; } else { b_t = t / absxk ; absx += b_t * b_t ;
} t = muDoubleScalarAbs ( rtB . fkj0rfxikb [ 2 ] ) ; if ( t > absxk ) { b_t =
absxk / t ; absx = absx * b_t * b_t + 1.0 ; absxk = t ; } else { b_t = t /
absxk ; absx += b_t * b_t ; } absx = absxk * muDoubleScalarSqrt ( absx ) ;
rtB . jecmnvf0ab = rtB . fkj0rfxikb [ 2 ] / absx ; rtB . jecmnvf0ab =
muDoubleScalarAsin ( rtB . jecmnvf0ab ) ; if ( muDoubleScalarIsNaN ( scale )
) { absxk = ( rtNaN ) ; } else if ( scale == 0.0 ) { absxk = 0.0 ; } else {
absxk = muDoubleScalarRem ( scale , 6.2831853071795862 ) ; rEQ0 = ( absxk ==
0.0 ) ; if ( ! rEQ0 ) { t = muDoubleScalarAbs ( scale / 6.2831853071795862 )
; rEQ0 = ! ( muDoubleScalarAbs ( t - muDoubleScalarFloor ( t + 0.5 ) ) >
2.2204460492503131E-16 * t ) ; } if ( rEQ0 ) { absxk = 0.0 ; } else { if (
scale < 0.0 ) { absxk += 6.2831853071795862 ; } } } if ( absxk > 0.0 ) {
absxk -= 6.2831853071795862 ; } b_t = absxk ; if ( absxk < 0.0 ) { b_t =
absxk + 6.2831853071795862 ; } absxk = rtB . jecmnvf0ab ; if ( ( rtB .
jecmnvf0ab > - 1.0E-6 ) && ( rtB . jecmnvf0ab < 1.0E-6 ) ) { absxk = 1.0E-6 ;
} else { if ( ( rtB . jecmnvf0ab < 3.1415936535897933 ) && ( rtB . jecmnvf0ab
> 3.141591653589793 ) ) { absxk = 3.141591653589793 ; } } if ( !
muDoubleScalarIsNaN ( rtP . gn [ 0 ] ) ) { r = 1 ; } else { r = 0 ; b_k = 2 ;
exitg1 = false ; while ( ( ! exitg1 ) && ( b_k < 105 ) ) { if ( !
muDoubleScalarIsNaN ( rtP . gn [ b_k - 1 ] ) ) { r = b_k ; exitg1 = true ; }
else { b_k ++ ; } } } if ( r == 0 ) { N = rtP . gn [ 0 ] ; } else { N = rtP .
gn [ r - 1 ] ; while ( r + 1 < 105 ) { if ( N < rtP . gn [ r ] ) { N = rtP .
gn [ r ] ; } r ++ ; } } i2hqjg5goj ( & g , 2 ) ; vcol = g -> size [ 0 ] * g
-> size [ 1 ] ; g -> size [ 0 ] = ( int32_T ) N ; g -> size [ 1 ] = ( int32_T
) ( N + 1.0 ) ; cijenupcsy ( g , vcol ) ; r = ( int32_T ) ( N + 1.0 ) * (
int32_T ) N - 1 ; for ( vcol = 0 ; vcol <= r ; vcol ++ ) { g -> data [ vcol ]
= 0.0 ; } i2hqjg5goj ( & h , 2 ) ; vcol = h -> size [ 0 ] * h -> size [ 1 ] ;
h -> size [ 0 ] = ( int32_T ) N ; h -> size [ 1 ] = ( int32_T ) ( N + 1.0 ) ;
cijenupcsy ( h , vcol ) ; r = ( int32_T ) ( N + 1.0 ) * ( int32_T ) N - 1 ;
for ( vcol = 0 ; vcol <= r ; vcol ++ ) { h -> data [ vcol ] = 0.0 ; } for ( r
= 0 ; r < 104 ; r ++ ) { g -> data [ ( ( int32_T ) rtP . gn [ r ] + g -> size
[ 0 ] * ( ( int32_T ) ( rtP . gm [ r ] + 1.0 ) - 1 ) ) - 1 ] = rtP . gvali [
r ] ; h -> data [ ( ( int32_T ) rtP . hn [ r ] + h -> size [ 0 ] * ( (
int32_T ) ( rtP . hm [ r ] + 1.0 ) - 1 ) ) - 1 ] = rtP . hvali [ r ] ; }
scale = 0.0 ; Bt = 0.0 ; t = 0.0 ; P11 = 1.0 ; P10 = 1.0 ; dP11 = 0.0 ; dP10
= 0.0 ; P20 = 0.0 ; dP20 = 0.0 ; for ( r = 0 ; r < ( int32_T ) ( N + 1.0 ) ;
r ++ ) { for ( b_k = 0 ; b_k < ( int32_T ) N ; b_k ++ ) { if ( r <= ( real_T
) b_k + 1.0 ) { if ( ( real_T ) b_k + 1.0 == r ) { P2 = muDoubleScalarSin (
1.5707963267948966 - absxk ) * P11 ; K = muDoubleScalarSin (
1.5707963267948966 - absxk ) * dP11 + muDoubleScalarCos ( 1.5707963267948966
- absxk ) * P11 ; P11 = P2 ; P10 = P2 ; P20 = 0.0 ; dP11 = K ; dP10 = K ;
dP20 = 0.0 ; } else if ( ( real_T ) b_k + 1.0 == 1.0 ) { P2 =
muDoubleScalarCos ( 1.5707963267948966 - absxk ) * P10 ; K =
muDoubleScalarCos ( 1.5707963267948966 - absxk ) * dP10 - muDoubleScalarSin (
1.5707963267948966 - absxk ) * P10 ; P20 = P10 ; P10 = P2 ; dP20 = dP10 ;
dP10 = K ; } else { K = ( ( ( ( real_T ) b_k + 1.0 ) - 1.0 ) * ( ( ( real_T )
b_k + 1.0 ) - 1.0 ) - ( real_T ) r * ( real_T ) r ) / ( ( ( ( real_T ) b_k +
1.0 ) * 2.0 - 1.0 ) * ( ( ( real_T ) b_k + 1.0 ) * 2.0 - 3.0 ) ) ; P2 =
muDoubleScalarCos ( 1.5707963267948966 - absxk ) * P10 - K * P20 ; K = (
muDoubleScalarCos ( 1.5707963267948966 - absxk ) * dP10 - muDoubleScalarSin (
1.5707963267948966 - absxk ) * P10 ) - K * dP20 ; P20 = P10 ; P10 = P2 ; dP20
= dP10 ; dP10 = K ; } scale += ( g -> data [ g -> size [ 0 ] * r + b_k ] *
muDoubleScalarCos ( ( real_T ) r * b_t ) + h -> data [ h -> size [ 0 ] * r +
b_k ] * muDoubleScalarSin ( ( real_T ) r * b_t ) ) * P2 * (
muDoubleScalarPower ( 6371.2 / absx , ( ( real_T ) b_k + 1.0 ) + 2.0 ) * ( (
( real_T ) b_k + 1.0 ) + 1.0 ) ) ; Bt += ( g -> data [ g -> size [ 0 ] * r +
b_k ] * muDoubleScalarCos ( ( real_T ) r * b_t ) + h -> data [ h -> size [ 0
] * r + b_k ] * muDoubleScalarSin ( ( real_T ) r * b_t ) ) * K *
muDoubleScalarPower ( 6371.2 / absx , ( ( real_T ) b_k + 1.0 ) + 2.0 ) ; t +=
( - g -> data [ g -> size [ 0 ] * r + b_k ] * muDoubleScalarSin ( ( real_T )
r * b_t ) + h -> data [ h -> size [ 0 ] * r + b_k ] * muDoubleScalarCos ( (
real_T ) r * b_t ) ) * ( real_T ) r * P2 * muDoubleScalarPower ( 6371.2 /
absx , ( ( real_T ) b_k + 1.0 ) + 2.0 ) ; } } } m3xbjjaurx ( & h ) ;
m3xbjjaurx ( & g ) ; absx = Bt * 1.0E-9 ; absxk = - t / muDoubleScalarSin (
1.5707963267948966 - absxk ) * 1.0E-9 ; scale = - scale * 1.0E-9 ; pikft3nvkg
[ 0 ] = - ( scale * muDoubleScalarCos ( rtB . jecmnvf0ab ) + absx *
muDoubleScalarSin ( rtB . jecmnvf0ab ) ) * muDoubleScalarCos ( hr ) - absxk *
muDoubleScalarSin ( hr ) ; pikft3nvkg [ 1 ] = - ( scale * muDoubleScalarCos (
rtB . jecmnvf0ab ) + absx * muDoubleScalarSin ( rtB . jecmnvf0ab ) ) *
muDoubleScalarSin ( hr ) + absxk * muDoubleScalarCos ( hr ) ; pikft3nvkg [ 2
] = absx * muDoubleScalarCos ( rtB . jecmnvf0ab ) - scale * muDoubleScalarSin
( rtB . jecmnvf0ab ) ; absx = ( pikft3nvkg [ 0 ] * pikft3nvkg [ 0 ] +
pikft3nvkg [ 1 ] * pikft3nvkg [ 1 ] ) + pikft3nvkg [ 2 ] * pikft3nvkg [ 2 ] ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . fo0xzwvgga != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . fo0xzwvgga = 0 ;
} absx = muDoubleScalarSqrt ( absx ) ; } else if ( absx < 0.0 ) { absx = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( absx ) ) ; rtDW . fo0xzwvgga = 1 ; }
else { absx = muDoubleScalarSqrt ( absx ) ; } rtB . knn10a4nnc [ 0 ] =
pikft3nvkg [ 0 ] / absx ; rtB . knn10a4nnc [ 1 ] = pikft3nvkg [ 1 ] / absx ;
rtB . knn10a4nnc [ 2 ] = pikft3nvkg [ 2 ] / absx ; for ( vcol = 0 ; vcol < 3
; vcol ++ ) { p1ztmtvx4f [ vcol ] = rtB . hmhfxu54r4 [ vcol + 6 ] * rtB .
knn10a4nnc [ 2 ] + ( rtB . hmhfxu54r4 [ vcol + 3 ] * rtB . knn10a4nnc [ 1 ] +
rtB . hmhfxu54r4 [ vcol ] * rtB . knn10a4nnc [ 0 ] ) ; } for ( vcol = 0 ;
vcol < 3 ; vcol ++ ) { rtB . dlyofrzwt5 [ vcol ] = 0.0 ; rtB . dlyofrzwt5 [
vcol ] += rtB . my2dz1bzgp . jkie4iyale [ vcol ] * p1ztmtvx4f [ 0 ] ; rtB .
dlyofrzwt5 [ vcol ] += rtB . my2dz1bzgp . jkie4iyale [ vcol + 3 ] *
p1ztmtvx4f [ 1 ] ; rtB . dlyofrzwt5 [ vcol ] += rtB . my2dz1bzgp . jkie4iyale
[ vcol + 6 ] * p1ztmtvx4f [ 2 ] ; } rtB . l0mxqqvkmc [ 0 ] = rtP . alfa_mag *
rtB . dlyofrzwt5 [ 0 ] ; rtB . l0mxqqvkmc [ 1 ] = rtP . alfa_mag * rtB .
dlyofrzwt5 [ 1 ] ; rtB . l0mxqqvkmc [ 2 ] = rtP . alfa_mag * rtB . dlyofrzwt5
[ 2 ] ; absx = ( pikft3nvkg [ 0 ] * pikft3nvkg [ 0 ] + pikft3nvkg [ 1 ] *
pikft3nvkg [ 1 ] ) + pikft3nvkg [ 2 ] * pikft3nvkg [ 2 ] ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . b2iz5oj0mf != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . b2iz5oj0mf = 0 ;
} absx = muDoubleScalarSqrt ( absx ) ; } else if ( absx < 0.0 ) { absx = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( absx ) ) ; rtDW . b2iz5oj0mf = 1 ; }
else { absx = muDoubleScalarSqrt ( absx ) ; } t = 0.0 ; for ( r = 0 ; r < 3 ;
r ++ ) { rtB . kcfbhtallx [ r ] = pikft3nvkg [ r ] / absx ; rtB . lh2ujhpalo
[ r ] = rtB . kcfbhtallx [ r ] ; rtB . j0fcylznkn [ 3 * r ] = rtB .
l0mxqqvkmc [ 0 ] * rtB . lh2ujhpalo [ r ] ; rtB . j0fcylznkn [ 3 * r + 1 ] =
rtB . l0mxqqvkmc [ 1 ] * rtB . lh2ujhpalo [ r ] ; rtB . j0fcylznkn [ 3 * r +
2 ] = rtB . l0mxqqvkmc [ 2 ] * rtB . lh2ujhpalo [ r ] ; rtB . ht5wzolgc1 [ r
] = rtP . alfa_earth * rtB . nzytji2b3o [ r ] ; t += rtB . fkj0rfxikb [ r ] *
rtB . fkj0rfxikb [ r ] ; } if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtDW .
l3rcki4h0b != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW
. l3rcki4h0b = 0 ; } absx = muDoubleScalarSqrt ( t ) ; } else if ( t < 0.0 )
{ absx = - muDoubleScalarSqrt ( muDoubleScalarAbs ( t ) ) ; rtDW . l3rcki4h0b
= 1 ; } else { absx = muDoubleScalarSqrt ( t ) ; } for ( r = 0 ; r < 3 ; r ++
) { rtB . a5ucankgx3 [ r ] = rtB . fkj0rfxikb [ r ] / absx ; rtB . ccgkybaogm
[ r ] = rtB . a5ucankgx3 [ r ] ; rtB . m32spuuw4o [ 3 * r ] = rtB .
ht5wzolgc1 [ 0 ] * rtB . ccgkybaogm [ r ] ; rtB . m32spuuw4o [ 3 * r + 1 ] =
rtB . ht5wzolgc1 [ 1 ] * rtB . ccgkybaogm [ r ] ; rtB . m32spuuw4o [ 3 * r +
2 ] = rtB . ht5wzolgc1 [ 2 ] * rtB . ccgkybaogm [ r ] ; } rEQ0 = true ; for (
b_k = 0 ; b_k < 9 ; b_k ++ ) { rtB . feu5kxotcq [ b_k ] = ( rtB . d4qr1kojyz
[ b_k ] + rtB . j0fcylznkn [ b_k ] ) + rtB . m32spuuw4o [ b_k ] ; if ( rEQ0
&& ( ( ! muDoubleScalarIsInf ( rtB . feu5kxotcq [ b_k ] ) ) && ( !
muDoubleScalarIsNaN ( rtB . feu5kxotcq [ b_k ] ) ) ) ) { } else { rEQ0 =
false ; } } if ( rEQ0 ) { famffl5fga ( rtB . feu5kxotcq , c , p1ztmtvx4f ,
V_p ) ; } else { for ( vcol = 0 ; vcol < 9 ; vcol ++ ) { c [ vcol ] = ( rtNaN
) ; V_p [ vcol ] = ( rtNaN ) ; } } memset ( & M [ 0 ] , 0 , 9U * sizeof (
real_T ) ) ; M [ 0 ] = 1.0 ; M [ 4 ] = 1.0 ; M [ 8 ] = gtyczxxc3d ( c ) *
gtyczxxc3d ( V_p ) ; rEQ0 = ( rtB . dsrxzkpxun > rtP . Switch_Threshold ) ;
for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { for ( r = 0 ; r < 3 ; r ++ ) { U_p [
vcol + 3 * r ] = 0.0 ; U_p [ vcol + 3 * r ] += M [ 3 * r ] * c [ vcol ] ; U_p
[ vcol + 3 * r ] += M [ 3 * r + 1 ] * c [ vcol + 3 ] ; U_p [ vcol + 3 * r ]
+= M [ 3 * r + 2 ] * c [ vcol + 6 ] ; } if ( rEQ0 ) { for ( r = 0 ; r < 3 ; r
++ ) { rtB . ngcynor04m [ vcol + 3 * r ] = rtB . aqboqamxb3 [ 3 * r + vcol ]
; } } else { for ( r = 0 ; r < 3 ; r ++ ) { rtB . ngcynor04m [ vcol + 3 * r ]
= ( U_p [ vcol + 3 ] * V_p [ r + 3 ] + U_p [ vcol ] * V_p [ r ] ) + U_p [
vcol + 6 ] * V_p [ r + 6 ] ; } } } rtPrevAction = rtDW . dmalgfdtrs ; if (
ssIsMajorTimeStep ( rtS ) ) { rtAction = ( int8_T ) ! ( rtB . pmztpun2vh <
0.5 ) ; rtDW . dmalgfdtrs = rtAction ; } else { rtAction = rtDW . dmalgfdtrs
; } if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
lt5jze22jh ( rtS ) ; break ; case 1 : lt5jze22jh ( rtS ) ; break ; } } switch
( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { jqjt2gjmnr ( rtS )
; } jda3fmwzpy ( rtS , rtP . Constant6_Value , rtB . m5nfjzbcxv ) ; if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . jda3fmwzpyl . fjromfvqvr )
; } break ; case 1 : if ( rtAction != rtPrevAction ) { jqjt2gjmnr ( rtS ) ; }
jda3fmwzpy ( rtS , rtB . ngcynor04m , rtB . m5nfjzbcxv ) ; if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . kzyworijhb . fjromfvqvr ) ;
} break ; } egnwzzaupu ( rtB . kkrfakq0mg , & rtB . hyavuifm1w ) ; for ( vcol
= 0 ; vcol < 3 ; vcol ++ ) { rtB . i4btlqy2gt [ vcol ] = 0.0 ; rtB .
i4btlqy2gt [ vcol ] += rtB . hmhfxu54r4 [ vcol ] * rtB . hyavuifm1w .
bogehaw2ze [ 0 ] ; rtB . i4btlqy2gt [ vcol ] += rtB . hmhfxu54r4 [ vcol + 3 ]
* rtB . hyavuifm1w . bogehaw2ze [ 1 ] ; rtB . i4btlqy2gt [ vcol ] += rtB .
hmhfxu54r4 [ vcol + 6 ] * rtB . hyavuifm1w . bogehaw2ze [ 2 ] ; } egnwzzaupu
( rtB . i4btlqy2gt , & rtB . inz2gdmoa0 ) ; if ( ssIsSampleHit ( rtS , 2 , 0
) ) { } absx = rtP . F_e / 2.99792458E+8 ; t = c4hcjrkkwl ( rtB . kkrfakq0mg
) ; rtB . k33bzvkicz [ 0 ] = 0.0 ; rtB . k33bzvkicz [ 1 ] = 0.0 ; rtB .
k33bzvkicz [ 2 ] = 0.0 ; absxk = c4hcjrkkwl ( rtB . fkj0rfxikb ) ; if ( rtB .
fkj0rfxikb [ 2 ] * ( rtB . kkrfakq0mg [ 2 ] / t ) + ( rtB . fkj0rfxikb [ 1 ]
* ( rtB . kkrfakq0mg [ 1 ] / t ) + rtB . fkj0rfxikb [ 0 ] * ( rtB .
kkrfakq0mg [ 0 ] / t ) ) < - muDoubleScalarSqrt ( absxk * absxk - rtP . R_e *
rtP . R_e ) ) { rtB . k33bzvkicz [ 0 ] = 0.0 ; rtB . k33bzvkicz [ 1 ] = 0.0 ;
rtB . k33bzvkicz [ 2 ] = 0.0 ; } else { for ( r = 0 ; r < 10 ; r ++ ) { if (
r + 1 <= 6 ) { hr = 0.5 ; } else { hr = 0.8 ; } if ( ( ( real_T ) N_b [ r +
10 ] * rtB . inz2gdmoa0 . bogehaw2ze [ 1 ] + rtB . inz2gdmoa0 . bogehaw2ze [
0 ] * ( real_T ) N_b [ r ] ) + ( real_T ) N_b [ r + 20 ] * rtB . inz2gdmoa0 .
bogehaw2ze [ 2 ] >= 0.0 ) { scale = ( ( ( real_T ) N_b [ r + 10 ] * rtB .
inz2gdmoa0 . bogehaw2ze [ 1 ] + rtB . inz2gdmoa0 . bogehaw2ze [ 0 ] * (
real_T ) N_b [ r ] ) + ( real_T ) N_b [ r + 20 ] * rtB . inz2gdmoa0 .
bogehaw2ze [ 2 ] ) * ( - absx * A_p [ r ] ) ; t = ( ( ( real_T ) N_b [ r + 10
] * rtB . inz2gdmoa0 . bogehaw2ze [ 1 ] + rtB . inz2gdmoa0 . bogehaw2ze [ 0 ]
* ( real_T ) N_b [ r ] ) + ( real_T ) N_b [ r + 20 ] * rtB . inz2gdmoa0 .
bogehaw2ze [ 2 ] ) * ( 2.0 * hr ) + 0.066666666666666666 ; p1ztmtvx4f [ 0 ] =
( ( 1.0 - hr ) * rtB . inz2gdmoa0 . bogehaw2ze [ 0 ] + t * ( real_T ) N_b [ r
] ) * scale ; p1ztmtvx4f [ 1 ] = ( ( 1.0 - hr ) * rtB . inz2gdmoa0 .
bogehaw2ze [ 1 ] + ( real_T ) N_b [ r + 10 ] * t ) * scale ; p1ztmtvx4f [ 2 ]
= ( ( 1.0 - hr ) * rtB . inz2gdmoa0 . bogehaw2ze [ 2 ] + ( real_T ) N_b [ r +
20 ] * t ) * scale ; rtB . k33bzvkicz [ 2 ] += R_b [ r ] * p1ztmtvx4f [ 1 ] -
R_b [ r + 10 ] * p1ztmtvx4f [ 0 ] ; rtB . k33bzvkicz [ 0 ] += R_b [ r + 10 ]
* p1ztmtvx4f [ 2 ] - R_b [ r + 20 ] * p1ztmtvx4f [ 1 ] ; rtB . k33bzvkicz [ 1
] += R_b [ r + 20 ] * p1ztmtvx4f [ 0 ] - R_b [ r ] * p1ztmtvx4f [ 2 ] ; } } }
for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { rtB . pwa11vfmjs [ 3 * vcol ] =
os1yn0v0kz [ vcol ] ; rtB . pwa11vfmjs [ 3 * vcol + 1 ] = os1yn0v0kz [ vcol +
3 ] ; rtB . pwa11vfmjs [ 3 * vcol + 2 ] = os1yn0v0kz [ vcol + 6 ] ; } for (
vcol = 0 ; vcol < 3 ; vcol ++ ) { t = 0.0 ; for ( r = 0 ; r < 3 ; r ++ ) {
rtB . jofjaqksuy [ vcol + 3 * r ] = 0.0 ; rtB . jofjaqksuy [ vcol + 3 * r ]
+= rtB . pwa11vfmjs [ 3 * r ] * rtB . hmhfxu54r4 [ vcol ] ; rtB . jofjaqksuy
[ vcol + 3 * r ] += rtB . pwa11vfmjs [ 3 * r + 1 ] * rtB . hmhfxu54r4 [ vcol
+ 3 ] ; rtB . jofjaqksuy [ vcol + 3 * r ] += rtB . pwa11vfmjs [ 3 * r + 2 ] *
rtB . hmhfxu54r4 [ vcol + 6 ] ; t += rtB . jofjaqksuy [ 3 * r + vcol ] * rtB
. flarix3pcb [ r ] ; } rtB . fp1tgwmu5f [ vcol ] = 0.0 - t ; } scale =
3.3121686421112381E-170 ; absxk = muDoubleScalarAbs ( rtB . fkj0rfxikb [ 0 ]
) ; if ( absxk > 3.3121686421112381E-170 ) { absx = 1.0 ; scale = absxk ; }
else { t = absxk / 3.3121686421112381E-170 ; absx = t * t ; } absxk =
muDoubleScalarAbs ( rtB . fkj0rfxikb [ 1 ] ) ; if ( absxk > scale ) { t =
scale / absxk ; absx = absx * t * t + 1.0 ; scale = absxk ; } else { t =
absxk / scale ; absx += t * t ; } absxk = muDoubleScalarAbs ( rtB .
fkj0rfxikb [ 2 ] ) ; if ( absxk > scale ) { t = scale / absxk ; absx = absx *
t * t + 1.0 ; scale = absxk ; } else { t = absxk / scale ; absx += t * t ; }
absx = scale * muDoubleScalarSqrt ( absx ) ; hr = rtB . fkj0rfxikb [ 0 ] /
absx ; scale = rtB . fkj0rfxikb [ 1 ] / absx ; absx = rtB . fkj0rfxikb [ 2 ]
/ absx ; for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { rtB . kvelh2qyt3 [ vcol ] =
0.0 ; rtB . kvelh2qyt3 [ vcol ] += rtB . hmhfxu54r4 [ vcol ] * hr ; rtB .
kvelh2qyt3 [ vcol ] += rtB . hmhfxu54r4 [ vcol + 3 ] * scale ; rtB .
kvelh2qyt3 [ vcol ] += rtB . hmhfxu54r4 [ vcol + 6 ] * absx ; } t = ( rtB .
fkj0rfxikb [ 0 ] * rtB . fkj0rfxikb [ 0 ] + rtB . fkj0rfxikb [ 1 ] * rtB .
fkj0rfxikb [ 1 ] ) + rtB . fkj0rfxikb [ 2 ] * rtB . fkj0rfxikb [ 2 ] ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . mn0b4y0wpz != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . mn0b4y0wpz = 0 ;
} rtB . hrixyxkgnl = muDoubleScalarSqrt ( t ) ; } else if ( t < 0.0 ) { rtB .
hrixyxkgnl = - muDoubleScalarSqrt ( muDoubleScalarAbs ( t ) ) ; rtDW .
mn0b4y0wpz = 1 ; } else { rtB . hrixyxkgnl = muDoubleScalarSqrt ( t ) ; } rtB
. fg3wanddgd [ 0 ] = rtP . omega_e * 0.0 * rtB . fkj0rfxikb [ 2 ] ; rtB .
fg3wanddgd [ 1 ] = rtP . omega_e * rtB . fkj0rfxikb [ 0 ] ; rtB . fg3wanddgd
[ 2 ] = rtP . omega_e * 0.0 * rtB . fkj0rfxikb [ 1 ] ; rtB . fg3wanddgd [ 3 ]
= rtP . omega_e * rtB . fkj0rfxikb [ 1 ] ; rtB . fg3wanddgd [ 4 ] = rtP .
omega_e * 0.0 * rtB . fkj0rfxikb [ 2 ] ; rtB . fg3wanddgd [ 5 ] = rtP .
omega_e * 0.0 * rtB . fkj0rfxikb [ 0 ] ; rtB . jagqjl2jmu [ 0 ] = rtB .
fg3wanddgd [ 0 ] - rtB . fg3wanddgd [ 3 ] ; rtB . jagqjl2jmu [ 1 ] = rtB .
fg3wanddgd [ 1 ] - rtB . fg3wanddgd [ 4 ] ; rtB . jagqjl2jmu [ 2 ] = rtB .
fg3wanddgd [ 2 ] - rtB . fg3wanddgd [ 5 ] ; if ( ( rtDW . dslujyjxf5 >=
ssGetT ( rtS ) ) && ( rtDW . bvvwmumrhs >= ssGetT ( rtS ) ) ) { rtB .
hro3fstxlx [ 0 ] = 0.0 ; rtB . hro3fstxlx [ 1 ] = 0.0 ; rtB . hro3fstxlx [ 2
] = 0.0 ; } else { hr = rtDW . dslujyjxf5 ; lastU = & rtDW . b3ejbi1eqr ; if
( rtDW . dslujyjxf5 < rtDW . bvvwmumrhs ) { if ( rtDW . bvvwmumrhs < ssGetT (
rtS ) ) { hr = rtDW . bvvwmumrhs ; lastU = & rtDW . c4dd1uf5cu ; } } else {
if ( rtDW . dslujyjxf5 >= ssGetT ( rtS ) ) { hr = rtDW . bvvwmumrhs ; lastU =
& rtDW . c4dd1uf5cu ; } } hr = ssGetT ( rtS ) - hr ; rtB . hro3fstxlx [ 0 ] =
( rtB . fkj0rfxikb [ 0 ] - ( * lastU ) [ 0 ] ) / hr ; rtB . hro3fstxlx [ 1 ]
= ( rtB . fkj0rfxikb [ 1 ] - ( * lastU ) [ 1 ] ) / hr ; rtB . hro3fstxlx [ 2
] = ( rtB . fkj0rfxikb [ 2 ] - ( * lastU ) [ 2 ] ) / hr ; } rtB . aglermfqwf
[ 0 ] = rtB . hro3fstxlx [ 0 ] + rtB . jagqjl2jmu [ 0 ] ; rtB . aglermfqwf [
1 ] = rtB . hro3fstxlx [ 1 ] + rtB . jagqjl2jmu [ 1 ] ; rtB . aglermfqwf [ 2
] = rtB . hro3fstxlx [ 2 ] + rtB . jagqjl2jmu [ 2 ] ; for ( r = 0 ; r < 3 ; r
++ ) { rtB . jnvj0fqsds [ r ] = 0.0 ; rtB . jnvj0fqsds [ r ] += rtB .
hmhfxu54r4 [ r ] * rtB . aglermfqwf [ 0 ] ; rtB . jnvj0fqsds [ r ] += rtB .
hmhfxu54r4 [ r + 3 ] * rtB . aglermfqwf [ 1 ] ; rtB . jnvj0fqsds [ r ] += rtB
. hmhfxu54r4 [ r + 6 ] * rtB . aglermfqwf [ 2 ] ; rtB . fqqi05xdci [ r ] =
0.0 ; p1ztmtvx4f [ r ] = rtB . jnvj0fqsds [ r ] * 1000.0 ; } scale = - 0.5 *
rtP . rho_Value * 1.28 * c4hcjrkkwl ( p1ztmtvx4f ) ; for ( r = 0 ; r < 10 ; r
++ ) { hr = muDoubleScalarMax ( ( ( ( real_T ) N_b [ r + 10 ] * p1ztmtvx4f [
1 ] + ( real_T ) N_b [ r ] * p1ztmtvx4f [ 0 ] ) + ( real_T ) N_b [ r + 20 ] *
p1ztmtvx4f [ 2 ] ) / c4hcjrkkwl ( p1ztmtvx4f ) , 0.0 ) ; dghj2fsjsm [ 0 ] =
scale * p1ztmtvx4f [ 0 ] * A_p [ r ] * hr ; dghj2fsjsm [ 1 ] = scale *
p1ztmtvx4f [ 1 ] * A_p [ r ] * hr ; dghj2fsjsm [ 2 ] = scale * p1ztmtvx4f [ 2
] * A_p [ r ] * hr ; rtB . fqqi05xdci [ 2 ] += R_b [ r ] * dghj2fsjsm [ 1 ] -
R_b [ r + 10 ] * dghj2fsjsm [ 0 ] ; rtB . fqqi05xdci [ 0 ] += R_b [ r + 10 ]
* dghj2fsjsm [ 2 ] - R_b [ r + 20 ] * dghj2fsjsm [ 1 ] ; rtB . fqqi05xdci [ 1
] += R_b [ r + 20 ] * dghj2fsjsm [ 0 ] - R_b [ r ] * dghj2fsjsm [ 2 ] ; } for
( vcol = 0 ; vcol < 3 ; vcol ++ ) { rtB . ldpez2gepa [ vcol ] = 0.0 ; rtB .
ldpez2gepa [ vcol ] += rtB . hmhfxu54r4 [ vcol ] * rtB . m3vn1reta5 [ 0 ] ;
rtB . ldpez2gepa [ vcol ] += rtB . hmhfxu54r4 [ vcol + 3 ] * rtB . m3vn1reta5
[ 1 ] ; rtB . ldpez2gepa [ vcol ] += rtB . hmhfxu54r4 [ vcol + 6 ] * rtB .
m3vn1reta5 [ 2 ] ; } absxk = rtP . e * muDoubleScalarCos ( rtB . kenhd3kcjp )
+ 1.0 ; rtB . ip4tnbacut = absxk * absxk * rtP . n / muDoubleScalarPower (
1.0 - rtP . e * rtP . e , 1.5 ) ; for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { rtB
. npupqbagjs [ vcol ] = 0.0 ; rtB . npupqbagjs [ vcol ] += rtB . jofjaqksuy [
vcol ] * rtP . Constant2_Value [ 0 ] ; rtB . npupqbagjs [ vcol ] += rtB .
jofjaqksuy [ vcol + 3 ] * rtP . Constant2_Value [ 1 ] ; rtB . npupqbagjs [
vcol ] += rtB . jofjaqksuy [ vcol + 6 ] * rtP . Constant2_Value [ 2 ] ; } rtB
. ehlapyi5ev = rtB . npupqbagjs [ 2 ] * rtB . npupqbagjs [ 1 ] ; rtB .
eyxzlqyvry = ( rtP . I_z - rtP . I_y ) * rtB . ehlapyi5ev ; rtB . kvkrilhl2b
= rtB . npupqbagjs [ 0 ] * rtB . npupqbagjs [ 2 ] ; rtB . fwqwoogzcg = ( rtP
. I_x - rtP . I_z ) * rtB . kvkrilhl2b ; rtB . aqep4b5uwq = rtB . npupqbagjs
[ 0 ] * rtB . npupqbagjs [ 1 ] ; rtB . g0es3p0gmy = ( rtP . I_y - rtP . I_x )
* rtB . aqep4b5uwq ; rtB . jr1yrgpnpl = rtP . Gain4_Gain * rtB . hrixyxkgnl ;
hr = muDoubleScalarPower ( rtB . jr1yrgpnpl , rtP . Constant1_Value ) ; rtB .
j4jfsufayw [ 0 ] = rtB . eyxzlqyvry / hr ; rtB . j4jfsufayw [ 1 ] = rtB .
fwqwoogzcg / hr ; rtB . j4jfsufayw [ 2 ] = rtB . g0es3p0gmy / hr ; hr = 3.0 *
rtP . G * rtP . m_earth ; for ( r = 0 ; r < 3 ; r ++ ) { rtB . aj4jzc1bo5 [ r
] = hr * rtB . j4jfsufayw [ r ] ; rtB . dolbb03las [ r ] = 0.0 ; rtB .
dolbb03las [ r ] += rtB . hmhfxu54r4 [ r ] * pikft3nvkg [ 0 ] ; rtB .
dolbb03las [ r ] += rtB . hmhfxu54r4 [ r + 3 ] * pikft3nvkg [ 1 ] ; rtB .
dolbb03las [ r ] += rtB . hmhfxu54r4 [ r + 6 ] * pikft3nvkg [ 2 ] ; } rtB .
f1yvftaxo2 [ 0 ] = rtP . Constant1_Value_ak2ogm0bur [ 1 ] * rtB . dolbb03las
[ 2 ] ; rtB . f1yvftaxo2 [ 1 ] = rtP . Constant1_Value_ak2ogm0bur [ 2 ] * rtB
. dolbb03las [ 0 ] ; rtB . f1yvftaxo2 [ 2 ] = rtP .
Constant1_Value_ak2ogm0bur [ 0 ] * rtB . dolbb03las [ 1 ] ; rtB . f1yvftaxo2
[ 3 ] = rtP . Constant1_Value_ak2ogm0bur [ 2 ] * rtB . dolbb03las [ 1 ] ; rtB
. f1yvftaxo2 [ 4 ] = rtP . Constant1_Value_ak2ogm0bur [ 0 ] * rtB .
dolbb03las [ 2 ] ; rtB . f1yvftaxo2 [ 5 ] = rtP . Constant1_Value_ak2ogm0bur
[ 1 ] * rtB . dolbb03las [ 0 ] ; rtB . cy1v1zxwf2 [ 0 ] = rtB . f1yvftaxo2 [
0 ] - rtB . f1yvftaxo2 [ 3 ] ; rtB . pgmvvyxdii [ 0 ] = ( ( rtB . k33bzvkicz
[ 0 ] + rtB . aj4jzc1bo5 [ 0 ] ) + rtB . cy1v1zxwf2 [ 0 ] ) + rtB .
fqqi05xdci [ 0 ] ; rtB . cy1v1zxwf2 [ 1 ] = rtB . f1yvftaxo2 [ 1 ] - rtB .
f1yvftaxo2 [ 4 ] ; rtB . pgmvvyxdii [ 1 ] = ( ( rtB . k33bzvkicz [ 1 ] + rtB
. aj4jzc1bo5 [ 1 ] ) + rtB . cy1v1zxwf2 [ 1 ] ) + rtB . fqqi05xdci [ 1 ] ;
rtB . cy1v1zxwf2 [ 2 ] = rtB . f1yvftaxo2 [ 2 ] - rtB . f1yvftaxo2 [ 5 ] ;
rtB . pgmvvyxdii [ 2 ] = ( ( rtB . k33bzvkicz [ 2 ] + rtB . aj4jzc1bo5 [ 2 ]
) + rtB . cy1v1zxwf2 [ 2 ] ) + rtB . fqqi05xdci [ 2 ] ; rtB . ksru50glpy [ 0
] = ( ( rtP . Inertiavector_Value [ 1 ] - rtP . Inertiavector_Value [ 2 ] ) *
rtB . kb5c2c4jlf [ 1 ] * rtB . kb5c2c4jlf [ 2 ] / rtP . Inertiavector_Value [
0 ] + rtB . pgmvvyxdii [ 0 ] / rtP . Inertiavector_Value [ 0 ] ) + rtB .
di2wm3ewqa [ 0 ] / rtP . Inertiavector_Value [ 0 ] ; rtB . ksru50glpy [ 1 ] =
( ( rtP . Inertiavector_Value [ 2 ] - rtP . Inertiavector_Value [ 0 ] ) * rtB
. kb5c2c4jlf [ 0 ] * rtB . kb5c2c4jlf [ 2 ] / rtP . Inertiavector_Value [ 1 ]
+ rtB . pgmvvyxdii [ 1 ] / rtP . Inertiavector_Value [ 1 ] ) + rtB .
di2wm3ewqa [ 1 ] / rtP . Inertiavector_Value [ 1 ] ; rtB . ksru50glpy [ 2 ] =
( ( rtP . Inertiavector_Value [ 0 ] - rtP . Inertiavector_Value [ 1 ] ) * rtB
. kb5c2c4jlf [ 1 ] * rtB . kb5c2c4jlf [ 0 ] / rtP . Inertiavector_Value [ 2 ]
+ rtB . pgmvvyxdii [ 2 ] / rtP . Inertiavector_Value [ 2 ] ) + rtB .
di2wm3ewqa [ 2 ] / rtP . Inertiavector_Value [ 2 ] ; V [ 0 ] = 0.0 ; V [ 4 ]
= 0.5 * rtB . kb5c2c4jlf [ 2 ] ; V [ 8 ] = 0.5 * - rtB . kb5c2c4jlf [ 1 ] ; V
[ 12 ] = 0.5 * rtB . kb5c2c4jlf [ 0 ] ; V [ 1 ] = 0.5 * - rtB . kb5c2c4jlf [
2 ] ; V [ 5 ] = 0.0 ; V [ 9 ] = 0.5 * rtB . kb5c2c4jlf [ 0 ] ; V [ 13 ] = 0.5
* rtB . kb5c2c4jlf [ 1 ] ; V [ 2 ] = 0.5 * rtB . kb5c2c4jlf [ 1 ] ; V [ 6 ] =
0.5 * - rtB . kb5c2c4jlf [ 0 ] ; V [ 10 ] = 0.0 ; V [ 14 ] = 0.5 * rtB .
kb5c2c4jlf [ 2 ] ; V [ 3 ] = 0.5 * - rtB . kb5c2c4jlf [ 0 ] ; V [ 7 ] = 0.5 *
- rtB . kb5c2c4jlf [ 1 ] ; V [ 11 ] = 0.5 * - rtB . kb5c2c4jlf [ 2 ] ; V [ 15
] = 0.0 ; for ( vcol = 0 ; vcol < 4 ; vcol ++ ) { rtB . k3gozdqg2o [ vcol ] =
0.0 ; rtB . k3gozdqg2o [ vcol ] += V [ vcol ] * mocgl1xiux_idx_0 ; rtB .
k3gozdqg2o [ vcol ] += V [ vcol + 4 ] * mocgl1xiux_idx_1 ; rtB . k3gozdqg2o [
vcol ] += V [ vcol + 8 ] * mocgl1xiux_idx_2 ; rtB . k3gozdqg2o [ vcol ] += V
[ vcol + 12 ] * mocgl1xiux_idx_3 ; } V_p [ 0 ] = - 0.0 ; V_p [ 3 ] = rtB .
jnwqbmkojt [ 2 ] ; V_p [ 6 ] = - rtB . jnwqbmkojt [ 1 ] ; V_p [ 1 ] = - rtB .
jnwqbmkojt [ 2 ] ; V_p [ 4 ] = - 0.0 ; V_p [ 7 ] = rtB . jnwqbmkojt [ 0 ] ;
V_p [ 2 ] = rtB . jnwqbmkojt [ 1 ] ; V_p [ 5 ] = - rtB . jnwqbmkojt [ 0 ] ;
V_p [ 8 ] = - 0.0 ; for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { for ( r = 0 ; r <
3 ; r ++ ) { M [ vcol + 3 * r ] = 0.0 ; M [ vcol + 3 * r ] += rtB .
m5nfjzbcxv [ vcol ] * rtB . m5nfjzbcxv [ r ] ; M [ vcol + 3 * r ] += rtB .
m5nfjzbcxv [ vcol + 3 ] * rtB . m5nfjzbcxv [ r + 3 ] ; M [ vcol + 3 * r ] +=
rtB . m5nfjzbcxv [ vcol + 6 ] * rtB . m5nfjzbcxv [ r + 6 ] ; } for ( r = 0 ;
r < 3 ; r ++ ) { rtB . i5gni5jpn0 [ vcol + 3 * r ] = ( rtB . nhuthseoki [ 3 *
r + vcol ] - ( rtB . m5nfjzbcxv [ 3 * r + vcol ] * 3.0 / 2.0 - ( ( rtB .
m5nfjzbcxv [ 3 * r + 1 ] * M [ vcol + 3 ] + rtB . m5nfjzbcxv [ 3 * r ] * M [
vcol ] ) + rtB . m5nfjzbcxv [ 3 * r + 2 ] * M [ vcol + 6 ] ) / 2.0 ) ) * rtP
. Tuningparameter_Value + ( ( rtB . nhuthseoki [ 3 * r + 1 ] * V_p [ vcol + 3
] + rtB . nhuthseoki [ 3 * r ] * V_p [ vcol ] ) + rtB . nhuthseoki [ 3 * r +
2 ] * V_p [ vcol + 6 ] ) ; } } rtB . b0w4srbueq [ 0 ] = ( ( ( rtP .
Inertiavector1_Value [ 1 ] - rtP . Inertiavector1_Value [ 2 ] ) * rtB .
eh54vwsh45 [ 1 ] * rtB . eh54vwsh45 [ 2 ] / rtP . Inertiavector1_Value [ 0 ]
+ rtB . pgmvvyxdii [ 0 ] / rtP . Inertiavector1_Value [ 0 ] ) + rtB .
di2wm3ewqa [ 0 ] / rtP . Inertiavector1_Value [ 0 ] ) - rtP .
Tuningcoeff_Value / rtP . Inertiavector1_Value [ 0 ] * ( rtB . jnwqbmkojt [ 0
] - rtB . eh54vwsh45 [ 0 ] ) ; rtB . b0w4srbueq [ 1 ] = ( ( ( rtP .
Inertiavector1_Value [ 2 ] - rtP . Inertiavector1_Value [ 0 ] ) * rtB .
eh54vwsh45 [ 0 ] * rtB . eh54vwsh45 [ 2 ] / rtP . Inertiavector1_Value [ 1 ]
+ rtB . pgmvvyxdii [ 1 ] / rtP . Inertiavector1_Value [ 1 ] ) + rtB .
di2wm3ewqa [ 1 ] / rtP . Inertiavector1_Value [ 1 ] ) - rtP .
Tuningcoeff_Value / rtP . Inertiavector1_Value [ 1 ] * ( rtB . jnwqbmkojt [ 1
] - rtB . eh54vwsh45 [ 1 ] ) ; rtB . b0w4srbueq [ 2 ] = ( ( ( rtP .
Inertiavector1_Value [ 0 ] - rtP . Inertiavector1_Value [ 1 ] ) * rtB .
eh54vwsh45 [ 1 ] * rtB . eh54vwsh45 [ 0 ] / rtP . Inertiavector1_Value [ 2 ]
+ rtB . pgmvvyxdii [ 2 ] / rtP . Inertiavector1_Value [ 2 ] ) + rtB .
di2wm3ewqa [ 2 ] / rtP . Inertiavector1_Value [ 2 ] ) - rtP .
Tuningcoeff_Value / rtP . Inertiavector1_Value [ 2 ] * ( rtB . jnwqbmkojt [ 2
] - rtB . eh54vwsh45 [ 2 ] ) ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB .
pvajrq2lxe [ 0 ] = rtDW . mpbkk0mzty [ 0 ] ; rtB . pvajrq2lxe [ 1 ] = rtDW .
mpbkk0mzty [ 1 ] ; rtB . pvajrq2lxe [ 2 ] = rtDW . mpbkk0mzty [ 2 ] ; }
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID3 ( int_T tid ) { real_T
cnnaq5zcsn ; rtB . akz4wjrmo0 = rtP . R_e * rtP . R_e ; cnnaq5zcsn = rtP .
Gain1_Gain * rtP . InclinationofEarthsRotationaxisdeg_Value ; rtB .
jdawsowjrv = rtP . _Value / rtP . periodofEarthorbitaroundthesun_Value ; rtB
. lvaafrmesm = muDoubleScalarSin ( cnnaq5zcsn ) ; rtB . pgla1jvh3e =
muDoubleScalarCos ( cnnaq5zcsn ) ; rtB . mjfbd5uniz = rtP .
Gain1_Gain_gamvzqgrli * rtP . i ; rtB . flarix3pcb [ 0 ] = rtP . w_xw_y_Value
; rtB . flarix3pcb [ 1 ] = rtP . w_xw_y_Value ; rtB . flarix3pcb [ 2 ] = rtP
. n ; rtB . cyqsqy0bbk = rtP . Gain1_Gain_mn5dgmnkn4 * rtP .
Gymbalaxistilt1_Value ; rtB . e0jir2rqfh = rtP . Gain_Gain_gegphuevyb * rtP .
Gyrospeed_Value ; rtB . anr2sc1zx1 [ 0 ] = rtP . Omega0vector_Value [ 0 ] ;
rtB . gvact2smmw [ 0 ] = rtP . bt0_Value [ 0 ] ; rtB . anr2sc1zx1 [ 1 ] = rtP
. Omega0vector_Value [ 1 ] ; rtB . gvact2smmw [ 1 ] = rtP . bt0_Value [ 1 ] ;
rtB . anr2sc1zx1 [ 2 ] = rtP . Omega0vector_Value [ 2 ] ; rtB . gvact2smmw [
2 ] = rtP . bt0_Value [ 2 ] ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate (
int_T tid ) { real_T ( * lastU ) [ 3 ] ; rtDW . o15the1ksz = 0 ; if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . ibb0msb3ue [ 0 ] =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . azi1v4q3r4 [ 0 ] ) * rtP .
ARWNOISE_StdDev [ 0 ] + rtP . ARWNOISE_Mean ; rtDW . ibb0msb3ue [ 1 ] =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . azi1v4q3r4 [ 1 ] ) * rtP .
ARWNOISE_StdDev [ 1 ] + rtP . ARWNOISE_Mean ; rtDW . ibb0msb3ue [ 2 ] =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . azi1v4q3r4 [ 2 ] ) * rtP .
ARWNOISE_StdDev [ 2 ] + rtP . ARWNOISE_Mean ; rtDW . nhf0go2f0l =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . ajwa5oigiq ) * rtP . theta_StdDev + rtP
. theta_Mean ; rtDW . fa3l1x4zjw = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW .
k1cyo3ic4z ) * rtP . psi_StdDev + rtP . psi_Mean ; rtDW . ec4iczeuop =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . gzh33iv0mh ) * rtP . phi_StdDev + rtP .
phi_Mean ; rtDW . mxct422gc5 = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW .
gpmzgjuozq ) * rtP . xi_StdDev + rtP . xi_Mean ; rtDW . hjp0iqtsnv =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . erahgh0zpk ) * rtP .
psi_StdDev_i2auns3m0i + rtP . psi_Mean_iicgv5oqe1 ; rtDW . i1kfofikbc =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . b0fewzdtg1 ) * rtP .
phi_StdDev_msvebjj1dn + rtP . phi_Mean_nqrm2dpg35 ; rtDW . jkyamiugmq =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . jzbfaxoaz4 ) * rtP .
theta_StdDev_cz5h30rgng + rtP . theta_Mean_oiiju3ziio ; rtDW . o4n211i2ui =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . dc0ryh5mbb ) * rtP .
psi_StdDev_cxrntnbbi4 + rtP . psi_Mean_dw5aio5m2x ; rtDW . mfs3ug1ss0 =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . a41rrbiaut ) * rtP .
phi_StdDev_dkurksjsig + rtP . phi_Mean_p0kq0rtldo ; } rtDW . btxv3caz21 = 0 ;
if ( rtDW . dslujyjxf5 == ( rtInf ) ) { rtDW . dslujyjxf5 = ssGetT ( rtS ) ;
lastU = & rtDW . b3ejbi1eqr ; } else if ( rtDW . bvvwmumrhs == ( rtInf ) ) {
rtDW . bvvwmumrhs = ssGetT ( rtS ) ; lastU = & rtDW . c4dd1uf5cu ; } else if
( rtDW . dslujyjxf5 < rtDW . bvvwmumrhs ) { rtDW . dslujyjxf5 = ssGetT ( rtS
) ; lastU = & rtDW . b3ejbi1eqr ; } else { rtDW . bvvwmumrhs = ssGetT ( rtS )
; lastU = & rtDW . c4dd1uf5cu ; } ( * lastU ) [ 0 ] = rtB . fkj0rfxikb [ 0 ]
; ( * lastU ) [ 1 ] = rtB . fkj0rfxikb [ 1 ] ; ( * lastU ) [ 2 ] = rtB .
fkj0rfxikb [ 2 ] ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . mpbkk0mzty [
0 ] = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . mjetb5jzdi [ 0 ] ) * rtP .
RRWNOISE_StdDev [ 0 ] + rtP . RRWNOISE_Mean ; rtDW . mpbkk0mzty [ 1 ] =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . mjetb5jzdi [ 1 ] ) * rtP .
RRWNOISE_StdDev [ 1 ] + rtP . RRWNOISE_Mean ; rtDW . mpbkk0mzty [ 2 ] =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . mjetb5jzdi [ 2 ] ) * rtP .
RRWNOISE_StdDev [ 2 ] + rtP . RRWNOISE_Mean ; } UNUSED_PARAMETER ( tid ) ; }
void MdlUpdateTID3 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { int32_T i ; XDot * _rtXdot ; _rtXdot = ( ( XDot * )
ssGetdX ( rtS ) ) ; _rtXdot -> nw3lgdo4ll [ 0 ] = rtB . decs43f2is [ 0 ] ;
_rtXdot -> nw3lgdo4ll [ 1 ] = rtB . decs43f2is [ 1 ] ; _rtXdot -> nw3lgdo4ll
[ 2 ] = rtB . decs43f2is [ 2 ] ; _rtXdot -> nw3lgdo4ll [ 3 ] = rtB .
decs43f2is [ 3 ] ; _rtXdot -> dspzybtrlj [ 0 ] = rtB . b0w4srbueq [ 0 ] ;
_rtXdot -> dspzybtrlj [ 1 ] = rtB . b0w4srbueq [ 1 ] ; _rtXdot -> dspzybtrlj
[ 2 ] = rtB . b0w4srbueq [ 2 ] ; memcpy ( & _rtXdot -> jwpzday0b1 [ 0 ] , &
rtB . i5gni5jpn0 [ 0 ] , 9U * sizeof ( real_T ) ) ; _rtXdot -> cihjvn0cmd =
rtB . ip4tnbacut ; _rtXdot -> m5cncmmh3t [ 0 ] = rtB . ksru50glpy [ 0 ] ;
_rtXdot -> m5cncmmh3t [ 1 ] = rtB . ksru50glpy [ 1 ] ; _rtXdot -> m5cncmmh3t
[ 2 ] = rtB . ksru50glpy [ 2 ] ; for ( i = 0 ; i < 6 ; i ++ ) { _rtXdot ->
jvfedonto2 [ i ] = rtB . brzazytz5j [ i ] ; } _rtXdot -> hqsmobf5wk [ 0 ] =
rtB . pvajrq2lxe [ 0 ] ; _rtXdot -> hqsmobf5wk [ 1 ] = rtB . pvajrq2lxe [ 1 ]
; _rtXdot -> hqsmobf5wk [ 2 ] = rtB . pvajrq2lxe [ 2 ] ; _rtXdot ->
iva5vtj1tw [ 0 ] = rtB . k3gozdqg2o [ 0 ] ; _rtXdot -> iva5vtj1tw [ 1 ] = rtB
. k3gozdqg2o [ 1 ] ; _rtXdot -> iva5vtj1tw [ 2 ] = rtB . k3gozdqg2o [ 2 ] ;
_rtXdot -> iva5vtj1tw [ 3 ] = rtB . k3gozdqg2o [ 3 ] ; memcpy ( & _rtXdot ->
ka0tu4yhzy [ 0 ] , & rtB . cmhel42bh2 [ 0 ] , 9U * sizeof ( real_T ) ) ; }
void MdlProjection ( void ) { } void MdlZeroCrossings ( void ) { ZCV *
_rtZCSV ; _rtZCSV = ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV
-> m3tmoqy1t5 = 0.0 ; if ( rtB . oqsaecduyj < 10.0 ) { _rtZCSV -> m3tmoqy1t5
= 1.0 ; } _rtZCSV -> mpzxzkrlod [ 0 ] = rtB . db2roqckzz [ 0 ] - rtP .
MAXIMUMGIMBALRATE_UpperSat ; _rtZCSV -> jn1mzxwqhi [ 0 ] = rtB . db2roqckzz [
0 ] - rtP . MAXIMUMGIMBALRATE_LowerSat ; _rtZCSV -> mpzxzkrlod [ 1 ] = rtB .
db2roqckzz [ 1 ] - rtP . MAXIMUMGIMBALRATE_UpperSat ; _rtZCSV -> jn1mzxwqhi [
1 ] = rtB . db2roqckzz [ 1 ] - rtP . MAXIMUMGIMBALRATE_LowerSat ; _rtZCSV ->
mpzxzkrlod [ 2 ] = rtB . db2roqckzz [ 2 ] - rtP . MAXIMUMGIMBALRATE_UpperSat
; _rtZCSV -> jn1mzxwqhi [ 2 ] = rtB . db2roqckzz [ 2 ] - rtP .
MAXIMUMGIMBALRATE_LowerSat ; _rtZCSV -> mpzxzkrlod [ 3 ] = rtB . db2roqckzz [
3 ] - rtP . MAXIMUMGIMBALRATE_UpperSat ; _rtZCSV -> jn1mzxwqhi [ 3 ] = rtB .
db2roqckzz [ 3 ] - rtP . MAXIMUMGIMBALRATE_LowerSat ; _rtZCSV -> mhpqdkuiqh =
0.0 ; if ( rtB . e4wdtksuab < rtB . ioqnm4rp2f ) { _rtZCSV -> mhpqdkuiqh =
1.0 ; } _rtZCSV -> l0ba1zqnns = 0.0 ; if ( rtB . pmztpun2vh < 0.5 ) { _rtZCSV
-> l0ba1zqnns = 1.0 ; } } void MdlTerminate ( void ) { if ( rt_slioCatalogue
( ) != ( NULL ) ) { void * * slioCatalogueAddr = rt_slioCatalogueAddr ( ) ;
rtwSaveDatasetsToMatFile ( rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( )
) , rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 42 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
3 ) ; ssSetNumBlocks ( rtS , 276 ) ; ssSetNumBlockIO ( rtS , 113 ) ;
ssSetNumBlockParams ( rtS , 792 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetSampleTime ( rtS , 2 , 0.1 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 733300408U ) ;
ssSetChecksumVal ( rtS , 1 , 1652556171U ) ; ssSetChecksumVal ( rtS , 2 ,
1646324833U ) ; ssSetChecksumVal ( rtS , 3 , 2685721454U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 14 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
Final_project_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS
, true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "Final_project" ) ;
ssSetPath ( rtS , "Final_project" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal
( rtS , 3000.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 4 , 3
, 9 , 1 , 3 , 6 , 3 , 4 , 9 } ; static int_T rt_LoggedStateNumDimensions [ ]
= { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 4 , 3 , 9 , 1 , 3 , 6 , 3 , 4 , 9 } ; static
boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 }
; static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static
const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" } ; static
const char_T * rt_LoggedStateBlockNames [ ] = {
"Final_project/CMG actuator/Integrator" , "Final_project/Integrator4" ,
"Final_project/Integrator5" ,
 "Final_project/Approximate orbit model/orbit model - S//C orbit wrt Earth/Integrator"
, "Final_project/Integrator1" , "Final_project/Integrator" ,
"Final_project/Integrator2" , "Final_project/Integrator3" ,
"Final_project/ATTITUDE DETERMINATION/If Action\nSubsystem/Integrator6" } ;
static const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , "" , ""
, "" , "" , "" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 ,
1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } ,
{ 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static RTWLogSignalInfo
rt_LoggedStateSignalInfo = { 9 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 9 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . nw3lgdo4ll [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . dspzybtrlj [ 0 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . jwpzday0b1 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . cihjvn0cmd ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . m5cncmmh3t [ 0 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . jvfedonto2 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . hqsmobf5wk [ 0 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . iva5vtj1tw [ 0 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . ka0tu4yhzy [ 0 ] ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 42 ] ;
static real_T absTol [ 42 ] = { 1.0000000000000002E-12 ,
1.0000000000000002E-12 , 1.0000000000000002E-12 , 1.0000000000000002E-12 ,
1.0000000000000002E-12 , 1.0000000000000002E-12 , 1.0000000000000002E-12 ,
1.0000000000000002E-12 , 1.0000000000000002E-12 , 1.0000000000000002E-12 ,
1.0000000000000002E-12 , 1.0000000000000002E-12 , 1.0000000000000002E-12 ,
1.0000000000000002E-12 , 1.0000000000000002E-12 , 1.0000000000000002E-12 ,
1.0000000000000002E-12 , 1.0000000000000002E-12 , 1.0000000000000002E-12 ,
1.0000000000000002E-12 , 1.0000000000000002E-12 , 1.0000000000000002E-12 ,
1.0000000000000002E-12 , 1.0000000000000002E-12 , 1.0000000000000002E-12 ,
1.0000000000000002E-12 , 1.0000000000000002E-12 , 1.0000000000000002E-12 ,
1.0000000000000002E-12 , 1.0000000000000002E-12 , 1.0000000000000002E-12 ,
1.0000000000000002E-12 , 1.0000000000000002E-12 , 1.0000000000000002E-12 ,
1.0000000000000002E-12 , 1.0000000000000002E-12 , 1.0000000000000002E-12 ,
1.0000000000000002E-12 , 1.0000000000000002E-12 , 1.0000000000000002E-12 ,
1.0000000000000002E-12 , 1.0000000000000002E-12 } ; static uint8_T
absTolControl [ 42 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
} ; static real_T contStateJacPerturbBoundMinVec [ 42 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 42 ] ; static uint8_T zcAttributes [ 11 ] =
{ ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) } ; static
ssNonContDerivSigInfo nonContDerivSigInfo [ 7 ] = { { 3 * sizeof ( real_T ) ,
( char * ) ( & rtB . pvajrq2lxe [ 0 ] ) , ( NULL ) } , { 3 * sizeof ( real_T
) , ( char * ) ( & rtB . geyyaqa4ya [ 0 ] ) , ( NULL ) } , { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . dsrxzkpxun ) , ( NULL ) } , { 3 * sizeof (
real_T ) , ( char * ) ( & rtB . aefa10eb0v [ 0 ] ) , ( NULL ) } , { 3 *
sizeof ( real_T ) , ( char * ) ( & rtB . dmqnbaxtxv [ 0 ] ) , ( NULL ) } , {
9 * sizeof ( real_T ) , ( char * ) ( & rtB . my2dz1bzgp . jkie4iyale [ 0 ] )
, ( NULL ) } , { 9 * sizeof ( real_T ) , ( char * ) ( & rtB . na14ipaqql .
jkie4iyale [ 0 ] ) , ( NULL ) } } ; { int i ; for ( i = 0 ; i < 42 ; ++ i ) {
contStateJacPerturbBoundMinVec [ i ] = 0 ; contStateJacPerturbBoundMaxVec [ i
] = rtGetInf ( ) ; } } ssSetSolverRelTol ( rtS , 1.0E-9 ) ; ssSetStepSize (
rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , -
1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 0.1 )
; ssSetSolverMaxOrder ( rtS , 5 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 1 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 7 ) ; ssSetNonContDerivSigInfos ( rtS ,
nonContDerivSigInfo ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "ode15s" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 1 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector (
rtS , absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 11 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 0 ) ;
ssSetSolverZcThreshold ( rtS , 1.0E-9 ) ; ssSetSolverMaxConsecutiveMinStep (
rtS , 1 ) ; ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS
, INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS )
; ssSetNumNonsampledZCs ( rtS , 11 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 733300408U ) ; ssSetChecksumVal ( rtS , 1 ,
1652556171U ) ; ssSetChecksumVal ( rtS , 2 , 1646324833U ) ; ssSetChecksumVal
( rtS , 3 , 2685721454U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 40 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = & rtAlwaysEnabled ;
systemRan [ 6 ] = ( sysRanDType * ) & rtDW . geox5czrb34 . ie02gmwcra ;
systemRan [ 7 ] = ( sysRanDType * ) & rtDW . pfanvlh2dr . ie02gmwcra ;
systemRan [ 8 ] = & rtAlwaysEnabled ; systemRan [ 9 ] = & rtAlwaysEnabled ;
systemRan [ 10 ] = & rtAlwaysEnabled ; systemRan [ 11 ] = & rtAlwaysEnabled ;
systemRan [ 12 ] = & rtAlwaysEnabled ; systemRan [ 13 ] = & rtAlwaysEnabled ;
systemRan [ 14 ] = & rtAlwaysEnabled ; systemRan [ 15 ] = & rtAlwaysEnabled ;
systemRan [ 16 ] = & rtAlwaysEnabled ; systemRan [ 17 ] = & rtAlwaysEnabled ;
systemRan [ 18 ] = & rtAlwaysEnabled ; systemRan [ 19 ] = ( sysRanDType * ) &
rtDW . jda3fmwzpyl . fjromfvqvr ; systemRan [ 20 ] = ( sysRanDType * ) & rtDW
. kzyworijhb . fjromfvqvr ; systemRan [ 21 ] = & rtAlwaysEnabled ; systemRan
[ 22 ] = ( sysRanDType * ) & rtDW . pwl3yyzylbp . iod0jhjcju ; systemRan [ 23
] = ( sysRanDType * ) & rtDW . atqljxdp0d . iod0jhjcju ; systemRan [ 24 ] = &
rtAlwaysEnabled ; systemRan [ 25 ] = & rtAlwaysEnabled ; systemRan [ 26 ] = &
rtAlwaysEnabled ; systemRan [ 27 ] = & rtAlwaysEnabled ; systemRan [ 28 ] = &
rtAlwaysEnabled ; systemRan [ 29 ] = & rtAlwaysEnabled ; systemRan [ 30 ] = &
rtAlwaysEnabled ; systemRan [ 31 ] = & rtAlwaysEnabled ; systemRan [ 32 ] = &
rtAlwaysEnabled ; systemRan [ 33 ] = & rtAlwaysEnabled ; systemRan [ 34 ] = &
rtAlwaysEnabled ; systemRan [ 35 ] = & rtAlwaysEnabled ; systemRan [ 36 ] = &
rtAlwaysEnabled ; systemRan [ 37 ] = & rtAlwaysEnabled ; systemRan [ 38 ] = &
rtAlwaysEnabled ; systemRan [ 39 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID3 ( tid ) ; }
