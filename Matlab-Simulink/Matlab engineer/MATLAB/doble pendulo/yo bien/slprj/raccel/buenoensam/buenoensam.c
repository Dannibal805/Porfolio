#include "__cf_buenoensam.h"
#include <math.h>
#include "buenoensam.h"
#include "buenoensam_private.h"
#include "buenoensam_dt.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
const boolean_T gbl_raccel_isMultitasking = 1 ;
#else
const boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
const boolean_T gbl_raccel_tid01eq = 1 ; const int_T gbl_raccel_NumST = 3 ;
const char_T * gbl_raccel_Version = "8.4 (R2013a) 13-Feb-2013" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#endif
} const char * gblSlvrJacPatternFileName =
"slprj\\raccel\\buenoensam\\buenoensam_Jpattern.mat" ; const int_T
gblNumRootInportBlks = 1 ; const int_T gblNumModelInputs = 1 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
const int_T gblInportDataTypeIdx [ ] = { 0 } ; const int_T gblInportDims [ ]
= { 1 , 1 } ; const int_T gblInportComplex [ ] = { 0 } ; const int_T
gblInportInterpoFlag [ ] = { 1 } ; const int_T gblInportContinuous [ ] = { 1
} ;
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; X rtX ; DW rtDW ; ExtU rtU ; static SimStruct model_S ; SimStruct *
const rtS = & model_S ; void e1t1z4hp05 ( real_T iw3fr1heh4 , real_T *
lecjba5424 ) { * lecjba5424 = iw3fr1heh4 ; } void e4wvvzd2u2 ( SimStruct *
const rtS , int32_T tid , real_T ktiubh1reh , real_T * hcqt0q4nsj ,
g5y1xvvspz * localB , etcjr0mlkv * localP ) { real_T mtf5tbs3dc ; if (
ssIsSampleHit ( rtS , 1 , tid ) ) { localB -> l2lba3wkrx = localP -> a_Value
; } if ( ssIsContinuousTask ( rtS , tid ) ) { mtf5tbs3dc = ktiubh1reh -
localB -> l2lba3wkrx ; } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { localB ->
hcdutev3pm = localP -> b_Value ; } if ( ssIsContinuousTask ( rtS , tid ) ) {
* hcqt0q4nsj = mtf5tbs3dc / ( localB -> hcdutev3pm - localB -> l2lba3wkrx ) ;
} } void b0bats30si ( SimStruct * const rtS , int32_T tid , real_T jki3pksz1f
, real_T * djttsybmrw , nowrwmhpre * localB , fpimvfa1ln * localP ) { if (
ssIsSampleHit ( rtS , 1 , tid ) ) { localB -> kjewybanlw = localP -> b_Value
; localB -> ff1wr2qaom = localP -> c_Value ; } if ( ssIsContinuousTask ( rtS
, tid ) ) { * djttsybmrw = 1.0 / ( localB -> ff1wr2qaom - localB ->
kjewybanlw ) * ( localB -> ff1wr2qaom - jki3pksz1f ) ; } } void MdlInitialize
( void ) { rtX . btts5hnsm2 = rtP . Integrator1_IC ; rtX . iebu1ivhpp = rtP .
Integrator3_IC ; rtX . cr0tfjagpp = rtP . Integrator2_IC ; rtX . onrh4mo2fu =
rtP . Integrator_IC ; { static _rtMech_PWORK mechWork ; static ErrorRecord
errorRec ; if ( ssIsFirstInitCond ( rtS ) ) { const int locationFlag =
__LINE__ ; if ( rt_mech_visited_loc_buenoensam_f04650f8 == 0 ) {
rt_mech_visited_loc_buenoensam_f04650f8 = locationFlag ; } if (
rt_mech_visited_loc_buenoensam_f04650f8 == locationFlag ) { if ( ( ++
rt_mech_visited_buenoensam_f04650f8 ) != 1 ) { static const char
reentranterrormsg [ ] =
"Attempting to use multiple instances of SimMechanics generated code" ;
ssSetErrorStatus ( rtS , reentranterrormsg ) ; return ; } } mechWork .
mechanism = rt_get_mechanism_buenoensam_f04650f8 ( ) ; mechWork . mechanism
-> engineError = & errorRec ; mechWork . mechanism -> engineError ->
errorFlag = false ; { static char errorMsg [ 1024 ] ; if ( ( mechWork .
mechanism -> mapRuntimeData ) ( mechWork . mechanism , rtP .
Block1_SimMechanicsRuntimeParameters , errorMsg , sizeof ( errorMsg ) - 1 ) )
{ ssSetErrorStatus ( rtS , errorMsg ) ; return ; } } { static
mech_method_table_t _mech_method_table = { NULL , mech_SFsnUNhznjCQWOP_qIVdf_
, NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , mech_VjsWU80i3CnNFpKd3QUvl0 , NULL , NULL , NULL , NULL ,
NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL ,
NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL ,
NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL ,
mech_NPi92Eps2LV0jWc_kbd09_ , NULL , mech_IbYEB57KOGP1y8an65cyd2 , NULL ,
NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL ,
NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL ,
NULL , NULL , NULL , mech_R1Wlp43Vyy28J2Zkhst08_ ,
mech_Qu75Z7wvpnh4jASPIdYh_0 , NULL , NULL , NULL ,
mech_YmWJ7IX2WWa6TdimqOD8D_ , mech_oivmzI0CC_vAIrIulEloQ2 , NULL , NULL ,
NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL ,
mech_Sbc53fmaTgSa0tY0fkRZC2 , NULL , NULL , mech__R397Y1_xdNYhGBobYiYK0 ,
mech_uqjEyqEaf2rgtG0X9VHzb0 , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , NULL , NULL , NULL , mech_UBZmmgV6B4ZQXzGmko3tj0 , NULL ,
mech_XIcxt_pzz7lcfW6G9VAfI_ , NULL , mech_tLwU1ntiirHcHza4i_C_m_ , NULL ,
NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL ,
NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL ,
NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL ,
NULL , mech_svNiIcvnIGQmKB64tkbET0 , NULL , mech_3_72RQ_iqjKfiXmm0odAg2 ,
mech_px0kqcLZBxfRVWJaFFgzR0 , NULL , NULL , NULL , NULL , NULL ,
mech_luaEeAC7egGp8n5dzgsnV_ , NULL , mech_fjI5p0RcB0XgZi36eGpe40 ,
mech_P2fVxNC2MyQ0D9T47XOdC2 , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL ,
mech_AHMhfhIfpDYzSTBw8PIWf2 , mech_IQnmXqndQ6caX61yQ4OCj2 ,
mech_zJXY_9eecKmmMfUUZ2UAU2 , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , NULL , mech_6Knm8M49tgGx6hyp6eJCw0 , NULL , NULL , NULL ,
NULL , NULL , NULL , NULL , mech_KR9ZCK9E9tZi2A_zQBAmn0 , NULL , NULL , NULL
, mech_NAIkVmsxbO32_J710BFcf0 , NULL , NULL , NULL , NULL , NULL , NULL ,
NULL , NULL , NULL , NULL , NULL , NULL , mech_XfZMMrD3pg2akZJHlIeL0_ , NULL
, NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , mech_jutsbjAuzcx3KsoPszAs__ , NULL , NULL , NULL , NULL ,
NULL , NULL , NULL , NULL , NULL , NULL , NULL , mech_aszNzOaburh1GyUiG22P_1
, mech_CeA2NooSCgAz_WlsXfSU12 , mech_6ktggBz9P2W7CVGmfxpGX0 ,
mech_z4Igm1JOCOaPcHmRW07PL2 , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , mech_5NKPhliA8NsD4UI2qF1AG2 , NULL , NULL , NULL , NULL , NULL ,
NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL ,
mech_kh3UJKZl37Z5oeNkVtQY60 , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL ,
mech_8bofdWoolT_dVFkf1em6v0 , mech_IvCSlQvvceAk2kiImsM6h0 ,
mech_n1ygnHnG_GOZlhmJWLS1g1 , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , NULL , NULL , NULL , NULL , NULL ,
mech_fYQcNN0K7MOLnKqvm8Hn60 , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , NULL , NULL , mech_qBOb0mwznlf1OfxAhv_WU2 , NULL , NULL ,
mech_hZFLP8jeqGyb71nRA4mme1 , NULL , NULL , NULL , NULL , NULL , NULL ,
mech_XpyBK8DE5S0VbNRvncbOT_ , NULL , NULL , NULL , NULL , NULL ,
mech_aVLYoA_8CmYQ_LAQb0BFV_ , mech_xrRgsldxl5LYxJva1JePp1 , NULL , NULL ,
NULL , NULL , mech_I2Ajo197yM4NSqEfe32S_1 , NULL , NULL ,
mech_iPWJeXo3MSgzGAqjPew_W1 , NULL , NULL , NULL , NULL ,
mech_n1K5rb9LUWdV46q76Eisv_ , NULL , NULL , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL } ;
mech_method_table_update ( & _mech_method_table ) ; } if (
createEngineMechanism ( mechWork . mechanism ) ) { { const ErrorRecord * err
= mech_getErrorMsg ( ) ; static char_T errorMsg [ 1024 ] ; sprintf ( errorMsg
, err -> errorMsg , err -> blocks [ 0 ] , err -> blocks [ 1 ] , err -> blocks
[ 2 ] , err -> blocks [ 3 ] , err -> blocks [ 4 ] ) ; ssSetErrorStatus ( rtS
, errorMsg ) ; return ; } } rtDW . agcklju4vu = 0U ; mechWork . genSimData .
tStart = ssGetTStart ( rtS ) ; mechWork . genSimData . iwork = & rtDW .
agcklju4vu ; mechWork . genSimData . numInputPorts = 2 ; { static real_T *
mech_inputSignals [ 6 ] ; mech_inputSignals [ 0 ] = ( real_T * ) & rtB .
ng0a2e1yng ; mech_inputSignals [ 1 ] = ( real_T * ) & rtB . h3x5cbphsk ;
mech_inputSignals [ 2 ] = ( real_T * ) & rtB . ahu4xff5qw ; mech_inputSignals
[ 3 ] = ( real_T * ) & rtB . lrsiimdwuz ; mech_inputSignals [ 4 ] = ( real_T
* ) & rtB . hvttzlxplb ; mech_inputSignals [ 5 ] = ( real_T * ) & rtB .
cywrkgalxo ; mechWork . genSimData . inputSignals [ 0 ] = mech_inputSignals ;
} { static real_T * mech_inputSignals [ 3 ] ; mech_inputSignals [ 0 ] = (
real_T * ) rtB . flfzqd3hiw ; mech_inputSignals [ 1 ] = ( real_T * ) & rtB .
flfzqd3hiw [ 1 ] ; mech_inputSignals [ 2 ] = ( real_T * ) & rtB . flfzqd3hiw
[ 2 ] ; mechWork . genSimData . inputSignals [ 1 ] = mech_inputSignals ; }
mechWork . outSimData . numOutputPorts = 2 ; mechWork . outSimData .
logOutput = false ; mechWork . outSimData . outputSignals [ 0 ] = rtB .
nra4evn51s ; mechWork . outSimData . outputSignals [ 1 ] = & rtB . jyul5ur2c5
; rtDW . ig2xlu1vdn = & mechWork ; } } { static _rtMech_PWORK mechWork ;
static ErrorRecord errorRec ; if ( ssIsFirstInitCond ( rtS ) ) { mechWork .
mechanism = rt_get_mechanism_buenoensam_f04650f8 ( ) ; mechWork . mechanism
-> engineError = & errorRec ; mechWork . mechanism -> engineError ->
errorFlag = false ; mechWork . genSimData . tStart = ssGetTStart ( rtS ) ;
mechWork . genSimData . iwork = NULL ; mechWork . genSimData . numInputPorts
= 2 ; { static real_T * mech_inputSignals [ 1 ] ; mech_inputSignals [ 0 ] = (
real_T * ) & rtB . jyul5ur2c5 ; mechWork . genSimData . inputSignals [ 0 ] =
mech_inputSignals ; } { static real_T * mech_inputSignals [ 3 ] ;
mech_inputSignals [ 0 ] = ( real_T * ) rtB . flfzqd3hiw ; mech_inputSignals [
1 ] = ( real_T * ) & rtB . flfzqd3hiw [ 1 ] ; mech_inputSignals [ 2 ] = (
real_T * ) & rtB . flfzqd3hiw [ 2 ] ; mechWork . genSimData . inputSignals [
1 ] = mech_inputSignals ; } mechWork . outSimData . numOutputPorts = 1 ;
mechWork . outSimData . logOutput = false ; mechWork . outSimData .
outputSignals [ 0 ] = & rtB . kyjo5qqeg5 ; rtDW . hzme050h5f = & mechWork ; }
} { static _rtMech_PWORK mechWork ; static ErrorRecord errorRec ; if (
ssIsFirstInitCond ( rtS ) ) { mechWork . mechanism =
rt_get_mechanism_buenoensam_f04650f8 ( ) ; mechWork . mechanism ->
engineError = & errorRec ; mechWork . mechanism -> engineError -> errorFlag =
false ; rtDW . a5tv2nid2l = 1U ; mechWork . genSimData . tStart = ssGetTStart
( rtS ) ; mechWork . genSimData . iwork = & rtDW . a5tv2nid2l ; mechWork .
genSimData . numInputPorts = 1 ; { static real_T * mech_inputSignals [ 1 ] ;
mech_inputSignals [ 0 ] = ( real_T * ) & rtB . kyjo5qqeg5 ; mechWork .
genSimData . inputSignals [ 0 ] = mech_inputSignals ; } mechWork . outSimData
. numOutputPorts = 1 ; mechWork . outSimData . logOutput = false ; mechWork .
outSimData . outputSignals [ 0 ] = & rtB . dg5tubki31 ; rtDW . hjbtpii524 = &
mechWork ; } } } void MdlStart ( void ) { rtDW . olkz0w2oj1 = - 1 ; rtB .
hsiq40rwu3 = rtP . Out1_Y0_klcfklngrc ; rtDW . hfkmqnarce = - 1 ; rtB .
bwg3usfbgy = rtP . Out1_Y0_h2nv0qyril ; rtDW . bxjgf2jfkv = - 1 ; rtB .
cex440yds5 = rtP . Out1_Y0_jefgo2fz2o ; rtDW . k41oinigc3 = - 1 ; rtB .
eejsjdecxg = rtP . Out1_Y0_mrsppdcucd ; rtDW . jp4sdbizjg = - 1 ; rtB .
ed20i3amwg = rtP . Out1_Y0_d5f5sow4gl ; rtDW . epvnnkbcth = - 1 ; rtB .
gsdxo2jqgj = rtP . Out1_Y0_duv5qtswya ; rtDW . jklht22nmy = - 1 ; rtB .
j4mok0agzb = rtP . Out1_Y0 ; rtDW . j55kvcmmiy = - 1 ; rtB . dvsmlgdk14 = rtP
. Out1_Y0_id1yrgdmur ; rtDW . aontfhjr3j = - 1 ; rtB . d5ho3vthrf = rtP .
Out1_Y0_gzg4wgfgez ; rtDW . azwovx0eih = - 1 ; rtB . ewitxnhpa2 = rtP .
Out1_Y0_e0vzmgqmeo ; rtDW . kzjzai1eeb = - 1 ; rtB . pqe2ppzuzr = rtP .
Out1_Y0_j5rsktxloz ; rtDW . bm4gq0scet = - 1 ; rtB . as3hgogwhl = rtP .
Out1_Y0_gzv4zlulfe ; rtDW . evlfylf1bm = - 1 ; rtB . pbhu4pw5kn = rtP .
Out1_Y0_ehx1uu0cw2 ; rtDW . cordk3v1ma = - 1 ; rtB . oivyrt5pk4 = rtP .
Out1_Y0_bdd4oeemq2 ; MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) {
real_T aoz42poaqk ; real_T ig2h21ewql ; real_T lt1imtvmvk ; real_T fz03tv2olf
; real_T emr3kdqbbi ; real_T pxtoiqwbf0 ; real_T pm1yu4r23p ; real_T
jp25img4zq ; real_T imr3fmkkho ; real_T pjes13ir0p ; int8_T rtAction ; real_T
gyjp440qr3 ; real_T g5tduqe1gu ; real_T dqsfbjquhn ; real_T l4e0acck0o ;
real_T dj3pbi2eqy ; real_T byrlcrlc23 ; real_T nkowmdugmq ; real_T bbeehf0mxb
; real_T byojk0j5ou ; real_T fvjmrjvt4x [ 101 ] ; real_T muka4mbmbd ; int32_T
anzts4h3co ; real_T pov0c3loii ; real_T gduxmfajwa ; real_T cojw1rhve2 [ 101
] ; real_T ovvy4grdd1 [ 101 ] ; real_T fvajuuqumg [ 101 ] ; real_T joskry3jd2
[ 101 ] ; real_T dc0rk0wux1 [ 101 ] ; real_T i0hi1tqaha [ 101 ] ; real_T
hxwnwxv2b5 [ 101 ] ; real_T mrrrczhtcc [ 101 ] ; real_T cv52vvvtft [ 101 ] ;
real_T innggdyuqk ; int32_T i ; if ( gblInportFileName != ( NULL ) ) { int_T
currTimeIdx ; int_T i ; if ( gblInportTUtables [ 0 ] . nTimePoints > 0 ) { if
( ssIsContinuousTask ( rtS , tid ) ) { real_T time = ssGetTaskTime ( rtS , 0
) ; int k = 1 ; if ( gblInportTUtables [ 0 ] . nTimePoints == 1 ) { k = 0 ; }
currTimeIdx = rt_getTimeIdx ( gblInportTUtables [ 0 ] . time , time ,
gblInportTUtables [ 0 ] . nTimePoints , gblInportTUtables [ 0 ] . currTimeIdx
, 1 ) ; gblInportTUtables [ 0 ] . currTimeIdx = currTimeIdx ; for ( i = 0 ; i
< 1 ; i ++ ) { real_T * realPtr1 = ( real_T * ) gblInportTUtables [ 0 ] . ur
+ i * gblInportTUtables [ 0 ] . nTimePoints + currTimeIdx ; real_T * realPtr2
= realPtr1 + 1 * k ; ( void ) rt_Interpolate_Datatype ( realPtr1 , realPtr2 ,
& rtU . atmfk1uyzv , time , gblInportTUtables [ 0 ] . time [ currTimeIdx ] ,
gblInportTUtables [ 0 ] . time [ currTimeIdx + k ] , gblInportTUtables [ 0 ]
. uDataType ) ; } } } } srClearBC ( rtDW . nrshen3eze ) ; srClearBC ( rtDW .
e1t1z4hp05u . c0gvpsr1oc ) ; srClearBC ( rtDW . e0a0xlv13l ) ; srClearBC (
rtDW . aj2qxsauvk ) ; if ( ssIsContinuousTask ( rtS , tid ) ) { srClearBC (
rtDW . e4wvvzd2u2n . kynpfylin5 ) ; } if ( ssIsContinuousTask ( rtS , tid ) )
{ srClearBC ( rtDW . b0bats30sii . npagjswe0j ) ; } srClearBC ( rtDW .
e53d4g1wrw ) ; srClearBC ( rtDW . jbxjsr3m4e ) ; srClearBC ( rtDW .
mma4eoaoc0 ) ; srClearBC ( rtDW . doystkbg4h ) ; srClearBC ( rtDW .
cv0qnl1xft ) ; srClearBC ( rtDW . dkpueb3zhj ) ; srClearBC ( rtDW .
o3opldaslu ) ; srClearBC ( rtDW . her14hkg52 ) ; srClearBC ( rtDW .
lgv4lqla4l ) ; srClearBC ( rtDW . iqwqf2khwe ) ; srClearBC ( rtDW .
nhc0g1mx4g ) ; srClearBC ( rtDW . o0juxdlvty ) ; srClearBC ( rtDW .
is3j0uc4ay ) ; srClearBC ( rtDW . dvhjdp3hhc ) ; srClearBC ( rtDW .
ch4qxup2zi ) ; srClearBC ( rtDW . lxgzralgav ) ; srClearBC ( rtDW .
gocglljzlw ) ; srClearBC ( rtDW . lqo2jhgo34 ) ; srClearBC ( rtDW .
dk4twuy3fp ) ; srClearBC ( rtDW . dw2hy20yxx ) ; srClearBC ( rtDW .
cwoakyh0ls ) ; srClearBC ( rtDW . fcuakfqgdd ) ; srClearBC ( rtDW .
pgqmgklkek ) ; if ( ssIsContinuousTask ( rtS , tid ) ) { rtB . lrsiimdwuz =
rtX . btts5hnsm2 ; } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB .
in3vnjrmou = rtP . Constant3_Value ; } if ( ssIsContinuousTask ( rtS , tid )
) { rtB . lakvejgmre = rtB . lrsiimdwuz - rtB . in3vnjrmou ; } if (
ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . ai4vn5ih2g = rtP . Constant5_Value
; } if ( ssIsContinuousTask ( rtS , tid ) ) { rtB . ng0a2e1yng = rtX .
iebu1ivhpp ; rtB . h3x5cbphsk = rtX . cr0tfjagpp ; } if ( ssIsSampleHit ( rtS
, 1 , tid ) ) { rtB . i2x0eav0a2 = rtP . theta2_Value ; } if (
ssIsContinuousTask ( rtS , tid ) ) { pov0c3loii = rtP . theta3_Gain *
muDoubleScalarCos ( rtB . ng0a2e1yng ) + rtB . i2x0eav0a2 ; } if (
ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . ktsxfzhptv = rtP . Constant2_Value
; } if ( ssIsContinuousTask ( rtS , tid ) ) { lt1imtvmvk = ( rtP .
theta3u_Gain * muDoubleScalarCos ( rtB . ng0a2e1yng ) + rtB . ktsxfzhptv ) *
rtU . atmfk1uyzv ; rtB . hvttzlxplb = rtX . onrh4mo2fu ; fz03tv2olf = rtP .
theta3u2_Gain * muDoubleScalarSin ( rtB . ng0a2e1yng ) * rtB . h3x5cbphsk *
rtB . hvttzlxplb ; emr3kdqbbi = ( ( 0.0 - rtB . hvttzlxplb ) - rtB .
h3x5cbphsk ) * ( rtP . theta3u1_Gain * muDoubleScalarSin ( rtB . ng0a2e1yng )
) * rtB . h3x5cbphsk ; pxtoiqwbf0 = rtP . theta4_Gain * muDoubleScalarCos (
rtB . lakvejgmre ) ; } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB .
nv1ufn15gf = rtP . gravedad_Value ; } if ( ssIsContinuousTask ( rtS , tid ) )
{ pm1yu4r23p = pxtoiqwbf0 * rtB . nv1ufn15gf ; jp25img4zq = muDoubleScalarCos
( rtB . lakvejgmre + rtB . ng0a2e1yng ) * rtP . theta5_Gain ; } if (
ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . hlzpsykoix = rtP . Constant4_Value
; } if ( ssIsContinuousTask ( rtS , tid ) ) { imr3fmkkho = jp25img4zq * rtB .
hlzpsykoix ; pjes13ir0p = rtP . theta3u3_Gain * rtB . hvttzlxplb ; } if (
ssIsSampleHit ( rtS , 1 , tid ) ) { memcpy ( & rtB . hwpe1yivt2 [ 0 ] , & rtP
. xdata_Value [ 0 ] , 101U * sizeof ( real_T ) ) ; rtB . c21c4cb1o4 = rtP .
Weight_Value ; } if ( ssIsContinuousTask ( rtS , tid ) ) { rtB . dzzc3ahox1 =
rtB . ai4vn5ih2g - rtB . lrsiimdwuz ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
( rtB . dzzc3ahox1 < - 5.655 ) || ( rtB . dzzc3ahox1 > 0.0 ) ) { rtAction = 0
; } else if ( rtB . dzzc3ahox1 == - 3.142 ) { rtAction = 1 ; } else if ( rtB
. dzzc3ahox1 < - 3.142 ) { rtAction = 2 ; } else { rtAction = 3 ; } rtDW .
olkz0w2oj1 = rtAction ; } else { rtAction = rtDW . olkz0w2oj1 ; } switch (
rtAction ) { case 0 : if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB .
hsiq40rwu3 = rtP . _Value ; } if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC (
rtDW . e0a0xlv13l ) ; } break ; case 1 : if ( ssIsSampleHit ( rtS , 1 , tid )
) { rtB . hsiq40rwu3 = rtP . _Value_acmvxliyx2 ; } if ( ssIsMajorTimeStep (
rtS ) ) { srUpdateBC ( rtDW . aj2qxsauvk ) ; } break ; case 2 : e4wvvzd2u2 (
rtS , tid , rtB . dzzc3ahox1 , & rtB . hsiq40rwu3 , & rtB . e4wvvzd2u2n , (
etcjr0mlkv * ) & rtP . e4wvvzd2u2n ) ; if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( rtDW . e4wvvzd2u2n . kynpfylin5 ) ; } break ; case 3 :
b0bats30si ( rtS , tid , rtB . dzzc3ahox1 , & rtB . hsiq40rwu3 , & rtB .
b0bats30sii , ( fpimvfa1ln * ) & rtP . b0bats30sii ) ; if ( ssIsMajorTimeStep
( rtS ) ) { srUpdateBC ( rtDW . b0bats30sii . npagjswe0j ) ; } break ; } } if
( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . m2vqykig3y = rtP . ref_Value ; }
if ( ssIsContinuousTask ( rtS , tid ) ) { rtB . abrkfxp401 = rtB . m2vqykig3y
- rtB . ng0a2e1yng ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( ( rtB .
abrkfxp401 < - 5.655 ) || ( rtB . abrkfxp401 > 0.0 ) ) { rtAction = 0 ; }
else if ( rtB . abrkfxp401 == - 3.142 ) { rtAction = 1 ; } else if ( rtB .
abrkfxp401 < - 3.142 ) { rtAction = 2 ; } else { rtAction = 3 ; } rtDW .
hfkmqnarce = rtAction ; } else { rtAction = rtDW . hfkmqnarce ; } switch (
rtAction ) { case 0 : if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB .
bwg3usfbgy = rtP . _Value_o4nofsmsae ; } if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( rtDW . cv0qnl1xft ) ; } break ; case 1 : if ( ssIsSampleHit (
rtS , 1 , tid ) ) { rtB . bwg3usfbgy = rtP . _Value_f4phzob0hx ; } if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . dkpueb3zhj ) ; } break ;
case 2 : e4wvvzd2u2 ( rtS , tid , rtB . abrkfxp401 , & rtB . bwg3usfbgy , &
rtB . kpwofrtpwl , ( etcjr0mlkv * ) & rtP . kpwofrtpwl ) ; if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . kpwofrtpwl . kynpfylin5 ) ;
} break ; case 3 : b0bats30si ( rtS , tid , rtB . abrkfxp401 , & rtB .
bwg3usfbgy , & rtB . porftqf14e , ( fpimvfa1ln * ) & rtP . porftqf14e ) ; if
( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . porftqf14e . npagjswe0j )
; } break ; } gyjp440qr3 = rtB . c21c4cb1o4 * muDoubleScalarMin ( rtB .
hsiq40rwu3 , rtB . bwg3usfbgy ) ; } if ( ssIsSampleHit ( rtS , 1 , tid ) ) {
memcpy ( & rtB . dhhgdpkvdu [ 0 ] , & rtP . MN_Value [ 0 ] , 101U * sizeof (
real_T ) ) ; } if ( ssIsContinuousTask ( rtS , tid ) ) { for ( i = 0 ; i <
101 ; i ++ ) { ovvy4grdd1 [ i ] = muDoubleScalarMin ( gyjp440qr3 , rtB .
dhhgdpkvdu [ i ] ) ; } } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB .
jr53p3i4my = rtP . Weight_Value_pududzysjn ; } if ( ssIsContinuousTask ( rtS
, tid ) ) { if ( ssIsMajorTimeStep ( rtS ) ) { if ( ( rtB . abrkfxp401 < -
2.0 ) || ( rtB . abrkfxp401 > 2.0 ) ) { rtAction = 0 ; } else if ( rtB .
abrkfxp401 == 0.0 ) { rtAction = 1 ; } else if ( rtB . abrkfxp401 < 0.0 ) {
rtAction = 2 ; } else { rtAction = 3 ; } rtDW . bxjgf2jfkv = rtAction ; }
else { rtAction = rtDW . bxjgf2jfkv ; } switch ( rtAction ) { case 0 : if (
ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . cex440yds5 = rtP .
_Value_an3yzh3jzp ; } if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW .
lgv4lqla4l ) ; } break ; case 1 : if ( ssIsSampleHit ( rtS , 1 , tid ) ) {
rtB . cex440yds5 = rtP . _Value_o0k2wufkum ; } if ( ssIsMajorTimeStep ( rtS )
) { srUpdateBC ( rtDW . iqwqf2khwe ) ; } break ; case 2 : e4wvvzd2u2 ( rtS ,
tid , rtB . abrkfxp401 , & rtB . cex440yds5 , & rtB . p2ylzee5yp , (
etcjr0mlkv * ) & rtP . p2ylzee5yp ) ; if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( rtDW . p2ylzee5yp . kynpfylin5 ) ; } break ; case 3 : b0bats30si
( rtS , tid , rtB . abrkfxp401 , & rtB . cex440yds5 , & rtB . hhlzsnyecs , (
fpimvfa1ln * ) & rtP . hhlzsnyecs ) ; if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( rtDW . hhlzsnyecs . npagjswe0j ) ; } break ; } g5tduqe1gu = rtB
. jr53p3i4my * muDoubleScalarMin ( rtB . hsiq40rwu3 , rtB . cex440yds5 ) ; }
if ( ssIsSampleHit ( rtS , 1 , tid ) ) { memcpy ( & rtB . a50u3lzemj [ 0 ] ,
& rtP . N_Value [ 0 ] , 101U * sizeof ( real_T ) ) ; } if (
ssIsContinuousTask ( rtS , tid ) ) { for ( i = 0 ; i < 101 ; i ++ ) {
fvajuuqumg [ i ] = muDoubleScalarMin ( g5tduqe1gu , rtB . a50u3lzemj [ i ] )
; } } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . a1onxijdrh = rtP .
Weight_Value_hubpek2poe ; } if ( ssIsContinuousTask ( rtS , tid ) ) { if (
ssIsMajorTimeStep ( rtS ) ) { if ( ( rtB . abrkfxp401 < 0.0 ) || ( rtB .
abrkfxp401 > 5.655 ) ) { rtAction = 0 ; } else if ( rtB . abrkfxp401 == 3.142
) { rtAction = 1 ; } else if ( rtB . abrkfxp401 < 3.142 ) { rtAction = 2 ; }
else { rtAction = 3 ; } rtDW . k41oinigc3 = rtAction ; } else { rtAction =
rtDW . k41oinigc3 ; } switch ( rtAction ) { case 0 : if ( ssIsSampleHit ( rtS
, 1 , tid ) ) { rtB . eejsjdecxg = rtP . _Value_g3dd0kyk25 ; } if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . o3opldaslu ) ; } break ;
case 1 : if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . eejsjdecxg = rtP .
_Value_f2uilwbuwv ; } if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW .
her14hkg52 ) ; } break ; case 2 : e4wvvzd2u2 ( rtS , tid , rtB . abrkfxp401 ,
& rtB . eejsjdecxg , & rtB . lot1uzsgk1 , ( etcjr0mlkv * ) & rtP . lot1uzsgk1
) ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . lot1uzsgk1 .
kynpfylin5 ) ; } break ; case 3 : b0bats30si ( rtS , tid , rtB . abrkfxp401 ,
& rtB . eejsjdecxg , & rtB . jklr3qa21n , ( fpimvfa1ln * ) & rtP . jklr3qa21n
) ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . jklr3qa21n .
npagjswe0j ) ; } break ; } dqsfbjquhn = rtB . a1onxijdrh * muDoubleScalarMin
( rtB . hsiq40rwu3 , rtB . eejsjdecxg ) ; for ( i = 0 ; i < 101 ; i ++ ) {
joskry3jd2 [ i ] = muDoubleScalarMin ( dqsfbjquhn , rtB . a50u3lzemj [ i ] )
; } } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . imex4itn1i = rtP .
Weight_Value_ehsm5daqtd ; } if ( ssIsContinuousTask ( rtS , tid ) ) { if (
ssIsMajorTimeStep ( rtS ) ) { if ( ( rtB . dzzc3ahox1 < - 2.5961216931216939
) || ( rtB . dzzc3ahox1 > 2.4298783068783059 ) ) { rtAction = 0 ; } else if (
rtB . dzzc3ahox1 == - 0.08312169312169404 ) { rtAction = 1 ; } else if ( rtB
. dzzc3ahox1 < - 0.08312169312169404 ) { rtAction = 2 ; } else { rtAction = 3
; } rtDW . jp4sdbizjg = rtAction ; } else { rtAction = rtDW . jp4sdbizjg ; }
switch ( rtAction ) { case 0 : if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB .
ed20i3amwg = rtP . _Value_dmvuom0gyb ; } if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( rtDW . mma4eoaoc0 ) ; } break ; case 1 : if ( ssIsSampleHit (
rtS , 1 , tid ) ) { rtB . ed20i3amwg = rtP . _Value_ecygccsndv ; } if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . doystkbg4h ) ; } break ;
case 2 : e4wvvzd2u2 ( rtS , tid , rtB . dzzc3ahox1 , & rtB . ed20i3amwg , &
rtB . pdgbwqy0nw , ( etcjr0mlkv * ) & rtP . pdgbwqy0nw ) ; if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . pdgbwqy0nw . kynpfylin5 ) ;
} break ; case 3 : b0bats30si ( rtS , tid , rtB . dzzc3ahox1 , & rtB .
ed20i3amwg , & rtB . d4wvgok5de , ( fpimvfa1ln * ) & rtP . d4wvgok5de ) ; if
( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . d4wvgok5de . npagjswe0j )
; } break ; } l4e0acck0o = rtB . imex4itn1i * muDoubleScalarMin ( rtB .
ed20i3amwg , rtB . bwg3usfbgy ) ; for ( i = 0 ; i < 101 ; i ++ ) { dc0rk0wux1
[ i ] = muDoubleScalarMin ( l4e0acck0o , rtB . a50u3lzemj [ i ] ) ; } } if (
ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . hvjxqclndc = rtP .
Weight_Value_pvh3y03vxm ; } if ( ssIsContinuousTask ( rtS , tid ) ) {
dj3pbi2eqy = rtB . hvjxqclndc * muDoubleScalarMin ( rtB . ed20i3amwg , rtB .
cex440yds5 ) ; } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { memcpy ( & rtB .
axtmv531q4 [ 0 ] , & rtP . Z_Value [ 0 ] , 101U * sizeof ( real_T ) ) ; } if
( ssIsContinuousTask ( rtS , tid ) ) { for ( i = 0 ; i < 101 ; i ++ ) {
i0hi1tqaha [ i ] = muDoubleScalarMin ( dj3pbi2eqy , rtB . axtmv531q4 [ i ] )
; } } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . dwylcdpnyk = rtP .
Weight_Value_jj4cd2xy0d ; } if ( ssIsContinuousTask ( rtS , tid ) ) {
byrlcrlc23 = rtB . dwylcdpnyk * muDoubleScalarMin ( rtB . ed20i3amwg , rtB .
eejsjdecxg ) ; } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { memcpy ( & rtB .
c3ibibl4lk [ 0 ] , & rtP . P_Value [ 0 ] , 101U * sizeof ( real_T ) ) ; } if
( ssIsContinuousTask ( rtS , tid ) ) { for ( i = 0 ; i < 101 ; i ++ ) {
hxwnwxv2b5 [ i ] = muDoubleScalarMin ( byrlcrlc23 , rtB . c3ibibl4lk [ i ] )
; } } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . ntodjdosbg = rtP .
Weight_Value_alvw05kdd5 ; } if ( ssIsContinuousTask ( rtS , tid ) ) { if (
ssIsMajorTimeStep ( rtS ) ) { if ( ( rtB . dzzc3ahox1 < 0.0 ) || ( rtB .
dzzc3ahox1 > 5.655 ) ) { rtAction = 0 ; } else if ( rtB . dzzc3ahox1 == 3.142
) { rtAction = 1 ; } else if ( rtB . dzzc3ahox1 < 3.142 ) { rtAction = 2 ; }
else { rtAction = 3 ; } rtDW . epvnnkbcth = rtAction ; } else { rtAction =
rtDW . epvnnkbcth ; } switch ( rtAction ) { case 0 : if ( ssIsSampleHit ( rtS
, 1 , tid ) ) { rtB . gsdxo2jqgj = rtP . _Value_e0ta0qwj3k ; } if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . e53d4g1wrw ) ; } break ;
case 1 : if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . gsdxo2jqgj = rtP .
_Value_mluc0hlrly ; } if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW .
jbxjsr3m4e ) ; } break ; case 2 : e4wvvzd2u2 ( rtS , tid , rtB . dzzc3ahox1 ,
& rtB . gsdxo2jqgj , & rtB . kqfynxybrx , ( etcjr0mlkv * ) & rtP . kqfynxybrx
) ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . kqfynxybrx .
kynpfylin5 ) ; } break ; case 3 : b0bats30si ( rtS , tid , rtB . dzzc3ahox1 ,
& rtB . gsdxo2jqgj , & rtB . f2fhxhgtii , ( fpimvfa1ln * ) & rtP . f2fhxhgtii
) ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . f2fhxhgtii .
npagjswe0j ) ; } break ; } nkowmdugmq = rtB . ntodjdosbg * muDoubleScalarMin
( rtB . gsdxo2jqgj , rtB . bwg3usfbgy ) ; for ( i = 0 ; i < 101 ; i ++ ) {
mrrrczhtcc [ i ] = muDoubleScalarMin ( nkowmdugmq , rtB . c3ibibl4lk [ i ] )
; } } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . gzxmnt5sdr = rtP .
Weight_Value_htlrwjjtxf ; } if ( ssIsContinuousTask ( rtS , tid ) ) {
bbeehf0mxb = rtB . gzxmnt5sdr * muDoubleScalarMin ( rtB . gsdxo2jqgj , rtB .
cex440yds5 ) ; for ( i = 0 ; i < 101 ; i ++ ) { cv52vvvtft [ i ] =
muDoubleScalarMin ( bbeehf0mxb , rtB . c3ibibl4lk [ i ] ) ; } } if (
ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . isoexj1uqh = rtP .
Weight_Value_juw44cgvfu ; } if ( ssIsContinuousTask ( rtS , tid ) ) {
byojk0j5ou = rtB . isoexj1uqh * muDoubleScalarMin ( rtB . gsdxo2jqgj , rtB .
eejsjdecxg ) ; } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { memcpy ( & rtB .
jkw21cnll0 [ 0 ] , & rtP . MP_Value [ 0 ] , 101U * sizeof ( real_T ) ) ; } if
( ssIsContinuousTask ( rtS , tid ) ) { for ( i = 0 ; i < 101 ; i ++ ) {
pxtoiqwbf0 = muDoubleScalarMin ( byojk0j5ou , rtB . jkw21cnll0 [ i ] ) ;
fvjmrjvt4x [ i ] = muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax
( muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax (
muDoubleScalarMax ( muDoubleScalarMax ( ovvy4grdd1 [ i ] , fvajuuqumg [ i ] )
, joskry3jd2 [ i ] ) , dc0rk0wux1 [ i ] ) , i0hi1tqaha [ i ] ) , hxwnwxv2b5 [
i ] ) , mrrrczhtcc [ i ] ) , cv52vvvtft [ i ] ) , pxtoiqwbf0 ) ; cojw1rhve2 [
i ] = pxtoiqwbf0 ; } pxtoiqwbf0 = fvjmrjvt4x [ 0 ] ; for ( i = 0 ; i < 100 ;
i ++ ) { pxtoiqwbf0 += fvjmrjvt4x [ i + 1 ] ; } aoz42poaqk = pxtoiqwbf0 ; if
( ssIsMajorTimeStep ( rtS ) ) { if ( aoz42poaqk <= 0.0 ) { rtAction = 0 ; }
else { rtAction = 1 ; } rtDW . jklht22nmy = rtAction ; } else { rtAction =
rtDW . jklht22nmy ; } switch ( rtAction ) { case 0 : if ( ssIsSampleHit ( rtS
, 1 , tid ) ) { rtB . j4mok0agzb = rtP . One_Value ; } if ( ssIsMajorTimeStep
( rtS ) ) { srUpdateBC ( rtDW . nrshen3eze ) ; } break ; case 1 : e1t1z4hp05
( aoz42poaqk , & rtB . j4mok0agzb ) ; if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( rtDW . e1t1z4hp05u . c0gvpsr1oc ) ; } break ; } muka4mbmbd = ( (
( ( ( ( ( gyjp440qr3 + g5tduqe1gu ) + dqsfbjquhn ) + l4e0acck0o ) +
dj3pbi2eqy ) + byrlcrlc23 ) + nkowmdugmq ) + bbeehf0mxb ) + byojk0j5ou ; } if
( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . ngiibkkits = rtP . Zero_Value ; }
if ( ssIsContinuousTask ( rtS , tid ) ) { anzts4h3co = ( muka4mbmbd > rtB .
ngiibkkits ) ; } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . bs0clguma1 =
rtP . MidRange_Value ; } if ( ssIsContinuousTask ( rtS , tid ) ) { if (
anzts4h3co >= rtP . Switch_Threshold ) { for ( i = 0 ; i < 101 ; i ++ ) {
fvjmrjvt4x [ i ] *= rtB . hwpe1yivt2 [ i ] ; } innggdyuqk = fvjmrjvt4x [ 0 ]
; for ( i = 0 ; i < 100 ; i ++ ) { innggdyuqk += fvjmrjvt4x [ i + 1 ] ; }
byojk0j5ou = innggdyuqk / rtB . j4mok0agzb ; } else { byojk0j5ou = rtB .
bs0clguma1 ; } rtB . oqopjgihqz = byojk0j5ou + 0.0 ; innggdyuqk = ( ( ( ( (
fz03tv2olf - lt1imtvmvk ) - emr3kdqbbi ) - pm1yu4r23p ) - imr3fmkkho ) -
pjes13ir0p ) - rtB . oqopjgihqz ; } if ( ssIsSampleHit ( rtS , 1 , tid ) ) {
rtB . jc2lh2qlp4 = rtP . Constant_Value ; rtB . jbm1enz3u4 = rtP .
Constant1_Value ; } if ( ssIsContinuousTask ( rtS , tid ) ) { rtB .
cywrkgalxo = innggdyuqk / ( ( rtB . jc2lh2qlp4 + rtB . jbm1enz3u4 ) + rtP .
theta1_Gain * rtB . ng0a2e1yng ) ; gduxmfajwa = ( ( rtP . Gain1_Gain *
muDoubleScalarSin ( rtB . ng0a2e1yng ) * rtB . hvttzlxplb * rtB . hvttzlxplb
- pov0c3loii * rtB . cywrkgalxo ) - muDoubleScalarCos ( rtB . ng0a2e1yng +
rtB . lakvejgmre ) * rtP . Gain2_Gain ) - rtP . Gain3_Gain * rtB . h3x5cbphsk
; } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . idmrwwa4ki = rtP .
J2_Value ; } if ( ssIsContinuousTask ( rtS , tid ) ) { rtB . ahu4xff5qw =
gduxmfajwa / rtB . idmrwwa4ki ; { _rtMech_PWORK * mechWork = ( _rtMech_PWORK
* ) rtDW . ig2xlu1vdn ; mechWork -> genSimData . time = ssGetT ( rtS ) ;
mechWork -> outSimData . majorTimestep = ssIsMajorTimeStep ( rtS ) ; if ( ! (
_ssGetSolverAssertCheck ( rtS ) ) ) { if ( kinematicSfcnOutputMethod (
mechWork -> mechanism , & ( mechWork -> genSimData ) , & ( mechWork ->
outSimData ) ) ) { { const ErrorRecord * err = mech_getErrorMsg ( ) ; static
char_T errorMsg [ 1024 ] ; sprintf ( errorMsg , err -> errorMsg , err ->
blocks [ 0 ] , err -> blocks [ 1 ] , err -> blocks [ 2 ] , err -> blocks [ 3
] , err -> blocks [ 4 ] ) ; ssSetErrorStatus ( rtS , errorMsg ) ; return ; }
} } } rtB . ik2frnvm5w = rtP . gain_1_Gain * rtB . nra4evn51s [ 1 ] ; } if (
ssIsSampleHit ( rtS , 1 , tid ) ) { } if ( ssIsContinuousTask ( rtS , tid ) )
{ rtB . kwjyrnjxqb = rtP . gain_1_Gain_khydmkfqx5 * rtB . nra4evn51s [ 0 ] ;
} if ( ssIsSampleHit ( rtS , 1 , tid ) ) { } if ( ssIsSampleHit ( rtS , 2 ,
tid ) ) { } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . ppbjzs0b03 = rtP .
Weight_Value_ojfvrh4hxa ; } if ( ssIsContinuousTask ( rtS , tid ) ) { if (
ssIsMajorTimeStep ( rtS ) ) { if ( ( rtB . dzzc3ahox1 < - 5.655 ) || ( rtB .
dzzc3ahox1 > 0.0 ) ) { rtAction = 0 ; } else if ( rtB . dzzc3ahox1 == - 3.142
) { rtAction = 1 ; } else if ( rtB . dzzc3ahox1 < - 3.142 ) { rtAction = 2 ;
} else { rtAction = 3 ; } rtDW . j55kvcmmiy = rtAction ; } else { rtAction =
rtDW . j55kvcmmiy ; } switch ( rtAction ) { case 0 : if ( ssIsSampleHit ( rtS
, 1 , tid ) ) { rtB . dvsmlgdk14 = rtP . _Value_g1pyp0jpln ; } if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . o0juxdlvty ) ; } break ;
case 1 : if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . dvsmlgdk14 = rtP .
_Value_j1q01z15ty ; } if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW .
is3j0uc4ay ) ; } break ; case 2 : e4wvvzd2u2 ( rtS , tid , rtB . dzzc3ahox1 ,
& rtB . dvsmlgdk14 , & rtB . o0irhh05y2 , ( etcjr0mlkv * ) & rtP . o0irhh05y2
) ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . o0irhh05y2 .
kynpfylin5 ) ; } break ; case 3 : b0bats30si ( rtS , tid , rtB . dzzc3ahox1 ,
& rtB . dvsmlgdk14 , & rtB . o4c5zxua1u , ( fpimvfa1ln * ) & rtP . o4c5zxua1u
) ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . o4c5zxua1u .
npagjswe0j ) ; } break ; } if ( ssIsMajorTimeStep ( rtS ) ) { if ( ( rtB .
abrkfxp401 < - 5.655 ) || ( rtB . abrkfxp401 > 0.0 ) ) { rtAction = 0 ; }
else if ( rtB . abrkfxp401 == - 3.142 ) { rtAction = 1 ; } else if ( rtB .
abrkfxp401 < - 3.142 ) { rtAction = 2 ; } else { rtAction = 3 ; } rtDW .
aontfhjr3j = rtAction ; } else { rtAction = rtDW . aontfhjr3j ; } switch (
rtAction ) { case 0 : if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB .
d5ho3vthrf = rtP . _Value_emsy2kf03z ; } if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( rtDW . lqo2jhgo34 ) ; } break ; case 1 : if ( ssIsSampleHit (
rtS , 1 , tid ) ) { rtB . d5ho3vthrf = rtP . _Value_gxprfvv351 ; } if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . dk4twuy3fp ) ; } break ;
case 2 : e4wvvzd2u2 ( rtS , tid , rtB . abrkfxp401 , & rtB . d5ho3vthrf , &
rtB . j233qqg3cw , ( etcjr0mlkv * ) & rtP . j233qqg3cw ) ; if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . j233qqg3cw . kynpfylin5 ) ;
} break ; case 3 : b0bats30si ( rtS , tid , rtB . abrkfxp401 , & rtB .
d5ho3vthrf , & rtB . cd0klnxe5e , ( fpimvfa1ln * ) & rtP . cd0klnxe5e ) ; if
( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . cd0klnxe5e . npagjswe0j )
; } break ; } byojk0j5ou = rtB . ppbjzs0b03 * muDoubleScalarMin ( rtB .
dvsmlgdk14 , rtB . d5ho3vthrf ) ; } if ( ssIsSampleHit ( rtS , 1 , tid ) ) {
memcpy ( & rtB . frpt3ck0j2 [ 0 ] , & rtP . MN_Value_nhu3p3vkgq [ 0 ] , 101U
* sizeof ( real_T ) ) ; } if ( ssIsContinuousTask ( rtS , tid ) ) { for ( i =
0 ; i < 101 ; i ++ ) { cojw1rhve2 [ i ] = muDoubleScalarMin ( byojk0j5ou ,
rtB . frpt3ck0j2 [ i ] ) ; } } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB .
ddquox35rj = rtP . Weight_Value_h25spuf2zv ; } if ( ssIsContinuousTask ( rtS
, tid ) ) { if ( ssIsMajorTimeStep ( rtS ) ) { if ( ( rtB . abrkfxp401 < -
2.0 ) || ( rtB . abrkfxp401 > 2.0 ) ) { rtAction = 0 ; } else if ( rtB .
abrkfxp401 == 0.0 ) { rtAction = 1 ; } else if ( rtB . abrkfxp401 < 0.0 ) {
rtAction = 2 ; } else { rtAction = 3 ; } rtDW . azwovx0eih = rtAction ; }
else { rtAction = rtDW . azwovx0eih ; } switch ( rtAction ) { case 0 : if (
ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . ewitxnhpa2 = rtP .
_Value_dnf5gfu1rh ; } if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW .
fcuakfqgdd ) ; } break ; case 1 : if ( ssIsSampleHit ( rtS , 1 , tid ) ) {
rtB . ewitxnhpa2 = rtP . _Value_asdy2eagkh ; } if ( ssIsMajorTimeStep ( rtS )
) { srUpdateBC ( rtDW . pgqmgklkek ) ; } break ; case 2 : e4wvvzd2u2 ( rtS ,
tid , rtB . abrkfxp401 , & rtB . ewitxnhpa2 , & rtB . ekfwu0hpre , (
etcjr0mlkv * ) & rtP . ekfwu0hpre ) ; if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( rtDW . ekfwu0hpre . kynpfylin5 ) ; } break ; case 3 : b0bats30si
( rtS , tid , rtB . abrkfxp401 , & rtB . ewitxnhpa2 , & rtB . g4fc3ldju0 , (
fpimvfa1ln * ) & rtP . g4fc3ldju0 ) ; if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( rtDW . g4fc3ldju0 . npagjswe0j ) ; } break ; } byojk0j5ou = rtB
. ddquox35rj * muDoubleScalarMin ( rtB . dvsmlgdk14 , rtB . ewitxnhpa2 ) ; }
if ( ssIsSampleHit ( rtS , 1 , tid ) ) { memcpy ( & rtB . jmjakizbhs [ 0 ] ,
& rtP . N_Value_pemlksllfn [ 0 ] , 101U * sizeof ( real_T ) ) ; } if (
ssIsContinuousTask ( rtS , tid ) ) { for ( i = 0 ; i < 101 ; i ++ ) {
cv52vvvtft [ i ] = muDoubleScalarMin ( byojk0j5ou , rtB . jmjakizbhs [ i ] )
; } } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . funome3nhf = rtP .
Weight_Value_pj0j10o3vs ; } if ( ssIsContinuousTask ( rtS , tid ) ) { if (
ssIsMajorTimeStep ( rtS ) ) { if ( ( rtB . abrkfxp401 < 0.0 ) || ( rtB .
abrkfxp401 > 5.655 ) ) { rtAction = 0 ; } else if ( rtB . abrkfxp401 == 3.142
) { rtAction = 1 ; } else if ( rtB . abrkfxp401 < 3.142 ) { rtAction = 2 ; }
else { rtAction = 3 ; } rtDW . kzjzai1eeb = rtAction ; } else { rtAction =
rtDW . kzjzai1eeb ; } switch ( rtAction ) { case 0 : if ( ssIsSampleHit ( rtS
, 1 , tid ) ) { rtB . pqe2ppzuzr = rtP . _Value_fokxwq4moa ; } if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . dw2hy20yxx ) ; } break ;
case 1 : if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . pqe2ppzuzr = rtP .
_Value_j0ve2kusbf ; } if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW .
cwoakyh0ls ) ; } break ; case 2 : e4wvvzd2u2 ( rtS , tid , rtB . abrkfxp401 ,
& rtB . pqe2ppzuzr , & rtB . m2cbqdkmyt , ( etcjr0mlkv * ) & rtP . m2cbqdkmyt
) ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . m2cbqdkmyt .
kynpfylin5 ) ; } break ; case 3 : b0bats30si ( rtS , tid , rtB . abrkfxp401 ,
& rtB . pqe2ppzuzr , & rtB . igiuzo43id , ( fpimvfa1ln * ) & rtP . igiuzo43id
) ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . igiuzo43id .
npagjswe0j ) ; } break ; } byojk0j5ou = rtB . funome3nhf * muDoubleScalarMin
( rtB . dvsmlgdk14 , rtB . pqe2ppzuzr ) ; for ( i = 0 ; i < 101 ; i ++ ) {
mrrrczhtcc [ i ] = muDoubleScalarMin ( byojk0j5ou , rtB . jmjakizbhs [ i ] )
; } } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . gcejyyqjta = rtP .
Weight_Value_ccv0ftayod ; } if ( ssIsContinuousTask ( rtS , tid ) ) { if (
ssIsMajorTimeStep ( rtS ) ) { if ( ( rtB . dzzc3ahox1 < - 2.5961216931216939
) || ( rtB . dzzc3ahox1 > 2.4298783068783059 ) ) { rtAction = 0 ; } else if (
rtB . dzzc3ahox1 == - 0.08312169312169404 ) { rtAction = 1 ; } else if ( rtB
. dzzc3ahox1 < - 0.08312169312169404 ) { rtAction = 2 ; } else { rtAction = 3
; } rtDW . bm4gq0scet = rtAction ; } else { rtAction = rtDW . bm4gq0scet ; }
switch ( rtAction ) { case 0 : if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB .
as3hgogwhl = rtP . _Value_kavpdvabg3 ; } if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( rtDW . lxgzralgav ) ; } break ; case 1 : if ( ssIsSampleHit (
rtS , 1 , tid ) ) { rtB . as3hgogwhl = rtP . _Value_jepqci1sls ; } if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . gocglljzlw ) ; } break ;
case 2 : e4wvvzd2u2 ( rtS , tid , rtB . dzzc3ahox1 , & rtB . as3hgogwhl , &
rtB . mq452nktsz , ( etcjr0mlkv * ) & rtP . mq452nktsz ) ; if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . mq452nktsz . kynpfylin5 ) ;
} break ; case 3 : b0bats30si ( rtS , tid , rtB . dzzc3ahox1 , & rtB .
as3hgogwhl , & rtB . afilxdebiw , ( fpimvfa1ln * ) & rtP . afilxdebiw ) ; if
( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . afilxdebiw . npagjswe0j )
; } break ; } byojk0j5ou = rtB . gcejyyqjta * muDoubleScalarMin ( rtB .
as3hgogwhl , rtB . d5ho3vthrf ) ; for ( i = 0 ; i < 101 ; i ++ ) { hxwnwxv2b5
[ i ] = muDoubleScalarMin ( byojk0j5ou , rtB . jmjakizbhs [ i ] ) ; } } if (
ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . hubeb3hlxs = rtP .
Weight_Value_chgtvqhek5 ; } if ( ssIsContinuousTask ( rtS , tid ) ) {
byojk0j5ou = rtB . hubeb3hlxs * muDoubleScalarMin ( rtB . as3hgogwhl , rtB .
ewitxnhpa2 ) ; } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { memcpy ( & rtB .
bdirawnthu [ 0 ] , & rtP . Z_Value_oxr23hquuw [ 0 ] , 101U * sizeof ( real_T
) ) ; } if ( ssIsContinuousTask ( rtS , tid ) ) { for ( i = 0 ; i < 101 ; i
++ ) { i0hi1tqaha [ i ] = muDoubleScalarMin ( byojk0j5ou , rtB . bdirawnthu [
i ] ) ; } } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . ilyylqgmo3 = rtP .
Weight_Value_lv4t0hq1dn ; } if ( ssIsContinuousTask ( rtS , tid ) ) {
byojk0j5ou = rtB . ilyylqgmo3 * muDoubleScalarMin ( rtB . as3hgogwhl , rtB .
pqe2ppzuzr ) ; } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { memcpy ( & rtB .
nw2usxayk0 [ 0 ] , & rtP . P_Value_knsfabkpzq [ 0 ] , 101U * sizeof ( real_T
) ) ; } if ( ssIsContinuousTask ( rtS , tid ) ) { for ( i = 0 ; i < 101 ; i
++ ) { dc0rk0wux1 [ i ] = muDoubleScalarMin ( byojk0j5ou , rtB . nw2usxayk0 [
i ] ) ; } } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . d3zogzcgfl = rtP .
Weight_Value_ew3gbnyblt ; } if ( ssIsContinuousTask ( rtS , tid ) ) { if (
ssIsMajorTimeStep ( rtS ) ) { if ( ( rtB . dzzc3ahox1 < 0.0 ) || ( rtB .
dzzc3ahox1 > 5.655 ) ) { rtAction = 0 ; } else if ( rtB . dzzc3ahox1 == 3.142
) { rtAction = 1 ; } else if ( rtB . dzzc3ahox1 < 3.142 ) { rtAction = 2 ; }
else { rtAction = 3 ; } rtDW . evlfylf1bm = rtAction ; } else { rtAction =
rtDW . evlfylf1bm ; } switch ( rtAction ) { case 0 : if ( ssIsSampleHit ( rtS
, 1 , tid ) ) { rtB . pbhu4pw5kn = rtP . _Value_aoa3qlkd0e ; } if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . dvhjdp3hhc ) ; } break ;
case 1 : if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . pbhu4pw5kn = rtP .
_Value_pqclabbqjz ; } if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW .
ch4qxup2zi ) ; } break ; case 2 : e4wvvzd2u2 ( rtS , tid , rtB . dzzc3ahox1 ,
& rtB . pbhu4pw5kn , & rtB . kuwsbsczxm , ( etcjr0mlkv * ) & rtP . kuwsbsczxm
) ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . kuwsbsczxm .
kynpfylin5 ) ; } break ; case 3 : b0bats30si ( rtS , tid , rtB . dzzc3ahox1 ,
& rtB . pbhu4pw5kn , & rtB . lrta3tnmvf , ( fpimvfa1ln * ) & rtP . lrta3tnmvf
) ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . lrta3tnmvf .
npagjswe0j ) ; } break ; } byojk0j5ou = rtB . d3zogzcgfl * muDoubleScalarMin
( rtB . pbhu4pw5kn , rtB . d5ho3vthrf ) ; for ( i = 0 ; i < 101 ; i ++ ) {
joskry3jd2 [ i ] = muDoubleScalarMin ( byojk0j5ou , rtB . nw2usxayk0 [ i ] )
; } } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . dd5vo2rizu = rtP .
Weight_Value_dz3lblkjya ; } if ( ssIsContinuousTask ( rtS , tid ) ) {
byojk0j5ou = rtB . dd5vo2rizu * muDoubleScalarMin ( rtB . pbhu4pw5kn , rtB .
ewitxnhpa2 ) ; for ( i = 0 ; i < 101 ; i ++ ) { fvajuuqumg [ i ] =
muDoubleScalarMin ( byojk0j5ou , rtB . nw2usxayk0 [ i ] ) ; } } if (
ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . jjdm2vml31 = rtP .
Weight_Value_fe223spjh1 ; } if ( ssIsContinuousTask ( rtS , tid ) ) {
byojk0j5ou = rtB . jjdm2vml31 * muDoubleScalarMin ( rtB . pbhu4pw5kn , rtB .
pqe2ppzuzr ) ; } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { memcpy ( & rtB .
i2tfdsilg5 [ 0 ] , & rtP . MP_Value_dmhqm2iaki [ 0 ] , 101U * sizeof ( real_T
) ) ; } if ( ssIsContinuousTask ( rtS , tid ) ) { for ( i = 0 ; i < 101 ; i
++ ) { ovvy4grdd1 [ i ] = muDoubleScalarMax ( muDoubleScalarMax (
muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax
( muDoubleScalarMax ( muDoubleScalarMax ( cojw1rhve2 [ i ] , cv52vvvtft [ i ]
) , mrrrczhtcc [ i ] ) , hxwnwxv2b5 [ i ] ) , i0hi1tqaha [ i ] ) , dc0rk0wux1
[ i ] ) , joskry3jd2 [ i ] ) , fvajuuqumg [ i ] ) , muDoubleScalarMin (
byojk0j5ou , rtB . i2tfdsilg5 [ i ] ) ) ; } pxtoiqwbf0 = ovvy4grdd1 [ 0 ] ;
for ( i = 0 ; i < 100 ; i ++ ) { pxtoiqwbf0 += ovvy4grdd1 [ i + 1 ] ; }
ig2h21ewql = pxtoiqwbf0 ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( ig2h21ewql
<= 0.0 ) { rtAction = 0 ; } else { rtAction = 1 ; } rtDW . cordk3v1ma =
rtAction ; } else { rtAction = rtDW . cordk3v1ma ; } switch ( rtAction ) {
case 0 : if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB . oivyrt5pk4 = rtP .
One_Value_k5ha0jbbd1 ; } if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW
. nhc0g1mx4g ) ; } break ; case 1 : e1t1z4hp05 ( ig2h21ewql , & rtB .
oivyrt5pk4 ) ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW .
lpukzpm1qj . c0gvpsr1oc ) ; } break ; } if ( ssIsSpecialSampleHit ( rtS , 2 ,
0 , tid ) ) { rtB . e1vvngvyqy [ 0 ] = rtB . dzzc3ahox1 ; rtB . e1vvngvyqy [
1 ] = rtB . abrkfxp401 ; } } if ( ssIsSampleHit ( rtS , 1 , tid ) ) { rtB .
flfzqd3hiw [ 0 ] = rtP . _gravity_conversion_Gain * rtP . SOURCE_BLOCK_Value
[ 0 ] ; rtB . flfzqd3hiw [ 1 ] = rtP . _gravity_conversion_Gain * rtP .
SOURCE_BLOCK_Value [ 1 ] ; rtB . flfzqd3hiw [ 2 ] = rtP .
_gravity_conversion_Gain * rtP . SOURCE_BLOCK_Value [ 2 ] ; } if (
ssIsContinuousTask ( rtS , tid ) ) { { _rtMech_PWORK * mechWork = (
_rtMech_PWORK * ) rtDW . hzme050h5f ; mechWork -> genSimData . time = ssGetT
( rtS ) ; mechWork -> outSimData . majorTimestep = ssIsMajorTimeStep ( rtS )
; if ( ! ( _ssGetSolverAssertCheck ( rtS ) ) ) { if ( dynamicSfcnOutputMethod
( mechWork -> mechanism , & ( mechWork -> genSimData ) , & ( mechWork ->
outSimData ) ) ) { { const ErrorRecord * err = mech_getErrorMsg ( ) ; static
char_T errorMsg [ 1024 ] ; sprintf ( errorMsg , err -> errorMsg , err ->
blocks [ 0 ] , err -> blocks [ 1 ] , err -> blocks [ 2 ] , err -> blocks [ 3
] , err -> blocks [ 4 ] ) ; ssSetErrorStatus ( rtS , errorMsg ) ; return ; }
} } } { _rtMech_PWORK * mechWork = ( _rtMech_PWORK * ) rtDW . hjbtpii524 ;
mechWork -> genSimData . time = ssGetT ( rtS ) ; mechWork -> outSimData .
majorTimestep = ssIsMajorTimeStep ( rtS ) ; if ( ! ( _ssGetSolverAssertCheck
( rtS ) ) ) { if ( eventSfcnOutputMethod ( mechWork -> mechanism , & (
mechWork -> genSimData ) , & ( mechWork -> outSimData ) ) ) { { const
ErrorRecord * err = mech_getErrorMsg ( ) ; static char_T errorMsg [ 1024 ] ;
sprintf ( errorMsg , err -> errorMsg , err -> blocks [ 0 ] , err -> blocks [
1 ] , err -> blocks [ 2 ] , err -> blocks [ 3 ] , err -> blocks [ 4 ] ) ;
ssSetErrorStatus ( rtS , errorMsg ) ; return ; } } } } } } void MdlUpdate (
int_T tid ) { if ( ssIsContinuousTask ( rtS , tid ) ) { } if ( ssIsSampleHit
( rtS , 2 , tid ) ) { } if ( ssIsContinuousTask ( rtS , tid ) ) { } } void
MdlDerivatives ( void ) { XDot * _rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX (
rtS ) ) ; _rtXdot -> btts5hnsm2 = rtB . hvttzlxplb ; _rtXdot -> iebu1ivhpp =
rtB . h3x5cbphsk ; _rtXdot -> cr0tfjagpp = rtB . ahu4xff5qw ; _rtXdot ->
onrh4mo2fu = rtB . cywrkgalxo ; { _rtMech_PWORK * mechWork = ( _rtMech_PWORK
* ) rtDW . ig2xlu1vdn ; if ( sFcnDerivativesMethod ( mechWork -> mechanism ,
& ( ( XDot * ) ssGetdX ( rtS ) ) -> btts5hnsm2 ) ) { { const ErrorRecord *
err = mech_getErrorMsg ( ) ; static char_T errorMsg [ 1024 ] ; sprintf (
errorMsg , err -> errorMsg , err -> blocks [ 0 ] , err -> blocks [ 1 ] , err
-> blocks [ 2 ] , err -> blocks [ 3 ] , err -> blocks [ 4 ] ) ;
ssSetErrorStatus ( rtS , errorMsg ) ; return ; } } } } void MdlProjection (
void ) { { _rtMech_PWORK * mechWork = ( _rtMech_PWORK * ) rtDW . ig2xlu1vdn ;
mechWork -> genSimData . time = ssGetT ( rtS ) ; if ( sFcnProjectionMethod (
mechWork -> mechanism , & ( mechWork -> genSimData ) ) ) { { const
ErrorRecord * err = mech_getErrorMsg ( ) ; static char_T errorMsg [ 1024 ] ;
sprintf ( errorMsg , err -> errorMsg , err -> blocks [ 0 ] , err -> blocks [
1 ] , err -> blocks [ 2 ] , err -> blocks [ 3 ] , err -> blocks [ 4 ] ) ;
ssSetErrorStatus ( rtS , errorMsg ) ; return ; } } } } void MdlTerminate (
void ) { { if ( rt_mech_visited_buenoensam_f04650f8 == 1 ) { _rtMech_PWORK *
mechWork = ( _rtMech_PWORK * ) rtDW . ig2xlu1vdn ; if ( mechWork -> mechanism
-> destroyEngine != NULL ) { ( mechWork -> mechanism -> destroyEngine ) (
mechWork -> mechanism ) ; } } if ( ( -- rt_mech_visited_buenoensam_f04650f8 )
== 0 ) { rt_mech_visited_loc_buenoensam_f04650f8 = 0 ; } } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 4 ) ; ssSetNumY (
rtS , 0 ) ; ssSetNumU ( rtS , 1 ) ; ssSetDirectFeedThrough ( rtS , 1 ) ;
ssSetNumSampleTimes ( rtS , 3 ) ; ssSetNumBlocks ( rtS , 301 ) ;
ssSetNumBlockIO ( rtS , 121 ) ; ssSetNumBlockParams ( rtS , 1498 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.01 ) ; ssSetSampleTime ( rtS , 2 , 2.0 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 0.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; } void raccel_set_checksum ( SimStruct *
rtS ) { ssSetChecksumVal ( rtS , 0 , 3553450872U ) ; ssSetChecksumVal ( rtS ,
1 , 1079080335U ) ; ssSetChecksumVal ( rtS , 2 , 3578129002U ) ;
ssSetChecksumVal ( rtS , 3 , 499905216U ) ; } SimStruct *
raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo ; ( void )
memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( (
char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr (
rtS , & mdlInfo ) ; { static time_T mdlPeriod [ NSAMPLE_TIMES ] ; static
time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T mdlTaskTimes [
NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ; static int_T
mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T mdlTNextWasAdjustedPtr [
NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits [ NSAMPLE_TIMES *
NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [ NSAMPLE_TIMES ] ; {
int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) { mdlPeriod [ i ] = 0.0 ;
mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ; mdlTsMap [ i ] = i ; } }
mdlSampleHits [ 0 ] = 1 ; ssSetSampleTimePtr ( rtS , & mdlPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , & mdlTaskTimes [ 0 ] ) ;
ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ; ssSetTNextWasAdjustedPtr
( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ; ssSetPerTaskSampleHitsPtr ( rtS ,
& mdlPerTaskSampleHits [ 0 ] ) ; ssSetTimeOfNextSampleHitPtr ( rtS , &
mdlTimeOfNextSampleHit [ 0 ] ) ; } { static int_T mdlPerTaskSampleHits [
NSAMPLE_TIMES * NSAMPLE_TIMES ] ; ( void ) memset ( ( void * ) &
mdlPerTaskSampleHits [ 0 ] , 0 , 3 * 3 * sizeof ( int_T ) ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_MULTITASKING ) ; { ssSetBlockIO ( rtS , (
( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof (
B ) ) ; } { ssSetU ( rtS , ( ( void * ) & rtU ) ) ; rtU . atmfk1uyzv = 0.0 ;
} ssSetDefaultParam ( rtS , ( real_T * ) & rtP ) ; { real_T * x = ( real_T *
) & rtX ; ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void * ) x , 0 ,
sizeof ( X ) ) ; } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS
, dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 14 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . B = & rtBTransTable ;
dtInfo . P = & rtPTransTable ; } ssSetRootSS ( rtS , rtS ) ; ssSetVersion (
rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "buenoensam" ) ;
ssSetPath ( rtS , "buenoensam" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal (
rtS , 40.0 ) ; ssSetStepSize ( rtS , 0.01 ) ; ssSetFixedStepSize ( rtS , 0.01
) ; { static RTWLogInfo rt_DataLoggingInfo ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1
, 1 , 1 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 }
; static int_T rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 } ; static
boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 } ; static
BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0
, 0 , 0 , 0 } ; static const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = { "buenoensam/Integrator1" ,
"buenoensam/Ecu2/Integrator3" , "buenoensam/Ecu2/Integrator2" ,
"buenoensam/Integrator" } ; static const char_T * rt_LoggedStateNames [ ] = {
"" , "" , "" , "" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 ,
0 , 0 , 0 } ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { {
0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 4 ,
rt_LoggedStateWidths , rt_LoggedStateNumDimensions , rt_LoggedStateDimensions
, rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , { rt_LoggedStateLabels } , ( NULL )
, ( NULL ) , ( NULL ) , { rt_LoggedStateBlockNames } , { rt_LoggedStateNames
} , rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 4 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . btts5hnsm2 ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . iebu1ivhpp ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . cr0tfjagpp ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . onrh4mo2fu ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "xFinal" ) ; rtliSetSigLog ( ssGetRTWLogInfo ( rtS
) , "" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 1000 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo (
rtS ) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 4
] ; ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS , "ode5" ) ;
ssSetVariableStepSolver ( rtS , 0 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetSolverStateProjection ( rtS ,
0 ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ; ssSetModelUpdate ( rtS
, MdlUpdate ) ; ssSetModelDerivatives ( rtS , MdlDerivatives ) ;
ssSetTNextTid ( rtS , INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ;
ssSetSolverNeedsReset ( rtS ) ; ssSetNumNonsampledZCs ( rtS , 0 ) ;
ssSetContStateDisabled ( rtS , contStatesDisabled ) ; } ssSetChecksumVal (
rtS , 0 , 3553450872U ) ; ssSetChecksumVal ( rtS , 1 , 1079080335U ) ;
ssSetChecksumVal ( rtS , 2 , 3578129002U ) ; ssSetChecksumVal ( rtS , 3 ,
499905216U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 54 ] ; ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo
) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = ( sysRanDType * ) & rtDW . nrshen3eze ; systemRan [ 3 ] = (
sysRanDType * ) & rtDW . e1t1z4hp05u . c0gvpsr1oc ; systemRan [ 4 ] = (
sysRanDType * ) & rtDW . e0a0xlv13l ; systemRan [ 5 ] = ( sysRanDType * ) &
rtDW . aj2qxsauvk ; systemRan [ 6 ] = ( sysRanDType * ) & rtDW . b0bats30sii
. npagjswe0j ; systemRan [ 7 ] = ( sysRanDType * ) & rtDW . e4wvvzd2u2n .
kynpfylin5 ; systemRan [ 8 ] = ( sysRanDType * ) & rtDW . e53d4g1wrw ;
systemRan [ 9 ] = ( sysRanDType * ) & rtDW . jbxjsr3m4e ; systemRan [ 10 ] =
( sysRanDType * ) & rtDW . f2fhxhgtii . npagjswe0j ; systemRan [ 11 ] = (
sysRanDType * ) & rtDW . kqfynxybrx . kynpfylin5 ; systemRan [ 12 ] = (
sysRanDType * ) & rtDW . mma4eoaoc0 ; systemRan [ 13 ] = ( sysRanDType * ) &
rtDW . doystkbg4h ; systemRan [ 14 ] = ( sysRanDType * ) & rtDW . d4wvgok5de
. npagjswe0j ; systemRan [ 15 ] = ( sysRanDType * ) & rtDW . pdgbwqy0nw .
kynpfylin5 ; systemRan [ 16 ] = ( sysRanDType * ) & rtDW . cv0qnl1xft ;
systemRan [ 17 ] = ( sysRanDType * ) & rtDW . dkpueb3zhj ; systemRan [ 18 ] =
( sysRanDType * ) & rtDW . porftqf14e . npagjswe0j ; systemRan [ 19 ] = (
sysRanDType * ) & rtDW . kpwofrtpwl . kynpfylin5 ; systemRan [ 20 ] = (
sysRanDType * ) & rtDW . o3opldaslu ; systemRan [ 21 ] = ( sysRanDType * ) &
rtDW . her14hkg52 ; systemRan [ 22 ] = ( sysRanDType * ) & rtDW . jklr3qa21n
. npagjswe0j ; systemRan [ 23 ] = ( sysRanDType * ) & rtDW . lot1uzsgk1 .
kynpfylin5 ; systemRan [ 24 ] = ( sysRanDType * ) & rtDW . lgv4lqla4l ;
systemRan [ 25 ] = ( sysRanDType * ) & rtDW . iqwqf2khwe ; systemRan [ 26 ] =
( sysRanDType * ) & rtDW . hhlzsnyecs . npagjswe0j ; systemRan [ 27 ] = (
sysRanDType * ) & rtDW . p2ylzee5yp . kynpfylin5 ; systemRan [ 28 ] = (
sysRanDType * ) & rtDW . nhc0g1mx4g ; systemRan [ 29 ] = ( sysRanDType * ) &
rtDW . lpukzpm1qj . c0gvpsr1oc ; systemRan [ 30 ] = ( sysRanDType * ) & rtDW
. o0juxdlvty ; systemRan [ 31 ] = ( sysRanDType * ) & rtDW . is3j0uc4ay ;
systemRan [ 32 ] = ( sysRanDType * ) & rtDW . o4c5zxua1u . npagjswe0j ;
systemRan [ 33 ] = ( sysRanDType * ) & rtDW . o0irhh05y2 . kynpfylin5 ;
systemRan [ 34 ] = ( sysRanDType * ) & rtDW . dvhjdp3hhc ; systemRan [ 35 ] =
( sysRanDType * ) & rtDW . ch4qxup2zi ; systemRan [ 36 ] = ( sysRanDType * )
& rtDW . lrta3tnmvf . npagjswe0j ; systemRan [ 37 ] = ( sysRanDType * ) &
rtDW . kuwsbsczxm . kynpfylin5 ; systemRan [ 38 ] = ( sysRanDType * ) & rtDW
. lxgzralgav ; systemRan [ 39 ] = ( sysRanDType * ) & rtDW . gocglljzlw ;
systemRan [ 40 ] = ( sysRanDType * ) & rtDW . afilxdebiw . npagjswe0j ;
systemRan [ 41 ] = ( sysRanDType * ) & rtDW . mq452nktsz . kynpfylin5 ;
systemRan [ 42 ] = ( sysRanDType * ) & rtDW . lqo2jhgo34 ; systemRan [ 43 ] =
( sysRanDType * ) & rtDW . dk4twuy3fp ; systemRan [ 44 ] = ( sysRanDType * )
& rtDW . cd0klnxe5e . npagjswe0j ; systemRan [ 45 ] = ( sysRanDType * ) &
rtDW . j233qqg3cw . kynpfylin5 ; systemRan [ 46 ] = ( sysRanDType * ) & rtDW
. dw2hy20yxx ; systemRan [ 47 ] = ( sysRanDType * ) & rtDW . cwoakyh0ls ;
systemRan [ 48 ] = ( sysRanDType * ) & rtDW . igiuzo43id . npagjswe0j ;
systemRan [ 49 ] = ( sysRanDType * ) & rtDW . m2cbqdkmyt . kynpfylin5 ;
systemRan [ 50 ] = ( sysRanDType * ) & rtDW . fcuakfqgdd ; systemRan [ 51 ] =
( sysRanDType * ) & rtDW . pgqmgklkek ; systemRan [ 52 ] = ( sysRanDType * )
& rtDW . g4fc3ldju0 . npagjswe0j ; systemRan [ 53 ] = ( sysRanDType * ) &
rtDW . ekfwu0hpre . kynpfylin5 ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; } return
rtS ; }
