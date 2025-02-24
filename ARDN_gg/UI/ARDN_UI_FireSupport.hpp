
class ARDN_UI_FireSupport {
	idd = 2024;
	class controlsBackground {
		class background: RscText
		{
			idc = -1;
			x = 0.283437 * safezoneW + safezoneX;
            y = 0.203 * safezoneH + safezoneY;
            w = 0.433125 * safezoneW;
            h = 0.605 * safezoneH;
            colorBackground[] = {0,0,0,1};
		};
		
		class baseFrame: RscFrame
		{
			idc = -1;
			x = 0.283437 * safezoneW + safezoneX;
            y = 0.203 * safezoneH + safezoneY;
            w = 0.433125 * safezoneW;
            h = 0.605 * safezoneH;
		};
		class frameAmmo: RscFrame
		{
			idc = -1;
			x = 0.824844 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.297 * safezoneH;
		};
		class frameRounds: RscFrame
		{
			idc = -1;
			x = 0.824844 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.121 * safezoneH;
		};
		class frameAccuracy: RscFrame
		{
			idc = -1;
			x = 0.824844 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.121 * safezoneH;
		};
	};
	class controls{
		class Map: RscMapVoid
		{
			idc = 1001;
			x = 0.288594 * safezoneW + safezoneX;
            y = 0.214 * safezoneH + safezoneY;
            w = 0.422812 * safezoneW;
            h = 0.583 * safezoneH;
            colorText[] = {0,0,0,0};
            colorBackground[] = {0,0,0,1};
		};
		class TextSelectedCorrordinates: RscText
		{
			idc = 1002;
			text = "[0,0,0]"; //--- ToDo: Localize;
			x = 0.824844 * safezoneW + safezoneX;
			y = 0.819 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
		};
		class buttonFire: RscButton
		{
			idc = 1600;
			text = "FIRE"; //--- ToDo: Localize;
			x = 0.824844 * safezoneW + safezoneX;
			y = 0.885 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.077 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,1};
			colorActive[] = {0.5,0.5,0.5,1};
			onButtonClick = "_selectAmmo = lbCurSel 1500; _ammo = lbText [1500, _selectAmmo]; _radius = sliderPosition  1900; _targetString = ctrlText 1002; _target = parseSimpleArray _targetString; _rounds = sliderPosition 1901 ;[_target, _ammo, _radius, _rounds, side player] remoteExec ['ARDN_fnc_FireSupportFire', 2]; closeDialog 1;";
		};
		class TextAccuracy: RscText
		{
			idc = 1004;
			text = "25"; //--- ToDo: Localize;
			x = 0.824844 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};
		class Accuracy: RscXSliderH
		{
			idc = 1900;
			sliderRange[] = {10,100};
			sliderPosition = 25;
			sliderStep = 1;
			onSliderPosChanged = "ctrlSetText [1004, str sliderPosition	1900];";

			x = 0.824844 * safezoneW + safezoneX;
			y = 0.764 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};
		class ListAmmoType: RscListbox
		{
			idc = 1500;
			x = 0.824844 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.297 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};
		class TextRounds: RscText
		{
			idc = 1003;
			text = "5"; //--- ToDo: Localize;
			x = 0.824844 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};
		class Rounds: RscXSliderH
		{
			idc = 1901;
			sliderRange[] = {1,10};
			sliderPosition = 5;
			sliderStep = 1;
			onSliderPosChanged = "ctrlSetText [1003, str sliderPosition	1901];";

			x = 0.824844 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};
		class TextLableAccuracy: RscText
		{
			idc = -1;

			text = "Accuracy (m):"; //--- ToDo: Localize;
			x = 0.824844 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};
		class TextLableRounds: RscText
		{
			idc = -1;

			text = "Number of Rounds:"; //--- ToDo: Localize;
			x = 0.824844 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};
	};
};
