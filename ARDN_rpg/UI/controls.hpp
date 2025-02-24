class ARDN_skillMenu {
    idd = 20235366966465675;
	class ControlsBackground {
		class text_header_primary: RscText
		{
			idc = 1000;
			text = "Primary Skills:"; //--- ToDo: Localize;
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.211406 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {"(profileNamespace getVariable ['GUI_BCG_RGB_R',0.13])","(profileNamespace getVariable ['GUI_BCG_RGB_G',0.54])","(profileNamespace getVariable ['GUI_BCG_RGB_B',0.21])","(profileNamespace getVariable ['GUI_BCG_RGB_A',0.8])"};
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.211406 * safezoneW;
			h = 0.11 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,0.8};
		};
		class RscText_1002: RscText
		{
			idc = 1002;
			text = "Athletics:"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1003: RscText
		{
			idc = 1003;
			text = "Firearms:"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1004: RscText
		{
			idc = 1004;
			text = "Stealth:"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1008: RscText
		{
			idc = 1008;
			text = "Medic:"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1010: RscText
		{
			idc = 1010;
			text = "Doctor:"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1011: RscText
		{
			idc = 1011;
			text = "Engineer:"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1012: RscText
		{
			idc = 1012;
			text = "EOD:"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class text_header_secondary: RscText
		{
			idc = 1016;
			text = "Secondary Skills:"; //--- ToDo: Localize;
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.211406 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {"(profileNamespace getVariable ['GUI_BCG_RGB_R',0.13])","(profileNamespace getVariable ['GUI_BCG_RGB_G',0.54])","(profileNamespace getVariable ['GUI_BCG_RGB_B',0.21])","(profileNamespace getVariable ['GUI_BCG_RGB_A',0.8])"};
		};
		class RscText_1017: RscText
		{
			idc = 1017;
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.211406 * safezoneW;
			h = 0.264 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,0.8};
		};
		class RscText_1018: RscText
		{
			idc = 1018;
			text = "Accounting:"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1020: RscText
		{
			idc = 1020;
			text = "Anthropology:"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1021: RscText
		{
			idc = 1021;
			text = "Archaeology:"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1022: RscText
		{
			idc = 1022;
			text = "Arts:"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1023: RscText
		{
			idc = 1023;
			text = "Bureaucracy:"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1024: RscText
		{
			idc = 1024;
			text = "Computer Sci:"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1025: RscText
		{
			idc = 1025;
			text = "Craft:"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1026: RscText
		{
			idc = 1026;
			text = "Forensics:"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1027: RscText
		{
			idc = 1027;
			text = "History:"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1028: RscText
		{
			idc = 1028;
			text = "HUMINT:"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1029: RscText
		{
			idc = 1029;
			text = "Law:"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1031: RscText
		{
			idc = 1031;
			text = "Occult:"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1032: RscText
		{
			idc = 1032;
			text = "Persuade:"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1033: RscText
		{
			idc = 1033;
			text = "Psychotherapy:"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1034: RscText
		{
			idc = 1034;
			text = "Science:"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1035: RscText
		{
			idc = 1035;
			text = "Search:"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1036: RscText
		{
			idc = 1036;
			text = "SIGINT:"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1037: RscText
		{
			idc = 1037;
			text = "Unnatural:"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1038: RscText
		{
			idc = 1038;
			text = "OPSPEC:"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1046: RscText
		{
			idc = 1046;
			text = "Criminology:"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class RscText_1051: RscText
		{
			idc = 1051;
			text = "0%"; //--- ToDo: Localize;
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
	};
	class controls {
		class skill_athletics: RscText
		{
			idc = 1005;
			text = "30%"; //--- ToDo: Localize;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_firearms: RscText
		{
			idc = 1006;
			text = "20%"; //--- ToDo: Localize;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_stealth: RscText
		{
			idc = 1007;
			text = "10%"; //--- ToDo: Localize;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_medic: RscText
		{
			idc = 1009;
			text = "Untrained"; //--- ToDo: Localize;
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_doctor: RscText
		{
			idc = 1013;
			text = "Untrained"; //--- ToDo: Localize;
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_engineer: RscText
		{
			idc = 1014;
			text = "Untrained"; //--- ToDo: Localize;
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_EOD: RscText
		{
			idc = 1015;
			text = "Untrained"; //--- ToDo: Localize;
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_accounting: RscText
		{
			idc = 1019;
			text = "10%"; //--- ToDo: Localize;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_anthropology: RscText
		{
			idc = 1039;
			text = "0%"; //--- ToDo: Localize;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_archaeology: RscText
		{
			idc = 1040;
			text = "0%"; //--- ToDo: Localize;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_arts: RscText
		{
			idc = 1041;
			text = "0%"; //--- ToDo: Localize;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_bureaucracy: RscText
		{
			idc = 1042;
			text = "10%"; //--- ToDo: Localize;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_computerSci: RscText
		{
			idc = 1043;
			text = "0%"; //--- ToDo: Localize;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_craft: RscText
		{
			idc = 1044;
			text = "0%"; //--- ToDo: Localize;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_forensics: RscText
		{
			idc = 1045;
			text = "0%"; //--- ToDo: Localize;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_criminology: RscText
		{
			idc = 1047;
			text = "10%"; //--- ToDo: Localize;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_history: RscText
		{
			idc = 1048;
			text = "10%"; //--- ToDo: Localize;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_humint: RscText
		{
			idc = 1049;
			text = "10%"; //--- ToDo: Localize;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_law: RscText
		{
			idc = 1050;
			text = "0%"; //--- ToDo: Localize;
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_milSci: RscText
		{
			idc = 1030;
			text = "Military Sci:"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0.9,0.9,0.9,1};
		};
		class skill_occult: RscText
		{
			idc = 1052;
			text = "10%"; //--- ToDo: Localize;
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_persuade: RscText
		{
			idc = 1053;
			text = "20%"; //--- ToDo: Localize;
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_psychotherapy: RscText
		{
			idc = 1054;
			text = "10%"; //--- ToDo: Localize;
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_science: RscText
		{
			idc = 1055;
			text = "0%"; //--- ToDo: Localize;
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_search: RscText
		{
			idc = 1056;
			text = "20%"; //--- ToDo: Localize;
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_sigint: RscText
		{
			idc = 1057;
			text = "0%"; //--- ToDo: Localize;
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_unnatural: RscText
		{
			idc = 1058;
			text = "0%"; //--- ToDo: Localize;
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class skill_OPSPEC: RscText
		{
			idc = 1059;
			text = "NONE"; //--- ToDo: Localize;
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
		};
		class RscFrame_1800: RscFrame
		{
			idc = 1800;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1801: RscFrame
		{
			idc = 1801;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1802: RscFrame
		{
			idc = 1802;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1803: RscFrame
		{
			idc = 1803;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1804: RscFrame
		{
			idc = 1804;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1805: RscFrame
		{
			idc = 1805;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1806: RscFrame
		{
			idc = 1806;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1807: RscFrame
		{
			idc = 1807;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1808: RscFrame
		{
			idc = 1808;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1809: RscFrame
		{
			idc = 1809;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1810: RscFrame
		{
			idc = 1810;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1811: RscFrame
		{
			idc = 1811;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1812: RscFrame
		{
			idc = 1812;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1813: RscFrame
		{
			idc = 1813;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1814: RscFrame
		{
			idc = 1814;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1815: RscFrame
		{
			idc = 1815;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1816: RscFrame
		{
			idc = 1816;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1817: RscFrame
		{
			idc = 1817;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1818: RscFrame
		{
			idc = 1818;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1819: RscFrame
		{
			idc = 1819;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1820: RscFrame
		{
			idc = 1820;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1821: RscFrame
		{
			idc = 1821;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1822: RscFrame
		{
			idc = 1822;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1823: RscFrame
		{
			idc = 1823;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1824: RscFrame
		{
			idc = 1824;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1825: RscFrame
		{
			idc = 1825;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1826: RscFrame
		{
			idc = 1826;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscFrame_1827: RscFrame
		{
			idc = 1827;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenuOK_2600: RscButtonMenu
		{
			idc = 31542;
			text = "CLOSE"; //--- ToDo: Localize;
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
			onButtonClick = "closeDialog 2;";
			class HitZone
			{
				left = 0;
				top = 0;
				right = 0;
				bottom = 0;
			};
			textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
		};
	};
};

class ARDN_charRegister {
	idd = 20233457110;
	class ControlsBackground {
		class text_header_characterSelect: RscText
		{
			idc = 1000;
			text = "Register character:"; //--- ToDo: Localize;
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.211406 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {"(profileNamespace getVariable ['GUI_BCG_RGB_R',0.13])","(profileNamespace getVariable ['GUI_BCG_RGB_G',0.54])","(profileNamespace getVariable ['GUI_BCG_RGB_B',0.21])","(profileNamespace getVariable ['GUI_BCG_RGB_A',0.8])"};
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.211406 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,0.8};
		};
		class RscText_1003: RscText
		{
			idc = 1003;
			text = "OPSPEC:"; //--- ToDo: Localize;
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1002: RscText
		{
			idc = 1002;
			text = "Profession:"; //--- ToDo: Localize;
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
	class controls {
		class list_profession: RscCombo
		{
			idc = 2100;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
			onLBListSelChanged = "diag_log format [""ARDN DEBUG: prof %1"", lbData [2100, lbCurSel 2100]]";
			class Items
			{
				class Anthropologist
				{
					default = 1;
					text = "Anthropologist";
					tooltip = "Secondary skills only";
					data = "Anthropologist";
				};
				class Historian
				{
					text = "Historian";
					tooltip = "Secondary skills only";
					data = "Historian";
				};
				class ComputerScientist
				{
					text = "Computer Scientist";
					tooltip = "Secondary skills only";
					data = "ComputerScientist";
				};
				class Engineer
				{
					text = "Engineer";
					tooltip = "Engineer, and secondary skills only";
					data = "Engineer";
				};
				class FederalAgent
				{
					text = "Federal Agent";
					tooltip = "Firearms and secondary skills";
					data = "FederalAgent";
				};
				class Physician
				{
					text = "Physician";
					tooltip = "Medic and secondary skills";
					data = "Physician";
				};
				class Scientist
				{
					text = "Scientist";
					tooltip = "Secondary skills only";
					data = "Scientist";
				};
				class SpecialOperator
				{
					text = "Special Operator";
					tooltip = "Athletics, firearms, stealth, and EOD";
					data = "SpecialOperator";
				};
				class Criminal
				{
					text = "Criminal";
					tooltip = "Firearms, stealth and secondary skills";
					data = "Criminal";
				};
				class Firefighter
				{
					text = "Firefighter";
					tooltip = "Athletics, medic, EOD, and secondary skills";
					data = "Firefighter";
				};
				class IntelligenceAnalyst
				{
					text = "Intelligence Analyst";
					tooltip = "Secondary skills only";
					data = "IntelligenceAnalyst";
				};
				class Paramedic
				{
					text = "Paramedic";
					tooltip = "Medic, Doctor and secondary skills";
					data = "Paramedic";
				};
				class PoliceOfficer
				{
					text = "Police Officer";
					tooltip = "Firearms, medic, and secondary skills";
					data = "PoliceOfficer";
				};
				class Soldier
				{
					text = "Soldier";
					tooltip = "Athletics, Firearms, medic, and secondary skills";
					data = "Soldier";
				};
			};
		};
		class list_opspec: RscCombo
		{
			idc = 2101;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
			onLBListSelChanged = "diag_log format [""ARDN DEBUG: opsec %1"", lbData [2101, lbCurSel 2101]]";
			class Items {
				class Phantom
				{
					default = 1;
					text = "Phantom";
					tooltip = "HUMINT, local intel gathering";
					data = "Phantom";
				};
				class Wraith
				{
					text = "Wraith";
					tooltip = "Infantry";
					data = "Wraith";
				};
				class Myling
				{
					text = "Myling";
					tooltip = "Recon";
					data = "Myling";
				};
				class Revenant
				{
					text = "Revenant";
					tooltip = "Mechanized/Armor";
					data = "Revenant";
				};
				class Poltergeist
				{
					text = "Poltergeist";
					tooltip = "Airborne infantry";
					data = "Poltergeist";
				};
				class Yokai
				{
					text = "Yokai";
					tooltip = "Hazard conatainment";
					data = "Yokai";
				};
			};
		};
		class RscButtonMenuCancel_2700: RscButtonMenu
		{
			text = "CANCEL";
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			onButtonClick = "closeDialog 2;";
			class HitZone
			{
				left = 0;
				top = 0;
				right = 0;
				bottom = 0;
			};
		};
		class button_done: RscButtonMenu
		{
			idc = 2400;
			text = "DONE"; //--- ToDo: Localize;
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			onButtonClick = "[lbData [2100, lbCurSel 2100], lbData [2101, lbCurSel 2101]] call ARDN_fnc_registerCharacter;closeDialog 1;";
			class HitZone
			{
				left = 0;
				top = 0;
				right = 0;
				bottom = 0;
			};
		};
	};
};

class ARDN_skillImprove {
	idd = 20233457111;
	class ControlsBackground {
		class text_header_characterSelect: RscText
		{
			idc = 1000;
			text = "Improve Skill:"; //--- ToDo: Localize;
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.211406 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {"(profileNamespace getVariable ['GUI_BCG_RGB_R',0.13])","(profileNamespace getVariable ['GUI_BCG_RGB_G',0.54])","(profileNamespace getVariable ['GUI_BCG_RGB_B',0.21])","(profileNamespace getVariable ['GUI_BCG_RGB_A',0.8])"};
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.211406 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,0.8};
		};
		class RscText_1003: RscText
		{
			idc = 1003;
			text = "OPSPEC:"; //--- ToDo: Localize;
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
	class controls {
		class list_profession: RscCombo
		{
			idc = 2100;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
			onLBListSelChanged = "diag_log format [""ARDN DEBUG: prof %1"", lbData [2100, lbCurSel 2100]]";
			class Items
			{
				class Medic
				{
					default = 1;
					text = "Medic";
					tooltip = "Primary Skill, Medical perms";
					value = 0;
				};
				class Doctor
				{
					text = "Doctor";
					tooltip = "Primary Skill, Doctor perms";
					value = 1;
				};
				class Engineer
				{
					text = "Engineer";
					tooltip = "Primary Skill, Repair vehicles";
					value = 2;
				};
				class EOD
				{
					text = "Explosives expert";
					tooltip = "Primary Skill, Disarm mines";
					value = 3;
				};
				class Athletics
				{
					text = "Athletics";
					tooltip = "Primary Skill, Equipment load";
					value = 4;
				};
				class Firearms
				{
					text = "Firearms";
					tooltip = "Primary Skill, Weapon recoil and sway";
					value = 5;
				};
				class Stealth
				{
					text = "Stealth";
					tooltip = "Primary Skill, concelment against AI";
					value = 6;
				};
				class Accounting
				{
					text = "Accounting";
					tooltip = "Secondary skill";
					value = 7;
				};
				class Anthropology
				{
					text = "Anthropology";
					tooltip = "Secondary skill";
					value = 8;
				};
				class Archaeology
				{
					text = "Archaeology";
					tooltip = "Secondary skill";
					value = 9;
				};
				class Arts
				{
					text = "Arts";
					tooltip = "Secondary skill";
					value = 10;
				};
				class Bureaucracy
				{
					text = "Bureaucracy";
					tooltip = "Secondary skill";
					value = 11;
				};
				class ComputerScience
				{
					text = "Computer Science";
					tooltip = "Secondary skill";
					value = 12;
				};
				class Craft
				{
					text = "Craft";
					tooltip = "Secondary skill";
					value = 13;
				};
				class Criminology
				{
					text = "Criminology";
					tooltip = "Secondary skill";
					value = 14;
				};
				class Forensics
				{
					text = "Forensics";
					tooltip = "Secondary skill";
					value = 15;
				};
				class History
				{
					text = "History";
					tooltip = "Secondary skill";
					value = 16;
				};
				class HUMINT
				{
					text = "HUMINT";
					tooltip = "Secondary skill";
					value = 17;
				};
				class Law
				{
					text = "Law";
					tooltip = "Secondary skill";
					value = 18;
				};
				class MilSci
				{
					text = "Military Science";
					tooltip = "Secondary skill";
					value = 19;
				};
				class Occult
				{
					text = "Occult";
					tooltip = "Secondary skill";
					value = 20;
				};
				class Persuade
				{
					text = "Persuade";
					tooltip = "Secondary skill";
					value = 21;
				};
				class Psychotherapy
				{
					text = "Psychotherapy";
					tooltip = "Secondary skill";
					value = 22;
				};
				class Science
				{
					text = "Science";
					tooltip = "Secondary skill";
					value = 23;
				};
				class Search
				{
					text = "Search";
					tooltip = "Secondary skill";
					value = 24;
				};
				class SIGINT
				{
					text = "SIGINT";
					tooltip = "Secondary skill";
					value = 25;
				};
				class Unnatural
				{
					text = "Unnatural";
					tooltip = "Secondary skill";
					value = 26;
				};
			};
		};
		class RscButtonMenuCancel_2700: RscButtonMenu
		{
			text = "CANCEL";
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			onButtonClick = "closeDialog 2;";
			class HitZone
			{
				left = 0;
				top = 0;
				right = 0;
				bottom = 0;
			};
		};
		class button_done: RscButtonMenu
		{
			idc = 2400;
			text = "DONE"; //--- ToDo: Localize;
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			onButtonClick = "[getPlayerUID player, [], [[lbValue [2100, lbCurSel 2100],round random 5]]] remoteExec [ARDN_fnc_saveSkills, 2];";
			class HitZone
			{
				left = 0;
				top = 0;
				right = 0;
				bottom = 0;
			};
		};
	};
};