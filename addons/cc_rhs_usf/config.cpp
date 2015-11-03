/*
 *  Author: Moska
 *  Mod: CC
 *  File= "config.cpp"
 */

#include "macros.hpp"





/*****************************************************************************/
/*  CFG PATCHES                                                              */
/*****************************************************************************/
class CfgPatches
{
	class cc_rhs_usf
	{
		author = "Cavallers del Cel";
		units[] = 
		{
			//Motxilles
			"1RA_MOTX_LE_ocp",
			"1RA_MOTX_LEQ_ocp",
			//Unitats
			"1RA_LE_ocp",
			"1RA_LEQ_ocp"
		};
		weapons[] = 
		{
			//Armes
			"1RA_ARMAP_LE",
			"1RA_ARMAP_LEQ",
			//Uniformes
			"1RA_UNI_REG_ocp",
			//Armilles
			"1RA_ARMI_LE_ocp",
			"1RA_ARMI_LEQ_ocp"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR","rhsusf_main","ace_main","task_force_radio_items"};
	};
};





/*****************************************************************************/
/*  CFG FACTION CLASSES                                                      */
/*****************************************************************************/
class CfgFactionClasses
{
	class PPCC_FAC_B
	{
		scope = 2;
		displayName = "PPCC";
		icon = "\cc_rhs_usf\data\img\iconB.paa";
		priority = -9999999999999;
		side = 1;
	};
};





/*****************************************************************************/
/*  CFG VEHICLE CLASSES                                                      */
/*****************************************************************************/
class CfgVehicleClasses
{
	class 1RA_ocp{displayName = "1RA (OCP)";};
};





/*****************************************************************************/
/*  CFG WEAPONS                                                              */
/*****************************************************************************/
class CfgWeapons
{



  /*/////////////*/
 /*///////ARMES/*/
/*/////////////*/
	class rhs_weap_m4a1_m320;
	
	/***********************/
	/*Arma Líder d'Esquadra*/ // ---> 1RA_ARMAP_LE
	/***********************/
	/**/class 1RA_ARMAP_LE: rhs_weap_m4a1_m320
	/**/{
	/**/	class LinkedItems
	/**/	{
	/**/		class LinkedItemsOptic
	/**/		{
	/**/			item = "rhsusf_acc_ACOG";
	/**/			slot = "CowsSlot";
	/**/		};
	/**/
	/**/		class LinkedItemsAcc
	/**/		{
	/**/			item = "rhsusf_acc_anpeq15";
	/**/			slot = "PointerSlot";
	/**/		};
	/**/
	/**/		class LinkedItemsMuzzle
	/**/		{
	/**/			item = "rhsusf_acc_SF3P556";
	/**/			slot = "MuzzleSlot";
	/**/		};
	/**/	};
	/**/};

	/********************/
	/*Arma Líder d'Equip*/ // ---> 1RA_ARMAP_LEQ
	/********************/
	/**/class 1RA_ARMAP_LEQ: rhs_weap_m4a1_m320
	/**/{
	/**/	class LinkedItems
	/**/	{
	/**/		class LinkedItemsOptic
	/**/		{
	/**/			item = "rhsusf_acc_ACOG";
	/**/			slot = "CowsSlot";
	/**/		};
	/**/
	/**/		class LinkedItemsAcc
	/**/		{
	/**/			item = "rhsusf_acc_anpeq15";
	/**/			slot = "PointerSlot";
	/**/		};
	/**/
	/**/		class LinkedItemsMuzzle
	/**/		{
	/**/			item = "rhsusf_acc_SF3P556";
	/**/			slot = "MuzzleSlot";
	/**/		};
	/**/	};
	/**/};



  /*/////////////////*/
 /*///////UNIFORMES/*/
/*/////////////////*/
	class rhs_uniform_cu_ocp;
	class Uniform_Base;
	class UniformItem;

	/***************************/
	/*Uniforme Reglamentari OCP*/ // ---> 1RA_UNI_REG_ocp
	/***************************/
	/**/class 1RA_UNI_REG_ocp: rhs_uniform_cu_ocp
	/**/{
	/**/	author = "Cavallers del Cel";
	/**/	scope = 2;
	/**/	displayName = "Uniforme Reglamentari OCP";
	/**/
	/**/	class ItemInfo: UniformItem
	/**/	{
	/**/  		uniformModel = "-";
	/**/		uniformClass = "1RA_LE_ocp";
	/**/		containerClass = "Supply40";
	/**/		mass = 40;
	/**/	};
	/**/};



  /*////////////////*/
 /*///////ARMILLES/*/
/*////////////////*/
	class rhsusf_iotv_ocp_squadleader;
	class rhsusf_iotv_ocp_teamleader;

	/**************************/
	/*Armilla Líder d'Esquadra*/ // ---> 1RA_ARMI_LE_ocp
	/**************************/
	/**/class 1RA_ARMI_LE_ocp : rhsusf_iotv_ocp_squadleader
	/**/{
	/**/	author = "Cavallers del Cel";
	/**/	scope = 2;
	/**/	displayName = "Armilla Reglamentaria OCP";
	/**/
	/**/};

	/***********************/
	/*Armilla Líder d'Equip*/ // ---> 1RA_ARMI_LEQ_ocp
	/***********************/
	/**/class 1RA_ARMI_LEQ_ocp : rhsusf_iotv_ocp_teamleader
	/**/{
	/**/	author = "Cavallers del Cel";
	/**/	scope = 2;
	/**/	displayName = "Armilla Reglamentaria OCP";
	/**/
	/**/};
};





/*****************************************************************************/
/*  CFG VEHICLES                                                             */
/*****************************************************************************/
class CfgVehicles
{



  /*/////////////////*/
 /*///////MOTXILLES/*/
/*/////////////////*/
	class tf_rt1523g_big_rhs;

	/***************************/
	/*Motxilla Líder d'Esquadra*/ // ---> 1RA_MOTX_LE_ocp
	/***************************/
	/**/class 1RA_MOTX_LE_ocp : tf_rt1523g_big_rhs
	/**/{
	/**/	author = "Cavallers del Cel";
	/**/	scope = 2;
	/**/	displayName = "Radio Llarga OCP";
	/**/	class TransportItems 
	/**/	{
	/**/		MACRO_ADDITEM(rhsusf_ANPVS_14,1)
	/**/		MACRO_ADDITEM(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,5)
	/**/		MACRO_ADDITEM(rhs_mag_an_m8hc,4)
	/**/		MACRO_ADDITEM(rhs_mag_m67,3)
	/**/		MACRO_ADDITEM(rhs_mag_m714_White,3)
	/**/		MACRO_ADDITEM(rhs_mag_m1rhs_uniform_cu_ocp8_red,2)
	/**/		MACRO_ADDITEM(rhs_mag_m18_green,2)
	/**/		MACRO_ADDITEM(rhs_mag_m18_purple,2)
	/**/		MACRO_ADDITEM(rhs_mag_m18_yellow,2)
	/**/		MACRO_ADDITEM(rhs_mag_m715_Green,1)
	/**/		MACRO_ADDITEM(rhs_mag_m716_yellow,1)
	/**/		MACRO_ADDITEM(rhs_mag_m713_Red,1)
	/**/	};
	/**/};

	/*************************/
	/*Motxilla Líder d'Equip*/ // ---> 1RA_MOTX_LEQ_ocp
	/***********************/
	/**/class 1RA_MOTX_LEQ_ocp : tf_rt1523g_big_rhs
	/**/{
	/**/	author = "Cavallers del Cel";
	/**/	scope = 2;
	/**/	displayName = "Radio Llarga OCP";
	/**/	class TransportItems 
	/**/	{
	/**/		MACRO_ADDITEM(rhsusf_ANPVS_14,1)
	/**/		MACRO_ADDITEM(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,5)
	/**/		MACRO_ADDITEM(rhs_mag_an_m8hc,4)
	/**/		MACRO_ADDITEM(rhs_mag_mk84,1)
	/**/		MACRO_ADDITEM(rhs_mag_m67,1)
	/**/		MACRO_ADDITEM(rhs_mag_m714_White,3)
	/**/		MACRO_ADDITEM(rhs_mag_m18_red,2)
	/**/		MACRO_ADDITEM(rhs_mag_m18_green,2)
	/**/		MACRO_ADDITEM(rhs_mag_m18_purple,2)
	/**/		MACRO_ADDITEM(rhs_mag_m18_yellow,2)
	/**/		MACRO_ADDITEM(rhs_mag_m715_Green,1)
	/**/		MACRO_ADDITEM(rhs_mag_m716_yellow,1)
	/**/		MACRO_ADDITEM(rhs_mag_m713_Red,1)
	/**/		MACRO_ADDITEM(rhs_mag_an_m14_th3,2)
	/**/	};
	/**/};



  /*///////////////*/
 /*///////UNITATS/*/
/*///////////////*/
	class B_Soldier_SL_F;
	class B_Soldier_TL_F;

	/***********************/
	/*Líder d'Esquadra OCP*/ // ---> 1RA_LE_ocp
	/*********************/
	/**/class 1RA_LE_ocp : B_Soldier_SL_F
	/**/{
	/**/	priority = 0;
	/**/	scope = 2;
	/**/	scopeCurator = 2;
	/**/	author = "Cavallers del Cel";
	/**/	displayName = "Lider d'Esquadra";
	/**/	side = 1;
	/**/	faction = "PPCC_FAC_B";
	/**/	vehicleClass = "1RA_ocp";
	/**/
	/**/	uniformClass = "1RA_UNI_REG_ocp";
	/**/	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	/**/	hiddenSelectionsTextures[] = {"\cc_rhs_usf\data\tex\TEX_1rausf_UniformeReglamentari_ocp.paa","\cc_rhs_usf\data\tex\TEX_1rausf_Detall_ocp.paa","\cc_rhs_usf\fake.paa","\cc_rhs_usf\fake.paa"};
	/**/	model = "\rhsusf\addons\rhsusf_infantry\rhsusf_army_base.p3d";
	/**/	backpack = "1RA_MOTX_LE_ocp";
	/**/	weapons[] = {"1RA_ARMAP_LE","rhsusf_weap_m1911a1","ACE_Vector","Throw", "Put"};
	/**/	respawnWeapons[] = {"1RA_ARMAP_LE","rhsusf_weap_m1911a1","ACE_Vector","Throw", "Put"};
	/**/	magazines[] = {"rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_an_m8hc","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_m714_White"};
        /**/	respawnMagazines[] = {"rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_an_m8hc","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_m714_White"};
	/**/	Items[] = {"ACE_EarPlugs","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_CableTie","ACE_key_west","rhsusf_acc_rotex5_grey","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_tourniquet","ACE_MapTools","ACE_microDAGR"};
        /**/	RespawnItems[] = {"ACE_EarPlugs","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_CableTie","ACE_key_west","rhsusf_acc_rotex5_grey","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_tourniquet","ACE_MapTools","ACE_microDAGR"};
	/**/	linkedItems[] = {"1RA_ARMI_LE_ocp","rhsusf_ach_helmet_headset_ocp","ItemMap","ItemCompass","tf_microdagr","tf_anprc152"};
	/**/	respawnLinkedItems[] = {"1RA_ARMI_LE_ocp","rhsusf_ach_helmet_headset_ocp","ItemMap","ItemCompass","tf_microdagr","tf_anprc152"};
	/**/};

	/********************/
	/*Líder d'Equip OCP*/ // ---> 1RA_LEQ_ocp
	/******************/
	/**/class 1RA_LEQ_ocp : B_Soldier_TL_F
	/**/{
	/**/	priority = 1;
	/**/	scope = 2;
	/**/	scopeCurator = 2;
	/**/	author = "Cavallers del Cel";
	/**/	displayName = "Lider d'Equip";
	/**/	side = 1;
	/**/	faction = "PPCC_FAC_B";
	/**/	vehicleClass = "1RA_ocp";
	/**/
	/**/	uniformClass = "1RA_UNI_REG_ocp";
	/**/	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	/**/	hiddenSelectionsTextures[] = {"\cc_rhs_usf\data\tex\TEX_1rausf_UniformeReglamentari_ocp.paa","\cc_rhs_usf\data\tex\TEX_1rausf_Detall_ocp.paa","\cc_rhs_usf\fake.paa","\cc_rhs_usf\fake.paa"};
	/**/	model = "\rhsusf\addons\rhsusf_infantry\rhsusf_army_base.p3d";
	/**/	backpack = "1RA_MOTX_LEQ_ocp";
	/**/	weapons[] = {"1RA_ARMAP_LEQ","rhsusf_weap_m1911a1","ACE_Vector","Throw", "Put"};
	/**/	respawnWeapons[] = {"1RA_ARMAP_LEQ","rhsusf_weap_m1911a1","ACE_Vector","Throw", "Put"};
	/**/	magazines[] = {"rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_an_m8hc","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_m714_White"};
        /**/	respawnMagazines[] = {"rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_an_m8hc","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_m714_White"};
	/**/	Items[] = {"ACE_EarPlugs","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_CableTie","ACE_key_west","rhsusf_acc_rotex5_grey","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_tourniquet","ACE_MapTools","ACE_microDAGR","G_Tactical_Clear"};
        /**/	RespawnItems[] = {"ACE_EarPlugs","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_CableTie","ACE_key_west","rhsusf_acc_rotex5_grey","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_tourniquet","ACE_MapTools","ACE_microDAGR","G_Tactical_Clear"};
	/**/	linkedItems[] = {"1RA_ARMI_LEQ_ocp","rhsusf_ach_helmet_headset_ocp","ItemMap","ItemCompass","tf_microdagr","tf_anprc152"};
	/**/	respawnLinkedItems[] = {"1RA_ARMI_LEQ_ocp","rhsusf_ach_helmet_headset_ocp","ItemMap","ItemCompass","tf_microdagr","tf_anprc152"};
	/**/};
};
