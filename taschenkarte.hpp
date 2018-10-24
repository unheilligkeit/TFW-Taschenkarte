class taschenkarte_dialog
{

	idd = 5000;
	movingenable = 0;

	class controlsBackground
	{

		class bild: RscPicture
		{
			idc = 1200;
			text = "\tfw_taschenkarte\ui\m1.paa";
			x = 0.31 * safezoneW + safezoneX;
			y = 0.0599999 * safezoneH + safezoneY;
			w = 0.4 * safezoneW;
			h = 0.7 * safezoneH;
		};

	};

	class Controls
	{

		class CloseButton : RscButton
		{
			type = CT_BUTTON;
			text = "Schliessen";
			action = "closeDialog 0";
			idc = 1201;
			x = 0.458751 * safezoneW + safezoneX;
			y = 0.8 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};

	};

};


class taschenkarte_kdo_dialog
{

	idd = 5100;
	movingenable = 0;

	class controlsBackground
	{

		class bild_kdo: RscPicture
		{
			idc = 1200;
			text = "\tfw_taschenkarte\ui\m2.paa";
			x = 0.31 * safezoneW + safezoneX;
			y = 0.0599999 * safezoneH + safezoneY;
			w = 0.4 * safezoneW;
			h = 0.7 * safezoneH;
		};

	};

	class Controls
	{

		class CloseButton_kdo : RscButton
		{
			type = CT_BUTTON;
			text = "Schliessen";
			action = "closeDialog 0";
			idc = 1201;
			x = 0.458751 * safezoneW + safezoneX;
			y = 0.8 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};

	};

};


class taschenkarte_log_dialog
{

	idd = 5200;
	movingenable = 1;

	class controlsBackground
	{

		class bild_log: RscPicture
		{
			idc = 1200;
			text = "\tfw_taschenkarte\ui\m3.paa";
			x = 0.31 * safezoneW + safezoneX;
			y = 0.0599999 * safezoneH + safezoneY;
			w = 0.4 * safezoneW;
			h = 0.7 * safezoneH;
		};

	};

	class Controls
	{

		class CloseButton_log : RscButton
		{
			type = CT_BUTTON;
			text = "Schliessen";
			action = "closeDialog 0";
			idc = 1201;
			x = 0.458751 * safezoneW + safezoneX;
			y = 0.8 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};

	};

};

class taschenkarte_jtac_dialog
{

	idd = 5300;
	movingenable = 1;

	class controlsBackground
	{

		class bild_jtac: RscPicture
		{
			idc = 1200;
			text = "\tfw_taschenkarte\ui\m4.paa";
			x = 0.31 * safezoneW + safezoneX;
			y = 0.0599999 * safezoneH + safezoneY;
			w = 0.4 * safezoneW;
			h = 0.7 * safezoneH;
		};

	};

	class Controls
	{

		class CloseButton_jtac : RscButton
		{
			type = CT_BUTTON;
			text = "Schliessen";
			action = "closeDialog 0";
			idc = 1201;
			x = 0.458751 * safezoneW + safezoneX;
			y = 0.8 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};

	};

};