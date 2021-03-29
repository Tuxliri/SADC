#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } } ; static uint_T rtDataTypeSizes [ ] = {
sizeof ( real_T ) , sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof (
uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) ,
sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof (
int_T ) , sizeof ( pointer_T ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T
) } ; static const char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" ,
"int8_T" , "uint8_T" , "int16_T" , "uint16_T" , "int32_T" , "uint32_T" ,
"boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" , "action_T" ,
"timer_uint32_pair_T" } ; static DataTypeTransition rtBTransitions [ ] = { {
( char_T * ) ( & rtB . buaztywrb3 [ 0 ] ) , 0 , 0 , 386 } , { ( char_T * ) (
& rtB . inz2gdmoa0 . bogehaw2ze [ 0 ] ) , 0 , 0 , 3 } , { ( char_T * ) ( &
rtB . hyavuifm1w . bogehaw2ze [ 0 ] ) , 0 , 0 , 3 } , { ( char_T * ) ( & rtB
. my2dz1bzgp . jkie4iyale [ 0 ] ) , 0 , 0 , 9 } , { ( char_T * ) ( & rtB .
na14ipaqql . jkie4iyale [ 0 ] ) , 0 , 0 , 9 } , { ( char_T * ) ( & rtDW .
ibb0msb3ue [ 0 ] ) , 0 , 0 , 23 } , { ( char_T * ) ( & rtDW . bf0wx5i3d2 .
LoggedData ) , 11 , 0 , 29 } , { ( char_T * ) ( & rtDW . azi1v4q3r4 [ 0 ] ) ,
7 , 0 , 15 } , { ( char_T * ) ( & rtDW . o15the1ksz ) , 10 , 0 , 6 } , { (
char_T * ) ( & rtDW . jzg2v02ptv ) , 2 , 0 , 12 } , { ( char_T * ) ( & rtDW .
atqljxdp0d . iod0jhjcju ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
pwl3yyzylbp . iod0jhjcju ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
kzyworijhb . fjromfvqvr ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
jda3fmwzpyl . fjromfvqvr ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
pfanvlh2dr . ie02gmwcra ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
geox5czrb34 . ie02gmwcra ) , 2 , 0 , 1 } } ; static DataTypeTransitionTable
rtBTransTable = { 16U , rtBTransitions } ; static DataTypeTransition
rtPTransitions [ ] = { { ( char_T * ) ( & rtP . F_e ) , 0 , 0 , 789 } , { (
char_T * ) ( & rtP . ManualSwitch_CurrentSetting ) , 3 , 0 , 1 } , { ( char_T
* ) ( & rtP . pfanvlh2dr . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) (
& rtP . geox5czrb34 . Constant_Value ) , 0 , 0 , 1 } } ; static
DataTypeTransitionTable rtPTransTable = { 4U , rtPTransitions } ;
