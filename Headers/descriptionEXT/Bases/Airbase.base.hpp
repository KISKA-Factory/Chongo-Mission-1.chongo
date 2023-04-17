#define VANILLA_LIGHT_CAR_FILTER "localNamespace getVariable ['CHG_blufor_lightCarId','vanilla'] == 'vanilla'"
class VanillaLightCarBase {
	filterCondition = VANILLA_LIGHT_CAR_FILTER;
};

#define VANILLA_LARGE_AIRCRAFT_FILTER "localNamespace getVariable ['CHG_blufor_largeAircraftId','vanilla'] == 'vanilla'"
class VanillaLargeAircraftBase {
	filterCondition = VANILLA_LARGE_AIRCRAFT_FILTER;
};



class Airbase
{
	side = SIDE_BLUFOR;

	class Agents 
	{
		class SittingInChairUnarmed
		{
			positions = "Airbase - Ambient Chair Sitting Unarmed 1";
			numberOfAgents = -1;
			infantryClasses[] = { "B_Soldier_unarmed_F" };
			dynamicSim = ON;
			canPath = OFF;
			
			class AmbientAnim
			{
				class animationSet
				{
					snapToAnimations[] = {
						"SIT_CHAIR_UNARMED_1",
						"SIT_CHAIR_UNARMED_2",
						"SIT_CHAIR_UNARMED_3"
					};

					snapToRange = 2;
				};

				equipmentLevel = "";

				exitOnCombat = OFF;
			};
		};

		class Maintiners : SittingInChairUnarmed
		{
			positions = "Airbase - Ambient Maintainers";
			numberOfAgents = -1;
			infantryClasses[] = { "B_Deck_Crew_F" };

			class AmbientAnim : AmbientAnim
			{
				class animationSet : animationSet
				{
					backupAnimations[] = {
						"STAND_UNARMED_1",
						"STAND_UNARMED_2",
						"STAND_UNARMED_3"
					};
					snapToRange = 5;
				};
			};
		};

		class StangindUnarmed
		{
			positions = "Airbase - Ambient Standing Unarmed";
			numberOfAgents = -1;
			infantryClasses[] = { "B_Soldier_unarmed_F" };
			dynamicSim = ON;
			canPath = OFF;
			
			class AmbientAnim
			{
				animationSet[] = {
					"STAND_UNARMED_1",
					"STAND_UNARMED_2",
					"STAND_UNARMED_3"
				};

				equipmentLevel = "";

				exitOnCombat = OFF;
			};
		};

		class MaintinersRequired : StangindUnarmed
		{
			positions = "Airbase - Ambient Maintainers Required";
			numberOfAgents = -1;
			infantryClasses[] = { "B_Deck_Crew_F" };
		};

		class StangindArmed
		{
			positions = "Airbase - Ambient Standing Armed";
			numberOfAgents = -1;
			infantryClasses[] = { "B_Soldier_lite_F" };
			dynamicSim = ON;
			canPath = OFF;
			
			class AmbientAnim
			{
				animationSet[] = {
					"STAND_ARMED_1",
					"STAND_ARMED_2"
				};

				equipmentLevel = "";

				exitOnCombat = OFF;
			};
		};
	};

	class simples
	{
		class LightCars
		{

			positions = "Airbase - Ambient Light Cars";

			class VanillaLightCar_1 : VanillaLightCarBase
			{
				superSimple = OFF;
				type = "C_Offroad_01_F";
				// animations[] = {
				// 	{"HidePolice",1},
				// 	{"HideServices",1},
				// 	{"HideBackpacks",1},
				// 	{"HideBumper1",1},
				// 	{"HideBumper2",1},
				// 	{"HideConstruction",1},
				// 	{"HideBumper2",1},
				// 	{"HidePolice",1}
				// };
				onObjectCreated = "_this call CHG_fnc_setRandomOffroadTexture";
			};
			class VanillaLightCar_2 : VanillaLightCarBase
			{
				superSimple = OFF;
				type = "C_Hatchback_01_F";
				offset[] = {0,0,0.88};
				onObjectCreated = "_this call CHG_fnc_setRandomHatchbackTexture";
			};
		};

		class SmallAircraft
		{
			positions = "Airbase - Ambient Light Aircraft";

			class VanillaSmallPlane
			{
				type = "C_Plane_Civil_01_F";
				offset[] = {0,0,1.1};
				selections[] = {
					{"vrtule blur",1}
				};
			};
		};

		class LargeAircraft
		{
			positions = "Airbase - Ambient Large Aircraft";

			class BlackFishArmed : VanillaLargeAircraftBase
			{
				type[] = {"B_T_VTOL_01_armed_F","B_T_VTOL_01_infantry_F"};
				offset[] = {0,0,-0.15};
				selections[] = {
					{"rotor_1_blur",1},
					{"rotor_2_blur",1},
					{"rotors_blur",1}
				};
			};

		};

		class FuelTrucks
		{
			positions = "Airbase - Ambient Fuel Trucks";
			class FuelTruck
			{
				superSimple = OFF;
				type = "B_Truck_01_fuel_F";
				offset[] = {0,0,0.9};
			};
		};

		class ArmoredCars
		{
			positions = "Airbase - Ambient Armored Cars";

			class VanillaArmoredCars
			{
				type[] = {
					"B_MRAP_01_gmg_F", 0.25,
					"B_MRAP_01_hmg_F", 0.25,
					"B_MRAP_01_F", 0.5
				};
			};
		};
	};
};