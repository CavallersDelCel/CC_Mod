#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
  name = #ITEM; \
  count = COUNT; \
};

class CfgPatches
{
	class cc_rhs_usf
	{
		author = "Cavallers del Cel";
		units[] = 
		{
			//Motxilles
			"CC_1rausf_Motxilla_LE_ocp",
			"CC_1rausf_Motxilla_LEQ_ocp",
			//Unitats
			"CC_1rausf_LE",
			"CC_1rausf_LEQ"
		};
		weapons[] = 
		{
			//Armes
			"CC_1rausf_FusellReglamentariM320",
			//Uniformes
			"CC_1rausf_UniformeReglamentari_ocp",
			//Armilles
			"CC_1rausf_Armilla_LE_ocp",
			"CC_1rausf_Armilla_LEQ_ocp"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR","rhsusf_main","ace_main","task_force_radio_items"};
	};
};

class CfgFactionClasses
{
	class cc_ppcc_b
	{
		scope = 2;
		displayName = "PPCC";
		icon = "\cc_rhs_usf\data\img\iconB.paa";
		priority = -9999999999999;
		side = 1;
	};
};

class CfgVehicleClasses
{
	class cc_1ra_ocp{displayName = "1RA (OCP)";};
};

class CfgWeapons
{
	//ARMES
	class rhs_weap_m4a1_m320;
	
	//fusell reglamentari
	class CC_1rausf_FusellReglamentariM320: rhs_weap_m4a1_m320
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_ACOG";
				slot = "CowsSlot";
			};

			class LinkedItemsAcc
			{
				item = "rhsusf_acc_anpeq15";
				slot = "PointerSlot";
			};

			class LinkedItemsMuzzle
			{
				item = "rhsusf_acc_SF3P556";
				slot = "MuzzleSlot";
			};
		};
	};

	//UNIFORMES
	class rhs_uniform_cu_ocp;
	class Uniform_Base;
	class UniformItem;

	class CC_1rausf_UniformeReglamentari_ocp: rhs_uniform_cu_ocp
	{
		author = "Cavallers del Cel";
		scope = 2;
		displayName = "Uniforme Reglamentari OCP";

		class ItemInfo: UniformItem
		{
	  	    uniformModel = "-";
		    uniformClass = "CC_1rausf_LE";
		    containerClass = "Supply40";
		    mass = 40;
		};
	};

	//ARMILLES
	class rhsusf_iotv_ocp_squadleader;
	class rhsusf_iotv_ocp_teamleader;

	//armilla lider d'esquadra ocp
	class CC_1rausf_Armilla_LE_ocp : rhsusf_iotv_ocp_squadleader
	{
		author = "Cavallers del Cel";
		scope = 2;
		displayName = "Armilla Reglamentaria OCP";

	};

	//armilla lider d'equip ocp
	class CC_1rausf_Armilla_LEQ_ocp : rhsusf_iotv_ocp_teamleader
	{
		author = "Cavallers del Cel";
		scope = 2;
		displayName = "Armilla Reglamentaria OCP";

	};
};

class CfgVehicles
{
	//MOTXILLES
	class tf_rt1523g_big_rhs;

	//motxilla lider d'esquadra ocp
	class CC_1rausf_Motxilla_LE_ocp : tf_rt1523g_big_rhs
	{
		author = "Cavallers del Cel";
		scope = 2;
		displayName = "Radio Llarga OCP";
		class TransportItems 
		{
			MACRO_ADDITEM(rhsusf_ANPVS_14,1)
			MACRO_ADDITEM(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,5)
			MACRO_ADDITEM(rhs_mag_an_m8hc,4)
			MACRO_ADDITEM(rhs_mag_m67,3)
			MACRO_ADDITEM(rhs_mag_m714_White,3)
			MACRO_ADDITEM(rhs_mag_m1rhs_uniform_cu_ocp8_red,2)
			MACRO_ADDITEM(rhs_mag_m18_green,2)
			MACRO_ADDITEM(rhs_mag_m18_purple,2)
			MACRO_ADDITEM(rhs_mag_m18_yellow,2)
			MACRO_ADDITEM(rhs_mag_m715_Green,1)
			MACRO_ADDITEM(rhs_mag_m716_yellow,1)
			MACRO_ADDITEM(rhs_mag_m713_Red,1)
		};
	};

	//motxilla lider d'equip ocp
	class CC_1rausf_Motxilla_LEQ_ocp : tf_rt1523g_big_rhs
	{
		author = "Cavallers del Cel";
		scope = 2;
		displayName = "Radio Llarga OCP";
		class TransportItems 
		{
			MACRO_ADDITEM(rhsusf_ANPVS_14,1)
			MACRO_ADDITEM(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,5)
			MACRO_ADDITEM(rhs_mag_an_m8hc,4)
			MACRO_ADDITEM(rhs_mag_mk84,1)
			MACRO_ADDITEM(rhs_mag_m67,1)
			MACRO_ADDITEM(rhs_mag_m714_White,3)
			MACRO_ADDITEM(rhs_mag_m18_red,2)
			MACRO_ADDITEM(rhs_mag_m18_green,2)
			MACRO_ADDITEM(rhs_mag_m18_purple,2)
			MACRO_ADDITEM(rhs_mag_m18_yellow,2)
			MACRO_ADDITEM(rhs_mag_m715_Green,1)
			MACRO_ADDITEM(rhs_mag_m716_yellow,1)
			MACRO_ADDITEM(rhs_mag_m713_Red,1)
			MACRO_ADDITEM(rhs_mag_an_m14_th3,2)
		};
	};

	//UNITATS
	class B_Soldier_SL_F;
	class B_Soldier_TL_F;

	//Lider d'esquadra ocp
	class CC_1rausf_LE : B_Soldier_SL_F
	{
		priority = 0;
		scope = 2;
		scopeCurator = 2;
		author = "Cavallers del Cel";
		displayName = "Lider d'Esquadra";
		side = 1;
		faction = "cc_ppcc_b";
		vehicleClass = "cc_1ra_ocp";

		uniformClass = "CC_1rausf_UniformeReglamentari_ocp";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\cc_rhs_usf\data\tex\TEX_1rausf_UniformeReglamentari_ocp.paa","\cc_rhs_usf\data\tex\TEX_1rausf_Detall_ocp.paa"};
		model = "\rhsusf\addons\rhsusf_infantry\rhsusf_army_base.p3d";
		backpack = "CC_1rausf_Motxilla_LE_ocp";
		weapons[] = {"CC_1rausf_FusellReglamentariM320","rhsusf_weap_m1911a1","ACE_Vector","Throw", "Put"};
		respawnWeapons[] = {"CC_1rausf_FusellReglamentariM320","rhsusf_weap_m1911a1","ACE_Vector","Throw", "Put"};
		magazines[] = {"rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_an_m8hc","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_m714_White"};
        	respawnMagazines[] = {"rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_an_m8hc","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_m714_White"};
		Items[] = {"ACE_EarPlugs","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_CableTie","ACE_key_west","rhsusf_acc_rotex5_grey","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_tourniquet","ACE_MapTools","ACE_microDAGR"};
        	RespawnItems[] = {"ACE_EarPlugs","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_CableTie","ACE_key_west","rhsusf_acc_rotex5_grey","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_tourniquet","ACE_MapTools","ACE_microDAGR"};
		linkedItems[] = {"CC_1rausf_Armilla_LE_ocp","rhsusf_ach_helmet_headset_ocp","ItemMap","ItemCompass","tf_microdagr","tf_anprc152"};
		respawnLinkedItems[] = {"CC_1rausf_Armilla_LE_ocp","rhsusf_ach_helmet_headset_ocp","ItemMap","ItemCompass","tf_microdagr","tf_anprc152"};
	};

	//Lider d'equip ocp
	class CC_1rausf_LEQ : B_Soldier_TL_F
	{
		priority = 1;
		scope = 2;
		scopeCurator = 2;
		author = "Cavallers del Cel";
		displayName = "Lider d'Equip";
		side = 1;
		faction = "cc_ppcc_b";
		vehicleClass = "cc_1ra_ocp";

		uniformClass = "CC_1rausf_UniformeReglamentari_ocp";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\cc_rhs_usf\data\tex\TEX_1rausf_UniformeReglamentari_ocp.paa","\cc_rhs_usf\data\tex\TEX_1rausf_Detall_ocp.paa"};
		model = "\rhsusf\addons\rhsusf_infantry\rhsusf_army_base.p3d";
		backpack = "CC_1rausf_Motxilla_LEQ_ocp";
		weapons[] = {"CC_1rausf_FusellReglamentariM320","rhsusf_weap_m1911a1","ACE_Vector","Throw", "Put"};
		respawnWeapons[] = {"CC_1rausf_FusellReglamentariM320","rhsusf_weap_m1911a1","ACE_Vector","Throw", "Put"};
		magazines[] = {"rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_an_m8hc","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_m714_White"};
        	respawnMagazines[] = {"rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_an_m8hc","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_m714_White"};
		Items[] = {"ACE_EarPlugs","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_CableTie","ACE_key_west","rhsusf_acc_rotex5_grey","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_tourniquet","ACE_MapTools","ACE_microDAGR","G_Tactical_Clear"};
        	RespawnItems[] = {"ACE_EarPlugs","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_CableTie","ACE_key_west","rhsusf_acc_rotex5_grey","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_tourniquet","ACE_MapTools","ACE_microDAGR","G_Tactical_Clear"};
		linkedItems[] = {"CC_1rausf_Armilla_LEQ_ocp","rhsusf_ach_helmet_headset_ocp","ItemMap","ItemCompass","tf_microdagr","tf_anprc152"};
		respawnLinkedItems[] = {"CC_1rausf_Armilla_LEQ_ocp","rhsusf_ach_helmet_headset_ocp","ItemMap","ItemCompass","tf_microdagr","tf_anprc152"};
	};
};
