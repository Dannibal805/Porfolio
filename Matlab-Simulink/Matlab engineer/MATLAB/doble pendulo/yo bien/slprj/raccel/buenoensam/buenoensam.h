#include "__cf_buenoensam.h"
#ifndef RTW_HEADER_buenoensam_h_
#define RTW_HEADER_buenoensam_h_
#ifndef buenoensam_COMMON_INCLUDES_
#define buenoensam_COMMON_INCLUDES_
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#endif
#include "buenoensam_types.h"
#define MODEL_NAME buenoensam
#define NSAMPLE_TIMES (3) 
#define NINPUTS (1)       
#define NOUTPUTS (0)     
#define NBLOCKIO (121) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (4)   
#elif NCSTATES != 4
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (NULL)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)
#endif
typedef struct { int8_T c0gvpsr1oc ; } o415df2vyx ; typedef struct { real_T
l2lba3wkrx ; real_T hcdutev3pm ; } g5y1xvvspz ; typedef struct { int8_T
kynpfylin5 ; } ktehh3pnvb ; typedef struct { real_T kjewybanlw ; real_T
ff1wr2qaom ; } nowrwmhpre ; typedef struct { int8_T npagjswe0j ; } jpcia0zbak
; typedef struct { real_T lrsiimdwuz ; real_T in3vnjrmou ; real_T lakvejgmre
; real_T ai4vn5ih2g ; real_T ng0a2e1yng ; real_T h3x5cbphsk ; real_T
i2x0eav0a2 ; real_T ktsxfzhptv ; real_T hvttzlxplb ; real_T nv1ufn15gf ;
real_T hlzpsykoix ; real_T hwpe1yivt2 [ 101 ] ; real_T c21c4cb1o4 ; real_T
dzzc3ahox1 ; real_T m2vqykig3y ; real_T abrkfxp401 ; real_T hsiq40rwu3 ;
real_T bwg3usfbgy ; real_T dhhgdpkvdu [ 101 ] ; real_T jr53p3i4my ; real_T
cex440yds5 ; real_T a50u3lzemj [ 101 ] ; real_T a1onxijdrh ; real_T
eejsjdecxg ; real_T imex4itn1i ; real_T ed20i3amwg ; real_T hvjxqclndc ;
real_T axtmv531q4 [ 101 ] ; real_T dwylcdpnyk ; real_T c3ibibl4lk [ 101 ] ;
real_T ntodjdosbg ; real_T gsdxo2jqgj ; real_T gzxmnt5sdr ; real_T isoexj1uqh
; real_T jkw21cnll0 [ 101 ] ; real_T j4mok0agzb ; real_T ngiibkkits ; real_T
bs0clguma1 ; real_T oqopjgihqz ; real_T jc2lh2qlp4 ; real_T jbm1enz3u4 ;
real_T cywrkgalxo ; real_T idmrwwa4ki ; real_T ahu4xff5qw ; real_T nra4evn51s
[ 2 ] ; real_T jyul5ur2c5 ; real_T ik2frnvm5w ; real_T kwjyrnjxqb ; real_T
ppbjzs0b03 ; real_T dvsmlgdk14 ; real_T d5ho3vthrf ; real_T frpt3ck0j2 [ 101
] ; real_T ddquox35rj ; real_T ewitxnhpa2 ; real_T jmjakizbhs [ 101 ] ;
real_T funome3nhf ; real_T pqe2ppzuzr ; real_T gcejyyqjta ; real_T as3hgogwhl
; real_T hubeb3hlxs ; real_T bdirawnthu [ 101 ] ; real_T ilyylqgmo3 ; real_T
nw2usxayk0 [ 101 ] ; real_T d3zogzcgfl ; real_T pbhu4pw5kn ; real_T
dd5vo2rizu ; real_T jjdm2vml31 ; real_T i2tfdsilg5 [ 101 ] ; real_T
oivyrt5pk4 ; real_T e1vvngvyqy [ 2 ] ; real_T flfzqd3hiw [ 3 ] ; real_T
kyjo5qqeg5 ; real_T dg5tubki31 ; nowrwmhpre g4fc3ldju0 ; g5y1xvvspz
ekfwu0hpre ; nowrwmhpre igiuzo43id ; g5y1xvvspz m2cbqdkmyt ; nowrwmhpre
cd0klnxe5e ; g5y1xvvspz j233qqg3cw ; nowrwmhpre afilxdebiw ; g5y1xvvspz
mq452nktsz ; nowrwmhpre lrta3tnmvf ; g5y1xvvspz kuwsbsczxm ; nowrwmhpre
o4c5zxua1u ; g5y1xvvspz o0irhh05y2 ; nowrwmhpre hhlzsnyecs ; g5y1xvvspz
p2ylzee5yp ; nowrwmhpre jklr3qa21n ; g5y1xvvspz lot1uzsgk1 ; nowrwmhpre
porftqf14e ; g5y1xvvspz kpwofrtpwl ; nowrwmhpre d4wvgok5de ; g5y1xvvspz
pdgbwqy0nw ; nowrwmhpre f2fhxhgtii ; g5y1xvvspz kqfynxybrx ; nowrwmhpre
b0bats30sii ; g5y1xvvspz e4wvvzd2u2n ; } B ; typedef struct { struct { void *
LoggedData ; } hmdjjprvrz ; struct { void * LoggedData ; } p0cmptq3de ; void
* ig2xlu1vdn ; struct { void * LoggedData ; } hdbtgoc0rv ; struct { void *
LoggedData ; } dqiqnr3u5t ; struct { void * LoggedData ; } jkz4tvnagk ;
struct { void * LoggedData ; } kts4tx3svb ; struct { void * LoggedData ; }
ixhn3qmkpm ; struct { void * LoggedData ; } igoqvyicvp ; struct { void *
LoggedData ; } kp1e3m1psw ; struct { void * LoggedData ; } jjgbdimb4o ; void
* hzme050h5f ; void * hjbtpii524 ; int_T agcklju4vu ; int_T a5tv2nid2l ;
int8_T olkz0w2oj1 ; int8_T e0a0xlv13l ; int8_T aj2qxsauvk ; int8_T hfkmqnarce
; int8_T cv0qnl1xft ; int8_T dkpueb3zhj ; int8_T bxjgf2jfkv ; int8_T
lgv4lqla4l ; int8_T iqwqf2khwe ; int8_T k41oinigc3 ; int8_T o3opldaslu ;
int8_T her14hkg52 ; int8_T jp4sdbizjg ; int8_T mma4eoaoc0 ; int8_T doystkbg4h
; int8_T epvnnkbcth ; int8_T e53d4g1wrw ; int8_T jbxjsr3m4e ; int8_T
jklht22nmy ; int8_T nrshen3eze ; int8_T j55kvcmmiy ; int8_T o0juxdlvty ;
int8_T is3j0uc4ay ; int8_T aontfhjr3j ; int8_T lqo2jhgo34 ; int8_T dk4twuy3fp
; int8_T azwovx0eih ; int8_T fcuakfqgdd ; int8_T pgqmgklkek ; int8_T
kzjzai1eeb ; int8_T dw2hy20yxx ; int8_T cwoakyh0ls ; int8_T bm4gq0scet ;
int8_T lxgzralgav ; int8_T gocglljzlw ; int8_T evlfylf1bm ; int8_T dvhjdp3hhc
; int8_T ch4qxup2zi ; int8_T cordk3v1ma ; int8_T nhc0g1mx4g ; jpcia0zbak
g4fc3ldju0 ; ktehh3pnvb ekfwu0hpre ; jpcia0zbak igiuzo43id ; ktehh3pnvb
m2cbqdkmyt ; jpcia0zbak cd0klnxe5e ; ktehh3pnvb j233qqg3cw ; jpcia0zbak
afilxdebiw ; ktehh3pnvb mq452nktsz ; jpcia0zbak lrta3tnmvf ; ktehh3pnvb
kuwsbsczxm ; jpcia0zbak o4c5zxua1u ; ktehh3pnvb o0irhh05y2 ; o415df2vyx
lpukzpm1qj ; jpcia0zbak hhlzsnyecs ; ktehh3pnvb p2ylzee5yp ; jpcia0zbak
jklr3qa21n ; ktehh3pnvb lot1uzsgk1 ; jpcia0zbak porftqf14e ; ktehh3pnvb
kpwofrtpwl ; jpcia0zbak d4wvgok5de ; ktehh3pnvb pdgbwqy0nw ; jpcia0zbak
f2fhxhgtii ; ktehh3pnvb kqfynxybrx ; jpcia0zbak b0bats30sii ; ktehh3pnvb
e4wvvzd2u2n ; o415df2vyx e1t1z4hp05u ; } DW ; typedef struct { real_T
btts5hnsm2 ; real_T iebu1ivhpp ; real_T cr0tfjagpp ; real_T onrh4mo2fu ; } X
; typedef struct { real_T btts5hnsm2 ; real_T iebu1ivhpp ; real_T cr0tfjagpp
; real_T onrh4mo2fu ; } XDot ; typedef struct { boolean_T btts5hnsm2 ;
boolean_T iebu1ivhpp ; boolean_T cr0tfjagpp ; boolean_T onrh4mo2fu ; } XDis ;
typedef struct { real_T atmfk1uyzv ; } ExtU ; struct etcjr0mlkv_ { real_T
a_Value ; real_T b_Value ; } ; struct fpimvfa1ln_ { real_T b_Value ; real_T
c_Value ; } ; struct P_ { real_T Out1_Y0 ; real_T One_Value ; real_T
Out1_Y0_ghntmymz3b ; real_T _Value ; real_T Out1_Y0_klcfklngrc ; real_T
_Value_acmvxliyx2 ; real_T Out1_Y0_a4imrrdivk ; real_T _Value_e0ta0qwj3k ;
real_T Out1_Y0_duv5qtswya ; real_T _Value_mluc0hlrly ; real_T
Out1_Y0_a5ath2rlz5 ; real_T _Value_dmvuom0gyb ; real_T Out1_Y0_d5f5sow4gl ;
real_T _Value_ecygccsndv ; real_T Out1_Y0_ljvvz0chsl ; real_T
_Value_o4nofsmsae ; real_T Out1_Y0_h2nv0qyril ; real_T _Value_f4phzob0hx ;
real_T Out1_Y0_k200jqvn1p ; real_T _Value_g3dd0kyk25 ; real_T
Out1_Y0_mrsppdcucd ; real_T _Value_f2uilwbuwv ; real_T Out1_Y0_fgr5pxk21n ;
real_T _Value_an3yzh3jzp ; real_T Out1_Y0_jefgo2fz2o ; real_T
_Value_o0k2wufkum ; real_T Out1_Y0_bdd4oeemq2 ; real_T One_Value_k5ha0jbbd1 ;
real_T Out1_Y0_jldgpfv1ap ; real_T _Value_g1pyp0jpln ; real_T
Out1_Y0_id1yrgdmur ; real_T _Value_j1q01z15ty ; real_T Out1_Y0_h1hfpmobwd ;
real_T _Value_aoa3qlkd0e ; real_T Out1_Y0_ehx1uu0cw2 ; real_T
_Value_pqclabbqjz ; real_T Out1_Y0_fdrjxiqubo ; real_T _Value_kavpdvabg3 ;
real_T Out1_Y0_gzv4zlulfe ; real_T _Value_jepqci1sls ; real_T
Out1_Y0_or2evzufnc ; real_T _Value_emsy2kf03z ; real_T Out1_Y0_gzg4wgfgez ;
real_T _Value_gxprfvv351 ; real_T Out1_Y0_aubpo3nrac ; real_T
_Value_fokxwq4moa ; real_T Out1_Y0_j5rsktxloz ; real_T _Value_j0ve2kusbf ;
real_T Out1_Y0_gunzu1r2dc ; real_T _Value_dnf5gfu1rh ; real_T
Out1_Y0_e0vzmgqmeo ; real_T _Value_asdy2eagkh ; real_T Integrator1_IC ;
real_T Constant3_Value ; real_T Constant5_Value ; real_T Integrator3_IC ;
real_T Integrator2_IC ; real_T theta2_Value ; real_T theta3_Gain ; real_T
Constant2_Value ; real_T theta3u_Gain ; real_T theta3u2_Gain ; real_T
Integrator_IC ; real_T theta3u1_Gain ; real_T theta4_Gain ; real_T
gravedad_Value ; real_T theta5_Gain ; real_T Constant4_Value ; real_T
theta3u3_Gain ; real_T xdata_Value [ 101 ] ; real_T Weight_Value ; real_T
ref_Value ; real_T MN_Value [ 101 ] ; real_T Weight_Value_pududzysjn ; real_T
N_Value [ 101 ] ; real_T Weight_Value_hubpek2poe ; real_T
Weight_Value_ehsm5daqtd ; real_T Weight_Value_pvh3y03vxm ; real_T Z_Value [
101 ] ; real_T Weight_Value_jj4cd2xy0d ; real_T P_Value [ 101 ] ; real_T
Weight_Value_alvw05kdd5 ; real_T Weight_Value_htlrwjjtxf ; real_T
Weight_Value_juw44cgvfu ; real_T MP_Value [ 101 ] ; real_T Zero_Value ;
real_T MidRange_Value ; real_T Switch_Threshold ; real_T Constant_Value ;
real_T Constant1_Value ; real_T theta1_Gain ; real_T Gain1_Gain ; real_T
Gain2_Gain ; real_T Gain3_Gain ; real_T J2_Value ; real_T
Block1_SimMechanicsRuntimeParameters [ 235 ] ; real_T gain_1_Gain ; real_T
gain_1_Gain_khydmkfqx5 ; real_T Weight_Value_ojfvrh4hxa ; real_T
MN_Value_nhu3p3vkgq [ 101 ] ; real_T Weight_Value_h25spuf2zv ; real_T
N_Value_pemlksllfn [ 101 ] ; real_T Weight_Value_pj0j10o3vs ; real_T
Weight_Value_ccv0ftayod ; real_T Weight_Value_chgtvqhek5 ; real_T
Z_Value_oxr23hquuw [ 101 ] ; real_T Weight_Value_lv4t0hq1dn ; real_T
P_Value_knsfabkpzq [ 101 ] ; real_T Weight_Value_ew3gbnyblt ; real_T
Weight_Value_dz3lblkjya ; real_T Weight_Value_fe223spjh1 ; real_T
MP_Value_dmhqm2iaki [ 101 ] ; real_T SOURCE_BLOCK_Value [ 3 ] ; real_T
_gravity_conversion_Gain ; fpimvfa1ln g4fc3ldju0 ; etcjr0mlkv ekfwu0hpre ;
fpimvfa1ln igiuzo43id ; etcjr0mlkv m2cbqdkmyt ; fpimvfa1ln cd0klnxe5e ;
etcjr0mlkv j233qqg3cw ; fpimvfa1ln afilxdebiw ; etcjr0mlkv mq452nktsz ;
fpimvfa1ln lrta3tnmvf ; etcjr0mlkv kuwsbsczxm ; fpimvfa1ln o4c5zxua1u ;
etcjr0mlkv o0irhh05y2 ; fpimvfa1ln hhlzsnyecs ; etcjr0mlkv p2ylzee5yp ;
fpimvfa1ln jklr3qa21n ; etcjr0mlkv lot1uzsgk1 ; fpimvfa1ln porftqf14e ;
etcjr0mlkv kpwofrtpwl ; fpimvfa1ln d4wvgok5de ; etcjr0mlkv pdgbwqy0nw ;
fpimvfa1ln f2fhxhgtii ; etcjr0mlkv kqfynxybrx ; fpimvfa1ln b0bats30sii ;
etcjr0mlkv e4wvvzd2u2n ; } ; extern P rtP ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern ExtU rtU ; extern SimStruct * const rtS ; extern const int_T
gblNumToFiles ; extern const int_T gblNumFrFiles ; extern const int_T
gblNumFrWksBlocks ; extern rtInportTUtable * gblInportTUtables ; extern const
char * gblInportFileName ; extern const int_T gblNumRootInportBlks ; extern
const int_T gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ;
extern const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [
] ; extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ;
#endif
