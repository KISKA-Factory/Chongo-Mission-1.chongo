scriptName "CHG_fnc_selectRandomGearFromClass";

params ["_unit","_class"];

[
	_unit,
	getArray(_class >> "uniforms"),
	getArray(_class >> "headgear"),
	getArray(_class >> "facewear"),
	getArray(_class >> "vests")
] call KISKA_fnc_randomGear;

nil
