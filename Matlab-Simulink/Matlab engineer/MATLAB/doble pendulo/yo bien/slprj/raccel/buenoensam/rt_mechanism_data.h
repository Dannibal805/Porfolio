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
#ifndef rt_mechanism_data_h
#define rt_mechanism_data_h
typedef struct { struct { real_T CGPos [ 3 ] ; real_T CGRot [ 9 ] ; real_T
CS1Pos [ 3 ] ; real_T CS1Rot [ 9 ] ; real_T CS2Pos [ 3 ] ; real_T CS2Rot [ 9
] ; real_T CS3Pos [ 3 ] ; real_T CS3Rot [ 9 ] ; real_T Inertia [ 9 ] ; real_T
Mass ; } Pieza2_1 ; struct { real_T CGPos [ 3 ] ; real_T CGRot [ 9 ] ; real_T
CS1Pos [ 3 ] ; real_T CS1Rot [ 9 ] ; real_T CS2Pos [ 3 ] ; real_T CS2Rot [ 9
] ; real_T Inertia [ 9 ] ; real_T Mass ; } Pieza3_1 ; struct { real_T R1Axis
[ 3 ] ; } Revolute ; struct { real_T R1Axis [ 3 ] ; } Revolute1 ; struct {
real_T CoordPosition [ 3 ] ; } RootGround ; struct { real_T CGPos [ 3 ] ;
real_T CGRot [ 9 ] ; real_T CS1Pos [ 3 ] ; real_T CS1Rot [ 9 ] ; real_T
CS2Pos [ 3 ] ; real_T CS2Rot [ 9 ] ; real_T CS3Pos [ 3 ] ; real_T CS3Rot [ 9
] ; real_T Inertia [ 9 ] ; real_T Mass ; } RootPart ; struct { real_T WAxis [
3 ] ; } Weld ; struct { real_T WAxis [ 3 ] ; } Weld1 ; struct { real_T CGPos
[ 3 ] ; real_T CGRot [ 9 ] ; real_T CS1Pos [ 3 ] ; real_T CS1Rot [ 9 ] ;
real_T CS2Pos [ 3 ] ; real_T CS2Rot [ 9 ] ; real_T CS3Pos [ 3 ] ; real_T
CS3Rot [ 9 ] ; real_T Inertia [ 9 ] ; real_T Mass ; } base_bSLDPRT_1 ; }
MachineParameters_buenoensam_f04650f8 ; extern void
rt_vector_to_machine_parameters_buenoensam_f04650f8 ( const real_T * ,
MachineParameters_buenoensam_f04650f8 * ) ; extern void
rt_machine_parameters_to_vector_buenoensam_f04650f8 ( const
MachineParameters_buenoensam_f04650f8 * , real_T * ) ;
#endif
