/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 28/09/15 02:05
	Description: cfgCrates.hpp
*/
/*
class ACE_medicalSupplyCrate;
class Box_NATO_Ammo_F;
class Box_NATO_AmmoOrd_F;
class Box_NATO_Grenades_F;
class B_supplyCrate_F;
class Box_NATO_Support_F;	
class Land_MetalCase_01_large_F;
class Land_PlasticCase_01_large_F;
class Land_PlasticCase_01_medium_F;
class Land_Pod_Heli_Transport_04_ammo_F;
class Land_Pod_Heli_Transport_04_fuel_F;
class Land_Pod_Heli_Transport_04_repair_F;
class Land_Pod_Heli_Transport_04_bench_F;
class Land_Pod_Heli_Transport_04_covered_F;
class Land_Pod_Heli_Transport_04_box_F;
class Land_Pod_Heli_Transport_04_medevac_F;
class Box_NATO_WpsSpecial_F;
class Box_NATO_Wps_F;
*/
	
/////////////////
//Static stores//
/////////////////
class SOR_PJ_Pack_Box_F_W : Land_PlasticCase_01_large_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyBoxes";
	vehicleClass = "SOR_SupplyBoxes";	
	faction = SOR_Faction_CRATE;		
	displayName = "Box PJ Pack Storage Woodland [Static]";
	class TransportItems{};		
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_PJMedicPack_W,7)
	};
};	

///////////////////////
//Hand Liftable Boxes//
///////////////////////
// Medical Box 
class SOR_M_Box_F_W : ACE_medicalSupplyCrate
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyBoxes";
	vehicleClass = "SOR_SupplyBoxes";	
	faction = SOR_Faction_CRATE;		
	displayName = "Box [Woodland Medical]";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,40);
		item_xx(ACE_morphine,18);
	};		
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Medic_Pack_W,1)
	};
};	

///////////////////////////
// Sling loadable Crates //
///////////////////////////

// All in one Crate		
class SOR_AM_Crate_F_W : B_supplyCrate_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyCrates";
	vehicleClass = "SOR_SupplyCrates";	
	faction = SOR_Faction_CRATE;
	displayName = "Crate [Woodland Ammo&Med]";
	icon = "iconCrateAmmo";
	class TransportItems
	{
		item_xx(ACE_CableTie,5)
		item_xx(ACE_FieldDressing,90);
		item_xx(ACE_morphine,50);
	};		
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,4)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,80)
		mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,20)
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,8)	
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,8)		
		mag_xx(1Rnd_HE_Grenade_shell,10)
		mag_xx(1Rnd_Smoke_Grenade_shell,10)			
		mag_xx(1Rnd_SmokeRed_Grenade_shell,10)	
		mag_xx(rhs_mag_m67,20)
		mag_xx(rhs_mag_an_m8hc,20)
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,20)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Medic_Pack_W,3)
	};
};

//////////////////////////////
// Sling loadable Taru Pods //
//////////////////////////////	
// Medical pod	
class SOR_Taru_Pod_medevac_Black_W : Land_Pod_Heli_Transport_04_medevac_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyCrates";
	vehicleClass = "SOR_SupplyCrates";	
	faction = SOR_Faction_CRATE;
	displayName = "Taru Pod [Woodland Medical CCP]";
	side=1;	
	hiddenSelections[]=
	{
		"Camo_1",
		"Camo_2"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
	};
	class TransportItems
	{
		item_xx(ACE_FieldDressing,60);
		item_xx(ACE_morphine,30);
		item_xx(ACE_epinephrine,30);			
		item_xx(ACE_bloodIV_500,30);
	};		
	class TransportWeapons{};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,5)
		mag_xx(rhs_mag_an_m8hc,10)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Medic_Pack_W,3)
		pack_xx(SOR_PJMedicPack_W,3)
	};
};