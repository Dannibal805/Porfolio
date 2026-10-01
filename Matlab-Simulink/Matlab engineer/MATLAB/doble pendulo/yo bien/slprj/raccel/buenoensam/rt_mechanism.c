#include "__cf_buenoensam.h"
#include "tmwtypes.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "mech_std.h"
#include "mtypes.h"
#include "simulation_data.h"
#include "sim_mechanics_imports.h"
#include "rtwtypes.h"
#include "rt_mechanism.h"
#include "rt_mechanism_map.h"
int32_T rt_mech_visited_buenoensam_f04650f8 = 0 ; int32_T
rt_mech_visited_loc_buenoensam_f04650f8 = 0 ; Mechanism *
rt_get_mechanism_buenoensam_f04650f8 ( void ) { static Mechanism * _mechanism
= 0 ; static pmArrayRead pmArrayRead_table [ 52 ] ; static real_T
real_T_table [ 453 ] ; static AxisRead AxisRead_table [ 2 ] ; static
pmArrayRead * pmArrayRead_ptr_table [ 6 ] ; static NameArrayRead
NameArrayRead_table [ 5 ] ; static int32_T int32_T_table [ 26 ] ; static
IndexArrayRead IndexArrayRead_table [ 15 ] ; static Sensor Sensor_table [ 4 ]
; static BodySensor BodySensor_table [ 5 ] ; static BodyActuator
BodyActuator_table [ 10 ] ; static GeneralJointEngine
GeneralJointEngine_table [ 5 ] ; static Joint Joint_table [ 5 ] ; static
BodyEngine BodyEngine_table [ 5 ] ; static Body Body_table [ 5 ] ; static
Joint * Joint_ptr_table [ 5 ] ; static Branch Branch_table [ 2 ] ; static
Body * Body_ptr_table [ 5 ] ; static Connect Connect_table [ 1 ] ; static
Branch * Branch_ptr_table [ 5 ] ; static Recursion Recursion_table [ 1 ] ;
static Connect * Connect_ptr_table [ 1 ] ; static MachineData
MachineData_table [ 1 ] ; static WarningFlags WarningFlags_table [ 1 ] ;
static Mechanism Mechanism_table [ 1 ] ; if ( _mechanism == 0 ) { memset (
pmArrayRead_table , 0 , sizeof ( pmArrayRead_table ) ) ; pmArrayRead_table [
0 ] . type = 1 ; pmArrayRead_table [ 0 ] . n = 3U ; pmArrayRead_table [ 0 ] .
real = real_T_table + 268U ; pmArrayRead_table [ 1 ] . type = 1 ;
pmArrayRead_table [ 1 ] . n = 1U ; pmArrayRead_table [ 1 ] . real =
real_T_table + 271U ; pmArrayRead_table [ 2 ] . type = 1 ; pmArrayRead_table
[ 2 ] . n = 9U ; pmArrayRead_table [ 2 ] . real = real_T_table + 272U ;
pmArrayRead_table [ 3 ] . type = 1 ; pmArrayRead_table [ 3 ] . n = 1U ;
pmArrayRead_table [ 3 ] . real = real_T_table + 281U ; pmArrayRead_table [ 4
] . type = 1 ; pmArrayRead_table [ 4 ] . n = 9U ; pmArrayRead_table [ 4 ] .
real = real_T_table + 282U ; pmArrayRead_table [ 5 ] . type = 1 ;
pmArrayRead_table [ 5 ] . n = 3U ; pmArrayRead_table [ 5 ] . real =
real_T_table + 291U ; pmArrayRead_table [ 6 ] . type = 1 ; pmArrayRead_table
[ 6 ] . n = 9U ; pmArrayRead_table [ 6 ] . real = real_T_table + 294U ;
pmArrayRead_table [ 7 ] . type = 1 ; pmArrayRead_table [ 7 ] . n = 1U ;
pmArrayRead_table [ 7 ] . real = real_T_table + 303U ; pmArrayRead_table [ 8
] . type = 1 ; pmArrayRead_table [ 8 ] . n = 9U ; pmArrayRead_table [ 8 ] .
real = real_T_table + 304U ; pmArrayRead_table [ 9 ] . type = 1 ;
pmArrayRead_table [ 9 ] . n = 3U ; pmArrayRead_table [ 9 ] . real =
real_T_table + 313U ; pmArrayRead_table [ 10 ] . type = 1 ; pmArrayRead_table
[ 10 ] . n = 9U ; pmArrayRead_table [ 10 ] . real = real_T_table + 316U ;
pmArrayRead_table [ 11 ] . type = 1 ; pmArrayRead_table [ 11 ] . n = 1U ;
pmArrayRead_table [ 11 ] . real = real_T_table + 325U ; pmArrayRead_table [
12 ] . type = 1 ; pmArrayRead_table [ 12 ] . n = 9U ; pmArrayRead_table [ 12
] . real = real_T_table + 326U ; pmArrayRead_table [ 13 ] . type = 1 ;
pmArrayRead_table [ 13 ] . n = 3U ; pmArrayRead_table [ 13 ] . real =
real_T_table + 335U ; pmArrayRead_table [ 14 ] . type = 1 ; pmArrayRead_table
[ 14 ] . n = 9U ; pmArrayRead_table [ 14 ] . real = real_T_table + 338U ;
pmArrayRead_table [ 15 ] . type = 1 ; pmArrayRead_table [ 15 ] . n = 1U ;
pmArrayRead_table [ 15 ] . real = real_T_table + 347U ; pmArrayRead_table [
16 ] . type = 1 ; pmArrayRead_table [ 16 ] . n = 9U ; pmArrayRead_table [ 16
] . real = real_T_table + 348U ; pmArrayRead_table [ 17 ] . type = 1 ;
pmArrayRead_table [ 17 ] . n = 3U ; pmArrayRead_table [ 17 ] . real =
real_T_table + 357U ; pmArrayRead_table [ 18 ] . type = 1 ; pmArrayRead_table
[ 18 ] . n = 9U ; pmArrayRead_table [ 18 ] . real = real_T_table + 360U ;
pmArrayRead_table [ 19 ] . type = 1 ; pmArrayRead_table [ 19 ] . n = 1U ;
pmArrayRead_table [ 19 ] . real = real_T_table + 369U ; pmArrayRead_table [
20 ] . type = 1 ; pmArrayRead_table [ 20 ] . n = 1U ; pmArrayRead_table [ 20
] . real = real_T_table + 370U ; pmArrayRead_table [ 21 ] . type = 1 ;
pmArrayRead_table [ 21 ] . n = 1U ; pmArrayRead_table [ 21 ] . real =
real_T_table + 371U ; pmArrayRead_table [ 22 ] . type = 1 ; pmArrayRead_table
[ 22 ] . n = 3U ; pmArrayRead_table [ 22 ] . real = real_T_table + 372U ;
pmArrayRead_table [ 23 ] . type = 1 ; pmArrayRead_table [ 23 ] . n = 3U ;
pmArrayRead_table [ 23 ] . real = real_T_table + 375U ; pmArrayRead_table [
24 ] . type = 1 ; pmArrayRead_table [ 24 ] . n = 3U ; pmArrayRead_table [ 24
] . real = real_T_table + 378U ; pmArrayRead_table [ 25 ] . type = 1 ;
pmArrayRead_table [ 25 ] . n = 1U ; pmArrayRead_table [ 25 ] . real =
real_T_table + 381U ; pmArrayRead_table [ 26 ] . type = 1 ; pmArrayRead_table
[ 26 ] . n = 1U ; pmArrayRead_table [ 26 ] . real = real_T_table + 382U ;
pmArrayRead_table [ 27 ] . type = 1 ; pmArrayRead_table [ 27 ] . n = 1U ;
pmArrayRead_table [ 27 ] . real = real_T_table + 383U ; pmArrayRead_table [
28 ] . type = 1 ; pmArrayRead_table [ 28 ] . n = 9U ; pmArrayRead_table [ 28
] . real = real_T_table + 384U ; pmArrayRead_table [ 29 ] . type = 1 ;
pmArrayRead_table [ 29 ] . n = 3U ; pmArrayRead_table [ 29 ] . real =
real_T_table + 393U ; pmArrayRead_table [ 30 ] . type = 1 ; pmArrayRead_table
[ 30 ] . n = 3U ; pmArrayRead_table [ 30 ] . real = real_T_table + 396U ;
pmArrayRead_table [ 31 ] . type = 1 ; pmArrayRead_table [ 31 ] . n = 3U ;
pmArrayRead_table [ 31 ] . real = real_T_table + 399U ; pmArrayRead_table [
32 ] . type = 1 ; pmArrayRead_table [ 32 ] . n = 1U ; pmArrayRead_table [ 32
] . real = real_T_table + 402U ; pmArrayRead_table [ 33 ] . type = 1 ;
pmArrayRead_table [ 33 ] . n = 1U ; pmArrayRead_table [ 33 ] . real =
real_T_table + 403U ; pmArrayRead_table [ 34 ] . type = 1 ; pmArrayRead_table
[ 34 ] . n = 1U ; pmArrayRead_table [ 34 ] . real = real_T_table + 404U ;
pmArrayRead_table [ 35 ] . type = 1 ; pmArrayRead_table [ 35 ] . n = 9U ;
pmArrayRead_table [ 35 ] . real = real_T_table + 405U ; pmArrayRead_table [
36 ] . type = 1 ; pmArrayRead_table [ 36 ] . n = 3U ; pmArrayRead_table [ 36
] . real = real_T_table + 414U ; pmArrayRead_table [ 37 ] . type = 1 ;
pmArrayRead_table [ 37 ] . n = 3U ; pmArrayRead_table [ 37 ] . real =
real_T_table + 417U ; pmArrayRead_table [ 38 ] . type = 1 ; pmArrayRead_table
[ 38 ] . n = 1U ; pmArrayRead_table [ 38 ] . real = real_T_table + 420U ;
pmArrayRead_table [ 39 ] . type = 1 ; pmArrayRead_table [ 39 ] . n = 1U ;
pmArrayRead_table [ 39 ] . real = real_T_table + 421U ; pmArrayRead_table [
40 ] . type = 1 ; pmArrayRead_table [ 40 ] . n = 1U ; pmArrayRead_table [ 40
] . real = real_T_table + 422U ; pmArrayRead_table [ 41 ] . type = 1 ;
pmArrayRead_table [ 41 ] . n = 3U ; pmArrayRead_table [ 41 ] . real =
real_T_table + 423U ; pmArrayRead_table [ 42 ] . type = 1 ; pmArrayRead_table
[ 42 ] . n = 3U ; pmArrayRead_table [ 42 ] . real = real_T_table + 426U ;
pmArrayRead_table [ 43 ] . type = 1 ; pmArrayRead_table [ 43 ] . n = 1U ;
pmArrayRead_table [ 43 ] . real = real_T_table + 429U ; pmArrayRead_table [
44 ] . type = 1 ; pmArrayRead_table [ 44 ] . n = 1U ; pmArrayRead_table [ 44
] . real = real_T_table + 430U ; pmArrayRead_table [ 45 ] . type = 1 ;
pmArrayRead_table [ 45 ] . n = 1U ; pmArrayRead_table [ 45 ] . real =
real_T_table + 431U ; pmArrayRead_table [ 46 ] . type = 1 ; pmArrayRead_table
[ 46 ] . n = 9U ; pmArrayRead_table [ 46 ] . real = real_T_table + 432U ;
pmArrayRead_table [ 47 ] . iszero = TRUE ; pmArrayRead_table [ 47 ] . type =
1 ; pmArrayRead_table [ 47 ] . n = 3U ; pmArrayRead_table [ 47 ] . real =
real_T_table + 441U ; pmArrayRead_table [ 48 ] . type = 1 ; pmArrayRead_table
[ 48 ] . n = 3U ; pmArrayRead_table [ 48 ] . real = real_T_table + 444U ;
pmArrayRead_table [ 49 ] . type = 1 ; pmArrayRead_table [ 49 ] . n = 3U ;
pmArrayRead_table [ 49 ] . real = real_T_table + 447U ; pmArrayRead_table [
50 ] . type = 1 ; pmArrayRead_table [ 50 ] . n = 3U ; pmArrayRead_table [ 50
] . real = real_T_table + 450U ; pmArrayRead_table [ 51 ] . iszero = TRUE ;
pmArrayRead_table [ 51 ] . type = 1 ; memset ( real_T_table , 0 , sizeof (
real_T_table ) ) ; real_T_table [ 0 ] = 57.295779513082323 ; real_T_table [ 1
] = 1.0 ; real_T_table [ 444 ] = 1.0 ; real_T_table [ 445 ] =
0.10471975511965977 ; real_T_table [ 446 ] = 1.0 ; real_T_table [ 447 ] = 1.0
; real_T_table [ 448 ] = 1.0 ; real_T_table [ 449 ] = 1.0 ; real_T_table [
451 ] = 9.81 ; memset ( AxisRead_table , 0 , sizeof ( AxisRead_table ) ) ;
AxisRead_table [ 0 ] . n = 1 ; AxisRead_table [ 0 ] . subaxis =
pmArrayRead_ptr_table + 4U ; AxisRead_table [ 1 ] . n = 1 ; AxisRead_table [
1 ] . subaxis = pmArrayRead_ptr_table + 5U ; memset ( pmArrayRead_ptr_table ,
0 , sizeof ( pmArrayRead_ptr_table ) ) ; pmArrayRead_ptr_table [ 0 ] =
pmArrayRead_table + 51U ; pmArrayRead_ptr_table [ 1 ] = pmArrayRead_table +
28U ; pmArrayRead_ptr_table [ 2 ] = pmArrayRead_table + 51U ;
pmArrayRead_ptr_table [ 3 ] = pmArrayRead_table + 35U ; pmArrayRead_ptr_table
[ 4 ] = pmArrayRead_table + 24U ; pmArrayRead_ptr_table [ 5 ] =
pmArrayRead_table + 31U ; memset ( NameArrayRead_table , 0 , sizeof (
NameArrayRead_table ) ) ; NameArrayRead_table [ 0 ] . n = 1 ;
NameArrayRead_table [ 0 ] . type = int32_T_table ; NameArrayRead_table [ 1 ]
. n = 1 ; NameArrayRead_table [ 1 ] . type = int32_T_table + 4U ;
NameArrayRead_table [ 2 ] . n = 1 ; NameArrayRead_table [ 2 ] . type =
int32_T_table + 11U ; NameArrayRead_table [ 3 ] . n = 1 ; NameArrayRead_table
[ 3 ] . type = int32_T_table + 18U ; NameArrayRead_table [ 4 ] . n = 1 ;
NameArrayRead_table [ 4 ] . type = int32_T_table + 22U ; memset (
int32_T_table , 0 , sizeof ( int32_T_table ) ) ; int32_T_table [ 0 ] = 1 ;
int32_T_table [ 1 ] = 5 ; int32_T_table [ 2 ] = 3 ; int32_T_table [ 3 ] = 6 ;
int32_T_table [ 4 ] = 2 ; int32_T_table [ 5 ] = 5 ; int32_T_table [ 6 ] = 3 ;
int32_T_table [ 7 ] = 6 ; int32_T_table [ 8 ] = 1 ; int32_T_table [ 9 ] = 8 ;
int32_T_table [ 11 ] = 2 ; int32_T_table [ 12 ] = 5 ; int32_T_table [ 13 ] =
3 ; int32_T_table [ 14 ] = 6 ; int32_T_table [ 15 ] = 1 ; int32_T_table [ 16
] = 8 ; int32_T_table [ 18 ] = 1 ; int32_T_table [ 19 ] = 5 ; int32_T_table [
20 ] = 3 ; int32_T_table [ 21 ] = 6 ; int32_T_table [ 22 ] = 1 ;
int32_T_table [ 23 ] = 5 ; int32_T_table [ 24 ] = 3 ; int32_T_table [ 25 ] =
6 ; memset ( IndexArrayRead_table , 0 , sizeof ( IndexArrayRead_table ) ) ;
IndexArrayRead_table [ 0 ] . n = 1 ; IndexArrayRead_table [ 0 ] . index =
int32_T_table + 1U ; IndexArrayRead_table [ 1 ] . n = 1 ;
IndexArrayRead_table [ 1 ] . index = int32_T_table + 2U ;
IndexArrayRead_table [ 2 ] . n = 1 ; IndexArrayRead_table [ 2 ] . index =
int32_T_table + 3U ; IndexArrayRead_table [ 3 ] . n = 1 ;
IndexArrayRead_table [ 3 ] . index = int32_T_table + 5U ;
IndexArrayRead_table [ 4 ] . n = 1 ; IndexArrayRead_table [ 4 ] . index =
int32_T_table + 6U ; IndexArrayRead_table [ 5 ] . n = 1 ;
IndexArrayRead_table [ 5 ] . index = int32_T_table + 7U ;
IndexArrayRead_table [ 6 ] . n = 1 ; IndexArrayRead_table [ 6 ] . index =
int32_T_table + 12U ; IndexArrayRead_table [ 7 ] . n = 1 ;
IndexArrayRead_table [ 7 ] . index = int32_T_table + 13U ;
IndexArrayRead_table [ 8 ] . n = 1 ; IndexArrayRead_table [ 8 ] . index =
int32_T_table + 14U ; IndexArrayRead_table [ 9 ] . n = 1 ;
IndexArrayRead_table [ 9 ] . index = int32_T_table + 19U ;
IndexArrayRead_table [ 10 ] . n = 1 ; IndexArrayRead_table [ 10 ] . index =
int32_T_table + 20U ; IndexArrayRead_table [ 11 ] . n = 1 ;
IndexArrayRead_table [ 11 ] . index = int32_T_table + 21U ;
IndexArrayRead_table [ 12 ] . n = 1 ; IndexArrayRead_table [ 12 ] . index =
int32_T_table + 23U ; IndexArrayRead_table [ 13 ] . n = 1 ;
IndexArrayRead_table [ 13 ] . index = int32_T_table + 24U ;
IndexArrayRead_table [ 14 ] . n = 1 ; IndexArrayRead_table [ 14 ] . index =
int32_T_table + 25U ; memset ( Sensor_table , 0 , sizeof ( Sensor_table ) ) ;
Sensor_table [ 0 ] . n = 1U ; Sensor_table [ 0 ] . T = pmArrayRead_ptr_table
; Sensor_table [ 0 ] . outputScaling = real_T_table ; Sensor_table [ 0 ] .
primitive = int32_T_table + 10U ; Sensor_table [ 0 ] . sensorType =
int32_T_table + 9U ; Sensor_table [ 0 ] . sensedSide = int32_T_table + 8U ;
Sensor_table [ 0 ] . transform2D = pmArrayRead_ptr_table + 1U ; Sensor_table
[ 3 ] . n = 1U ; Sensor_table [ 3 ] . T = pmArrayRead_ptr_table + 2U ;
Sensor_table [ 3 ] . outputScaling = real_T_table + 1U ; Sensor_table [ 3 ] .
primitive = int32_T_table + 17U ; Sensor_table [ 3 ] . sensorType =
int32_T_table + 16U ; Sensor_table [ 3 ] . sensedSide = int32_T_table + 15U ;
Sensor_table [ 3 ] . transform2D = pmArrayRead_ptr_table + 3U ; memset (
BodySensor_table , 0 , sizeof ( BodySensor_table ) ) ; memset (
BodyActuator_table , 0 , sizeof ( BodyActuator_table ) ) ; memset (
GeneralJointEngine_table , 0 , sizeof ( GeneralJointEngine_table ) ) ;
GeneralJointEngine_table [ 0 ] . scale = 1.0 ; GeneralJointEngine_table [ 0 ]
. axis = AxisRead_table ; GeneralJointEngine_table [ 0 ] . lockTolerance =
pmArrayRead_table + 25U ; GeneralJointEngine_table [ 0 ] . primitives =
NameArrayRead_table + 1U ; GeneralJointEngine_table [ 0 ] . eventList =
IndexArrayRead_table + 3U ; GeneralJointEngine_table [ 0 ] . poweredList =
IndexArrayRead_table + 4U ; GeneralJointEngine_table [ 0 ] . icpoweredList =
IndexArrayRead_table + 5U ; GeneralJointEngine_table [ 0 ] . icposition =
pmArrayRead_table + 26U ; GeneralJointEngine_table [ 0 ] . icvelocity =
pmArrayRead_table + 27U ; GeneralJointEngine_table [ 0 ] . inputScaling1 =
pmArrayRead_table + 48U ; GeneralJointEngine_table [ 0 ] . sensor =
Sensor_table ; GeneralJointEngine_table [ 1 ] . scale = 1.0 ;
GeneralJointEngine_table [ 1 ] . lockTolerance = pmArrayRead_table + 43U ;
GeneralJointEngine_table [ 1 ] . primitives = NameArrayRead_table + 4U ;
GeneralJointEngine_table [ 1 ] . eventList = IndexArrayRead_table + 12U ;
GeneralJointEngine_table [ 1 ] . poweredList = IndexArrayRead_table + 13U ;
GeneralJointEngine_table [ 1 ] . icpoweredList = IndexArrayRead_table + 14U ;
GeneralJointEngine_table [ 1 ] . icposition = pmArrayRead_table + 44U ;
GeneralJointEngine_table [ 1 ] . icvelocity = pmArrayRead_table + 45U ;
GeneralJointEngine_table [ 1 ] . sensor = Sensor_table + 2U ;
GeneralJointEngine_table [ 2 ] . scale = 1.0 ; GeneralJointEngine_table [ 2 ]
. axis = AxisRead_table + 1U ; GeneralJointEngine_table [ 2 ] . lockTolerance
= pmArrayRead_table + 32U ; GeneralJointEngine_table [ 2 ] . primitives =
NameArrayRead_table + 2U ; GeneralJointEngine_table [ 2 ] . eventList =
IndexArrayRead_table + 6U ; GeneralJointEngine_table [ 2 ] . poweredList =
IndexArrayRead_table + 7U ; GeneralJointEngine_table [ 2 ] . icpoweredList =
IndexArrayRead_table + 8U ; GeneralJointEngine_table [ 2 ] . icposition =
pmArrayRead_table + 33U ; GeneralJointEngine_table [ 2 ] . icvelocity =
pmArrayRead_table + 34U ; GeneralJointEngine_table [ 2 ] . inputScaling1 =
pmArrayRead_table + 49U ; GeneralJointEngine_table [ 2 ] . sensor =
Sensor_table + 3U ; GeneralJointEngine_table [ 3 ] . scale = 1.0 ;
GeneralJointEngine_table [ 3 ] . lockTolerance = pmArrayRead_table + 38U ;
GeneralJointEngine_table [ 3 ] . primitives = NameArrayRead_table + 3U ;
GeneralJointEngine_table [ 3 ] . eventList = IndexArrayRead_table + 9U ;
GeneralJointEngine_table [ 3 ] . poweredList = IndexArrayRead_table + 10U ;
GeneralJointEngine_table [ 3 ] . icpoweredList = IndexArrayRead_table + 11U ;
GeneralJointEngine_table [ 3 ] . icposition = pmArrayRead_table + 39U ;
GeneralJointEngine_table [ 3 ] . icvelocity = pmArrayRead_table + 40U ;
GeneralJointEngine_table [ 3 ] . sensor = Sensor_table + 1U ;
GeneralJointEngine_table [ 4 ] . lockTolerance = pmArrayRead_table + 19U ;
GeneralJointEngine_table [ 4 ] . primitives = NameArrayRead_table ;
GeneralJointEngine_table [ 4 ] . eventList = IndexArrayRead_table ;
GeneralJointEngine_table [ 4 ] . poweredList = IndexArrayRead_table + 1U ;
GeneralJointEngine_table [ 4 ] . icpoweredList = IndexArrayRead_table + 2U ;
GeneralJointEngine_table [ 4 ] . icposition = pmArrayRead_table + 20U ;
GeneralJointEngine_table [ 4 ] . icvelocity = pmArrayRead_table + 21U ;
memset ( Joint_table , 0 , sizeof ( Joint_table ) ) ; Joint_table [ 0 ] .
blockName = "PermeatingWeld" ; Joint_table [ 0 ] . pos_0 = pmArrayRead_table
+ 47U ; Joint_table [ 0 ] . rel_0 = pmArrayRead_table + 47U ; Joint_table [ 0
] . type = 2 ; Joint_table [ 0 ] . compile = GeneralJointEngine_table + 4U ;
Joint_table [ 0 ] . pred = Joint_table ; Joint_table [ 1 ] . blockName =
"buenoensam/Revolute" ; Joint_table [ 1 ] . pos_0 = pmArrayRead_table + 29U ;
Joint_table [ 1 ] . rel_0 = pmArrayRead_table + 30U ; Joint_table [ 1 ] .
type = 2 ; Joint_table [ 1 ] . compile = GeneralJointEngine_table + 2U ;
Joint_table [ 1 ] . pred = Joint_table + 4U ; Joint_table [ 2 ] . blockName =
"buenoensam/Revolute1" ; Joint_table [ 2 ] . pos_0 = pmArrayRead_table + 22U
; Joint_table [ 2 ] . rel_0 = pmArrayRead_table + 23U ; Joint_table [ 2 ] .
type = 2 ; Joint_table [ 2 ] . compile = GeneralJointEngine_table ;
Joint_table [ 2 ] . pred = Joint_table + 1U ; Joint_table [ 3 ] . blockName =
"buenoensam/Weld1" ; Joint_table [ 3 ] . pos_0 = pmArrayRead_table + 36U ;
Joint_table [ 3 ] . rel_0 = pmArrayRead_table + 37U ; Joint_table [ 3 ] .
type = 2 ; Joint_table [ 3 ] . compile = GeneralJointEngine_table + 3U ;
Joint_table [ 3 ] . pred = Joint_table ; Joint_table [ 4 ] . blockName =
"buenoensam/Weld" ; Joint_table [ 4 ] . pos_0 = pmArrayRead_table + 41U ;
Joint_table [ 4 ] . rel_0 = pmArrayRead_table + 42U ; Joint_table [ 4 ] .
type = 2 ; Joint_table [ 4 ] . compile = GeneralJointEngine_table + 1U ;
Joint_table [ 4 ] . pred = Joint_table + 3U ; memset ( BodyEngine_table , 0 ,
sizeof ( BodyEngine_table ) ) ; BodyEngine_table [ 0 ] . J_0 =
pmArrayRead_table + 8U ; BodyEngine_table [ 0 ] . pos_0 = pmArrayRead_table +
9U ; BodyEngine_table [ 0 ] . mass = pmArrayRead_table + 7U ;
BodyEngine_table [ 0 ] . sensor = BodySensor_table + 1U ; BodyEngine_table [
0 ] . input = BodyActuator_table ; BodyEngine_table [ 0 ] . massinertia =
BodyActuator_table + 1U ; BodyEngine_table [ 0 ] . transform2D =
pmArrayRead_table + 10U ; BodyEngine_table [ 1 ] . J_0 = pmArrayRead_table +
12U ; BodyEngine_table [ 1 ] . pos_0 = pmArrayRead_table + 13U ;
BodyEngine_table [ 1 ] . mass = pmArrayRead_table + 11U ; BodyEngine_table [
1 ] . sensor = BodySensor_table + 2U ; BodyEngine_table [ 1 ] . input =
BodyActuator_table + 2U ; BodyEngine_table [ 1 ] . massinertia =
BodyActuator_table + 3U ; BodyEngine_table [ 1 ] . transform2D =
pmArrayRead_table + 14U ; BodyEngine_table [ 2 ] . J_0 = pmArrayRead_table +
16U ; BodyEngine_table [ 2 ] . pos_0 = pmArrayRead_table + 17U ;
BodyEngine_table [ 2 ] . mass = pmArrayRead_table + 15U ; BodyEngine_table [
2 ] . sensor = BodySensor_table + 3U ; BodyEngine_table [ 2 ] . input =
BodyActuator_table + 4U ; BodyEngine_table [ 2 ] . massinertia =
BodyActuator_table + 5U ; BodyEngine_table [ 2 ] . transform2D =
pmArrayRead_table + 18U ; BodyEngine_table [ 3 ] . J_0 = pmArrayRead_table +
2U ; BodyEngine_table [ 3 ] . pos_0 = pmArrayRead_table ; BodyEngine_table [
3 ] . mass = pmArrayRead_table + 1U ; BodyEngine_table [ 3 ] . sensor =
BodySensor_table + 4U ; BodyEngine_table [ 3 ] . input = BodyActuator_table +
7U ; BodyEngine_table [ 3 ] . massinertia = BodyActuator_table + 6U ;
BodyEngine_table [ 4 ] . J_0 = pmArrayRead_table + 4U ; BodyEngine_table [ 4
] . pos_0 = pmArrayRead_table + 5U ; BodyEngine_table [ 4 ] . mass =
pmArrayRead_table + 3U ; BodyEngine_table [ 4 ] . sensor = BodySensor_table ;
BodyEngine_table [ 4 ] . input = BodyActuator_table + 9U ; BodyEngine_table [
4 ] . massinertia = BodyActuator_table + 8U ; BodyEngine_table [ 4 ] .
transform2D = pmArrayRead_table + 6U ; memset ( Body_table , 0 , sizeof (
Body_table ) ) ; Body_table [ 0 ] . blockName = "buenoensam/Pieza3-1" ;
Body_table [ 0 ] . compile = BodyEngine_table + 4U ; Body_table [ 0 ] . pred
= Body_table + 1U ; Body_table [ 1 ] . blockName = "buenoensam/Pieza2-1" ;
Body_table [ 1 ] . compile = BodyEngine_table ; Body_table [ 1 ] . pred =
Body_table + 3U ; Body_table [ 2 ] . blockName = "buenoensam/RootPart" ;
Body_table [ 2 ] . compile = BodyEngine_table + 1U ; Body_table [ 2 ] . pred
= Body_table + 4U ; Body_table [ 3 ] . blockName =
"buenoensam/base.bSLDPRT-1" ; Body_table [ 3 ] . compile = BodyEngine_table +
2U ; Body_table [ 3 ] . pred = Body_table + 2U ; Body_table [ 4 ] . blockName
= "PermeatingBody" ; Body_table [ 4 ] . compile = BodyEngine_table + 3U ;
Body_table [ 4 ] . pred = Body_table + 4U ; memset ( Joint_ptr_table , 0 ,
sizeof ( Joint_ptr_table ) ) ; Joint_ptr_table [ 0 ] = Joint_table ;
Joint_ptr_table [ 1 ] = Joint_table + 2U ; Joint_ptr_table [ 2 ] =
Joint_table + 1U ; Joint_ptr_table [ 3 ] = Joint_table + 4U ; Joint_ptr_table
[ 4 ] = Joint_table + 3U ; memset ( Branch_table , 0 , sizeof ( Branch_table
) ) ; Branch_table [ 0 ] . njoints = 4 ; Branch_table [ 0 ] . body =
Body_ptr_table + 1U ; Branch_table [ 0 ] . joint = Joint_ptr_table + 1U ;
Branch_table [ 0 ] . pred = Branch_table + 1U ; Branch_table [ 1 ] . njoints
= 1 ; Branch_table [ 1 ] . body = Body_ptr_table ; Branch_table [ 1 ] . joint
= Joint_ptr_table ; Branch_table [ 1 ] . pred = Branch_table + 1U ; memset (
Body_ptr_table , 0 , sizeof ( Body_ptr_table ) ) ; Body_ptr_table [ 0 ] =
Body_table + 4U ; Body_ptr_table [ 1 ] = Body_table ; Body_ptr_table [ 2 ] =
Body_table + 1U ; Body_ptr_table [ 3 ] = Body_table + 3U ; Body_ptr_table [ 4
] = Body_table + 2U ; memset ( Connect_table , 0 , sizeof ( Connect_table ) )
; Connect_table [ 0 ] . n = 1 ; Connect_table [ 0 ] . branch =
Branch_ptr_table + 2U ; memset ( Branch_ptr_table , 0 , sizeof (
Branch_ptr_table ) ) ; Branch_ptr_table [ 0 ] = Branch_table ;
Branch_ptr_table [ 1 ] = Branch_table + 1U ; Branch_ptr_table [ 2 ] =
Branch_table ; Branch_ptr_table [ 3 ] = Branch_table ; Branch_ptr_table [ 4 ]
= Branch_table + 1U ; memset ( Recursion_table , 0 , sizeof ( Recursion_table
) ) ; Recursion_table [ 0 ] . nLeafBranches = 1 ; Recursion_table [ 0 ] .
nTrunkBranches = 1 ; Recursion_table [ 0 ] . leaf = Branch_ptr_table ;
Recursion_table [ 0 ] . trunk = Branch_ptr_table + 1U ; Recursion_table [ 0 ]
. trunkConnectors = Connect_ptr_table ; memset ( Connect_ptr_table , 0 ,
sizeof ( Connect_ptr_table ) ) ; Connect_ptr_table [ 0 ] = Connect_table ;
memset ( MachineData_table , 0 , sizeof ( MachineData_table ) ) ;
MachineData_table [ 0 ] . numBlock1Inputs = 6 ; MachineData_table [ 0 ] .
numBlock1Outputs = 2 ; MachineData_table [ 0 ] . rTol = 0.0001 ;
MachineData_table [ 0 ] . aTol = 0.0001 ; MachineData_table [ 0 ] . sqrtEps =
1.4901161193847656E-8 ; MachineData_table [ 0 ] . linearAssemblyTolerance =
0.001 ; MachineData_table [ 0 ] . angularAssemblyTolerance = 0.001 ;
MachineData_table [ 0 ] . redundancyAnalysisToleranceType = 1 ;
MachineData_table [ 0 ] . redundancyAnalysisTolerance = 1.0E-14 ;
MachineData_table [ 0 ] . system = "buenoensam/RootGround" ;
MachineData_table [ 0 ] . gravity = pmArrayRead_table + 50U ;
MachineData_table [ 0 ] . recurse = Recursion_table ; MachineData_table [ 0 ]
. mode = 2 ; MachineData_table [ 0 ] . solve = 1 ; MachineData_table [ 0 ] .
linFixedPerturbation = TRUE ; MachineData_table [ 0 ] . linPerturbationSize =
1.0E-5 ; memset ( WarningFlags_table , 0 , sizeof ( WarningFlags_table ) ) ;
WarningFlags_table [ 0 ] . warnOnRedundantConstraints = TRUE ; memset (
Mechanism_table , 0 , sizeof ( Mechanism_table ) ) ; Mechanism_table [ 0 ] .
nbranches = 2 ; Mechanism_table [ 0 ] . generatingCode = TRUE ;
Mechanism_table [ 0 ] . time = 40.0 ; Mechanism_table [ 0 ] . isMajorTimeStep
= TRUE ; Mechanism_table [ 0 ] . branch = Branch_ptr_table + 3U ;
Mechanism_table [ 0 ] . data = MachineData_table ; Mechanism_table [ 0 ] .
nruntimeData = 439U ; Mechanism_table [ 0 ] . runtimeData = real_T_table + 2U
; Mechanism_table [ 0 ] . allowedSimulationDimensions = 4 ; Mechanism_table [
0 ] . transform2D = pmArrayRead_table + 46U ; Mechanism_table [ 0 ] .
warningFlags = WarningFlags_table ; _mechanism = Mechanism_table ; _mechanism
-> mapRuntimeData = rt_map_mechanism_params_buenoensam_f04650f8 ; } return
_mechanism ; }
