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
boolean_T rt_map_mechanism_params_buenoensam_f04650f8 ( Mechanism * mechanism
, const real_T * input , char_T * msg , uint32_T msg_size ) { static real_T
work [ 995 ] ; real_T * output = 0 ; boolean_T error = 0 ; output = mechanism
-> runtimeData ; memset ( work , 0 , sizeof ( work ) ) ; work [ 0 ] = 1.0 ;
work [ 7 ] = 1.0 ; work [ 8 ] = 1.0 ; work [ 12 ] = 1.0 ; work [ 16 ] = 1.0 ;
work [ 839 ] = 1.0 ; work [ 843 ] = 1.0 ; work [ 847 ] = 1.0 ; work [ 870 ] =
1.0 ; work [ 874 ] = 1.0 ; work [ 878 ] = 1.0 ; work [ 901 ] = 1.0 ; work [
905 ] = 1.0 ; work [ 909 ] = 1.0 ; work [ 932 ] = 1.0 ; work [ 936 ] = 1.0 ;
work [ 940 ] = 1.0 ; work [ 950 ] = 1.0 ; work [ 954 ] = 1.0 ; work [ 958 ] =
1.0 ; work [ 965 ] = 1.0 ; work [ 969 ] = 1.0 ; work [ 973 ] = 1.0 ; work [
986 ] = 1.0 ; work [ 990 ] = 1.0 ; work [ 994 ] = 1.0 ; pmVectorFunction ( (
work + 17 ) , ( input + 189 ) , ( work + 1 ) , 0.0 , 1.0 , 0.0 , 3 , 1 , 1 ,
0 ) ; memcpy ( ( work + 20 ) , ( input + 192 ) , ( 9 * sizeof ( double ) ) )
; work [ 29 ] = pmDet3by3 ( ( work + 20 ) ) ; pmVectorFunction ( ( work + 30
) , work , ( work + 29 ) , 0.0 , 1.0 , - 1.0 , 1 , 1 , 1 , 1 ) ; work [ 30 ]
= fabs ( work [ 30 ] ) ; if ( work [ 30 ] >= 0.05000000000000000300 ) {
strncpy ( msg ,
 "buenoensam/Pieza3-1: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmMult ( ( work + 31 ) , (
work + 20 ) , ( work + 20 ) , 3 , 3 , 3 , 3 , 1 , 1 , 3 ) ; pmVectorFunction
( ( work + 40 ) , ( work + 8 ) , ( work + 31 ) , 0.0 , 1.0 , - 1.0 , 9 , 1 ,
1 , 1 ) ; pmMult ( ( work + 49 ) , ( work + 40 ) , ( work + 40 ) , 9 , 1 , 9
, 1 , 1 , 1 , 3 ) ; work [ 49 ] = sqrt ( work [ 49 ] ) ; work [ 49 ] = fabs (
work [ 49 ] ) ; if ( work [ 49 ] >= 0.05000000000000000300 ) { strncpy ( msg
,
 "buenoensam/Pieza3-1: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmConvertToRotationMatrix ( 13
, ( work + 20 ) , ( work + 50 ) ) ; pmVectorFunction ( ( work + 59 ) , (
input + 211 ) , ( work + 1 ) , 0.0 , 1.0 , 0.0 , 3 , 1 , 1 , 0 ) ; memcpy ( (
work + 62 ) , ( input + 214 ) , ( 9 * sizeof ( double ) ) ) ; work [ 71 ] =
pmDet3by3 ( ( work + 62 ) ) ; pmVectorFunction ( ( work + 72 ) , work , (
work + 71 ) , 0.0 , 1.0 , - 1.0 , 1 , 1 , 1 , 1 ) ; work [ 72 ] = fabs ( work
[ 72 ] ) ; if ( work [ 72 ] >= 0.05000000000000000300 ) { strncpy ( msg ,
 "buenoensam/Pieza3-1: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmMult ( ( work + 73 ) , (
work + 62 ) , ( work + 62 ) , 3 , 3 , 3 , 3 , 1 , 1 , 3 ) ; pmVectorFunction
( ( work + 82 ) , ( work + 8 ) , ( work + 73 ) , 0.0 , 1.0 , - 1.0 , 9 , 1 ,
1 , 1 ) ; pmMult ( ( work + 91 ) , ( work + 82 ) , ( work + 82 ) , 9 , 1 , 9
, 1 , 1 , 1 , 3 ) ; work [ 91 ] = sqrt ( work [ 91 ] ) ; work [ 91 ] = fabs (
work [ 91 ] ) ; if ( work [ 91 ] >= 0.05000000000000000300 ) { strncpy ( msg
,
 "buenoensam/Pieza3-1: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmConvertToRotationMatrix ( 13
, ( work + 62 ) , ( work + 92 ) ) ; pmVectorFunction ( ( work + 101 ) , (
input + 223 ) , ( work + 1 ) , 0.0 , 1.0 , 0.0 , 3 , 1 , 1 , 0 ) ; memcpy ( (
work + 104 ) , ( input + 226 ) , ( 9 * sizeof ( double ) ) ) ; work [ 113 ] =
pmDet3by3 ( ( work + 104 ) ) ; pmVectorFunction ( ( work + 114 ) , work , (
work + 113 ) , 0.0 , 1.0 , - 1.0 , 1 , 1 , 1 , 1 ) ; work [ 114 ] = fabs (
work [ 114 ] ) ; if ( work [ 114 ] >= 0.05000000000000000300 ) { strncpy (
msg ,
 "buenoensam/Pieza3-1: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmMult ( ( work + 115 ) , (
work + 104 ) , ( work + 104 ) , 3 , 3 , 3 , 3 , 1 , 1 , 3 ) ;
pmVectorFunction ( ( work + 124 ) , ( work + 8 ) , ( work + 115 ) , 0.0 , 1.0
, - 1.0 , 9 , 1 , 1 , 1 ) ; pmMult ( ( work + 133 ) , ( work + 124 ) , ( work
+ 124 ) , 9 , 1 , 9 , 1 , 1 , 1 , 3 ) ; work [ 133 ] = sqrt ( work [ 133 ] )
; work [ 133 ] = fabs ( work [ 133 ] ) ; if ( work [ 133 ] >=
0.05000000000000000300 ) { strncpy ( msg ,
 "buenoensam/Pieza3-1: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmConvertToRotationMatrix ( 13
, ( work + 104 ) , ( work + 134 ) ) ; pmVectorFunction ( ( work + 143 ) , (
input + 210 ) , ( work + 1 ) , 0.0 , 1.0 , 0.0 , 1 , 1 , 1 , 0 ) ;
pmVectorFunction ( ( work + 144 ) , ( input + 201 ) , ( work + 1 ) , 0.0 ,
1.0 , 0.0 , 9 , 1 , 1 , 0 ) ; memcpy ( ( work + 153 ) , ( work + 144 ) , ( 9
* sizeof ( double ) ) ) ; pmVectorFunction ( ( work + 162 ) , ( input + 128 )
, ( work + 1 ) , 0.0 , 1.0 , 0.0 , 3 , 1 , 1 , 0 ) ; memcpy ( ( work + 165 )
, ( input + 131 ) , ( 9 * sizeof ( double ) ) ) ; work [ 174 ] = pmDet3by3 (
( work + 165 ) ) ; pmVectorFunction ( ( work + 175 ) , work , ( work + 174 )
, 0.0 , 1.0 , - 1.0 , 1 , 1 , 1 , 1 ) ; work [ 175 ] = fabs ( work [ 175 ] )
; if ( work [ 175 ] >= 0.05000000000000000300 ) { strncpy ( msg ,
 "buenoensam/Pieza2-1: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmMult ( ( work + 176 ) , (
work + 165 ) , ( work + 165 ) , 3 , 3 , 3 , 3 , 1 , 1 , 3 ) ;
pmVectorFunction ( ( work + 185 ) , ( work + 8 ) , ( work + 176 ) , 0.0 , 1.0
, - 1.0 , 9 , 1 , 1 , 1 ) ; pmMult ( ( work + 194 ) , ( work + 185 ) , ( work
+ 185 ) , 9 , 1 , 9 , 1 , 1 , 1 , 3 ) ; work [ 194 ] = sqrt ( work [ 194 ] )
; work [ 194 ] = fabs ( work [ 194 ] ) ; if ( work [ 194 ] >=
0.05000000000000000300 ) { strncpy ( msg ,
 "buenoensam/Pieza2-1: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmConvertToRotationMatrix ( 13
, ( work + 165 ) , ( work + 195 ) ) ; pmVectorFunction ( ( work + 204 ) , (
input + 150 ) , ( work + 1 ) , 0.0 , 1.0 , 0.0 , 3 , 1 , 1 , 0 ) ; memcpy ( (
work + 207 ) , ( input + 153 ) , ( 9 * sizeof ( double ) ) ) ; work [ 216 ] =
pmDet3by3 ( ( work + 207 ) ) ; pmVectorFunction ( ( work + 217 ) , work , (
work + 216 ) , 0.0 , 1.0 , - 1.0 , 1 , 1 , 1 , 1 ) ; work [ 217 ] = fabs (
work [ 217 ] ) ; if ( work [ 217 ] >= 0.05000000000000000300 ) { strncpy (
msg ,
 "buenoensam/Pieza2-1: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmMult ( ( work + 218 ) , (
work + 207 ) , ( work + 207 ) , 3 , 3 , 3 , 3 , 1 , 1 , 3 ) ;
pmVectorFunction ( ( work + 227 ) , ( work + 8 ) , ( work + 218 ) , 0.0 , 1.0
, - 1.0 , 9 , 1 , 1 , 1 ) ; pmMult ( ( work + 236 ) , ( work + 227 ) , ( work
+ 227 ) , 9 , 1 , 9 , 1 , 1 , 1 , 3 ) ; work [ 236 ] = sqrt ( work [ 236 ] )
; work [ 236 ] = fabs ( work [ 236 ] ) ; if ( work [ 236 ] >=
0.05000000000000000300 ) { strncpy ( msg ,
 "buenoensam/Pieza2-1: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmConvertToRotationMatrix ( 13
, ( work + 207 ) , ( work + 237 ) ) ; pmVectorFunction ( ( work + 246 ) , (
input + 162 ) , ( work + 1 ) , 0.0 , 1.0 , 0.0 , 3 , 1 , 1 , 0 ) ; memcpy ( (
work + 249 ) , ( input + 165 ) , ( 9 * sizeof ( double ) ) ) ; work [ 258 ] =
pmDet3by3 ( ( work + 249 ) ) ; pmVectorFunction ( ( work + 259 ) , work , (
work + 258 ) , 0.0 , 1.0 , - 1.0 , 1 , 1 , 1 , 1 ) ; work [ 259 ] = fabs (
work [ 259 ] ) ; if ( work [ 259 ] >= 0.05000000000000000300 ) { strncpy (
msg ,
 "buenoensam/Pieza2-1: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmMult ( ( work + 260 ) , (
work + 249 ) , ( work + 249 ) , 3 , 3 , 3 , 3 , 1 , 1 , 3 ) ;
pmVectorFunction ( ( work + 269 ) , ( work + 8 ) , ( work + 260 ) , 0.0 , 1.0
, - 1.0 , 9 , 1 , 1 , 1 ) ; pmMult ( ( work + 278 ) , ( work + 269 ) , ( work
+ 269 ) , 9 , 1 , 9 , 1 , 1 , 1 , 3 ) ; work [ 278 ] = sqrt ( work [ 278 ] )
; work [ 278 ] = fabs ( work [ 278 ] ) ; if ( work [ 278 ] >=
0.05000000000000000300 ) { strncpy ( msg ,
 "buenoensam/Pieza2-1: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmConvertToRotationMatrix ( 13
, ( work + 249 ) , ( work + 279 ) ) ; pmVectorFunction ( ( work + 288 ) , (
input + 174 ) , ( work + 1 ) , 0.0 , 1.0 , 0.0 , 3 , 1 , 1 , 0 ) ; memcpy ( (
work + 291 ) , ( input + 177 ) , ( 9 * sizeof ( double ) ) ) ; work [ 300 ] =
pmDet3by3 ( ( work + 291 ) ) ; pmVectorFunction ( ( work + 301 ) , work , (
work + 300 ) , 0.0 , 1.0 , - 1.0 , 1 , 1 , 1 , 1 ) ; work [ 301 ] = fabs (
work [ 301 ] ) ; if ( work [ 301 ] >= 0.05000000000000000300 ) { strncpy (
msg ,
 "buenoensam/Pieza2-1: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmMult ( ( work + 302 ) , (
work + 291 ) , ( work + 291 ) , 3 , 3 , 3 , 3 , 1 , 1 , 3 ) ;
pmVectorFunction ( ( work + 311 ) , ( work + 8 ) , ( work + 302 ) , 0.0 , 1.0
, - 1.0 , 9 , 1 , 1 , 1 ) ; pmMult ( ( work + 320 ) , ( work + 311 ) , ( work
+ 311 ) , 9 , 1 , 9 , 1 , 1 , 1 , 3 ) ; work [ 320 ] = sqrt ( work [ 320 ] )
; work [ 320 ] = fabs ( work [ 320 ] ) ; if ( work [ 320 ] >=
0.05000000000000000300 ) { strncpy ( msg ,
 "buenoensam/Pieza2-1: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmConvertToRotationMatrix ( 13
, ( work + 291 ) , ( work + 321 ) ) ; pmVectorFunction ( ( work + 330 ) , (
input + 149 ) , ( work + 1 ) , 0.0 , 1.0 , 0.0 , 1 , 1 , 1 , 0 ) ;
pmVectorFunction ( ( work + 331 ) , ( input + 140 ) , ( work + 1 ) , 0.0 ,
1.0 , 0.0 , 9 , 1 , 1 , 0 ) ; memcpy ( ( work + 340 ) , ( work + 331 ) , ( 9
* sizeof ( double ) ) ) ; pmVectorFunction ( ( work + 349 ) , ( input + 61 )
, ( work + 1 ) , 0.0 , 1.0 , 0.0 , 3 , 1 , 1 , 0 ) ; memcpy ( ( work + 352 )
, ( input + 64 ) , ( 9 * sizeof ( double ) ) ) ; work [ 361 ] = pmDet3by3 ( (
work + 352 ) ) ; pmVectorFunction ( ( work + 362 ) , work , ( work + 361 ) ,
0.0 , 1.0 , - 1.0 , 1 , 1 , 1 , 1 ) ; work [ 362 ] = fabs ( work [ 362 ] ) ;
if ( work [ 362 ] >= 0.05000000000000000300 ) { strncpy ( msg ,
 "buenoensam/RootPart: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmMult ( ( work + 363 ) , (
work + 352 ) , ( work + 352 ) , 3 , 3 , 3 , 3 , 1 , 1 , 3 ) ;
pmVectorFunction ( ( work + 372 ) , ( work + 8 ) , ( work + 363 ) , 0.0 , 1.0
, - 1.0 , 9 , 1 , 1 , 1 ) ; pmMult ( ( work + 381 ) , ( work + 372 ) , ( work
+ 372 ) , 9 , 1 , 9 , 1 , 1 , 1 , 3 ) ; work [ 381 ] = sqrt ( work [ 381 ] )
; work [ 381 ] = fabs ( work [ 381 ] ) ; if ( work [ 381 ] >=
0.05000000000000000300 ) { strncpy ( msg ,
 "buenoensam/RootPart: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmConvertToRotationMatrix ( 13
, ( work + 352 ) , ( work + 382 ) ) ; pmVectorFunction ( ( work + 391 ) , (
input + 83 ) , ( work + 1 ) , 0.0 , 1.0 , 0.0 , 3 , 1 , 1 , 0 ) ; memcpy ( (
work + 394 ) , ( input + 86 ) , ( 9 * sizeof ( double ) ) ) ; work [ 403 ] =
pmDet3by3 ( ( work + 394 ) ) ; pmVectorFunction ( ( work + 404 ) , work , (
work + 403 ) , 0.0 , 1.0 , - 1.0 , 1 , 1 , 1 , 1 ) ; work [ 404 ] = fabs (
work [ 404 ] ) ; if ( work [ 404 ] >= 0.05000000000000000300 ) { strncpy (
msg ,
 "buenoensam/RootPart: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmMult ( ( work + 405 ) , (
work + 394 ) , ( work + 394 ) , 3 , 3 , 3 , 3 , 1 , 1 , 3 ) ;
pmVectorFunction ( ( work + 414 ) , ( work + 8 ) , ( work + 405 ) , 0.0 , 1.0
, - 1.0 , 9 , 1 , 1 , 1 ) ; pmMult ( ( work + 423 ) , ( work + 414 ) , ( work
+ 414 ) , 9 , 1 , 9 , 1 , 1 , 1 , 3 ) ; work [ 423 ] = sqrt ( work [ 423 ] )
; work [ 423 ] = fabs ( work [ 423 ] ) ; if ( work [ 423 ] >=
0.05000000000000000300 ) { strncpy ( msg ,
 "buenoensam/RootPart: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmConvertToRotationMatrix ( 13
, ( work + 394 ) , ( work + 424 ) ) ; pmVectorFunction ( ( work + 433 ) , (
input + 95 ) , ( work + 1 ) , 0.0 , 1.0 , 0.0 , 3 , 1 , 1 , 0 ) ; memcpy ( (
work + 436 ) , ( input + 98 ) , ( 9 * sizeof ( double ) ) ) ; work [ 445 ] =
pmDet3by3 ( ( work + 436 ) ) ; pmVectorFunction ( ( work + 446 ) , work , (
work + 445 ) , 0.0 , 1.0 , - 1.0 , 1 , 1 , 1 , 1 ) ; work [ 446 ] = fabs (
work [ 446 ] ) ; if ( work [ 446 ] >= 0.05000000000000000300 ) { strncpy (
msg ,
 "buenoensam/RootPart: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmMult ( ( work + 447 ) , (
work + 436 ) , ( work + 436 ) , 3 , 3 , 3 , 3 , 1 , 1 , 3 ) ;
pmVectorFunction ( ( work + 456 ) , ( work + 8 ) , ( work + 447 ) , 0.0 , 1.0
, - 1.0 , 9 , 1 , 1 , 1 ) ; pmMult ( ( work + 465 ) , ( work + 456 ) , ( work
+ 456 ) , 9 , 1 , 9 , 1 , 1 , 1 , 3 ) ; work [ 465 ] = sqrt ( work [ 465 ] )
; work [ 465 ] = fabs ( work [ 465 ] ) ; if ( work [ 465 ] >=
0.05000000000000000300 ) { strncpy ( msg ,
 "buenoensam/RootPart: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmConvertToRotationMatrix ( 13
, ( work + 436 ) , ( work + 466 ) ) ; pmVectorFunction ( ( work + 475 ) , (
input + 107 ) , ( work + 1 ) , 0.0 , 1.0 , 0.0 , 3 , 1 , 1 , 0 ) ; memcpy ( (
work + 478 ) , ( input + 110 ) , ( 9 * sizeof ( double ) ) ) ; work [ 487 ] =
pmDet3by3 ( ( work + 478 ) ) ; pmVectorFunction ( ( work + 488 ) , work , (
work + 487 ) , 0.0 , 1.0 , - 1.0 , 1 , 1 , 1 , 1 ) ; work [ 488 ] = fabs (
work [ 488 ] ) ; if ( work [ 488 ] >= 0.05000000000000000300 ) { strncpy (
msg ,
 "buenoensam/RootPart: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmMult ( ( work + 489 ) , (
work + 478 ) , ( work + 478 ) , 3 , 3 , 3 , 3 , 1 , 1 , 3 ) ;
pmVectorFunction ( ( work + 498 ) , ( work + 8 ) , ( work + 489 ) , 0.0 , 1.0
, - 1.0 , 9 , 1 , 1 , 1 ) ; pmMult ( ( work + 507 ) , ( work + 498 ) , ( work
+ 498 ) , 9 , 1 , 9 , 1 , 1 , 1 , 3 ) ; work [ 507 ] = sqrt ( work [ 507 ] )
; work [ 507 ] = fabs ( work [ 507 ] ) ; if ( work [ 507 ] >=
0.05000000000000000300 ) { strncpy ( msg ,
 "buenoensam/RootPart: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmConvertToRotationMatrix ( 13
, ( work + 478 ) , ( work + 508 ) ) ; pmVectorFunction ( ( work + 517 ) , (
input + 82 ) , ( work + 1 ) , 0.0 , 1.0 , 0.0 , 1 , 1 , 1 , 0 ) ;
pmVectorFunction ( ( work + 518 ) , ( input + 73 ) , ( work + 1 ) , 0.0 , 1.0
, 0.0 , 9 , 1 , 1 , 0 ) ; memcpy ( ( work + 527 ) , ( work + 518 ) , ( 9 *
sizeof ( double ) ) ) ; pmVectorFunction ( ( work + 536 ) , input , ( work +
1 ) , 0.0 , 1.0 , 0.0 , 3 , 1 , 1 , 0 ) ; memcpy ( ( work + 539 ) , ( input +
3 ) , ( 9 * sizeof ( double ) ) ) ; work [ 548 ] = pmDet3by3 ( ( work + 539 )
) ; pmVectorFunction ( ( work + 549 ) , work , ( work + 548 ) , 0.0 , 1.0 , -
1.0 , 1 , 1 , 1 , 1 ) ; work [ 549 ] = fabs ( work [ 549 ] ) ; if ( work [
549 ] >= 0.05000000000000000300 ) { strncpy ( msg ,
 "buenoensam/base.bSLDPRT-1: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmMult ( ( work + 550 ) , (
work + 539 ) , ( work + 539 ) , 3 , 3 , 3 , 3 , 1 , 1 , 3 ) ;
pmVectorFunction ( ( work + 559 ) , ( work + 8 ) , ( work + 550 ) , 0.0 , 1.0
, - 1.0 , 9 , 1 , 1 , 1 ) ; pmMult ( ( work + 568 ) , ( work + 559 ) , ( work
+ 559 ) , 9 , 1 , 9 , 1 , 1 , 1 , 3 ) ; work [ 568 ] = sqrt ( work [ 568 ] )
; work [ 568 ] = fabs ( work [ 568 ] ) ; if ( work [ 568 ] >=
0.05000000000000000300 ) { strncpy ( msg ,
 "buenoensam/base.bSLDPRT-1: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmConvertToRotationMatrix ( 13
, ( work + 539 ) , ( work + 569 ) ) ; pmVectorFunction ( ( work + 578 ) , (
input + 22 ) , ( work + 1 ) , 0.0 , 1.0 , 0.0 , 3 , 1 , 1 , 0 ) ; memcpy ( (
work + 581 ) , ( input + 25 ) , ( 9 * sizeof ( double ) ) ) ; work [ 590 ] =
pmDet3by3 ( ( work + 581 ) ) ; pmVectorFunction ( ( work + 591 ) , work , (
work + 590 ) , 0.0 , 1.0 , - 1.0 , 1 , 1 , 1 , 1 ) ; work [ 591 ] = fabs (
work [ 591 ] ) ; if ( work [ 591 ] >= 0.05000000000000000300 ) { strncpy (
msg ,
 "buenoensam/base.bSLDPRT-1: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmMult ( ( work + 592 ) , (
work + 581 ) , ( work + 581 ) , 3 , 3 , 3 , 3 , 1 , 1 , 3 ) ;
pmVectorFunction ( ( work + 601 ) , ( work + 8 ) , ( work + 592 ) , 0.0 , 1.0
, - 1.0 , 9 , 1 , 1 , 1 ) ; pmMult ( ( work + 610 ) , ( work + 601 ) , ( work
+ 601 ) , 9 , 1 , 9 , 1 , 1 , 1 , 3 ) ; work [ 610 ] = sqrt ( work [ 610 ] )
; work [ 610 ] = fabs ( work [ 610 ] ) ; if ( work [ 610 ] >=
0.05000000000000000300 ) { strncpy ( msg ,
 "buenoensam/base.bSLDPRT-1: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmConvertToRotationMatrix ( 13
, ( work + 581 ) , ( work + 611 ) ) ; pmVectorFunction ( ( work + 620 ) , (
input + 34 ) , ( work + 1 ) , 0.0 , 1.0 , 0.0 , 3 , 1 , 1 , 0 ) ; memcpy ( (
work + 623 ) , ( input + 37 ) , ( 9 * sizeof ( double ) ) ) ; work [ 632 ] =
pmDet3by3 ( ( work + 623 ) ) ; pmVectorFunction ( ( work + 633 ) , work , (
work + 632 ) , 0.0 , 1.0 , - 1.0 , 1 , 1 , 1 , 1 ) ; work [ 633 ] = fabs (
work [ 633 ] ) ; if ( work [ 633 ] >= 0.05000000000000000300 ) { strncpy (
msg ,
 "buenoensam/base.bSLDPRT-1: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmMult ( ( work + 634 ) , (
work + 623 ) , ( work + 623 ) , 3 , 3 , 3 , 3 , 1 , 1 , 3 ) ;
pmVectorFunction ( ( work + 643 ) , ( work + 8 ) , ( work + 634 ) , 0.0 , 1.0
, - 1.0 , 9 , 1 , 1 , 1 ) ; pmMult ( ( work + 652 ) , ( work + 643 ) , ( work
+ 643 ) , 9 , 1 , 9 , 1 , 1 , 1 , 3 ) ; work [ 652 ] = sqrt ( work [ 652 ] )
; work [ 652 ] = fabs ( work [ 652 ] ) ; if ( work [ 652 ] >=
0.05000000000000000300 ) { strncpy ( msg ,
 "buenoensam/base.bSLDPRT-1: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmConvertToRotationMatrix ( 13
, ( work + 623 ) , ( work + 653 ) ) ; pmVectorFunction ( ( work + 662 ) , (
input + 46 ) , ( work + 1 ) , 0.0 , 1.0 , 0.0 , 3 , 1 , 1 , 0 ) ; memcpy ( (
work + 665 ) , ( input + 49 ) , ( 9 * sizeof ( double ) ) ) ; work [ 674 ] =
pmDet3by3 ( ( work + 665 ) ) ; pmVectorFunction ( ( work + 675 ) , work , (
work + 674 ) , 0.0 , 1.0 , - 1.0 , 1 , 1 , 1 , 1 ) ; work [ 675 ] = fabs (
work [ 675 ] ) ; if ( work [ 675 ] >= 0.05000000000000000300 ) { strncpy (
msg ,
 "buenoensam/base.bSLDPRT-1: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmMult ( ( work + 676 ) , (
work + 665 ) , ( work + 665 ) , 3 , 3 , 3 , 3 , 1 , 1 , 3 ) ;
pmVectorFunction ( ( work + 685 ) , ( work + 8 ) , ( work + 676 ) , 0.0 , 1.0
, - 1.0 , 9 , 1 , 1 , 1 ) ; pmMult ( ( work + 694 ) , ( work + 685 ) , ( work
+ 685 ) , 9 , 1 , 9 , 1 , 1 , 1 , 3 ) ; work [ 694 ] = sqrt ( work [ 694 ] )
; work [ 694 ] = fabs ( work [ 694 ] ) ; if ( work [ 694 ] >=
0.05000000000000000300 ) { strncpy ( msg ,
 "buenoensam/base.bSLDPRT-1: The orientation matrix is not orthonormal, i.e., R'*R = I, det(R) = 1, are not satisfied. Please replace with a valid rotation matrix or use another representation."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } pmConvertToRotationMatrix ( 13
, ( work + 665 ) , ( work + 695 ) ) ; pmVectorFunction ( ( work + 704 ) , (
input + 21 ) , ( work + 1 ) , 0.0 , 1.0 , 0.0 , 1 , 1 , 1 , 0 ) ;
pmVectorFunction ( ( work + 705 ) , ( input + 12 ) , ( work + 1 ) , 0.0 , 1.0
, 0.0 , 9 , 1 , 1 , 0 ) ; memcpy ( ( work + 714 ) , ( work + 705 ) , ( 9 *
sizeof ( double ) ) ) ; pmMult ( ( work + 726 ) , ( input + 186 ) , ( input +
186 ) , 3 , 1 , 3 , 1 , 1 , 1 , 3 ) ; work [ 726 ] = sqrt ( work [ 726 ] ) ;
if ( work [ 726 ] == 0.0 ) { strncpy ( msg ,
 "buenoensam/Revolute1: Joint primitive R1 has an invalid axis.  Axis must evaluate to a 1-by-3 matrix.  Check and reconfigure primitive axis vector."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } work [ 726 ] = ( 1.0 / work [
726 ] ) ; pmVectorFunction ( ( work + 723 ) , ( input + 186 ) , ( work + 726
) , 1.0 , 0.0 , 0.0 , 3 , 1 , 1 , 0 ) ; pmMult ( ( work + 730 ) , ( input +
125 ) , ( input + 125 ) , 3 , 1 , 3 , 1 , 1 , 1 , 3 ) ; work [ 730 ] = sqrt (
work [ 730 ] ) ; if ( work [ 730 ] == 0.0 ) { strncpy ( msg ,
 "buenoensam/Revolute: Joint primitive R1 has an invalid axis.  Axis must evaluate to a 1-by-3 matrix.  Check and reconfigure primitive axis vector."
, msg_size ) ; error = 1 ; goto EXIT_POINT ; } work [ 730 ] = ( 1.0 / work [
730 ] ) ; pmVectorFunction ( ( work + 727 ) , ( input + 125 ) , ( work + 730
) , 1.0 , 0.0 , 0.0 , 3 , 1 , 1 , 0 ) ; pmVectorFunction ( ( work + 734 ) , (
input + 122 ) , ( work + 1 ) , 0.0 , 1.0 , 0.0 , 3 , 1 , 1 , 0 ) ;
pmVectorFunction ( ( work + 737 ) , ( work + 731 ) , ( work + 1 ) , 0.0 ,
0.01745329251994329500 , 0.0 , 3 , 1 , 1 , 0 ) ; pmConvertToRotationMatrix (
1 , ( work + 737 ) , ( work + 740 ) ) ; pmVectorFunction ( ( work + 765 ) , (
work + 759 ) , ( work + 1 ) , 0.0 , 1.0 , 0.0 , 3 , 1 , 1 , 0 ) ;
pmVectorFunction ( ( work + 768 ) , ( work + 762 ) , ( work + 1 ) , 0.0 ,
0.01745329251994329500 , 0.0 , 3 , 1 , 1 , 0 ) ; pmConvertToRotationMatrix (
1 , ( work + 768 ) , ( work + 771 ) ) ; pmVectorFunction ( ( work + 780 ) , (
input + 122 ) , ( work + 1 ) , 0.0 , 1.0 , 0.0 , 3 , 1 , 1 , 0 ) ;
pmVectorFunction ( ( work + 783 ) , ( work + 731 ) , ( work + 1 ) , 0.0 ,
0.01745329251994329500 , 0.0 , 3 , 1 , 1 , 0 ) ; pmConvertToRotationMatrix (
0 , ( work + 783 ) , ( work + 786 ) ) ; pmVectorFunction ( ( work + 795 ) , (
work + 749 ) , ( work + 1 ) , 0.0 , 1.0 , 0.0 , 1 , 1 , 1 , 0 ) ;
pmVectorFunction ( ( work + 796 ) , ( work + 750 ) , ( work + 1 ) , 0.0 , 1.0
, 0.0 , 9 , 1 , 1 , 0 ) ; memcpy ( ( work + 805 ) , ( work + 796 ) , ( 9 *
sizeof ( double ) ) ) ; pmVectorFunction ( ( work + 814 ) , ( work + 765 ) ,
( work + 1 ) , 0.0 , - 1.0 , 0.0 , 3 , 1 , 1 , 0 ) ; pmVectorFunction ( (
work + 817 ) , ( work + 17 ) , ( work + 101 ) , 0.0 , 1.0 , - 1.0 , 3 , 1 , 1
, 1 ) ; pmMult ( ( work + 820 ) , ( work + 144 ) , ( work + 50 ) , 3 , 3 , 3
, 3 , 1 , 1 , 2 ) ; pmMult ( ( work + 144 ) , ( work + 50 ) , ( work + 820 )
, 3 , 3 , 3 , 3 , 1 , 1 , 1 ) ; pmMult ( ( work + 838 ) , ( work + 817 ) , (
work + 817 ) , 3 , 1 , 3 , 1 , 1 , 1 , 3 ) ; pmVectorFunction ( ( work + 820
) , ( work + 8 ) , ( work + 838 ) , 1.0 , 0.0 , 0.0 , 9 , 1 , 1 , 0 ) ;
pmMult ( ( work + 829 ) , ( work + 817 ) , ( work + 817 ) , 3 , 1 , 3 , 1 , 1
, 1 , 2 ) ; pmVectorFunction ( ( work + 820 ) , ( work + 820 ) , ( work + 829
) , 0.0 , 1.0 , - 1.0 , 9 , 1 , 1 , 1 ) ; pmVectorFunction ( ( work + 820 ) ,
( work + 820 ) , ( work + 143 ) , 1.0 , 0.0 , 0.0 , 9 , 1 , 1 , 0 ) ;
pmVectorFunction ( ( work + 144 ) , ( work + 144 ) , ( work + 820 ) , 0.0 ,
1.0 , 1.0 , 9 , 1 , 1 , 1 ) ; pmVectorFunction ( ( work + 848 ) , ( work +
162 ) , ( work + 246 ) , 0.0 , 1.0 , - 1.0 , 3 , 1 , 1 , 1 ) ; pmMult ( (
work + 851 ) , ( work + 331 ) , ( work + 195 ) , 3 , 3 , 3 , 3 , 1 , 1 , 2 )
; pmMult ( ( work + 331 ) , ( work + 195 ) , ( work + 851 ) , 3 , 3 , 3 , 3 ,
1 , 1 , 1 ) ; pmMult ( ( work + 869 ) , ( work + 848 ) , ( work + 848 ) , 3 ,
1 , 3 , 1 , 1 , 1 , 3 ) ; pmVectorFunction ( ( work + 851 ) , ( work + 8 ) ,
( work + 869 ) , 1.0 , 0.0 , 0.0 , 9 , 1 , 1 , 0 ) ; pmMult ( ( work + 860 )
, ( work + 848 ) , ( work + 848 ) , 3 , 1 , 3 , 1 , 1 , 1 , 2 ) ;
pmVectorFunction ( ( work + 851 ) , ( work + 851 ) , ( work + 860 ) , 0.0 ,
1.0 , - 1.0 , 9 , 1 , 1 , 1 ) ; pmVectorFunction ( ( work + 851 ) , ( work +
851 ) , ( work + 330 ) , 1.0 , 0.0 , 0.0 , 9 , 1 , 1 , 0 ) ; pmVectorFunction
( ( work + 331 ) , ( work + 331 ) , ( work + 851 ) , 0.0 , 1.0 , 1.0 , 9 , 1
, 1 , 1 ) ; pmVectorFunction ( ( work + 879 ) , ( work + 349 ) , ( work + 475
) , 0.0 , 1.0 , - 1.0 , 3 , 1 , 1 , 1 ) ; pmMult ( ( work + 882 ) , ( work +
518 ) , ( work + 382 ) , 3 , 3 , 3 , 3 , 1 , 1 , 2 ) ; pmMult ( ( work + 518
) , ( work + 382 ) , ( work + 882 ) , 3 , 3 , 3 , 3 , 1 , 1 , 1 ) ; pmMult (
( work + 900 ) , ( work + 879 ) , ( work + 879 ) , 3 , 1 , 3 , 1 , 1 , 1 , 3
) ; pmVectorFunction ( ( work + 882 ) , ( work + 8 ) , ( work + 900 ) , 1.0 ,
0.0 , 0.0 , 9 , 1 , 1 , 0 ) ; pmMult ( ( work + 891 ) , ( work + 879 ) , (
work + 879 ) , 3 , 1 , 3 , 1 , 1 , 1 , 2 ) ; pmVectorFunction ( ( work + 882
) , ( work + 882 ) , ( work + 891 ) , 0.0 , 1.0 , - 1.0 , 9 , 1 , 1 , 1 ) ;
pmVectorFunction ( ( work + 882 ) , ( work + 882 ) , ( work + 517 ) , 1.0 ,
0.0 , 0.0 , 9 , 1 , 1 , 0 ) ; pmVectorFunction ( ( work + 518 ) , ( work +
518 ) , ( work + 882 ) , 0.0 , 1.0 , 1.0 , 9 , 1 , 1 , 1 ) ; pmVectorFunction
( ( work + 910 ) , ( work + 536 ) , ( work + 620 ) , 0.0 , 1.0 , - 1.0 , 3 ,
1 , 1 , 1 ) ; pmMult ( ( work + 913 ) , ( work + 705 ) , ( work + 569 ) , 3 ,
3 , 3 , 3 , 1 , 1 , 2 ) ; pmMult ( ( work + 705 ) , ( work + 569 ) , ( work +
913 ) , 3 , 3 , 3 , 3 , 1 , 1 , 1 ) ; pmMult ( ( work + 931 ) , ( work + 910
) , ( work + 910 ) , 3 , 1 , 3 , 1 , 1 , 1 , 3 ) ; pmVectorFunction ( ( work
+ 913 ) , ( work + 8 ) , ( work + 931 ) , 1.0 , 0.0 , 0.0 , 9 , 1 , 1 , 0 ) ;
pmMult ( ( work + 922 ) , ( work + 910 ) , ( work + 910 ) , 3 , 1 , 3 , 1 , 1
, 1 , 2 ) ; pmVectorFunction ( ( work + 913 ) , ( work + 913 ) , ( work + 922
) , 0.0 , 1.0 , - 1.0 , 9 , 1 , 1 , 1 ) ; pmVectorFunction ( ( work + 913 ) ,
( work + 913 ) , ( work + 704 ) , 1.0 , 0.0 , 0.0 , 9 , 1 , 1 , 0 ) ;
pmVectorFunction ( ( work + 705 ) , ( work + 705 ) , ( work + 913 ) , 0.0 ,
1.0 , 1.0 , 9 , 1 , 1 , 1 ) ; work [ 941 ] = work [ 1 ] ; work [ 942 ] = work
[ 1 ] ; work [ 943 ] = work [ 1 ] ; pmVectorFunction ( ( work + 944 ) , (
work + 101 ) , ( work + 288 ) , 0.0 , 1.0 , - 1.0 , 3 , 1 , 1 , 1 ) ; work [
947 ] = work [ 1 ] ; work [ 948 ] = work [ 1 ] ; work [ 949 ] = work [ 1 ] ;
pmVectorFunction ( ( work + 959 ) , ( work + 246 ) , ( work + 662 ) , 0.0 ,
1.0 , - 1.0 , 3 , 1 , 1 , 1 ) ; work [ 962 ] = work [ 1 ] ; work [ 963 ] =
work [ 1 ] ; work [ 964 ] = work [ 1 ] ; pmVectorFunction ( ( work + 974 ) ,
( work + 475 ) , ( work + 780 ) , 0.0 , 1.0 , - 1.0 , 3 , 1 , 1 , 1 ) ; work
[ 977 ] = work [ 1 ] ; work [ 978 ] = work [ 1 ] ; work [ 979 ] = work [ 1 ]
; pmVectorFunction ( ( work + 980 ) , ( work + 620 ) , ( work + 433 ) , 0.0 ,
1.0 , - 1.0 , 3 , 1 , 1 , 1 ) ; work [ 983 ] = work [ 1 ] ; work [ 984 ] =
work [ 1 ] ; work [ 985 ] = work [ 1 ] ; output [ 0 ] = work [ 143 ] ; memcpy
( ( output + 1 ) , ( work + 153 ) , ( 9 * sizeof ( double ) ) ) ; output [ 10
] = work [ 330 ] ; memcpy ( ( output + 11 ) , ( work + 340 ) , ( 9 * sizeof (
double ) ) ) ; output [ 20 ] = work [ 517 ] ; memcpy ( ( output + 21 ) , (
work + 527 ) , ( 9 * sizeof ( double ) ) ) ; output [ 30 ] = work [ 704 ] ;
memcpy ( ( output + 31 ) , ( work + 714 ) , ( 9 * sizeof ( double ) ) ) ;
output [ 40 ] = work [ 795 ] ; memcpy ( ( output + 41 ) , ( work + 805 ) , (
9 * sizeof ( double ) ) ) ; memcpy ( ( output + 50 ) , ( work + 771 ) , ( 9 *
sizeof ( double ) ) ) ; memcpy ( ( output + 59 ) , ( work + 786 ) , ( 9 *
sizeof ( double ) ) ) ; memcpy ( ( output + 68 ) , ( work + 50 ) , ( 9 *
sizeof ( double ) ) ) ; memcpy ( ( output + 77 ) , ( work + 92 ) , ( 9 *
sizeof ( double ) ) ) ; memcpy ( ( output + 86 ) , ( work + 134 ) , ( 9 *
sizeof ( double ) ) ) ; memcpy ( ( output + 95 ) , ( work + 195 ) , ( 9 *
sizeof ( double ) ) ) ; memcpy ( ( output + 104 ) , ( work + 237 ) , ( 9 *
sizeof ( double ) ) ) ; memcpy ( ( output + 113 ) , ( work + 279 ) , ( 9 *
sizeof ( double ) ) ) ; memcpy ( ( output + 122 ) , ( work + 321 ) , ( 9 *
sizeof ( double ) ) ) ; memcpy ( ( output + 131 ) , ( work + 382 ) , ( 9 *
sizeof ( double ) ) ) ; memcpy ( ( output + 140 ) , ( work + 424 ) , ( 9 *
sizeof ( double ) ) ) ; memcpy ( ( output + 149 ) , ( work + 466 ) , ( 9 *
sizeof ( double ) ) ) ; memcpy ( ( output + 158 ) , ( work + 508 ) , ( 9 *
sizeof ( double ) ) ) ; memcpy ( ( output + 167 ) , ( work + 569 ) , ( 9 *
sizeof ( double ) ) ) ; memcpy ( ( output + 176 ) , ( work + 611 ) , ( 9 *
sizeof ( double ) ) ) ; memcpy ( ( output + 185 ) , ( work + 653 ) , ( 9 *
sizeof ( double ) ) ) ; memcpy ( ( output + 194 ) , ( work + 695 ) , ( 9 *
sizeof ( double ) ) ) ; memcpy ( ( output + 203 ) , ( work + 740 ) , ( 9 *
sizeof ( double ) ) ) ; memcpy ( ( output + 212 ) , ( work + 765 ) , ( 3 *
sizeof ( double ) ) ) ; memcpy ( ( output + 215 ) , ( work + 780 ) , ( 3 *
sizeof ( double ) ) ) ; memcpy ( ( output + 218 ) , ( work + 17 ) , ( 3 *
sizeof ( double ) ) ) ; memcpy ( ( output + 221 ) , ( work + 59 ) , ( 3 *
sizeof ( double ) ) ) ; memcpy ( ( output + 224 ) , ( work + 101 ) , ( 3 *
sizeof ( double ) ) ) ; memcpy ( ( output + 227 ) , ( work + 162 ) , ( 3 *
sizeof ( double ) ) ) ; memcpy ( ( output + 230 ) , ( work + 204 ) , ( 3 *
sizeof ( double ) ) ) ; memcpy ( ( output + 233 ) , ( work + 246 ) , ( 3 *
sizeof ( double ) ) ) ; memcpy ( ( output + 236 ) , ( work + 288 ) , ( 3 *
sizeof ( double ) ) ) ; memcpy ( ( output + 239 ) , ( work + 349 ) , ( 3 *
sizeof ( double ) ) ) ; memcpy ( ( output + 242 ) , ( work + 391 ) , ( 3 *
sizeof ( double ) ) ) ; memcpy ( ( output + 245 ) , ( work + 433 ) , ( 3 *
sizeof ( double ) ) ) ; memcpy ( ( output + 248 ) , ( work + 475 ) , ( 3 *
sizeof ( double ) ) ) ; memcpy ( ( output + 251 ) , ( work + 536 ) , ( 3 *
sizeof ( double ) ) ) ; memcpy ( ( output + 254 ) , ( work + 578 ) , ( 3 *
sizeof ( double ) ) ) ; memcpy ( ( output + 257 ) , ( work + 620 ) , ( 3 *
sizeof ( double ) ) ) ; memcpy ( ( output + 260 ) , ( work + 662 ) , ( 3 *
sizeof ( double ) ) ) ; memcpy ( ( output + 263 ) , ( work + 734 ) , ( 3 *
sizeof ( double ) ) ) ; memcpy ( ( output + 266 ) , ( work + 814 ) , ( 3 *
sizeof ( double ) ) ) ; output [ 269 ] = work [ 1 ] ; memcpy ( ( output + 270
) , ( work + 8 ) , ( 9 * sizeof ( double ) ) ) ; output [ 279 ] = work [ 143
] ; memcpy ( ( output + 280 ) , ( work + 144 ) , ( 9 * sizeof ( double ) ) )
; memcpy ( ( output + 289 ) , ( work + 817 ) , ( 3 * sizeof ( double ) ) ) ;
memcpy ( ( output + 292 ) , ( work + 839 ) , ( 9 * sizeof ( double ) ) ) ;
output [ 301 ] = work [ 330 ] ; memcpy ( ( output + 302 ) , ( work + 331 ) ,
( 9 * sizeof ( double ) ) ) ; memcpy ( ( output + 311 ) , ( work + 848 ) , (
3 * sizeof ( double ) ) ) ; memcpy ( ( output + 314 ) , ( work + 870 ) , ( 9
* sizeof ( double ) ) ) ; output [ 323 ] = work [ 517 ] ; memcpy ( ( output +
324 ) , ( work + 518 ) , ( 9 * sizeof ( double ) ) ) ; memcpy ( ( output +
333 ) , ( work + 879 ) , ( 3 * sizeof ( double ) ) ) ; memcpy ( ( output +
336 ) , ( work + 901 ) , ( 9 * sizeof ( double ) ) ) ; output [ 345 ] = work
[ 704 ] ; memcpy ( ( output + 346 ) , ( work + 705 ) , ( 9 * sizeof ( double
) ) ) ; memcpy ( ( output + 355 ) , ( work + 910 ) , ( 3 * sizeof ( double )
) ) ; memcpy ( ( output + 358 ) , ( work + 932 ) , ( 9 * sizeof ( double ) )
) ; output [ 367 ] = work [ 941 ] ; output [ 368 ] = work [ 942 ] ; output [
369 ] = work [ 943 ] ; memcpy ( ( output + 370 ) , ( work + 288 ) , ( 3 *
sizeof ( double ) ) ) ; memcpy ( ( output + 373 ) , ( work + 944 ) , ( 3 *
sizeof ( double ) ) ) ; memcpy ( ( output + 376 ) , ( work + 723 ) , ( 3 *
sizeof ( double ) ) ) ; output [ 379 ] = work [ 947 ] ; output [ 380 ] = work
[ 948 ] ; output [ 381 ] = work [ 949 ] ; memcpy ( ( output + 382 ) , ( work
+ 950 ) , ( 9 * sizeof ( double ) ) ) ; memcpy ( ( output + 391 ) , ( work +
662 ) , ( 3 * sizeof ( double ) ) ) ; memcpy ( ( output + 394 ) , ( work +
959 ) , ( 3 * sizeof ( double ) ) ) ; memcpy ( ( output + 397 ) , ( work +
727 ) , ( 3 * sizeof ( double ) ) ) ; output [ 400 ] = work [ 962 ] ; output
[ 401 ] = work [ 963 ] ; output [ 402 ] = work [ 964 ] ; memcpy ( ( output +
403 ) , ( work + 965 ) , ( 9 * sizeof ( double ) ) ) ; memcpy ( ( output +
412 ) , ( work + 780 ) , ( 3 * sizeof ( double ) ) ) ; memcpy ( ( output +
415 ) , ( work + 974 ) , ( 3 * sizeof ( double ) ) ) ; output [ 418 ] = work
[ 977 ] ; output [ 419 ] = work [ 978 ] ; output [ 420 ] = work [ 979 ] ;
memcpy ( ( output + 421 ) , ( work + 433 ) , ( 3 * sizeof ( double ) ) ) ;
memcpy ( ( output + 424 ) , ( work + 980 ) , ( 3 * sizeof ( double ) ) ) ;
output [ 427 ] = work [ 983 ] ; output [ 428 ] = work [ 984 ] ; output [ 429
] = work [ 985 ] ; memcpy ( ( output + 430 ) , ( work + 986 ) , ( 9 * sizeof
( double ) ) ) ; EXIT_POINT : ( void ) msg ; ( void ) msg_size ; return error
; }
