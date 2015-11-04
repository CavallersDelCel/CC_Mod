/*****************************************************************************/
/*  FUNCIONS MACROS                                                          */
/*****************************************************************************/

//carrega d'items per 'cfgvehicle'
#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
  name = #ITEM; \
  count = COUNT; \
};

//nombre d'items
#define MACRO_COUNT2(a) a, a
#define MACRO_COUNT3(a) a, a, a
#define MACRO_COUNT4(a) a, a, a, a
#define MACRO_COUNT5(a) a, a, a, a, a
#define MACRO_COUNT6(a) a, a, a, a, a, a
#define MACRO_COUNT7(a) a, a, a, a, a, a, a
#define MACRO_COUNT8(a) a, a, a, a, a, a, a, a
#define MACRO_COUNT9(a) a, a, a, a, a, a, a, a, a
#define MACRO_COUNT10(a) a, a, a, a, a, a, a, a, a, a
#define MACRO_COUNT11(a) a, a, a, a, a, a, a, a, a, a, a
#define MACRO_COUNT12(a) a, a, a, a, a, a, a, a, a, a, a, a
#define MACRO_COUNT13(a) a, a, a, a, a, a, a, a, a, a, a, a, a

//modificació arma
#define MACRO_MOD_ARMA(NAME,PNAME,OPT,ACC,MUZ) \
class ##NAME##: ##PNAME## \
{ \
	author = "Cavallers del Cel"; \
	scope = 2; \
	class LinkedItems \
	{ \
		class LinkedItemsOptic { item = ##OPT##; slot = "CowsSlot"; }; \
		class LinkedItemsAcc { item = ##ACC##; slot = "PointerSlot"; }; \
		class LinkedItemsMuzzle { item = ##MUZ##; slot = "MuzzleSlot";}; \
	}; \
};

//modificació uniforme
#define MACRO_MOD_UNIFORME(NAME,PNAME,SOLDIER,CONT,MASS) \
class ##NAME##: ##PNAME## \
{ \
	author = "Cavallers del Cel"; \
	scope = 2; \
	\
	class ItemInfo: UniformItem \
	{ \
		uniformModel = "-"; \
		uniformClass = ##SOLDIER##; \
		containerClass = "Supply##CONT##"; \
		mass = ##MASS##; \
	}; \
};

