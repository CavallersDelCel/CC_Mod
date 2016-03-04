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
	class 1ra_equip_ocp
	{
		author = "Cavallers del Cel";
		units[] = 
		{
			//Motxilles
			"1RA_MOTX_EIII_ocp"
		};
		weapons[] = 
		{
			//Uniformes
			"1RA_UNIF_REG_ocp",
			//Unitats
			"1RA_UNIT_REG_ocp"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR","rhsusf_main","ace_main","task_force_radio_items"};
	};
};


/*****************************************************************************/
/*  CFG WEAPONS                                                              */
/*****************************************************************************/
class CfgWeapons
{

  /*/////////////////*/
 /*///////UNIFORMES/*/
/*/////////////////*/
	class rhs_uniform_cu_ocp;
	class Uniform_Base;
	class UniformItem;

	/***************************/
	/*Uniforme Reglamentari OCP*/ // ---> 1RA_UNI_REG_ocp
	/***************************/
	/**/class 1RA_UNIF_REG_ocp: rhs_uniform_cu_ocp
	/**/{
	/**/	author = "Cavallers del Cel";
	/**/	scope = 2;
	/**/	displayName = "1RA Uniforme Reglamentari OCP";
	/**/
	/**/	class ItemInfo: UniformItem
	/**/	{
	/**/  		uniformModel = "-";
	/**/		uniformClass = "1RA_UNIT_REG_ocp";
	/**/		containerClass = "Supply40";
	/**/		mass = 40;
	/**/	};
	/**/};
};





/*****************************************************************************/
/*  CFG VEHICLES                                                             */
/*****************************************************************************/
class CfgVehicles
{
	class B_Soldier_base_F;
	class B_soldier_F;

	class rhsusf_assault_eagleaiii_ocp;

	/*****************************/
	/*Motxilla Assault Eagle III*/ // ---> 1RA_MOTX_EIII_ocp
	/***************************/
	/**/class 1RA_MOTX_EIII_ocp : rhsusf_assault_eagleaiii_ocp
	/**/{
	/**/	author = "Cavallers del Cel";
	/**/	scope = 2;
	/**/	displayName = "1RA Motxilla Eagle III OCP";
	/**/	hiddenSelections[] = {"camo"};
	/**/	hiddenSelectionsTextures[] = {"\1ra_equip_ocp\data\tex\TEX_1ra_motx_eiii_ocp.paa"};
	/**/};

	/********************************/
	/*1RA Uniforme Reglamentari OCP*/ // ---> 1RA_UNIT_REG_ocp
	/******************************/
	/**/class 1RA_UNIT_REG_ocp : B_Soldier_F
	/**/{
	/**/	priority = 0;
	/**/	scope = 2;
	/**/	scopeCurator = 2;
	/**/	author = "Cavallers del Cel";
	/**/	displayName = "Soldat";
	/**/
	/**/	uniformClass = "1RA_UNIF_REG_ocp";
	/**/	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	/**/	hiddenSelectionsTextures[] = {"\1ra_equip_ocp\data\tex\TEX_1ra_Unif_Reg_Body_ocp.paa","\1ra_equip_ocp\data\tex\TEX_1ra_Unif_Reg_Detail_ocp.paa","",""};
	/**/	model = "\rhsusf\addons\rhsusf_infantry\rhsusf_army_base.p3d";
	/**/};
};
