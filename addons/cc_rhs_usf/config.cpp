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
			"1RA_MOTX_FUS_M4A1_ocp",
			"1RA_MOTX_GRA_M4A1_M320_ocp",
			"1RA_MOTX_FA_M249_ocp",
			//Unitats
			"1RA_LE_ocp",
			"1RA_LEQ_ocp",
			"1RA_FUS_M4A1_ocp",
			"1RA_GRA_M4A1_M320_ocp",
			"1RA_FA_M249_ocp"
		};
		weapons[] = 
		{
			//Armes
			"1RA_ARMAP_LE",
			"1RA_ARMAP_LEQ",
			"1RA_ARMAP_FUS_M4A1",
			"1RA_ARMAP_FUS_M4A1_M320",
			"1RA_ARMAP_FA_M249",
			//Uniformes
			"1RA_UNI_REG_ocp",
			//Armilles
			"1RA_ARMI_LE_ocp",
			"1RA_ARMI_LEQ_ocp",
			"1RA_ARMI_FUS_ocp",
			"1RA_ARMI_GRA_ocp",
			"1RA_ARMI_FA_ocp"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR","rhsusf_main","ace_main","task_force_radio_items","ppcc_identity"};
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
		scopeCurator = 2;
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
	class rhs_weap_m4a1;
	class rhs_weap_m249_pip_S;
	
	/*************************/
	/*Arma Líder d'Esquadra**/ // ---> 1RA_ARMAP_LE
	/***********************/
	/**/MACRO_MOD_ARMA(1RA_ARMAP_LE,rhs_weap_m4a1_m320,rhsusf_acc_ACOG,rhsusf_acc_anpeq15,rhsusf_acc_SF3P556)

	/**********************/
	/*Arma Líder d'Equip**/ // ---> 1RA_ARMAP_LEQ
	/********************/
	/**/MACRO_MOD_ARMA(1RA_ARMAP_LEQ,rhs_weap_m4a1_m320,rhsusf_acc_ACOG,rhsusf_acc_anpeq15,rhsusf_acc_SF3P556)

	/**************************/
	/*Arma Fuseller M4A1 OCP**/ // ---> 1RA_ARMAP_FUS_M4A1
	/************************/
	/**/MACRO_MOD_ARMA(1RA_ARMAP_FUS_M4A1,rhs_weap_m4a1,rhsusf_acc_ACOG,rhsusf_acc_anpeq15,rhsusf_acc_SF3P556)

	/*******************************/
	/*Arma Granader M4A1+M320 OCP**/ // ---> 1RA_ARMAP_FUS_M4A1_M320
	/*****************************/
	/**/MACRO_MOD_ARMA(1RA_ARMAP_FUS_M4A1_M320,rhs_weap_m4a1_m320,rhsusf_acc_ACOG,rhsusf_acc_anpeq15,rhsusf_acc_SF3P556)

	/************************************/
	/*Arma Fuseller Automatic M249 OCP**/ // ---> 1RA_ARMAP_FA_M249
	/**********************************/
	/**/MACRO_MOD_ARMA(1RA_ARMAP_FA_M249,rhs_weap_m249_pip_S,rhsusf_acc_ELCAN,rhsusf_acc_anpeq15,fakeWeapon)



  /*/////////////////*/
 /*///////UNIFORMES/*/
/*/////////////////*/
	class rhs_uniform_cu_ocp;
	class Uniform_Base;
	class UniformItem;

	/*****************************/
	/*Uniforme Reglamentari OCP**/ // ---> 1RA_UNI_REG_ocp
	/***************************/
	/**/MACRO_MOD_UNIFORME(1RA_UNI_REG_ocp,rhs_uniform_cu_ocp,1RA_LE_ocp,40,40)



  /*////////////////*/
 /*///////ARMILLES/*/
/*////////////////*/
	class rhsusf_iotv_ocp_squadleader;
	class rhsusf_iotv_ocp_teamleader;
	class rhsusf_iotv_ocp_rifleman;
	class rhsusf_iotv_ocp_grenadier;
	class rhsusf_iotv_ocp_SAW;

	/****************************/
	/*Armilla Líder d'Esquadra**/ // ---> 1RA_ARMI_LE_ocp
	/**************************/
	/**/class 1RA_ARMI_LE_ocp : rhsusf_iotv_ocp_squadleader
	/**/{
	/**/	author = "Cavallers del Cel";
	/**/	scope = 2;
	/**/	displayName = "Armilla Reglamentaria OCP";
	/**/
	/**/};

	/*************************/
	/*Armilla Líder d'Equip**/ // ---> 1RA_ARMI_LEQ_ocp
	/***********************/
	/**/class 1RA_ARMI_LEQ_ocp : rhsusf_iotv_ocp_teamleader
	/**/{
	/**/	author = "Cavallers del Cel";
	/**/	scope = 2;
	/**/	displayName = "Armilla Reglamentaria OCP";
	/**/
	/**/};

	/********************/
	/*Armilla Fuseller**/ // ---> 1RA_ARMI_FUS_ocp
	/******************/
	/**/class 1RA_ARMI_FUS_ocp : rhsusf_iotv_ocp_rifleman
	/**/{
	/**/	author = "Cavallers del Cel";
	/**/	scope = 2;
	/**/	displayName = "Armilla Reglamentaria OCP";
	/**/
	/**/};

	/********************/
	/*Armilla Granader**/ // ---> 1RA_ARMI_GRA_ocp
	/******************/
	/**/class 1RA_ARMI_GRA_ocp : rhsusf_iotv_ocp_grenadier
	/**/{
	/**/	author = "Cavallers del Cel";
	/**/	scope = 2;
	/**/	displayName = "Armilla Reglamentaria OCP";
	/**/
	/**/};
	
	/******************************/
	/*Armilla Fuseller Automatic**/ // ---> 1RA_ARMI_FA_ocp
	/****************************/
	/**/class 1RA_ARMI_FA_ocp : rhsusf_iotv_ocp_SAW
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
	class rhsusf_assault_eagleaiii_ocp;

	/*****************************/
	/*Motxilla Líder d'Esquadra**/ // ---> 1RA_MOTX_LE_ocp
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

	/**************************/
	/*Motxilla Líder d'Equip**/ // ---> 1RA_MOTX_LEQ_ocp
	/************************/
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

	/*****************************/
	/*Motxilla Fuseller M4A1 OCP*/ // ---> 1RA_MOTX_FUS_M4A1_ocp
	/***************************/
	/**/class 1RA_MOTX_FUS_M4A1_ocp : rhsusf_assault_eagleaiii_ocp
	/**/{
	/**/	author = "Cavallers del Cel";
	/**/	scope = 2;
	/**/	displayName = "Motxilla Eagle III OCP";
	/**/	hiddenSelections[] = {"camo"};
	/**/	hiddenSelectionsTextures[] = {"\cc_rhs_usf\data\tex\TEX_1rausf_motx_eiii_ocp.paa"};
	/**/	class TransportItems 
	/**/	{
	/**/		MACRO_ADDITEM(rhsusf_ANPVS_14,1)
	/**/		MACRO_ADDITEM(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,6)
	/**/		MACRO_ADDITEM(rhs_mag_an_m8hc,4)
	/**/		MACRO_ADDITEM(rhs_mag_mk84,1)
	/**/		MACRO_ADDITEM(rhs_mag_m67,3)
	/**/		MACRO_ADDITEM(rhs_mag_m18_red,1)
	/**/		MACRO_ADDITEM(rhs_mag_m18_green,1)
	/**/	};
	/**/};

	/**********************************/
	/*Motxilla Granader M4A1+M320 OCP*/ // ---> 1RA_MOTX_GRA_M4A1_M320_ocp
	/********************************/
	/**/class 1RA_MOTX_GRA_M4A1_M320_ocp : rhsusf_assault_eagleaiii_ocp
	/**/{
	/**/	author = "Cavallers del Cel";
	/**/	scope = 2;
	/**/	displayName = "Motxilla Eagle III OCP";
	/**/	hiddenSelections[] = {"camo"};
	/**/	hiddenSelectionsTextures[] = {"\cc_rhs_usf\data\tex\TEX_1rausf_motx_eiii_ocp.paa"};
	/**/	class TransportItems 
	/**/	{
	/**/		MACRO_ADDITEM(rhsusf_ANPVS_14,1)
	/**/		MACRO_ADDITEM(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,7)
	/**/		MACRO_ADDITEM(rhs_mag_an_m8hc,1)
	/**/		MACRO_ADDITEM(rhs_mag_mk84,1)
	/**/		MACRO_ADDITEM(rhs_mag_m67,3)
	/**/		MACRO_ADDITEM(rhs_mag_m18_red,1)
	/**/		MACRO_ADDITEM(rhs_mag_m18_green,1)
	/**/		MACRO_ADDITEM(rhs_mag_M433_HEDP,12)
	/**/	};
	/**/};

	/***************************************/
	/*Motxilla Fuseller Automàtic M249 OCP*/ // ---> 1RA_MOTX_FA_M249_ocp
	/*************************************/
	/**/class 1RA_MOTX_FA_M249_ocp : rhsusf_assault_eagleaiii_ocp
	/**/{
	/**/	author = "Cavallers del Cel";
	/**/	scope = 2;
	/**/	displayName = "Motxilla Eagle III OCP";
	/**/	hiddenSelections[] = {"camo"};
	/**/	hiddenSelectionsTextures[] = {"\cc_rhs_usf\data\tex\TEX_1rausf_motx_eiii_ocp.paa"};
	/**/	class TransportItems 
	/**/	{
	/**/		MACRO_ADDITEM(rhsusf_ANPVS_14,1)
	/**/		MACRO_ADDITEM(rhsusf_100Rnd_556x45_soft_pouch,3)
	/**/		MACRO_ADDITEM(rhs_mag_an_m8hc,2)
	/**/	};
	/**/};



  /*///////////////*/
 /*///////UNITATS/*/
/*///////////////*/
	class B_officer_F;
	class B_Soldier_TL_F;
	class B_Soldier_F;
	class B_Soldier_GL_F;
	class B_soldier_AR_F;

	/***********************/
	/*Líder d'Esquadra OCP*/ // ---> 1RA_LE_ocp
	/*********************/
	/**/class 1RA_LE_ocp : B_officer_F
	/**/{
	/**/	priority = 0;
	/**/	scope = 2;
	/**/	scopeCurator = 2;
	/**/	author = "Cavallers del Cel";
	/**/	displayName = "Lider d'Esquadra";
	/**/	side = 1;
	/**/	faction = "PPCC_FAC_B";
	/**/	vehicleClass = "1RA_ocp";
	/**/	genericNames = "CatalanNames";
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
	/**/	priority = -1;
	/**/	scope = 2;
	/**/	scopeCurator = 2;
	/**/	author = "Cavallers del Cel";
	/**/	displayName = "Lider d'Equip";
	/**/	side = 1;
	/**/	faction = "PPCC_FAC_B";
	/**/	vehicleClass = "1RA_ocp";
	/**/	genericNames = "CatalanNames";
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

	/********************/
	/*Fuseller M4A1 OCP*/ // ---> 1RA_FUS_M4A1_ocp
	/******************/
	/**/class 1RA_FUS_M4A1_ocp : B_Soldier_F
	/**/{
	/**/	priority = -2;
	/**/	scope = 2;
	/**/	scopeCurator = 2;
	/**/	author = "Cavallers del Cel";
	/**/	displayName = "Fuseller M4A1";
	/**/	side = 1;
	/**/	faction = "PPCC_FAC_B";
	/**/	vehicleClass = "1RA_ocp";
	/**/	genericNames = "CatalanNames";
	/**/
	/**/	uniformClass = "1RA_UNI_REG_ocp";
	/**/	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	/**/	hiddenSelectionsTextures[] = {"\cc_rhs_usf\data\tex\TEX_1rausf_UniformeReglamentari_ocp.paa","\cc_rhs_usf\data\tex\TEX_1rausf_Detall_ocp.paa","\cc_rhs_usf\fake.paa","\cc_rhs_usf\fake.paa"};
	/**/	model = "\rhsusf\addons\rhsusf_infantry\rhsusf_army_base.p3d";
	/**/	backpack = "1RA_MOTX_FUS_M4A1_ocp";
	/**/	weapons[] = {"1RA_ARMAP_FUS_M4A1","rhsusf_weap_m1911a1","lerca_1200_tan","Throw", "Put"};
	/**/	respawnWeapons[] = {"1RA_ARMAP_FUS_M4A1","rhsusf_weap_m1911a1","lerca_1200_tan","Throw", "Put"};
	/**/	magazines[] = {MACRO_COUNT3("rhsusf_mag_7x45acp_MHP"),MACRO_COUNT11("rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer"),MACRO_COUNT3("rhs_mag_m67"),"rhs_mag_an_m8hc"};
	/**/	respawnMagazines[] = {MACRO_COUNT3("rhsusf_mag_7x45acp_MHP"),MACRO_COUNT11("rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer"),MACRO_COUNT3("rhs_mag_m67"),"rhs_mag_an_m8hc"};
	/**/	Items[] = {"ACE_EarPlugs",MACRO_COUNT2("ACE_morphine"),"ACE_epinephrine","ACE_CableTie","ACE_key_west","rhsusf_acc_rotex5_grey",MACRO_COUNT4("ACE_fieldDressing"),MACRO_COUNT3("ACE_packingBandage"),MACRO_COUNT3("ACE_elasticBandage"),MACRO_COUNT3("ACE_quikclot"),"ACE_tourniquet","G_Tactical_Clear","ACE_MapTools"};
	/**/	RespawnItems[] = {"ACE_EarPlugs",MACRO_COUNT2("ACE_morphine"),"ACE_epinephrine","ACE_CableTie","ACE_key_west","rhsusf_acc_rotex5_grey",MACRO_COUNT4("ACE_fieldDressing"),MACRO_COUNT3("ACE_packingBandage"),MACRO_COUNT3("ACE_elasticBandage"),MACRO_COUNT3("ACE_quikclot"),"ACE_tourniquet","G_Tactical_Clear","ACE_MapTools"};
	/**/	linkedItems[] = {"1RA_ARMI_FUS_ocp","rhsusf_ach_helmet_headset_ocp","ItemMap","ItemCompass","tf_microdagr","tf_rf7800str"};
	/**/	respawnLinkedItems[] = {"1RA_ARMI_FUS_ocp","rhsusf_ach_helmet_headset_ocp","ItemMap","ItemCompass","tf_microdagr","tf_rf7800str"};
	/**/
	/**/};

	/*************************/
	/*Granader M4A1+M320 OCP*/ // ---> 1RA_GRA_M4A1_M320_ocp
	/***********************/
	/**/class 1RA_GRA_M4A1_M320_ocp : B_Soldier_GL_F
	/**/{
	/**/	priority = -3;
	/**/	scope = 2;
	/**/	scopeCurator = 2;
	/**/	author = "Cavallers del Cel";
	/**/	displayName = "Granader M4A1+M320";
	/**/	side = 1;
	/**/	faction = "PPCC_FAC_B";
	/**/	vehicleClass = "1RA_ocp";
	/**/	genericNames = "CatalanNames";
	/**/
	/**/	uniformClass = "1RA_UNI_REG_ocp";
	/**/	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	/**/	hiddenSelectionsTextures[] = {"\cc_rhs_usf\data\tex\TEX_1rausf_UniformeReglamentari_ocp.paa","\cc_rhs_usf\data\tex\TEX_1rausf_Detall_ocp.paa","\cc_rhs_usf\fake.paa","\cc_rhs_usf\fake.paa"};
	/**/	model = "\rhsusf\addons\rhsusf_infantry\rhsusf_army_base.p3d";
	/**/	backpack = "1RA_MOTX_GRA_M4A1_M320_ocp";
	/**/	weapons[] = {"1RA_ARMAP_FUS_M4A1_M320","rhsusf_weap_m1911a1","lerca_1200_tan","Throw", "Put"};
	/**/	respawnWeapons[] = {"1RA_ARMAP_FUS_M4A1_M320","rhsusf_weap_m1911a1","lerca_1200_tan","Throw", "Put"};
	/**/	magazines[] = {MACRO_COUNT3("rhsusf_mag_7x45acp_MHP"),MACRO_COUNT9("rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer"),MACRO_COUNT3("rhs_mag_m67"),"rhs_mag_an_m8hc",MACRO_COUNT13("rhs_mag_M433_HEDP")};
	/**/	respawnMagazines[] = {MACRO_COUNT3("rhsusf_mag_7x45acp_MHP"),MACRO_COUNT9("rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer"),MACRO_COUNT3("rhs_mag_m67"),"rhs_mag_an_m8hc",MACRO_COUNT13("rhs_mag_M433_HEDP")};
	/**/	Items[] = {"ACE_EarPlugs",MACRO_COUNT2("ACE_morphine"),"ACE_epinephrine","ACE_CableTie","ACE_key_west","rhsusf_acc_rotex5_grey",MACRO_COUNT4("ACE_fieldDressing"),MACRO_COUNT3("ACE_packingBandage"),MACRO_COUNT3("ACE_elasticBandage"),MACRO_COUNT3("ACE_quikclot"),"ACE_tourniquet","ACE_MapTools"};
	/**/	RespawnItems[] = {"ACE_EarPlugs",MACRO_COUNT2("ACE_morphine"),"ACE_epinephrine","ACE_CableTie","ACE_key_west","rhsusf_acc_rotex5_grey",MACRO_COUNT4("ACE_fieldDressing"),MACRO_COUNT3("ACE_packingBandage"),MACRO_COUNT3("ACE_elasticBandage"),MACRO_COUNT3("ACE_quikclot"),"ACE_tourniquet","ACE_MapTools"};
	/**/	linkedItems[] = {"1RA_ARMI_GRA_ocp","rhsusf_ach_helmet_headset_ocp","ItemMap","ItemCompass","tf_microdagr","tf_rf7800str"};
	/**/	respawnLinkedItems[] = {"1RA_ARMI_GRA_ocp","rhsusf_ach_helmet_headset_ocp","ItemMap","ItemCompass","tf_microdagr","tf_rf7800str"};
	/**/};

	/******************************/
	/*Fuseller Automàtic M249 OCP*/ // ---> 1RA_FA_M249_ocp
	/****************************/
	/**/class 1RA_FA_M249_ocp : B_soldier_AR_F
	/**/{
	/**/	priority = -4;
	/**/	scope = 2;
	/**/	scopeCurator = 2;
	/**/	author = "Cavallers del Cel";
	/**/	displayName = "Fuseller Automatic M249";
	/**/	side = 1;
	/**/	faction = "PPCC_FAC_B";
	/**/	vehicleClass = "1RA_ocp";
	/**/	genericNames = "CatalanNames";
	/**/
	/**/	uniformClass = "1RA_UNI_REG_ocp";
	/**/	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	/**/	hiddenSelectionsTextures[] = {"\cc_rhs_usf\data\tex\TEX_1rausf_UniformeReglamentari_ocp.paa","\cc_rhs_usf\data\tex\TEX_1rausf_Detall_ocp.paa","\cc_rhs_usf\fake.paa","\cc_rhs_usf\fake.paa"};
	/**/	model = "\rhsusf\addons\rhsusf_infantry\rhsusf_army_base.p3d";
	/**/	backpack = "1RA_MOTX_FA_M249_ocp";
	/**/	weapons[] = {"1RA_ARMAP_FA_M249","rhsusf_weap_m1911a1","lerca_1200_tan","Throw", "Put"};
	/**/	respawnWeapons[] = {"1RA_ARMAP_FA_M249","rhsusf_weap_m1911a1","lerca_1200_tan","Throw", "Put"};
	/**/	magazines[] = {MACRO_COUNT2("rhsusf_100Rnd_556x45_soft_pouch"),MACRO_COUNT2("rhsusf_mag_7x45acp_MHP"),"rhsusf_200Rnd_556x45_soft_pouch",MACRO_COUNT3("rhs_mag_m67"),"rhs_mag_an_m8hc","rhs_mag_mk84"};
	/**/	respawnMagazines[] = {MACRO_COUNT2("rhsusf_100Rnd_556x45_soft_pouch"),MACRO_COUNT2("rhsusf_mag_7x45acp_MHP"),"rhsusf_200Rnd_556x45_soft_pouch",MACRO_COUNT3("rhs_mag_m67"),"rhs_mag_an_m8hc","rhs_mag_mk84"};
	/**/	Items[] = {"ACE_EarPlugs",MACRO_COUNT2("ACE_morphine"),"ACE_epinephrine","ACE_CableTie","ACE_key_west","rhsusf_acc_rotex5_grey",MACRO_COUNT4("ACE_fieldDressing"),MACRO_COUNT3("ACE_packingBandage"),MACRO_COUNT3("ACE_elasticBandage"),MACRO_COUNT3("ACE_quikclot"),"ACE_tourniquet","ACE_MapTools"};
	/**/	RespawnItems[] = {"ACE_EarPlugs",MACRO_COUNT2("ACE_morphine"),"ACE_epinephrine","ACE_CableTie","ACE_key_west","rhsusf_acc_rotex5_grey",MACRO_COUNT4("ACE_fieldDressing"),MACRO_COUNT3("ACE_packingBandage"),MACRO_COUNT3("ACE_elasticBandage"),MACRO_COUNT3("ACE_quikclot"),"ACE_tourniquet","ACE_MapTools"};
	/**/	linkedItems[] = {"1RA_ARMI_FA_ocp","rhsusf_ach_helmet_headset_ocp","ItemMap","ItemCompass","tf_microdagr","tf_rf7800str"};
	/**/	respawnLinkedItems[] = {"1RA_ARMI_FA_ocp","rhsusf_ach_helmet_headset_ocp","ItemMap","ItemCompass","tf_microdagr","tf_rf7800str"};
	/**/}
};
