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
};