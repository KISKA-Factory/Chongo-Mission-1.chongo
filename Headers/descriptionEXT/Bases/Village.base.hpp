class Village
{
	side = SIDE_OPFOR;
	infantryClasses[] = {
		"O_G_Soldier_SL_F",
		"O_G_Soldier_AR_F",
		"O_G_Soldier_GL_F",
		"O_G_Soldier_LAT2_F",
		"O_G_Soldier_M_F",
		"O_G_Soldier_F",
		"O_G_medic_F",
		"I_C_Soldier_Para_5_F",
		"I_C_Soldier_Para_1_F",
		"I_C_Soldier_Para_8_F",
		"I_C_Soldier_Para_6_F",
		"I_C_Soldier_Para_4_F",
		"I_C_Soldier_Para_3_F",
		"I_C_Soldier_Para_2_F",
		"I_C_Soldier_Para_7_F",
		"I_C_Soldier_Bandit_8_F",
		"I_C_Soldier_Bandit_6_F",
		"I_C_Soldier_Bandit_5_F",
		"I_C_Soldier_Bandit_2_F",
		"I_C_Soldier_Bandit_3_F"
	};

	class Infantry
	{
		class SittingUnits
		{
			positions = "Village - Ambient Sitting 1";
			numberOfUnits = -1;
			unitsPerGroup = -1;

			dynamicSim = ON;
			canPath = ON;

			class AmbientAnim
			{
				class animationSet
				{
					snapToAnimations[] = {
						"SIT_CHAIR_ARMED_1",
						"SIT_CHAIR_ARMED_2"
					};

					snapToRange = 10;
				};
				
				exitOnCombat = ON;
			};
		};

		class StandingUnits_1
		{
			positions = "Village - Ambient Standing 1";
			numberOfUnits = -1;
			unitsPerGroup = -1;

			dynamicSim = ON;
			canPath = ON;

			class AmbientAnim
			{
				animationSet[] = {
					"WATCH_1",
					"WATCH_2",
					"STAND_ARMED_1",
					"STAND_ARMED_2"
				};
				
				equipmentLevel = "";
				exitOnCombat = ON;
			};
		};
		class StandingUnits_2 : StandingUnits_1
		{
			positions = "Village - Ambient Standing 2";
		};

		class GeneralUnits_1
		{
			positions = "Village - General 1";

			numberOfUnits = 14;
			unitsPerGroup = 3;

			dynamicSim = ON;
			canPath = ON;
		};
		class GeneralUnits_2 : GeneralUnits_1
		{
			positions = "Village - General 2";

			numberOfUnits = 15;
			unitsPerGroup = 5;
		};
		class GeneralUnits_3 : GeneralUnits_1
		{
			positions = "Village - General 3";

			numberOfUnits = -1;
			unitsPerGroup = -1;
		};

		class MainBuildingInterior
		{
			positions = "Village - Main Builing - Interior";

			numberOfUnits = 10;
			unitsPerGroup = -1;

			dynamicSim = ON;
			canPath = OFF;
		};
		class MainBuildingRoof : MainBuildingInterior
		{
			positions = "Village - Main Builing - Rooftop";
		};

		class NoMoveExteriors
		{
			positions = "Village - No Move Exteriors";

			numberOfUnits = 15;
			unitsPerGroup = 5;

			dynamicSim = ON;
			canPath = OFF;
		};
		class NoMoveInteriors : NoMoveExteriors
		{
			positions = "Village - No Move Interiors";
		};

		class MoveExteriors
		{
			positions = "Village - Move Exteriors";

			numberOfUnits = 12;
			unitsPerGroup = 3;

			dynamicSim = ON;
			canPath = ON;
		};
		class MoveInteriors_1
		{
			positions = "Village - Move Interiors 1";

			numberOfUnits = 10;
			unitsPerGroup = 3;

			dynamicSim = ON;
			canPath = ON;
		};
		class MoveInteriors_2 : MoveInteriors_1
		{
			positions = "Village - Move Interiors 2";
			numberOfUnits = 10;
			unitsPerGroup = 3;
		};
		class MoveInteriors_3 : MoveInteriors_1
		{
			positions = "Village - Move Interiors 3";
			numberOfUnits = 10;
			unitsPerGroup = 3;
		};
	};
};