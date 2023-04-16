scriptName "CHG_fnc_setRandomOffroadTexture";

params ["_offroad"];

private _color = selectRandom [
	'\A3\soft_F\Offroad_01\Data\Offroad_01_ext_CO.paa',
	'\A3\soft_F\Offroad_01\Data\Offroad_01_ext_BASE01_CO.paa',
	'\A3\soft_F\Offroad_01\Data\Offroad_01_ext_BASE02_CO.paa',
	'\A3\soft_F\Offroad_01\Data\Offroad_01_ext_BASE03_CO.paa',
	'\A3\soft_F\Offroad_01\Data\Offroad_01_ext_BASE04_CO.paa',
	'\A3\soft_F\Offroad_01\Data\Offroad_01_ext_BASE05_CO.paa'
];

_offroad setObjectTextureGlobal [0,_color];
