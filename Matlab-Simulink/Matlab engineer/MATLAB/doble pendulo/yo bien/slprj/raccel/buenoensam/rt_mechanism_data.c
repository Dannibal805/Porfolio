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
#include "rt_mechanism_data.h"
void rt_vector_to_machine_parameters_buenoensam_f04650f8 ( const real_T *
_mech_rtP , MachineParameters_buenoensam_f04650f8 * _mech_rtS ) { memcpy (
_mech_rtS -> Pieza2_1 . CGPos , _mech_rtP + 128 , sizeof ( real_T ) * 3 ) ;
memcpy ( _mech_rtS -> Pieza2_1 . CGRot , _mech_rtP + 131 , sizeof ( real_T )
* 9 ) ; memcpy ( _mech_rtS -> Pieza2_1 . CS1Pos , _mech_rtP + 150 , sizeof (
real_T ) * 3 ) ; memcpy ( _mech_rtS -> Pieza2_1 . CS1Rot , _mech_rtP + 153 ,
sizeof ( real_T ) * 9 ) ; memcpy ( _mech_rtS -> Pieza2_1 . CS2Pos , _mech_rtP
+ 162 , sizeof ( real_T ) * 3 ) ; memcpy ( _mech_rtS -> Pieza2_1 . CS2Rot ,
_mech_rtP + 165 , sizeof ( real_T ) * 9 ) ; memcpy ( _mech_rtS -> Pieza2_1 .
CS3Pos , _mech_rtP + 174 , sizeof ( real_T ) * 3 ) ; memcpy ( _mech_rtS ->
Pieza2_1 . CS3Rot , _mech_rtP + 177 , sizeof ( real_T ) * 9 ) ; memcpy (
_mech_rtS -> Pieza2_1 . Inertia , _mech_rtP + 140 , sizeof ( real_T ) * 9 ) ;
_mech_rtS -> Pieza2_1 . Mass = _mech_rtP [ 149 ] ; memcpy ( _mech_rtS ->
Pieza3_1 . CGPos , _mech_rtP + 189 , sizeof ( real_T ) * 3 ) ; memcpy (
_mech_rtS -> Pieza3_1 . CGRot , _mech_rtP + 192 , sizeof ( real_T ) * 9 ) ;
memcpy ( _mech_rtS -> Pieza3_1 . CS1Pos , _mech_rtP + 211 , sizeof ( real_T )
* 3 ) ; memcpy ( _mech_rtS -> Pieza3_1 . CS1Rot , _mech_rtP + 214 , sizeof (
real_T ) * 9 ) ; memcpy ( _mech_rtS -> Pieza3_1 . CS2Pos , _mech_rtP + 223 ,
sizeof ( real_T ) * 3 ) ; memcpy ( _mech_rtS -> Pieza3_1 . CS2Rot , _mech_rtP
+ 226 , sizeof ( real_T ) * 9 ) ; memcpy ( _mech_rtS -> Pieza3_1 . Inertia ,
_mech_rtP + 201 , sizeof ( real_T ) * 9 ) ; _mech_rtS -> Pieza3_1 . Mass =
_mech_rtP [ 210 ] ; memcpy ( _mech_rtS -> Revolute . R1Axis , _mech_rtP + 125
, sizeof ( real_T ) * 3 ) ; memcpy ( _mech_rtS -> Revolute1 . R1Axis ,
_mech_rtP + 186 , sizeof ( real_T ) * 3 ) ; memcpy ( _mech_rtS -> RootGround
. CoordPosition , _mech_rtP + 122 , sizeof ( real_T ) * 3 ) ; memcpy (
_mech_rtS -> RootPart . CGPos , _mech_rtP + 61 , sizeof ( real_T ) * 3 ) ;
memcpy ( _mech_rtS -> RootPart . CGRot , _mech_rtP + 64 , sizeof ( real_T ) *
9 ) ; memcpy ( _mech_rtS -> RootPart . CS1Pos , _mech_rtP + 83 , sizeof (
real_T ) * 3 ) ; memcpy ( _mech_rtS -> RootPart . CS1Rot , _mech_rtP + 86 ,
sizeof ( real_T ) * 9 ) ; memcpy ( _mech_rtS -> RootPart . CS2Pos , _mech_rtP
+ 95 , sizeof ( real_T ) * 3 ) ; memcpy ( _mech_rtS -> RootPart . CS2Rot ,
_mech_rtP + 98 , sizeof ( real_T ) * 9 ) ; memcpy ( _mech_rtS -> RootPart .
CS3Pos , _mech_rtP + 107 , sizeof ( real_T ) * 3 ) ; memcpy ( _mech_rtS ->
RootPart . CS3Rot , _mech_rtP + 110 , sizeof ( real_T ) * 9 ) ; memcpy (
_mech_rtS -> RootPart . Inertia , _mech_rtP + 73 , sizeof ( real_T ) * 9 ) ;
_mech_rtS -> RootPart . Mass = _mech_rtP [ 82 ] ; memcpy ( _mech_rtS -> Weld
. WAxis , _mech_rtP + 58 , sizeof ( real_T ) * 3 ) ; memcpy ( _mech_rtS ->
Weld1 . WAxis , _mech_rtP + 119 , sizeof ( real_T ) * 3 ) ; memcpy (
_mech_rtS -> base_bSLDPRT_1 . CGPos , _mech_rtP + 0 , sizeof ( real_T ) * 3 )
; memcpy ( _mech_rtS -> base_bSLDPRT_1 . CGRot , _mech_rtP + 3 , sizeof (
real_T ) * 9 ) ; memcpy ( _mech_rtS -> base_bSLDPRT_1 . CS1Pos , _mech_rtP +
22 , sizeof ( real_T ) * 3 ) ; memcpy ( _mech_rtS -> base_bSLDPRT_1 . CS1Rot
, _mech_rtP + 25 , sizeof ( real_T ) * 9 ) ; memcpy ( _mech_rtS ->
base_bSLDPRT_1 . CS2Pos , _mech_rtP + 34 , sizeof ( real_T ) * 3 ) ; memcpy (
_mech_rtS -> base_bSLDPRT_1 . CS2Rot , _mech_rtP + 37 , sizeof ( real_T ) * 9
) ; memcpy ( _mech_rtS -> base_bSLDPRT_1 . CS3Pos , _mech_rtP + 46 , sizeof (
real_T ) * 3 ) ; memcpy ( _mech_rtS -> base_bSLDPRT_1 . CS3Rot , _mech_rtP +
49 , sizeof ( real_T ) * 9 ) ; memcpy ( _mech_rtS -> base_bSLDPRT_1 . Inertia
, _mech_rtP + 12 , sizeof ( real_T ) * 9 ) ; _mech_rtS -> base_bSLDPRT_1 .
Mass = _mech_rtP [ 21 ] ; } void
rt_machine_parameters_to_vector_buenoensam_f04650f8 ( const
MachineParameters_buenoensam_f04650f8 * _mech_rtS , real_T * _mech_rtP ) {
memcpy ( _mech_rtP + 128 , _mech_rtS -> Pieza2_1 . CGPos , sizeof ( real_T )
* 3 ) ; memcpy ( _mech_rtP + 131 , _mech_rtS -> Pieza2_1 . CGRot , sizeof (
real_T ) * 9 ) ; memcpy ( _mech_rtP + 150 , _mech_rtS -> Pieza2_1 . CS1Pos ,
sizeof ( real_T ) * 3 ) ; memcpy ( _mech_rtP + 153 , _mech_rtS -> Pieza2_1 .
CS1Rot , sizeof ( real_T ) * 9 ) ; memcpy ( _mech_rtP + 162 , _mech_rtS ->
Pieza2_1 . CS2Pos , sizeof ( real_T ) * 3 ) ; memcpy ( _mech_rtP + 165 ,
_mech_rtS -> Pieza2_1 . CS2Rot , sizeof ( real_T ) * 9 ) ; memcpy ( _mech_rtP
+ 174 , _mech_rtS -> Pieza2_1 . CS3Pos , sizeof ( real_T ) * 3 ) ; memcpy (
_mech_rtP + 177 , _mech_rtS -> Pieza2_1 . CS3Rot , sizeof ( real_T ) * 9 ) ;
memcpy ( _mech_rtP + 140 , _mech_rtS -> Pieza2_1 . Inertia , sizeof ( real_T
) * 9 ) ; _mech_rtP [ 149 ] = _mech_rtS -> Pieza2_1 . Mass ; memcpy (
_mech_rtP + 189 , _mech_rtS -> Pieza3_1 . CGPos , sizeof ( real_T ) * 3 ) ;
memcpy ( _mech_rtP + 192 , _mech_rtS -> Pieza3_1 . CGRot , sizeof ( real_T )
* 9 ) ; memcpy ( _mech_rtP + 211 , _mech_rtS -> Pieza3_1 . CS1Pos , sizeof (
real_T ) * 3 ) ; memcpy ( _mech_rtP + 214 , _mech_rtS -> Pieza3_1 . CS1Rot ,
sizeof ( real_T ) * 9 ) ; memcpy ( _mech_rtP + 223 , _mech_rtS -> Pieza3_1 .
CS2Pos , sizeof ( real_T ) * 3 ) ; memcpy ( _mech_rtP + 226 , _mech_rtS ->
Pieza3_1 . CS2Rot , sizeof ( real_T ) * 9 ) ; memcpy ( _mech_rtP + 201 ,
_mech_rtS -> Pieza3_1 . Inertia , sizeof ( real_T ) * 9 ) ; _mech_rtP [ 210 ]
= _mech_rtS -> Pieza3_1 . Mass ; memcpy ( _mech_rtP + 125 , _mech_rtS ->
Revolute . R1Axis , sizeof ( real_T ) * 3 ) ; memcpy ( _mech_rtP + 186 ,
_mech_rtS -> Revolute1 . R1Axis , sizeof ( real_T ) * 3 ) ; memcpy (
_mech_rtP + 122 , _mech_rtS -> RootGround . CoordPosition , sizeof ( real_T )
* 3 ) ; memcpy ( _mech_rtP + 61 , _mech_rtS -> RootPart . CGPos , sizeof (
real_T ) * 3 ) ; memcpy ( _mech_rtP + 64 , _mech_rtS -> RootPart . CGRot ,
sizeof ( real_T ) * 9 ) ; memcpy ( _mech_rtP + 83 , _mech_rtS -> RootPart .
CS1Pos , sizeof ( real_T ) * 3 ) ; memcpy ( _mech_rtP + 86 , _mech_rtS ->
RootPart . CS1Rot , sizeof ( real_T ) * 9 ) ; memcpy ( _mech_rtP + 95 ,
_mech_rtS -> RootPart . CS2Pos , sizeof ( real_T ) * 3 ) ; memcpy ( _mech_rtP
+ 98 , _mech_rtS -> RootPart . CS2Rot , sizeof ( real_T ) * 9 ) ; memcpy (
_mech_rtP + 107 , _mech_rtS -> RootPart . CS3Pos , sizeof ( real_T ) * 3 ) ;
memcpy ( _mech_rtP + 110 , _mech_rtS -> RootPart . CS3Rot , sizeof ( real_T )
* 9 ) ; memcpy ( _mech_rtP + 73 , _mech_rtS -> RootPart . Inertia , sizeof (
real_T ) * 9 ) ; _mech_rtP [ 82 ] = _mech_rtS -> RootPart . Mass ; memcpy (
_mech_rtP + 58 , _mech_rtS -> Weld . WAxis , sizeof ( real_T ) * 3 ) ; memcpy
( _mech_rtP + 119 , _mech_rtS -> Weld1 . WAxis , sizeof ( real_T ) * 3 ) ;
memcpy ( _mech_rtP + 0 , _mech_rtS -> base_bSLDPRT_1 . CGPos , sizeof (
real_T ) * 3 ) ; memcpy ( _mech_rtP + 3 , _mech_rtS -> base_bSLDPRT_1 . CGRot
, sizeof ( real_T ) * 9 ) ; memcpy ( _mech_rtP + 22 , _mech_rtS ->
base_bSLDPRT_1 . CS1Pos , sizeof ( real_T ) * 3 ) ; memcpy ( _mech_rtP + 25 ,
_mech_rtS -> base_bSLDPRT_1 . CS1Rot , sizeof ( real_T ) * 9 ) ; memcpy (
_mech_rtP + 34 , _mech_rtS -> base_bSLDPRT_1 . CS2Pos , sizeof ( real_T ) * 3
) ; memcpy ( _mech_rtP + 37 , _mech_rtS -> base_bSLDPRT_1 . CS2Rot , sizeof (
real_T ) * 9 ) ; memcpy ( _mech_rtP + 46 , _mech_rtS -> base_bSLDPRT_1 .
CS3Pos , sizeof ( real_T ) * 3 ) ; memcpy ( _mech_rtP + 49 , _mech_rtS ->
base_bSLDPRT_1 . CS3Rot , sizeof ( real_T ) * 9 ) ; memcpy ( _mech_rtP + 12 ,
_mech_rtS -> base_bSLDPRT_1 . Inertia , sizeof ( real_T ) * 9 ) ; _mech_rtP [
21 ] = _mech_rtS -> base_bSLDPRT_1 . Mass ; }
