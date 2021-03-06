#include <mach/mt_typedefs.h>

#define TEMPERATURE_T0                  110
#define TEMPERATURE_T1                  0
#define TEMPERATURE_T2                  25
#define TEMPERATURE_T3                  50
#define TEMPERATURE_T                   255 // This should be fixed, never change the value

#define FG_METER_RESISTANCE 	0

#define MAX_BOOTING_TIME_FGCURRENT	1*10 // 10s

#if defined(CONFIG_POWER_EXT)
#define OCV_BOARD_COMPESATE	72 //mV 
#define R_FG_BOARD_BASE		1000
#define R_FG_BOARD_SLOPE	1000 //slope
#else
#define OCV_BOARD_COMPESATE	0 //mV 
#define R_FG_BOARD_BASE		1000
#define R_FG_BOARD_SLOPE	1000 //slope
#endif

#define Q_MAX_POS_50	2490
#define Q_MAX_POS_25	2468
#define Q_MAX_POS_0		2310
#define Q_MAX_NEG_10	1858

#define Q_MAX_POS_50_H_CURRENT	2472
#define Q_MAX_POS_25_H_CURRENT	2430
#define Q_MAX_POS_0_H_CURRENT	  1837
#define Q_MAX_NEG_10_H_CURRENT	1030

#define R_FG_VALUE 				20 // mOhm, base is 20
#define CURRENT_DETECT_R_FG	10  //1mA

#define OSR_SELECT_7			0

#define CAR_TUNE_VALUE			97 //1.00  //mingquan.lai modify 20121227 --customization

/////////////////////////////////////////////////////////////////////
// <DOD, Battery_Voltage> Table
/////////////////////////////////////////////////////////////////////
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
	{0   , 4300},         
	{2   , 4279},         
	{3   , 4261},         
	{5   , 4241},         
	{6   , 4220},         
	{8   , 4197},         
	{10  , 4175},         
	{11  , 4155},         
	{13  , 4139},         
	{14  , 4124},         
	{16  , 4111},         
	{18  , 4100},         
	{19  , 4089},         
	{21  , 4079},         
	{22  , 4067},         
	{24  , 4051},         
	{26  , 4032},         
	{27  , 4014},         
	{29  , 3999},         
	{31  , 3986},         
	{32  , 3977},         
	{34  , 3966},         
	{35  , 3958},         
	{37  , 3947},         
	{39  , 3938},         
	{40  , 3927},         
	{42  , 3917},         
	{43  , 3906},         
	{45  , 3895},         
	{47  , 3885},         
	{48  , 3875},         
	{50  , 3867},         
	{51  , 3859},         
	{53  , 3851},         
	{55  , 3845},         
	{56  , 3839},         
	{58  , 3833},         
	{59  , 3829},         
	{61  , 3823},         
	{63  , 3818},         
	{64  , 3813},         
	{66  , 3809},         
	{67  , 3806},         
	{69  , 3801},         
	{71  , 3798},         
	{72  , 3795},         
	{74  , 3792},         
	{76  , 3790},         
	{77  , 3788},         
	{79  , 3786},         
	{80  , 3784},         
	{82  , 3782},         
	{84  , 3780},         
	{85  , 3777},         
	{87  , 3775},         
	{88  , 3773},         
	{89  , 3772},         
	{90  , 3770},         
	{91  , 3768},         
	{92  , 3767},         
	{92  , 3766},          
  {93  , 3764},
  {94  , 3764},
  {94  , 3763},
  {95  , 3762},
  {95  , 3761},
  {95  , 3759},
  {96  , 3759},
  {96  , 3758},
  {96  , 3757},
	{97  , 3755}, 
	{97  , 3755},
	{97  , 3753},
	{97  , 3753},
	{98  , 3753},
	{98  , 3751}, 
	{98  , 3750},	    
	{98  , 3749}, 
	{98  , 3748}, 
	{99  , 3748}, 
	{99  , 3747}, 
	{99  , 3746}, 
	{99  , 3744}, 
	{99  , 3743}, 
	{99  , 3742}, 
	{99  , 3741}, 	 
	{100 , 3741},
	{100 , 3740}, 
	{100 , 3739}, 
	{100 , 3739},	
	{100 , 3400}
};      
         
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{              
	{0   , 4312},
	{1   , 4288},
	{3   , 4271},
	{4   , 4256},
	{5   , 4242},
	{6   , 4227},
	{8   , 4214},
	{9   , 4199},
	{10  , 4186},
	{12  , 4173},
	{13  , 4160},
	{14  , 4147},
	{15  , 4134},
	{17  , 4122},
	{18  , 4110},
	{19  , 4097},
	{21  , 4088},
	{22  , 4080},
	{23  , 4068},
	{25  , 4054},
	{26  , 4037},
	{27  , 4020},
	{28  , 4006},
	{30  , 3995},
	{31  , 3984},
	{32  , 3975},
	{34  , 3966},
	{35  , 3956},
	{36  , 3947},
	{37  , 3936},
	{39  , 3924},
	{40  , 3912},
	{41  , 3900},
	{43  , 3888},
	{44  , 3877},
	{45  , 3868},
	{47  , 3860},
	{48  , 3853},
	{49  , 3846},
	{50  , 3840},
	{52  , 3834},
	{53  , 3829},
	{54  , 3824},
	{56  , 3820},
	{57  , 3814},
	{58  , 3810},
	{59  , 3806},
	{61  , 3802},
	{62  , 3798},
	{63  , 3795},
	{65  , 3791},
	{66  , 3789},
	{67  , 3786},
	{68  , 3786},
	{70  , 3783},
	{71  , 3782},
	{72  , 3779},
	{74  , 3778},
	{75  , 3776},
	{76  , 3773},
	{78  , 3771},
  {79  , 3766},
  {80  , 3762},
  {81  , 3756},
  {83  , 3748},
  {84  , 3741},
  {85  , 3730},
  {87  , 3720},
  {88  , 3710},
  {89  , 3704},
	{90  , 3699},
	{92  , 3696},
	{93  , 3694},
	{94  , 3691},
	{96  , 3688},
	{96  , 3686},
	{97  , 3682},
	{97  , 3679},
	{98  , 3675},
	{98  , 3669},
	{99  , 3663},
	{99  , 3656},
	{99  , 3650},
	{99  , 3644},
	{99  , 3639},
	{100 , 3634},
	{100 , 3630},
	{100 , 3627},
	{100 , 3622},
	{100 , 3619},
	{100 , 3400} 
};             


// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{              
	{0   , 4337},
	{1   , 4321},
	{2   , 4307},
	{4   , 4292},
	{5   , 4278},
	{6   , 4265},
	{7   , 4251},
	{8   , 4237},
	{10  , 4224},
	{11  , 4211},
	{12  , 4197},
	{13  , 4184},
	{15  , 4172},
	{16  , 4158},
	{17  , 4146},
	{18  , 4133},
	{19  , 4121},
	{21  , 4107},
	{22  , 4096},
	{23  , 4084},
	{24  , 4075},
	{25  , 4064},
	{27  , 4052},
	{28  , 4038},
	{29  , 4025},
	{30  , 4012},
	{31  , 4001},
	{33  , 3990},
	{34  , 3981},
	{35  , 3973},
	{36  , 3964},
	{37  , 3957},
	{39  , 3947},
	{40  , 3937},
	{41  , 3925},
	{42  , 3911},
	{44  , 3896},
	{45  , 3883},
	{46  , 3872},
	{47  , 3863},
	{48  , 3855},
	{50  , 3849},
	{51  , 3843},
	{52  , 3837},
	{53  , 3832},
	{54  , 3826},
	{56  , 3822},
	{57  , 3817},
	{58  , 3812},
	{59  , 3807},
	{60  , 3804},
	{62  , 3799},
	{63  , 3796},
	{64  , 3793},
	{65  , 3788},
	{67  , 3785},
	{68  , 3783},
	{69  , 3779},
	{70  , 3777},
	{71  , 3773},
	{73  , 3771},
  {74  , 3767},
  {75  , 3764},
  {76  , 3760},
  {77  , 3755},
  {79  , 3750},
  {80  , 3744},
  {81  , 3739},
  {82  , 3731},
  {83  , 3720},
	{85  , 3711},
	{86  , 3698},
	{87  , 3689},
	{88  , 3687},
	{90  , 3686},
	{91  , 3686},
	{92  , 3684},
	{93  , 3682},
	{94  , 3678},
	{96  , 3663},
	{97  , 3618},
	{98  , 3560},
	{99  , 3481},
	{100 , 3366},
	{100 , 3331},
	{100 , 3315},
	{100 , 3305},
	{100 , 3300},
	{100 , 3295},
	{100 , 3293},
	{100 , 3290} 
};             


// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{              
	{0   , 4343},
	{1   , 4329},
	{2   , 4314},
	{4   , 4300},
	{5   , 4286},
	{6   , 4273},
	{7   , 4258},
	{8   , 4245},
	{10  , 4232},
	{11  , 4219},
	{12  , 4204},
	{13  , 4191},
	{15  , 4178},
	{16  , 4165},
	{17  , 4152},
	{18  , 4139},
	{19  , 4126},
	{21  , 4114},
	{22  , 4103},
	{23  , 4089},
	{24  , 4078},
	{25  , 4065},
	{27  , 4055},
	{28  , 4043},
	{29  , 4031},
	{30  , 4020},
	{31  , 4008},
	{33  , 3998},
	{34  , 3988},
	{35  , 3980},
	{36  , 3969},
	{37  , 3960},
	{39  , 3952},
	{40  , 3941},
	{41  , 3932},
	{42  , 3922},
	{44  , 3910},
	{45  , 3894},
	{46  , 3880},
	{47  , 3869},
	{48  , 3861},
	{50  , 3853},
	{51  , 3847},
	{52  , 3840},
	{53  , 3834},
	{54  , 3829},
	{56  , 3824},
	{57  , 3819},
	{58  , 3814},
	{59  , 3809},
	{60  , 3804},
	{62  , 3800},
	{63  , 3795},
	{64  , 3792},
	{65  , 3788},
	{67  , 3785},
	{68  , 3782},
	{69  , 3778},
	{70  , 3774},
	{71  , 3768},
	{73  , 3759},
  {74  , 3753},
  {75  , 3750},
  {76  , 3746},
  {77  , 3742},
  {79  , 3736},
  {80  , 3731},
  {81  , 3726},
  {82  , 3721},
  {84  , 3713},
	{85  , 3704},
	{86  , 3694},
	{87  , 3681},
	{88  , 3675},
	{90  , 3673},
	{91  , 3672},
	{92  , 3671},
	{93  , 3669},
	{94  , 3667},
	{96  , 3661},
	{97  , 3635},
	{98  , 3590},
	{99  , 3532},
	{100 , 3450},
	{100 , 3326},
	{100 , 3269},
	{100 , 3256},
	{100 , 3251},
	{100 , 3247},
	{100 , 3246},
	{100 , 3244} 
};             
           

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },          
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }, 
	{0  , 0 },	    
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 },   
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }  
};      

/////////////////////////////////////////////////////////////////////
// <Rbat, Battery_Voltage> Table
/////////////////////////////////////////////////////////////////////
typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{              
	{743  , 4300},
	{743  , 4279},
	{768  , 4261},
	{783  , 4241},
	{793  , 4220},
	{813  , 4197},
	{843  , 4175},
	{873  , 4155},
	{898  , 4139},
	{910  , 4124},
	{918  , 4111},
	{928  , 4100},
	{933  , 4089},
	{948  , 4079},
	{960  , 4067},
	{965  , 4051},
	{973  , 4032},
	{983  , 4014},
	{998  , 3999},
	{1003 , 3986},
	{1018 , 3977},
	{1023 , 3966},
	{1033 , 3958},
	{1033 , 3947},
	{1043 , 3938},
	{1043 , 3927},
	{1045 , 3917},
	{1048 , 3906},
	{1055 , 3895},
	{1060 , 3885},
	{1065 , 3875},
	{1075 , 3867},
	{1083 , 3859},
	{1090 , 3851},
	{1100 , 3845},
	{1110 , 3839},
	{1120 , 3833},
	{1135 , 3829},
	{1145 , 3823},
	{1155 , 3818},
	{1168 , 3813},
	{1180 , 3809},
	{1198 , 3806},
	{1200 , 3801},
	{1215 , 3798},
	{1235 , 3795},
	{1245 , 3792},
	{1268 , 3790},
	{1290 , 3788},
	{1315 , 3786},
	{1340 , 3784},
	{1363 , 3782},
	{1388 , 3780},
	{1413 , 3777},
	{1438 , 3775},
	{1433 , 3773},
	{1433 , 3772},
	{1425 , 3770},
	{1423 , 3768},
	{1420 , 3767},
	{1415 , 3766},
  {1410 , 3764},
  {1410 , 3764},
  {1408 , 3763},
  {1405 , 3762},
  {1403 , 3761},
  {1400 , 3759},
  {1400 , 3759},
  {1395 , 3758},
  {1395 , 3757},
	{1390 , 3755},
	{1390 , 3755},
	{1385 , 3753},
	{1388 , 3753},
	{1385 , 3753},
	{1380 , 3751},
	{1378 , 3750},
	{1373 , 3749},
	{1373 , 3748},
	{1375 , 3748},
	{1373 , 3747},
	{1368 , 3746},
	{1363 , 3744},
	{1358 , 3743},
	{1358 , 3742},
	{1353 , 3741},
	{1358 , 3741},
	{1358 , 3740},
	{1348 , 3739},
	{1350 , 3739},
	{505  , 3400} 
};             
              

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{              
	{450  , 4312},
	{450  , 4288},
	{460  , 4271},
	{470  , 4256},
	{478  , 4242},
	{483  , 4227},
	{488  , 4214},
	{485  , 4199},
	{493  , 4186},
	{500  , 4173},
	{503  , 4160},
	{505  , 4147},
	{513  , 4134},
	{518  , 4122},
	{523  , 4110},
	{523  , 4097},
	{533  , 4088},
	{545  , 4080},
	{553  , 4068},
	{558  , 4054},
	{560  , 4037},
	{558  , 4020},
	{565  , 4006},
	{570  , 3995},
	{573  , 3984},
	{578  , 3975},
	{583  , 3966},
	{583  , 3956},
	{588  , 3947},
	{590  , 3936},
	{588  , 3924},
	{585  , 3912},
	{585  , 3900},
	{583  , 3888},
	{583  , 3877},
	{585  , 3868},
	{590  , 3860},
	{598  , 3853},
	{603  , 3846},
	{613  , 3840},
	{620  , 3834},
	{628  , 3829},
	{635  , 3824},
	{650  , 3820},
	{653  , 3814},
	{665  , 3810},
	{673  , 3806},
	{683  , 3802},
	{693  , 3798},
	{700  , 3795},
	{710  , 3791},
	{720  , 3789},
	{730  , 3786},
	{750  , 3786},
	{763  , 3783},
	{785  , 3782},
	{808  , 3779},
	{833  , 3778},
	{853  , 3776},
	{868  , 3773},
	{888  , 3771},
  {900  , 3766},
  {918  , 3762},
  {933  , 3756},
  {948  , 3748},
  {965  , 3741},
  {978  , 3730},
  {1000 , 3720},
  {1015 , 3710},
  {1035 , 3704},
	{1060 , 3699},
	{1090 , 3696},
	{1128 , 3694},
	{1178 , 3691},
	{1220 , 3688},
	{1215 , 3686},
	{1205 , 3682},
	{1200 , 3679},
	{1188 , 3675},
	{1175 , 3669},
	{1163 , 3663},
	{1140 , 3656},
	{1125 , 3650},
	{1110 , 3644},
	{1100 , 3639},
	{1090 , 3634},
	{1080 , 3630},
	{1070 , 3627},
	{1060 , 3622},
	{1050 , 3619},
	{503  , 3400} 
}; 

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{              
	{148 , 4337},
	{160 , 4321},
	{165 , 4307},
	{165 , 4292},
	{165 , 4278},
	{168 , 4265},
	{170 , 4251},
	{168 , 4237},
	{170 , 4224},
	{173 , 4211},
	{173 , 4197},
	{175 , 4184},
	{178 , 4172},
	{178 , 4158},
	{180 , 4146},
	{178 , 4133},
	{183 , 4121},
	{180 , 4107},
	{183 , 4096},
	{183 , 4084},
	{188 , 4075},
	{190 , 4064},
	{190 , 4052},
	{193 , 4038},
	{195 , 4025},
	{198 , 4012},
	{200 , 4001},
	{200 , 3990},
	{203 , 3981},
	{210 , 3973},
	{210 , 3964},
	{215 , 3957},
	{215 , 3947},
	{215 , 3937},
	{210 , 3925},
	{200 , 3911},
	{190 , 3896},
	{185 , 3883},
	{178 , 3872},
	{173 , 3863},
	{170 , 3855},
	{175 , 3849},
	{175 , 3843},
	{175 , 3837},
	{180 , 3832},
	{180 , 3826},
	{183 , 3822},
	{185 , 3817},
	{188 , 3812},
	{185 , 3807},
	{190 , 3804},
	{188 , 3799},
	{195 , 3796},
	{198 , 3793},
	{198 , 3788},
	{193 , 3785},
	{193 , 3783},
	{193 , 3779},
	{200 , 3777},
	{198 , 3773},
	{195 , 3771},
  {198 , 3767},
  {198 , 3764},
  {200 , 3760},
  {208 , 3755},
  {218 , 3750},
  {220 , 3744},
  {225 , 3739},
  {223 , 3731},
  {228 , 3720},
	{228 , 3711},
	{223 , 3698},
	{220 , 3689},
	{218 , 3687},
	{225 , 3686},
	{240 , 3686},
	{255 , 3684},
	{265 , 3682},
	{275 , 3678},
	{283 , 3663},
	{283 , 3618},
	{300 , 3560},
	{335 , 3481},
	{373 , 3366},
	{330 , 3331},
	{288 , 3315},
	{265 , 3305},
	{250 , 3300},
	{243 , 3295},
	{238 , 3293},
	{230 , 3290} 
};

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{              
	{148 , 4343},
	{110 , 4329},
	{105 , 4314},
	{108 , 4300},
	{105 , 4286},
	{113 , 4273},
	{108 , 4258},
	{110 , 4245},
	{110 , 4232},
	{118 , 4219},
	{113 , 4204},
	{113 , 4191},
	{115 , 4178},
	{118 , 4165},
	{115 , 4152},
	{118 , 4139},
	{118 , 4126},
	{120 , 4114},
	{125 , 4103},
	{123 , 4089},
	{123 , 4078},
	{123 , 4065},
	{125 , 4055},
	{125 , 4043},
	{125 , 4031},
	{128 , 4020},
	{130 , 4008},
	{133 , 3998},
	{133 , 3988},
	{138 , 3980},
	{138 , 3969},
	{140 , 3960},
	{143 , 3952},
	{143 , 3941},
	{145 , 3932},
	{148 , 3922},
	{143 , 3910},
	{130 , 3894},
	{120 , 3880},
	{118 , 3869},
	{115 , 3861},
	{113 , 3853},
	{115 , 3847},
	{115 , 3840},
	{115 , 3834},
	{118 , 3829},
	{123 , 3824},
	{125 , 3819},
	{125 , 3814},
	{123 , 3809},
	{125 , 3804},
	{128 , 3800},
	{128 , 3795},
	{130 , 3792},
	{130 , 3788},
	{133 , 3785},
	{135 , 3782},
	{135 , 3778},
	{133 , 3774},
	{128 , 3768},
	{120 , 3759},
  {120 , 3753},
  {125 , 3750},
  {125 , 3746},
  {128 , 3742},
  {125 , 3736},
  {125 , 3731},
  {125 , 3726},
  {128 , 3721},
  {128 , 3713},
	{128 , 3704},
	{130 , 3694},
	{125 , 3681},
	{125 , 3675},
	{125 , 3673},
	{130 , 3672},
	{135 , 3671},
	{138 , 3669},
	{140 , 3667},
	{143 , 3661},
	{140 , 3635},
	{153 , 3590},
	{168 , 3532},
	{175 , 3450},
	{195 , 3326},
	{175 , 3269},
	{145 , 3256},
	{130 , 3251},
	{123 , 3247},
	{120 , 3246},
	{115 , 3244} 
};

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },         
	{0  , 0 },          
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
  {0  , 0 },
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }, 
	{0  , 0 },	    
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 },   
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }, 
	{0  , 0 }  
};   


int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

//#define CONFIG_POWER_VERIFY