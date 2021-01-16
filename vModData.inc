/*
	vModData 0.2

	mrks.cf | github.com/markski1

	Thanks to:
		RIDE2DAY - Bullbar definitions from his include vSync.
		open.mp Wiki contributors - Most data here.
		SACNR - Getting me into SA-MP development.

	Notes regarding vSync "vehicle synchronization" include:
		- You NEED vSync if you want to make use of the CARMODTYPE_FRONT_BULLBAR and CARMODTYPE_REAR_BULLBAR component types.
		  They're only defined here as a fallback if you decide not to use it, but they won't be usable for anything other than listing and applying them.
		- If you do use vSync, include it BEFORE this! This include defines a couple functions that already exist in vSync. If vSync is detected, they're
		  skipped here, thus avoiding compilation errors (and saving space in your script).
*/

#if !defined _vsync_included
	#define CARMODTYPE_FRONT_BULLBAR    14
	#define CARMODTYPE_REAR_BULLBAR     15
#endif

#define CARMODTYPE_INVALID              -1

static enum vmd_carmodFlags {
	carmod_type,
	carmod_name[40],
	carmod_price
}

static const vmd_carmodData[194][vmd_carmodFlags] = {
	{CARMODTYPE_SPOILER, "Pro spoiler", 400},
	{CARMODTYPE_SPOILER, "Win spoiler", 550},
	{CARMODTYPE_SPOILER, "Drag spoiler", 200},
	{CARMODTYPE_SPOILER, "Alpha spoiler", 250},
	{CARMODTYPE_HOOD, "Champhood", 100},
	{CARMODTYPE_HOOD, "Fury hood", 150},
	{CARMODTYPE_ROOF, "Scoop roof", 80},
	{CARMODTYPE_SIDESKIRT, "Right Sideskirt", 500},
	{CARMODTYPE_NITRO, "5 times", 500},
	{CARMODTYPE_NITRO, "2 times", 200},
	{CARMODTYPE_NITRO, "10 times", 1000},
	{CARMODTYPE_HOOD, "Race hood", 220},
	{CARMODTYPE_HOOD, "Worx hood", 250},
	{CARMODTYPE_LAMPS, "Round Fog", 100},
	{CARMODTYPE_SPOILER, "Champ spoiler", 400},
	{CARMODTYPE_SPOILER, "Race spoiler", 500},
	{CARMODTYPE_SPOILER, "Worx spoiler", 200},
	{CARMODTYPE_SIDESKIRT, "Left Sideskirt", 500},
	{CARMODTYPE_EXHAUST, "Upswept exhaust", 350},
	{CARMODTYPE_EXHAUST, "Twin exhaust", 300},
	{CARMODTYPE_EXHAUST, "Large exhaust", 250},
	{CARMODTYPE_EXHAUST, "Medium exhaust", 200},
	{CARMODTYPE_EXHAUST, "Small exhaust", 150},
	{CARMODTYPE_SPOILER, "Fury spoiler", 350},
	{CARMODTYPE_LAMPS, "Square Fog", 50},
	{CARMODTYPE_WHEELS, "Offroad", 1000},
	{CARMODTYPE_SIDESKIRT, "Right Alien Sideskirt", 480},
	{CARMODTYPE_SIDESKIRT, "Left Alien Sideskirt", 480},
	{CARMODTYPE_EXHAUST, "Alien exhaust", 770},
	{CARMODTYPE_EXHAUST, "X-Flow exhaust", 680},
	{CARMODTYPE_SIDESKIRT, "Left X-Flow Sideskirt", 370},
	{CARMODTYPE_SIDESKIRT, "Right X-Flow Sideskirt", 370},
	{CARMODTYPE_ROOF, "Alien roof", 170},
	{CARMODTYPE_ROOF, "X-Flow roof", 120},
	{CARMODTYPE_EXHAUST, "Alien exhaust", 790},
	{CARMODTYPE_ROOF, "X-Flow roof", 150},
	{CARMODTYPE_SIDESKIRT, "Right Alien Sideskirt", 500},
	{CARMODTYPE_EXHAUST, "X-Flow exhaust", 690},
	{CARMODTYPE_ROOF, "Alien roof", 190},
	{CARMODTYPE_SIDESKIRT, "Left X-Flow Sideskirt", 390},
	{CARMODTYPE_SIDESKIRT, "Left Alien Sideskirt", 500},
	{CARMODTYPE_SIDESKIRT, "Right X-Flow Sideskirt", 390},
	{CARMODTYPE_SIDESKIRT, "Right Chrome Sideskirt", 1000},
	{CARMODTYPE_EXHAUST, "Slamin exhaust", 500},
	{CARMODTYPE_EXHAUST, "Chrome exhaust", 500},
	{CARMODTYPE_EXHAUST, "X-Flow exhaust", 510},
	{CARMODTYPE_EXHAUST, "Alien exhaust", 710},
	{CARMODTYPE_SIDESKIRT, "Right Alien Sideskirt", 670},
	{CARMODTYPE_SIDESKIRT, "Right X-Flow Sideskirt", 530},
	{CARMODTYPE_SPOILER, "Alien spoiler", 810},
	{CARMODTYPE_SPOILER, "X-Flow spoiler", 620},
	{CARMODTYPE_SIDESKIRT, "Left Alien Sideskirt", 670},
	{CARMODTYPE_SIDESKIRT, "Left X-Flow Sideskirt", 530},
	{CARMODTYPE_ROOF, "X-Flow roof", 130},
	{CARMODTYPE_ROOF, "Alien roof", 210},
	{CARMODTYPE_ROOF, "Alien roof", 230},
	{CARMODTYPE_SIDESKIRT, "Right Alien Sideskirt", 520},
	{CARMODTYPE_SIDESKIRT, "Right X-Flow Sideskirt", 430},
	{CARMODTYPE_SPOILER, "Alien spoiler", 620},
	{CARMODTYPE_EXHAUST, "X-Flow exhaust", 720},
	{CARMODTYPE_SPOILER, "X-Flow spoiler", 530},
	{CARMODTYPE_ROOF, "X-Flow roof", 180},
	{CARMODTYPE_SIDESKIRT, "Left Alien Sideskirt", 550},
	{CARMODTYPE_SIDESKIRT, "Left X-Flow Sideskirt", 430},
	{CARMODTYPE_EXHAUST, "Alien exhaust", 830},
	{CARMODTYPE_EXHAUST, "Alien exhaust", 850},
	{CARMODTYPE_EXHAUST, "X-Flow exhaust", 750},
	{CARMODTYPE_ROOF, "Alien roof", 250},
	{CARMODTYPE_ROOF, "X-Flow roof", 200},
	{CARMODTYPE_SIDESKIRT, "Right Alien Sideskirt", 550},
	{CARMODTYPE_SIDESKIRT, "Right X-Flow Sideskirt", 450},
	{CARMODTYPE_SIDESKIRT, "Left Alien Sideskirt", 550},
	{CARMODTYPE_SIDESKIRT, "Left X-Flow Sideskirt", 450},
	{CARMODTYPE_WHEELS, "Shadow", 1100},
	{CARMODTYPE_WHEELS, "Mega", 1030},
	{CARMODTYPE_WHEELS, "Rimshine", 980},
	{CARMODTYPE_WHEELS, "Wires", 1560},
	{CARMODTYPE_WHEELS, "Classic", 1620},
	{CARMODTYPE_WHEELS, "Twist", 1200},
	{CARMODTYPE_WHEELS, "Cutter", 1030},
	{CARMODTYPE_WHEELS, "Switch", 900},
	{CARMODTYPE_WHEELS, "Grove", 1230},
	{CARMODTYPE_WHEELS, "Import", 820},
	{CARMODTYPE_WHEELS, "Dollar", 1560},
	{CARMODTYPE_WHEELS, "Trance", 1350},
	{CARMODTYPE_WHEELS, "Atomic", 770},
	{CARMODTYPE_STEREO, "Stereo", 100},
	{CARMODTYPE_HYDRAULICS, "Hydraulics", 1500},
	{CARMODTYPE_ROOF, "Alien roof", 150},
	{CARMODTYPE_EXHAUST, "X-Flow exhaust", 650},
	{CARMODTYPE_SIDESKIRT, "Right Alien Sideskirt", 450},
	{CARMODTYPE_ROOF, "X-Flow roof", 100},
	{CARMODTYPE_EXHAUST, "Alien exhaust", 750},
	{CARMODTYPE_SIDESKIRT, "Right X-Flow Sideskirt", 350},
	{CARMODTYPE_SIDESKIRT, "Left Alien Sideskirt", 450},
	{CARMODTYPE_SIDESKIRT, "Right X-Flow Sideskirt", 350},
	{CARMODTYPE_WHEELS, "Ahab", 1000},
	{CARMODTYPE_WHEELS, "Virtual", 620},
	{CARMODTYPE_WHEELS, "Access", 1140},
	{CARMODTYPE_SIDESKIRT, "Left Chrome Sideskirt", 1000},
	{CARMODTYPE_FRONT_BULLBAR, "Chrome Grill", 940},
	{CARMODTYPE_SIDESKIRT, "Left \"Chrome Flames\" Sideskirt", 780},
	{CARMODTYPE_SIDESKIRT, "Left \"Chrome Strip\" Sideskirt", 830},
	{CARMODTYPE_ROOF, "Covertible roof", 3250},
	{CARMODTYPE_EXHAUST, "Chrome exhaust", 1610},
	{CARMODTYPE_EXHAUST, "Slamin exhaust", 1540},
	{CARMODTYPE_SIDESKIRT, "Right \"Chrome Arches\" Sideskirt", 780},
	{CARMODTYPE_SIDESKIRT, "Left \"Chrome Strip\" Sideskirt", 780},
	{CARMODTYPE_SIDESKIRT, "Right \"Chrome Strip\" Sideskirt", 780},
	{CARMODTYPE_REAR_BULLBAR, "Chrome", 1610},
	{CARMODTYPE_REAR_BULLBAR, "Slamin", 1540},
	{CARMODTYPE_INVALID, "Invalid", 0},
	{CARMODTYPE_INVALID, "Invalid", 0},
	{CARMODTYPE_EXHAUST, "Chrome exhaust", 3340},
	{CARMODTYPE_EXHAUST, "Slamin exhaust", 3250},
	{CARMODTYPE_FRONT_BULLBAR, "Chrome", 2130},
	{CARMODTYPE_FRONT_BULLBAR, "Slamin", 2050},
	{CARMODTYPE_FRONT_BUMPER, "Chrome", 2040},
	{CARMODTYPE_SIDESKIRT, "Right \"Chrome Trim\" Sideskirt", 780},
	{CARMODTYPE_SIDESKIRT, "Right \"Wheelcovers\" Sideskirt", 940},
	{CARMODTYPE_SIDESKIRT, "Left \"Chrome Trim\" Sideskirt", 780},
	{CARMODTYPE_SIDESKIRT, "Left \"Wheelcovers\" Sideskirt", 940},
	{CARMODTYPE_SIDESKIRT, "Right \"Chrome Flames\" Sideskirt", 780},
	{CARMODTYPE_FRONT_BULLBAR, "Bullbar Chrome Bars", 860},
	{CARMODTYPE_SIDESKIRT, "Left \"Chrome Arches\" Sideskirt", 780},
	{CARMODTYPE_FRONT_BULLBAR, "Bullbar Chrome Lights", 1120},
	{CARMODTYPE_EXHAUST, "Chrome exhaust", 3340},
	{CARMODTYPE_EXHAUST, "Slamin exhaust", 3250},
	{CARMODTYPE_ROOF, "Vinyl roof Hardtop", 3340},
	{CARMODTYPE_EXHAUST, "Chrome exhaust", 1650},
	{CARMODTYPE_ROOF, "Hardtop roof", 3380},
	{CARMODTYPE_ROOF, "Softtop roof", 3290},
	{CARMODTYPE_EXHAUST, "Slamin exhaust", 1590},
	{CARMODTYPE_SIDESKIRT, "Right \"Chrome Strip\" Sideskirt", 830},
	{CARMODTYPE_SIDESKIRT, "Right \"Chrome Strip\" Sideskirt", 800},
	{CARMODTYPE_EXHAUST, "Slamin exhaust", 1500},
	{CARMODTYPE_EXHAUST, "Chrome exhaust", 1000},
	{CARMODTYPE_SIDESKIRT, "Left \"Chrome Strip\" Sideskirt", 800},
	{CARMODTYPE_SPOILER, "Alien spoiler", 580},
	{CARMODTYPE_SPOILER, "X-Flow spoiler", 470},
	{CARMODTYPE_REAR_BUMPER, "X-Flow rear bumper", 870},
	{CARMODTYPE_REAR_BUMPER, "Alien rear bumper", 980},
	{CARMODTYPE_VENT_LEFT, "Left Oval Vents", 150},
	{CARMODTYPE_VENT_RIGHT, "Right Oval Vents", 150},
	{CARMODTYPE_VENT_LEFT, "Left Square Vents", 100},
	{CARMODTYPE_VENT_RIGHT, "Right Square Vents", 100},
	{CARMODTYPE_SPOILER, "X-Flow spoiler", 490},
	{CARMODTYPE_SPOILER, "Alien spoiler", 600},
	{CARMODTYPE_REAR_BUMPER, "X-Flow rear bumper", 890},
	{CARMODTYPE_REAR_BUMPER, "Alien rear bumper", 1000},
	{CARMODTYPE_REAR_BUMPER, "Alien rear bumper", 1090},
	{CARMODTYPE_REAR_BUMPER, "X-Flow rear bumper", 840},
	{CARMODTYPE_FRONT_BUMPER, "X-Flow front bumper", 910},
	{CARMODTYPE_FRONT_BUMPER, "Alien front bumper", 1200},
	{CARMODTYPE_REAR_BUMPER, "Alien rear bumper", 1030},
	{CARMODTYPE_FRONT_BUMPER, "Alien front bumper", 1030},
	{CARMODTYPE_REAR_BUMPER, "X-Flow rear bumper", 920},
	{CARMODTYPE_FRONT_BUMPER, "X-Flow front bumper", 930},
	{CARMODTYPE_SPOILER, "X-Flow spoiler", 550},
	{CARMODTYPE_REAR_BUMPER, "Alien rear bumper", 1050},
	{CARMODTYPE_FRONT_BUMPER, "Alien front bumper", 1050},
	{CARMODTYPE_REAR_BUMPER, "X-Flow rear bumper", 950},
	{CARMODTYPE_SPOILER, "Alien spoiler", 650},
	{CARMODTYPE_SPOILER, "X-Flow spoiler", 450},
	{CARMODTYPE_SPOILER, "Alien spoiler", 550},
	{CARMODTYPE_FRONT_BUMPER, "X-Flow front bumper", 850},
	{CARMODTYPE_FRONT_BUMPER, "Alien front bumper", 950},
	{CARMODTYPE_REAR_BUMPER, "X-Flow rear bumper", 850},
	{CARMODTYPE_REAR_BUMPER, "Alien rear bumper", 950},
	{CARMODTYPE_FRONT_BUMPER, "Alien front bumper", 970},
	{CARMODTYPE_FRONT_BUMPER, "X-Flow front bumper", 880},
	{CARMODTYPE_FRONT_BUMPER, "Alien front bumper", 990},
	{CARMODTYPE_FRONT_BUMPER, "X-Flow front bumper", 900},
	{CARMODTYPE_FRONT_BUMPER, "X-Flow front bumper", 950},
	{CARMODTYPE_FRONT_BUMPER, "Chrome front bumper", 1000},
	{CARMODTYPE_FRONT_BUMPER, "Slamin front bumper", 900},
	{CARMODTYPE_REAR_BUMPER, "Chrome front bumper", 1000},
	{CARMODTYPE_REAR_BUMPER, "Slamin front bumper", 900},
	{CARMODTYPE_REAR_BUMPER, "Slamin front bumper", 2050},
	{CARMODTYPE_FRONT_BUMPER, "Chrome front bumper", 2150},
	{CARMODTYPE_REAR_BUMPER, "Chrome front bumper", 2130},
	{CARMODTYPE_FRONT_BUMPER, "Slamin front bumper", 2050},
	{CARMODTYPE_FRONT_BUMPER, "Chrome front bumper", 2130},
	{CARMODTYPE_REAR_BUMPER, "Slamin front bumper", 2040},
	{CARMODTYPE_REAR_BUMPER, "Chrome front bumper", 2150},
	{CARMODTYPE_FRONT_BUMPER, "Slamin front bumper", 2040},
	{CARMODTYPE_REAR_BUMPER, "Slamin front bumper", 2095},
	{CARMODTYPE_REAR_BUMPER, "Chrome front bumper", 2175},
	{CARMODTYPE_FRONT_BUMPER, "Slamin front bumper", 2080},
	{CARMODTYPE_FRONT_BUMPER, "Chrome front bumper", 2200},
	{CARMODTYPE_FRONT_BUMPER, "Slamin front bumper", 1200},
	{CARMODTYPE_FRONT_BUMPER, "Chrome front bumper", 1040},
	{CARMODTYPE_REAR_BUMPER, "Chrome front bumper", 940},
	{CARMODTYPE_REAR_BUMPER, "Slamin front bumper", 1100}
};

#if !defined _vsync_included

	static const vmd_legalMods[48][22] = {
		{400, 1024, 1021, 1020, 1019, 1018, 1013, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{401, 1145, 1144, 1143, 1142, 1020, 1019, 1017, 1013, 1007, 1006, 1005, 1004, 1003, 1001, 0000, 0000, 0000, 0000},
		{404, 1021, 1020, 1019, 1017, 1016, 1013, 1007, 1002, 1000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{405, 1023, 1021, 1020, 1019, 1018, 1014, 1001, 1000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{410, 1024, 1023, 1021, 1020, 1019, 1017, 1013, 1007, 1003, 1001, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{415, 1023, 1019, 1018, 1017, 1007, 1003, 1001, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{418, 1021, 1020, 1016, 1006, 1002, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{420, 1021, 1019, 1005, 1004, 1003, 1001, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{421, 1023, 1021, 1020, 1019, 1018, 1016, 1014, 1000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{422, 1021, 1020, 1019, 1017, 1013, 1007, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{426, 1021, 1019, 1006, 1005, 1004, 1003, 1001, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{436, 1022, 1021, 1020, 1019, 1017, 1013, 1007, 1006, 1003, 1001, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{439, 1145, 1144, 1143, 1142, 1023, 1017, 1013, 1007, 1003, 1001, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{477, 1021, 1020, 1019, 1018, 1017, 1007, 1006, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{478, 1024, 1022, 1021, 1020, 1013, 1012, 1005, 1004, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{489, 1024, 1020, 1019, 1018, 1016, 1013, 1006, 1005, 1004, 1002, 1000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{491, 1145, 1144, 1143, 1142, 1023, 1021, 1020, 1019, 1018, 1017, 1014, 1007, 1003, 0000, 0000, 0000, 0000, 0000},
		{492, 1016, 1006, 1005, 1004, 1000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{496, 1143, 1142, 1023, 1020, 1019, 1017, 1011, 1007, 1006, 1003, 1002, 1001, 0000, 0000, 0000, 0000, 0000, 0000},
		{500, 1024, 1021, 1020, 1019, 1013, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{516, 1021, 1020, 1019, 1018, 1017, 1016, 1015, 1007, 1004, 1002, 1000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{517, 1145, 1144, 1143, 1142, 1023, 1020, 1019, 1018, 1017, 1016, 1007, 1003, 1002, 0000, 0000, 0000, 0000, 0000},
		{518, 1145, 1144, 1143, 1142, 1023, 1020, 1018, 1017, 1013, 1007, 1006, 1005, 1003, 1001, 0000, 0000, 0000, 0000},
		{527, 1021, 1020, 1018, 1017, 1015, 1014, 1007, 1001, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{529, 1023, 1020, 1019, 1018, 1017, 1012, 1011, 1007, 1006, 1003, 1001, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{534, 1185, 1180, 1179, 1178, 1127, 1126, 1125, 1124, 1123, 1122, 1106, 1101, 1100, 0000, 0000, 0000, 0000, 0000},
		{535, 1121, 1120, 1119, 1118, 1117, 1116, 1115, 1114, 1113, 1110, 1109, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{536, 1184, 1183, 1182, 1181, 1128, 1108, 1107, 1105, 1104, 1103, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{540, 1145, 1144, 1143, 1142, 1024, 1023, 1020, 1019, 1018, 1017, 1007, 1006, 1004, 1001, 0000, 0000, 0000, 0000},
		{542, 1145, 1144, 1021, 1020, 1019, 1018, 1015, 1014, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{546, 1145, 1144, 1143, 1142, 1024, 1023, 1019, 1018, 1017, 1007, 1006, 1004, 1002, 1001, 0000, 0000, 0000, 0000},
		{547, 1143, 1142, 1021, 1020, 1019, 1018, 1016, 1003, 1000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{549, 1145, 1144, 1143, 1142, 1023, 1020, 1019, 1018, 1017, 1012, 1011, 1007, 1003, 1001, 0000, 0000, 0000, 0000},
		{550, 1145, 1144, 1143, 1142, 1023, 1020, 1019, 1018, 1006, 1005, 1004, 1003, 1001, 0000, 0000, 0000, 0000, 0000},
		{551, 1023, 1021, 1020, 1019, 1018, 1016, 1006, 1005, 1003, 1002, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{558, 1168, 1167, 1166, 1165, 1164, 1163, 1095, 1094, 1093, 1092, 1091, 1090, 1089, 1088, 0000, 0000, 0000, 0000},
		{559, 1173, 1162, 1161, 1160, 1159, 1158, 1072, 1071, 1070, 1069, 1068, 1067, 1066, 1065, 0000, 0000, 0000, 0000},
		{560, 1170, 1169, 1141, 1140, 1139, 1138, 1033, 1032, 1031, 1030, 1029, 1028, 1027, 1026, 0000, 0000, 0000, 0000},
		{561, 1157, 1156, 1155, 1154, 1064, 1063, 1062, 1061, 1060, 1059, 1058, 1057, 1056, 1055, 1031, 1030, 1027, 1026},
		{562, 1172, 1171, 1149, 1148, 1147, 1146, 1041, 1040, 1039, 1038, 1037, 1036, 1035, 1034, 0000, 0000, 0000, 0000},
		{565, 1153, 1152, 1151, 1150, 1054, 1053, 1052, 1051, 1050, 1049, 1048, 1047, 1046, 1045, 0000, 0000, 0000, 0000},
		{567, 1189, 1188, 1187, 1186, 1133, 1132, 1131, 1130, 1129, 1102, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{575, 1177, 1176, 1175, 1174, 1099, 1044, 1043, 1042, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{576, 1193, 1192, 1191, 1190, 1137, 1136, 1135, 1134, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{580, 1023, 1020, 1018, 1017, 1007, 1006, 1001, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{589, 1145, 1144, 1024, 1020, 1018, 1017, 1016, 1013, 1007, 1006, 1005, 1004, 1000, 0000, 0000, 0000, 0000, 0000},
		{600, 1022, 1020, 1018, 1017, 1013, 1007, 1006, 1005, 1004, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000},
		{603, 1145, 1144, 1143, 1142, 1024, 1023, 1020, 1019, 1018, 1017, 1007, 1006, 1001, 0000, 0000, 0000, 0000, 0000}
	};

	stock VehicleSupportsComponent(modelid, cid) {
		for (new i = 0; i < sizeof(vmd_legalMods); i++) {
			if (vmd_legalMods[i][0] == modelid) {
				for (new x = 1; x < 18; x++) {
					if (vmd_legalMods[i][x] == 0) break;
					if (vmd_legalMods[i][x] == cid) return true;
				}
			}
		}
		return false;
	}

	stock VehicleSupportsNitro(modelid) {
		return (VehicleSupportsComponent(modelid, 1008) || VehicleSupportsComponent(modelid, 1009) || VehicleSupportsComponent(modelid, 1010));
	}

#endif
// if vsync IS included, then we can't access the legalmods list, as vsync provides it's own static one,
// but we can save space by avoiding a redundant definition of the legalmods list, and only storing the IDs
// of vehicle models which can be modded.
#if defined _vsync_included
	static const vmd_moddableVeh[48] = {
		400, 401, 404, 405, 410, 415, 418, 420, 421, 422, 426, 436, 439, 477,
		478, 489, 491, 492, 496, 500, 516, 517, 518, 527, 529, 534, 535, 536,
		540, 542, 546, 547, 549, 550, 551, 558, 559, 560, 561, 562, 565, 567,
		575, 576, 580, 589, 600, 603
	};
#endif

stock VehicleSupportsCarmodSlot(modelid, carmodtype) {
	for (new i = 0; i < sizeof(vmd_carmodData); i++) {
		if (vmd_carmodData[i][carmod_type] != carmodtype) continue;
		if (VehicleSupportsComponent(modelid, 1000+i)) return true;
	}
	return false;
}

stock VehicleSupportsAnyComponent(modelid) {
	#if !defined _vsync_included
		for (new i = 0; i < sizeof(vmd_legalMods); i++) {
			if (vmd_legalMods[i][0] == modelid) return true;
		}
	#endif
	#if defined _vsync_included
		for (new i = 0; i < sizeof(vmd_moddableVeh); i++) {
			if (vmd_moddableVeh[i] == modelid) return true;
		}
	#endif
	return false;
}

stock IsValidComponent(cid) {
	if (!(1000 <= cid <= 1193)) return false;
	return true;
}

stock IsComponentType(cid, carmodtype) {
	if (!IsValidComponent(cid)) return 0;
	return (vmd_carmodData[cid-1000][carmod_type] == carmodtype);
}

stock GetComponentName(cid) {
	new str[40];
	format(str, 40, "Invalid");
	if (!IsValidComponent(cid)) return str;
	format(str, 40, vmd_carmodData[cid-1000][carmod_name]);
	return str;
}

stock GetComponentPrice(cid) {
	if (!IsValidComponent(cid)) return 0;
	return vmd_carmodData[cid-1000][carmod_price];
}

stock GetComponentSlot(cid) {
	if (!IsValidComponent(cid)) return CARMODTYPE_INVALID;
	for (new i = 0; i < 194; i++) {
		if (vmd_carmodData[i][vmd_carmodFlags:2] == cid) {
			return vmd_carmodData[i][vmd_carmodFlags:0];
		}
	}
	return CARMODTYPE_INVALID;
}
