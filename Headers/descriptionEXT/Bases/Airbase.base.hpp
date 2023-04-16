#define VANILLA_FILTER "localNamespace getVariable ['CHG_blufor_lightCarId','vanilla'] == 'vanilla'"
class VanillaLightCarBase {
	filterCondition = VANILLA_FILTER;
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

		class SmallPlanes
		{
			positions = "Airbase - Ambient Light Aircraft";

			class plane
			{
				// ["camo1","hull","door_r","door_l","camo2","flap_l","flap_r","aileron_l","aileron_r","rudder","elevator_l","elevator_r","wheel_1","wheel_2","wheel_3","suspension_front","landing_gear","prop","prop_blade_1","prop_blade_2","prop_blade_3","prop_blade_4","vrtule staticka","proxy:\a3\air_f_exp\plane_civil_01\plane_civil_01_basic_f_rotor.001","vrtule blur","wing_left_light","wing_right_light","proxy:\a3\data_f\volumelightcar.001","proxy:\a3\data_f\volumelightcar.002","lights_all","lights_main","lights_hide","proxy:\pilot.001","proxy:\a3\data_f\proxies\passenger_low01\cargo01.002","proxy:\a3\data_f\proxies\passenger_low01\cargo01.001","proxy:gunner.001","mfd_horizon_virtual_base","hull_detail","hull_lights","hull_glass","zbytek","lights_volumetric_hide","wing_left_light_volumetric","wing_right_light_volumetric","hull_lights_coll_off","hull_lights_coll_on","hull_lights_coll_on_green","hull_lights_coll_on_white","hull_lights_coll_on_red","hull_lights_coll_on_white_2","hull_lights_coll_on_white_1","hull_lights_hausing","glass2","glass3","glass4","cabin_glass","glass5","glass1","camo4","camo3","cabin_low","cabin_console_main","mfd_on","mfd_pilot","mfd_copilot","mfd_horizon_virtual_pip_1","mfd_center_bg","mfd_horizon_virtual_pip_2","mfd_bg_ca","mfd_center_console","cabin_detail","mfd_damage","cabin_door_l","cabin_door_r","cabin_optimized","door_r_hydraulic_1","door_hydravlics","door_l_hydraulic_2","door_l_hydraulic_1","door_r_hydraulic_2","cabin_detail_panel_fix","gear_1_damper","gear_2_damper","gear_3_damper","elevator","rudder","hit_hull","hit_aileronr","hit_aileronl","hit_elevatorl","hit_elevatorr","hit_rudderc","hit_engine","proxy:\a3\air_f\data\plane_flag_medium_inv_f.001","cabin_throttle"]
				type = "C_Plane_Civil_01_F";
				offset[] = {0,0,1.1};
				selections[] = {
					{"vrtule blur",1}
				};
			};
		};
	};
};