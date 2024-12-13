#define UNARMED_BLU_CLASS "B_Soldier_unarmed_F"
#define ARMED_BLU_CLASS "B_Soldier_lite_F"
#define MAINTAINER_BLU_CLASS "B_Deck_Crew_F"
#define ARMED_CA_CLASS "I_C_Soldier_Bandit_5_F"

scriptName "CHG_fnc_setupLoadouts";

private _bluforClasses = [
	UNARMED_BLU_CLASS,
	ARMED_BLU_CLASS,
	MAINTAINER_BLU_CLASS
];

_bluforClasses apply {
	[
		_x,
		"init",
		{
			params ["_unit"];

			private _bluforForcesType = localNamespace getVariable ["CHG_bluforForcesType","vanilla"];
			[
				_unit,
				missionConfigFile >> "KISKA_RandomGear" >> _bluforForcesType >> (typeOf _unit)
			] call CHG_fnc_selectRandomGearFromClass;
		}
	] call CBA_fnc_addClassEventhandler;
};

private _CAClasses = [
	ARMED_CA_CLASS
];

_CAClasses apply {
	[
		_x,
		"init",
		{
			params ["_unit"];

			private _CAForcesType = localNamespace getVariable ["CHG_CAForcesType","ChongoArmy"];
			[
				_unit,
				missionConfigFile >> "KISKA_RandomGear" >> _CAForcesType >> (typeOf _unit)
			] call CHG_fnc_selectRandomGearFromClass;
		}
	] call CBA_fnc_addClassEventhandler;
};






nil
