#ifndef THERMISTORTABLES_H_
#define THERMISTORTABLES_H_

#if (THERMISTORHEATER == 1) || (THERMISTORBED == 1) //100k bed thermistor


#define NUMTEMPS_1 61
const short temptable_1[NUMTEMPS_1][2] = {
{	23	,	300	},
{	25	,	295	},
{	27	,	290	},
{	28	,	285	},
{	31	,	280	},
{	33	,	275	},
{	35	,	270	},
{	38	,	265	},
{	41	,	260	},
{	44	,	255	},
{	48	,	250	},
{	52	,	245	},
{	56	,	240	},
{	61	,	235	},
{	66	,	230	},
{	71	,	225	},
{	78	,	220	},
{	84	,	215	},
{	92	,	210	},
{	100	,	205	},
{	109	,	200	},
{	120	,	195	},
{	131	,	190	},
{	143	,	185	},
{	156	,	180	},
{	171	,	175	},
{	187	,	170	},
{	205	,	165	},
{	224	,	160	},
{	245	,	155	},
{	268	,	150	},
{	293	,	145	},
{	320	,	140	},
{	348	,	135	},
{	379	,	130	},
{	411	,	125	},
{	445	,	120	},
{	480	,	115	},
{	516	,	110	},
{	553	,	105	},
{	591	,	100	},
{	628	,	95	},
{	665	,	90	},
{	702	,	85	},
{	737	,	80	},
{	770	,	75	},
{	801	,	70	},
{	830	,	65	},
{	857	,	60	},
{	881	,	55	},
{	903	,	50	},
{	922	,	45	},
{	939	,	40	},
{	954	,	35	},
{	966	,	30	},
{	977	,	25	},
{	985	,	20	},
{	993	,	15	},
{	999	,	10	},
{	1004	,	5	},
{	1008	,	0	} //safety
};
#endif

#if (THERMISTORHEATER == 2) || (THERMISTORBED == 2) //200k bed thermistor verified by arcol
#define NUMTEMPS_2 64
const short temptable_2[NUMTEMPS_2][2] = {
   {  16, 315},
   {  17, 310},
   {  18, 305},
   {  19, 300},
   {  20, 295},
   {  21, 290},
   {  22, 285},
   {  23, 280},
   {  24, 275},
   {  25, 270},
   {  29, 265},
   {  30, 260},
   {  35, 255},
   {  40, 250},
   {  45, 245},
   {  50, 240},
   {  55, 235},
   {  60, 230},
   {  65, 225},
   {  70, 220},
   {  90, 215},
   {  95, 210},
   { 103, 205},
   { 105, 200},
   { 115, 195},
   { 130, 190},
   { 150, 185},
   { 167, 180},
   { 190, 175},
   { 200, 170},
   { 230, 165},
   { 250, 160},
   { 270, 155},
   { 300, 150},
   { 330, 145},
   { 360, 140},
   { 380, 135},
   { 408, 130},
   { 450, 125},
   { 500, 120},
   { 530, 115},
   { 550, 110},
   { 570, 105},
   { 595, 100},
   { 615,  95},
   { 640,  90},
   { 665,  85},
   { 700,  80},
   { 740,  75},
   { 780,  70},
   { 810,  65},
   { 840,  60},
   { 880,  55},
   { 920,  50},
   { 960,  45},
   { 980,  40},
   { 990,  35},
   {1000,  30},
   {1005,  25},
   {1006,  20},
   {1009,  15},
   {1010,  10},
   {1020,   5},
   {1023,   0} //safety
};

#endif

#if (THERMISTORHEATER == 3) || (THERMISTORBED == 3) //mendel-parts
#define NUMTEMPS_3 28
const short temptable_3[NUMTEMPS_3][2] = {
		{1,864},
		{21,300},
		{25,290},
		{29,280},
		{33,270},
		{39,260},
		{46,250},
		{54,240},
		{64,230},
		{75,220},
		{90,210},
		{107,200},
		{128,190},
		{154,180},
		{184,170},
		{221,160},
		{265,150},
		{316,140},
		{375,130},
		{441,120},
		{513,110},
		{588,100},
		{734,80},
		{856,60},
		{938,40},
		{986,20},
		{1008,0},
		{1018,-20}
	};

#endif

#if (THERMISTORHEATER == 4) || (THERMISTORBED == 4) //10k thermistor
#define NUMTEMPS_4 20
const short temptable_4[NUMTEMPS_4][2] = {
   {1, 430},
   {54, 137},
   {107, 107},
   {160, 91},
   {213, 80},
   {266, 71},
   {319, 64},
   {372, 57},
   {425, 51},
   {478, 46},
   {531, 41},
   {584, 35},
   {637, 30},
   {690, 25},
   {743, 20},
   {796, 14},
   {849, 7},
   {902, 0},
   {955, -11},
   {1008, -35}
};
#endif

#if (THERMISTORHEATER == 5) || (THERMISTORBED == 5) //100k ParCan thermistor (104GT-2)
#define NUMTEMPS_5 61
const short temptable_5[NUMTEMPS_5][2] = {
{1, 713},
{18, 316},
{35, 266},
{52, 239},
{69, 221},
{86, 208},
{103, 197},
{120, 188},
{137, 181},
{154, 174},
{171, 169},
{188, 163},
{205, 159},
{222, 154},
{239, 150},
{256, 147},
{273, 143},
{290, 140},
{307, 136},
{324, 133},
{341, 130},
{358, 128},
{375, 125},
{392, 122},
{409, 120},
{426, 117},
{443, 115},
{460, 112},
{477, 110},
{494, 108},
{511, 106},
{528, 103},
{545, 101},
{562, 99},
{579, 97},
{596, 95},
{613, 92},
{630, 90},
{647, 88},
{664, 86},
{681, 84},
{698, 81},
{715, 79},
{732, 77},
{749, 75},
{766, 72},
{783, 70},
{800, 67},
{817, 64},
{834, 61},
{851, 58},
{868, 55},
{885, 52},
{902, 48},
{919, 44},
{936, 40},
{953, 34},
{970, 28},
{987, 20},
{1004, 8},
{1021, 0}
};
#endif

#if (THERMISTORHEATER == 6) || (THERMISTORBED == 6) // 100k Epcos thermistor
#define NUMTEMPS_6 36
const short temptable_6[NUMTEMPS_6][2] = {
   {28, 250},
   {31, 245},
   {35, 240},
   {39, 235},
   {42, 230},
   {44, 225},
   {49, 220},
   {53, 215},
   {62, 210},
   {71, 205}, //fitted graphically
   {78, 200}, //fitted graphically
   {94, 190},
   {102, 185},
   {116, 170},
   {143, 160},
   {183, 150},
   {223, 140},
   {270, 130},
   {318, 120},
   {383, 110},
   {413, 105},
   {439, 100},
   {484, 95},
   {513, 90},
   {607, 80},
   {664, 70},
   {781, 60},
   {810, 55},
   {849, 50},
   {914, 45},
   {914, 40},
   {935, 35},
   {954, 30},
   {970, 25},
   {978, 22},
   {1008, 3}
};
#endif

#if (THERMISTORHEATER == 7) || (THERMISTORBED == 7) // 100k Honeywell 135-104LAG-J01
#define NUMTEMPS_7 55
const short temptable_7[NUMTEMPS_7][2] = {
   {46, 270},
   {50, 265},
   {54, 260},
   {58, 255},
   {62, 250},
   {67, 245},
   {72, 240},
   {79, 235},
   {85, 230},
   {91, 225},
   {99, 220},
   {107, 215},
   {116, 210},
   {126, 205},
   {136, 200},
   {149, 195},
   {160, 190},
   {175, 185},
   {191, 180},
   {209, 175},
   {224, 170},
   {246, 165},
   {267, 160},
   {293, 155},
   {316, 150},
   {340, 145},
   {364, 140},
   {396, 135},
   {425, 130},
   {460, 125},
   {489, 120},
   {526, 115},
   {558, 110},
   {591, 105},
   {628, 100},
   {660, 95},
   {696, 90},
   {733, 85},
   {761, 80},
   {794, 75},
   {819, 70},
   {847, 65},
   {870, 60},
   {892, 55},
   {911, 50},
   {929, 45},
   {944, 40},
   {959, 35},
   {971, 30},
   {981, 25},
   {989, 20},
   {994, 15},
   {1001, 10},
   {1005, 5},
   {1021, 0} //safety
};
#endif

#if (THERMISTORHEATER == 10) || (THERMISTORBED == 10) 
//100k bed thermistor
// Thermistor lookup table for RepRap Temperature Sensor Boards (http://make.rrrf.org/ts)
// Made with createTemperatureLookup.py (http://svn.reprap.org/trunk/reprap/firmware/Arduino/utilities/createTemperatureLookup.py)
// ./createTemperatureLookup.py --r0=100000 --t0=25 --r1=0 --r2=4700 --beta=3950 --max-adc=1023
// r0: 100000
// t0: 25
// r1: 0
// r2: 4700
// beta: 3950
// max adc: 1023

#define NUMTEMPS_10 103
const short temptable_10[NUMTEMPS_10][2] = {
   {1, 938},
   {11, 423},
   {21, 351},
   {31, 314},
   {41, 290},
   {51, 272},
   {61, 258},
   {71, 247},
   {81, 237},
   {91, 229},
   {101, 221},
   {111, 215},
   {121, 209},
   {131, 204},
   {141, 199},
   {151, 195},
   {161, 190},
   {171, 187},
   {181, 183},
   {191, 179},
   {201, 176},
   {211, 173},
   {221, 170},
   {231, 167},
   {241, 165},
   {251, 162},
   {261, 160},
   {271, 157},
   {281, 155},
   {291, 153},
   {301, 150},
   {311, 148},
   {321, 146},
   {331, 144},
   {341, 142},
   {351, 140},
   {361, 139},
   {371, 137},
   {381, 135},
   {391, 133},
   {401, 131},
   {411, 130},
   {421, 128},
   {431, 126},
   {441, 125},
   {451, 123},
   {461, 122},
   {471, 120},
   {481, 119},
   {491, 117},
   {501, 116},
   {511, 114},
   {521, 113},
   {531, 111},
   {541, 110},
   {551, 108},
   {561, 107},
   {571, 105},
   {581, 104},
   {591, 102},
   {601, 101},
   {611, 100},
   {621, 98},
   {631, 97},
   {641, 95},
   {651, 94},
   {661, 92},
   {671, 91},
   {681, 90},
   {691, 88},
   {701, 87},
   {711, 85},
   {721, 84},
   {731, 82},
   {741, 81},
   {751, 79},
   {761, 77},
   {771, 76},
   {781, 74},
   {791, 72},
   {801, 71},
   {811, 69},
   {821, 67},
   {831, 65},
   {841, 63},
   {851, 62},
   {861, 60},
   {871, 57},
   {881, 55},
   {891, 53},
   {901, 51},
   {911, 48},
   {921, 45},
   {931, 42},
   {941, 39},
   {951, 36},
   {961, 32},
   {971, 28},
   {981, 23},
   {991, 17},
   {1001, 9},
   {1011, -1},
   {1021, -26}
};
#endif

#if (THERMISTORHEATER == 11) || (THERMISTORBED == 11)
//Thermistor lookup table based on full Steinhart-Hart equation including quadratic term.
//   1/T = A + B.ln(R) + C.ln(R)^2 + D.ln(R)^3 (ln is natural log, T in kelvin, R in kilohms.
// Coefficients:
//   A: 2.22319060E-003
//   B: 2.22223700E-004
//   C: 4.00162697E-006
//   D: 0.00000000E+000
// Load resistor: 4650.000 ohm.
// ADC 0 - 1022 with 1024 corresponding to supply voltage of rload.
#define NUMTEMPS_11 32
const short temptable_11[NUMTEMPS_11][2] = {
   {1, 560},
   {2, 494},
   {3, 457},
   {4, 432},
   {6, 398},
   {9, 366},
   {11, 350},
   {15, 328},
   {17, 319},
   {20, 308},
   {22, 301},
   {28, 285},
   {34, 273},
   {43, 258},
   {55, 243},
   {68, 231},
   {91, 214},
   {128, 195},
   {168, 181},
   {178, 177},
   {219, 166},
   {282, 152},
   {352, 139},
   {428, 127},
   {767, 79},
   {839, 67},
   {916, 50},
   {965, 33},
   {995, 16},
   {1014, -7},
   {1019, -21},
   {1022, -40}
};
#endif

#if THERMISTORHEATER == 1
#define NUMTEMPS NUMTEMPS_1
#define temptable temptable_1
#elif THERMISTORHEATER == 2
#define NUMTEMPS NUMTEMPS_2
#define temptable temptable_2
#elif THERMISTORHEATER == 3
#define NUMTEMPS NUMTEMPS_3
#define temptable temptable_3
#elif THERMISTORHEATER == 4
#define NUMTEMPS NUMTEMPS_4
#define temptable temptable_4
#elif THERMISTORHEATER == 5
#define NUMTEMPS NUMTEMPS_5
#define temptable temptable_5
#elif THERMISTORHEATER == 6
#define NUMTEMPS NUMTEMPS_6
#define temptable temptable_6
#elif THERMISTORHEATER == 7
#define NUMTEMPS NUMTEMPS_7
#define temptable temptable_7
#elif THERMISTORHEATER == 10
#define NUMTEMPS NUMTEMPS_10
#define temptable temptable_10
#elif THERMISTORHEATER == 11
#define NUMTEMPS NUMTEMPS_11
#define temptable temptable_11
#elif defined HEATER_USES_THERMISTOR
#error No heater thermistor table specified
#endif

#if THERMISTORBED == 1
#define BNUMTEMPS NUMTEMPS_1
#define bedtemptable temptable_1
#elif THERMISTORBED == 2
#define BNUMTEMPS NUMTEMPS_2
#define bedtemptable temptable_2
#elif THERMISTORBED == 3
#define BNUMTEMPS NUMTEMPS_3
#define bedtemptable temptable_3
#elif THERMISTORBED == 4
#define BNUMTEMPS NUMTEMPS_4
#define bedtemptable temptable_4
#elif THERMISTORBED == 5
#define BNUMTEMPS NUMTEMPS_5
#define bedtemptable temptable_5
#elif THERMISTORBED == 6
#define BNUMTEMPS NUMTEMPS_6
#define bedtemptable temptable_6
#elif THERMISTORBED == 7
#define BNUMTEMPS NUMTEMPS_7
#define bedtemptable temptable_7
#elif THERMISTORBED == 10
#define BNUMTEMPS NUMTEMPS_10
#define bedtemptable temptable_10
#elif THERMISTORBED == 11
#define BNUMTEMPS NUMTEMPS_11
#define bedtemptable temptable_11
#elif defined BED_USES_THERMISTOR
#error No bed thermistor table specified
#endif

#endif //THERMISTORTABLES_H_
