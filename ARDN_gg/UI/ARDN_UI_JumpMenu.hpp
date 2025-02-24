
class ARDN_UI_JumpMenu {
	idd = 2023;
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
			y = 0.786 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
		};
		class buttonJump: RscButton
		{
			idc = 1600;
			text = "Initiate Jump"; //--- ToDo: Localize;
			x = 0.824844 * safezoneW + safezoneX;
			y = 0.885 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.077 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,1};
			colorActive[] = {0.5,0.5,0.5,1};
			onButtonClick = "_pos = ctrlText 1002 ;_check = displayCtrl 2800;_group = cbChecked _check;[player, _pos, _group, side player] remoteExec ['ARDN_fnc_jump', clientOwner]; closeDialog 1;";
		};
		class textGroup: RscText
		{
			idc = 1003;
			text = "Group Jump:"; //--- ToDo: Localize;
			x = 0.824844 * safezoneW + safezoneX;
			y = 0.852 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,1};
		};
		class checkGroup: RscCheckbox
		{
			idc = 2800;
			x = 0.95375 * safezoneW + safezoneX;
			y = 0.852 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};
	};
};
