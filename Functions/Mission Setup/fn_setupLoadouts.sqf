#define UNARMED_BLU_CLASS "B_Soldier_unarmed_F"
#define ARMED_BLU_CLASS "B_Soldier_lite_F"

scriptName "CHG_fnc_setupLoadouts";

private _bluforClasses = [
	UNARMED_BLU_CLASS,
	ARMED_BLU_CLASS
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

nil
