class KISKA_RandomGear
{
	class Vanilla
	{
		class VanillaBase 
		{
			uniforms[] = {
				"U_B_CombatUniform_mcam_vest",
				"U_B_CombatUniform_mcam_tshirt",
				"U_B_CombatUniform_mcam"
			};
		};

		class B_Soldier_unarmed_F : VanillaBase
		{
			vests[] = {
				"", // empty
				"V_rangemaster_belt",
				"V_LegStrapBag_black_F",
				"V_LegStrapBag_coyote_F",
				"V_LegStrapBag_olive_F"
			};
			headgear[] = {
				"", // empty
				"H_cap_blk",
				"H_Cap_grn",
				"H_Cap_tan_specops_US",
				"H_Cap_tan",
				"H_Cap_oli",
				"H_Booniehat_mcamo",
				"H_Booniehat_oli",
				"H_Booniehat_tan",
				"H_Booniehat_khk"
			};
			facewear[] = {
				"", // empty
				"G_Shades_Black",
				"G_Squares_Tinted",
				"G_Shades_Green",
				"G_Aviator"
			};
			handguns[] = {
				{"hgun_Pistol_heavy_01_F"}
			};
		};

		class B_Soldier_lite_F : VanillaBase
		{
			headgear[] = {
				"H_Booniehat_khk_hs",
				"H_HelmetB",
				"H_HelmetB_sand",
				"H_HelmetB_snakeskin",
				"H_HelmetSpecB",
				"H_HelmetSpecB_sand",
				"H_HelmetSpecB_paint2",
				"H_HelmetSpecB_snakeskin",
				"H_HelmetB_light",
				"H_HelmetB_light_desert",
				"H_HelmetB_light_sand",
				"H_HelmetB_light_snakeskin",
				"H_Cap_oli_hs"
			};
			vests[] = {
				"V_PlateCarrier1_rgr",
				"V_PlateCarrier2_rgr",
				"V_CarrierRigKBT_01_light_Olive_F"
			};
			primaryWeapons[] = {
				{"arifle_MX_F",{"optic_Aco","30Rnd_65x39_caseless_mag"}},
				{"arifle_MX_F",{"optic_Hamr","30Rnd_65x39_caseless_mag"}}
			};
			handguns[] = {
				{"hgun_Pistol_heavy_01_F"}
			};
			facewear[] = {
				"", // empty
				"G_Shades_Black",
				"G_Tactical_Clear",
				"G_Tactical_Black"
			};
		};

		class B_Deck_Crew_F : B_Soldier_unarmed_F
		{
			headgear[] = {
				"H_Cap_marshal",
				"H_EarProtectors_black_F",
				"H_EarProtectors_red_F",
				"H_EarProtectors_white_F"
			};
			vests[] = {
				"V_rangemaster_belt",
			};
			facewear[] = {
				"", 0.6, // empty
				"G_Shades_Black", 0.2,
				"G_Squares_Tinted", 0.1,
				"G_Shades_Green", 0.1
			};
		};
	};
	class ChongoArmy
	{
		class ChongoArmyTemplate
		{
			uniforms[] = {
				"U_I_E_Uniform_01_F",
				"U_I_E_Uniform_01_shortsleeve_F",
				"U_I_E_Uniform_01_tanktop_F",
				"U_I_E_Uniform_01_sweater_F"
			};
		};
		class I_C_Soldier_Bandit_5_F : ChongoArmyTemplate
		{
			headgear[] = {
				"H_HelmetB",
				"H_HelmetB_sand",
				"H_Cap_oli",
				"H_Booniehat_mgrn",
				"H_Booniehat_khk",
				"H_Booniehat_eaf",
				"H_Cap_tan"
			};
			vests[] = {
				"V_TacVest_camo",
				"V_TacVest_oli",
			};
			primaryWeapons[] = {
				{"arifle_Mk20_plain_F",{"optic_Aco","30Rnd_556x45_Stanag_Tracer_Red"}},
				{"arifle_Mk20_plain_F",{"30Rnd_556x45_Stanag_Tracer_Red"}}
			};
		};
	};
};



//Realized in the middle of doing this that it wouldnt make sense for these guys to be carrying packs while at the base.
//But I'm gonna keep these here cause I will need these for later when making the combat loadouts.
// "B_TacticalPack_oli",
// "B_TacticalPack_mcamo",
// "B_AssaultPack_rgr",
// "B_AssaultPack_khk",
// "B_Kitbag_mcamo",
// "B_AssaultPack_mcamo"
// "B_Kitbag_rgr"