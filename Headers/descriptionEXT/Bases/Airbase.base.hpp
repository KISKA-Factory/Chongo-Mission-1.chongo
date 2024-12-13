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
	class simples
	{
		class lightCars
		{
			spawnPositions = "Airbase - Ambient Light Cars";
            class VanillaLightCar_1
			{
				superSimple = OFF;
				type = "C_Offroad_01_F";
				// animations[] = {
                //  {"HidePolice",1},
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
			class VanillaLightCar_2
			{
				superSimple = OFF;
				type = "C_Hatchback_01_F";
				offset[] = {0,0,0.88};
				onObjectCreated = "_this call CHG_fnc_setRandomHatchbackTexture";
			};
		};

        class LargeAircraft
        {
			spawnPositions = "Airbase - Ambient Large Aircraft";
            class BlackFishArmed
            {
                type = "B_T_VTOL_01_armed_F";
				offset[] = {0,0,-0.15};
				selections[] = {
					{"rotor_1_blur",1},
					{"rotor_2_blur",1},
					{"rotors_blur",1}
				};
            };
            class BlackFishUnarmed : BlackFishArmed
            {
                type = "B_T_VTOL_01_infantry_F";
            };
        };
		class FuelTrucks
		{
			spawnPositions = "Airbase - Ambient Fuel Trucks";
			class FuelTruck
			{
				superSimple = OFF;
				type = "B_Truck_01_fuel_F";
				offset[] = {0,0,0.9};
			};
		};
		class ArmoredCars
		{
			spawnPositions = "Airbase - Ambient Armored Cars";

			class MrapUnarmed
			{
				superSimple = OFF;
				type = "B_MRAP_01_F";
				offset[] = {0,0,0.1};
				weight = 0.5;
			};
			class MrapHMG : MrapUnarmed
			{
				type = "B_MRAP_01_hmg_F";
				weight = 0.25;
			};
			class MrapGMG : MrapUnarmed
			{
				 type = "B_MRAP_01_gmg_F";
				weight = 0.25;
			};
		};
	};

					
	class agents
	{
		class sets
		{
			class SittingInChairUnarmed
			{
				spawnPositions = "Airbase - Ambient Chair Sitting Unarmed 1";
				numberOfUnits = -1;
				unitClasses[] = {"B_Soldier_unarmed_F"};
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
				spawnPositions = "Airbase - Ambient Maintainers";
				numberOfUnits = -1;
				unitClasses[] = { "B_Deck_Crew_F" };

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
			class StangindUnarmed : SittingInChairUnarmed
			{
				spawnPositions = "Airbase - Ambient Standing Unarmed";
				numberOfAgents = -1;
				unitClasses[] = { "B_Soldier_unarmed_F" };
				
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
				spawnPositions = "Airbase - Ambient Maintainers Required";
				numberOfAgents = -1;
				unitClasses[] = { "B_Deck_Crew_F" };
			};
			class StangindArmed
			{
				spawnPositions = "Airbase - Ambient Standing Armed";
				numberOfAgents = -1;
				unitClasses[] = { "B_Soldier_lite_F" };
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
			class SitGround
    		{
					spawnPositions = "Airbase - Ambient Sit Ground Maintainers";
					numberOfAgents = -1;
					unitClasses[] = { "B_Soldier_unarmed_F" };
					dynamicSim = ON;
					canPath = OFF;
				class AmbientAnim 
				{
			 		animationSet[] = {
						"SIT_GROUND_UNARMED"
					};
					
			 		equipmentLevel = "";
				
			 		exitOnCombat = OFF;
			 	};
    		};
			class SittingInChairDesk
			{
				spawnPositions = "Airbase - Ambient Sitting Unarmed Desk";
				numberOfUnits = -1;
				unitClasses[] = {"B_Soldier_unarmed_F"};
				dynamicSim = ON;
				canPath = OFF;

				class AmbientAnim
				{
					class animationSet
					{
						snapToAnimations[] = {
							"SIT_AT_TABLE"
						};

						snapToRange = 2;
					};

					equipmentLevel = "";

					exitOnCombat = OFF;
				};
			};
			class StangindArmedCA
			{
				spawnPositions = "Airbase - Standing Armed CA";
				numberOfAgents = -1;
				unitClasses[] = { "I_C_Soldier_Bandit_5_F" };
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
	};
};


