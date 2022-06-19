class CfgPatches
{
	class Underworld_CJ_LootChests
	{
		units[]=
		{
			"CJ_LootChest_Brown_Small",
			"CJ_LootChest_Brown_Medium",
			"CJ_LootChest_Brown_Large",
			"CJ_LootChest_Green_Small",
			"CJ_LootChest_Green_Medium",
			"CJ_LootChest_Green_Large",
			"CJ_LootChest_Grey_Small",
			"CJ_LootChest_Grey_Medium",
			"CJ_LootChest_Grey_Large",
			"CJ_LootChest_Olive_Small",
			"CJ_LootChest_Olive_Medium",
			"CJ_LootChest_Olive_Large",
			"CJ_LootChest_Tan_Small",
			"CJ_LootChest_Tan_Medium",
			"CJ_LootChest_Tan_Large",
			"CJ_LootChest_Camo_Small",
			"CJ_LootChest_Camo_Medium",
			"CJ_LootChest_Camo_Large",
			"CJ_LootChest_Wood_Brown_Small",
			"CJ_LootChest_Wood_Brown_Medium",
			"CJ_LootChest_Wood_Brown_Large",
			"CJ_LootChest_Wood_Green_Small",
			"CJ_LootChest_Wood_Green_Medium",
			"CJ_LootChest_Wood_Green_Large"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"JM_CF_Scripts",
			"CJ_LootChests"
		};
	};
};
class CfgMods
{
	class CJ_LootChests
	{
		dir="CJ_LootChests";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="CJ_LootChests";
		credits="";
		author="Helkhiana,cj187,hunterz";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"CJ_LootChests/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"CJ_LootChests/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"CJ_LootChests/scripts/5_Mission"
				};
			};
		};
	};
};
class CfgVehicles
{
	class Container_Base;
	class CJ_Storage_Base: Container_Base
	{
		scope=0;
		itemSize[]={10,15};
		overrideDrawArea="8.0";
		forceFarBubble="true";
		physLayer="item_large";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemBehaviour=0;
		itemsCargoSize[]={0,0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};
	class CJ_Openable_Placeable_Base: CJ_Storage_Base
	{
		class AnimationSources
		{
			class Doors1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Doors2
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Doors3
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Doors4
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
	};
	class CJ_LootChest_Base: CJ_Openable_Placeable_Base
	{
		scope=0;
		overrideDrawArea="8.0";
		forceFarBubble="true";
		physLayer="item_large";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemBehaviour=0;
		useEntityHierarchy="true";
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOff=1;
			energyUsagePerSecond=1e-007;
			attachmentAction=1;
		};
		hiddenSelections[]=
		{
			"all",
			"label"
		};
		class AnimationSources
		{
			class Doors1
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
		};
	};
	class CJ_MilitaryCrate_Base: CJ_LootChest_Base
	{
		scope=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"CJ_LootChests\militarycrate\data\militarycrate.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"CJ_LootChests\militarycrate\data\militarycrate.rvmat"
							}
						},
						
						{
							0.40000001,
							
							{
								"CJ_LootChests\militarycrate\data\militarycrate_damage.rvmat"
							}
						},
						
						{
							0.25,
							
							{
								"CJ_LootChests\militarycrate\data\militarycrate_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"CJ_LootChests\militarycrate\data\militarycrate_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class CJ_WoodenCrate_Base: CJ_LootChest_Base
	{
		scope=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"CJ_LootChests\woodencrate\data\woodencrate.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"CJ_LootChests\woodencrate\data\woodencrate.rvmat"
							}
						},
						
						{
							0.40000001,
							
							{
								"CJ_LootChests\woodencrate\data\woodencrate_damage.rvmat"
							}
						},
						
						{
							0.25,
							
							{
								"CJ_LootChests\woodencrate\data\woodencrate_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"CJ_LootChests\woodencrate\data\woodencrate_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class CJ_AmmoCrate_Small_Base: CJ_LootChest_Base
	{
		scope=0;
		displayName="Ammo Crate";
		itemsCargoSize[]={10,50};
		descriptionShort="Small Wooden Crate to store some ammunitions or grenades.";
		model="CJ_LootChests\grenadecrate\grenadecrate.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"CJ_LootChests\grenadecrate\data\grenadebox.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"CJ_LootChests\grenadecrate\data\grenadebox.rvmat"
							}
						},
						
						{
							0.40000001,
							
							{
								"CJ_LootChests\grenadecrate\data\grenadebox_damage.rvmat"
							}
						},
						
						{
							0.25,
							
							{
								"CJ_LootChests\grenadecrate\data\grenadebox_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"CJ_LootChests\grenadecrate\data\grenadebox_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class CJ_AmmoCrate_Large_Base: CJ_LootChest_Base
	{
		scope=0;
		displayName="Ammo Crate";
		itemsCargoSize[]={10,50};
		descriptionShort="Large Wooden Crate to store some ammunitions or grenades.";
		model="CJ_LootChests\ammocrate\ammocrate.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"CJ_LootChests\ammocrate\data\ammocrate.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"CJ_LootChests\ammocrate\data\ammocrate.rvmat"
							}
						},
						
						{
							0.40000001,
							
							{
								"CJ_LootChests\ammocrate\data\ammocrate_damage.rvmat"
							}
						},
						
						{
							0.25,
							
							{
								"CJ_LootChests\ammocrate\data\ammocrate_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"CJ_LootChests\ammocrate\data\ammocrate_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class CJ_LootChest_Small_Base: CJ_MilitaryCrate_Base
	{
		scope=0;
		displayName="Military Crate";
		descriptionShort="Small Military Crate to store some of gear.";
		itemsCargoSize[]={10,50};
		model="CJ_LootChests\militarycrate\militarycrate_small.p3d";
	};
	class CJ_LootChest_Medium_Base: CJ_MilitaryCrate_Base
	{
		scope=0;
		displayName="Military Crate";
		itemsCargoSize[]={10,50};
		descriptionShort="Medium Military Crate to store alot of gear.";
		model="CJ_LootChests\militarycrate\militarycrate_medium.p3d";
	};
	class CJ_LootChest_Large_Base: CJ_MilitaryCrate_Base
	{
		scope=0;
		displayName="Military Crate";
		itemsCargoSize[]={10,50};
		descriptionShort="Large Military Crate to store all of gear.";
		model="CJ_LootChests\militarycrate\militarycrate_large.p3d";
	};
	class CJ_LootChest_Wood_small_Base: CJ_WoodenCrate_Base
	{
		scope=0;
		displayName="Supply Crate";
		itemsCargoSize[]={10,50};
		descriptionShort="Small Wooden Crate to store some of supplys.";
		model="CJ_LootChests\woodencrate\woodencrate_small.p3d";
	};
	class CJ_LootChest_Wood_medium_Base: CJ_WoodenCrate_Base
	{
		scope=0;
		displayName="Supply Crate";
		itemsCargoSize[]={10,50};
		descriptionShort="Medium Wooden Crate to store alot of supplys.";
		model="CJ_LootChests\woodencrate\woodencrate_medium.p3d";
	};
	class CJ_LootChest_Wood_large_Base: CJ_WoodenCrate_Base
	{
		scope=0;
		displayName="Supply Crate";
		itemsCargoSize[]={10,50};
		descriptionShort="Large Wooden Crate to store all of supplys.";
		model="CJ_LootChests\woodencrate\woodencrate_large.p3d";
	};
	class CJ_LootChest_Brown_Small: CJ_LootChest_Small_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\militarycrate\data\militarycrate_brown_co.paa"
		};
	};
	class CJ_LootChest_Brown_Medium: CJ_LootChest_Medium_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\militarycrate\data\militarycrate_brown_co.paa"
		};
	};
	class CJ_LootChest_Brown_Large: CJ_LootChest_Large_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\militarycrate\data\militarycrate_brown_co.paa"
		};
	};
	class CJ_LootChest_Green_Small: CJ_LootChest_Small_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\militarycrate\data\militarycrate_green_co.paa"
		};
	};
	class CJ_LootChest_Green_Medium: CJ_LootChest_Medium_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\militarycrate\data\militarycrate_green_co.paa"
		};
	};
	class CJ_LootChest_Green_Large: CJ_LootChest_Large_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\militarycrate\data\militarycrate_green_co.paa"
		};
	};
	class CJ_LootChest_Grey_Small: CJ_LootChest_Small_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\militarycrate\data\militarycrate_grey_co.paa"
		};
	};
	class CJ_LootChest_Grey_Medium: CJ_LootChest_Medium_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\militarycrate\data\militarycrate_grey_co.paa"
		};
	};
	class CJ_LootChest_Grey_Large: CJ_LootChest_Large_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\militarycrate\data\militarycrate_grey_co.paa"
		};
	};
	class CJ_LootChest_Olive_Small: CJ_LootChest_Small_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\militarycrate\data\militarycrate_olive_co.paa"
		};
	};
	class CJ_LootChest_Olive_Medium: CJ_LootChest_Medium_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\militarycrate\data\militarycrate_olive_co.paa"
		};
	};
	class CJ_LootChest_Olive_Large: CJ_LootChest_Large_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\militarycrate\data\militarycrate_olive_co.paa"
		};
	};
	class CJ_LootChest_Tan_Small: CJ_LootChest_Small_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\militarycrate\data\militarycrate_tan_co.paa"
		};
	};
	class CJ_LootChest_Tan_Medium: CJ_LootChest_Medium_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\militarycrate\data\militarycrate_tan_co.paa"
		};
	};
	class CJ_LootChest_Tan_Large: CJ_LootChest_Large_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\militarycrate\data\militarycrate_tan_co.paa"
		};
	};
	class CJ_LootChest_Camo_Small: CJ_LootChest_Small_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\militarycrate\data\militarycrate_camo_co.paa"
		};
	};
	class CJ_LootChest_Camo_Medium: CJ_LootChest_Medium_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\militarycrate\data\militarycrate_camo_co.paa"
		};
	};
	class CJ_LootChest_Camo_Large: CJ_LootChest_Large_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\militarycrate\data\militarycrate_camo_co.paa"
		};
	};
	class CJ_LootChest_Wood_Brown_Small: CJ_LootChest_Wood_small_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_brown_co.paa",
			"CJ_LootChests\woodencrate\data\NoLabel_co.paa"
		};
	};
	class CJ_LootChest_Wood_Brown_Tools_Small: CJ_LootChest_Wood_small_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_brown_co.paa",
			"CJ_LootChests\woodencrate\data\Label_Tools_co.paa"
		};
	};
	class CJ_LootChest_Wood_Brown_Foods_Small: CJ_LootChest_Wood_small_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_brown_co.paa",
			"CJ_LootChests\woodencrate\data\Label_Foods_co.paa"
		};
	};
	class CJ_LootChest_Wood_Brown_Medics_Small: CJ_LootChest_Wood_small_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_brown_co.paa",
			"CJ_LootChests\woodencrate\data\Label_Medic_co.paa"
		};
	};
	class CJ_LootChest_Wood_Brown_Medium: CJ_LootChest_Wood_medium_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_brown_co.paa",
			"CJ_LootChests\woodencrate\data\NoLabel_co.paa"
		};
	};
	class CJ_LootChest_Wood_Brown_Tools_Medium: CJ_LootChest_Wood_medium_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_brown_co.paa",
			"CJ_LootChests\woodencrate\data\Label_Tools_co.paa"
		};
	};
	class CJ_LootChest_Wood_Brown_Foods_Medium: CJ_LootChest_Wood_medium_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_brown_co.paa",
			"CJ_LootChests\woodencrate\data\Label_Foods_co.paa"
		};
	};
	class CJ_LootChest_Wood_Brown_Medics_Medium: CJ_LootChest_Wood_medium_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_brown_co.paa",
			"CJ_LootChests\woodencrate\data\Label_Medic_co.paa"
		};
	};
	class CJ_LootChest_Wood_Brown_Large: CJ_LootChest_Wood_large_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_brown_co.paa",
			"CJ_LootChests\woodencrate\data\NoLabel_co.paa"
		};
	};
	class CJ_LootChest_Wood_Brown_Tools_Large: CJ_LootChest_Wood_large_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_brown_co.paa",
			"CJ_LootChests\woodencrate\data\Label_Tools_co.paa"
		};
	};
	class CJ_LootChest_Wood_Brown_Foods_Large: CJ_LootChest_Wood_large_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_brown_co.paa",
			"CJ_LootChests\woodencrate\data\Label_Foods_co.paa"
		};
	};
	class CJ_LootChest_Wood_Brown_Medics_Large: CJ_LootChest_Wood_large_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_brown_co.paa",
			"CJ_LootChests\woodencrate\data\Label_Medic_co.paa"
		};
	};
	class CJ_LootChest_Wood_Green_Small: CJ_LootChest_Wood_small_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_green_co.paa",
			"CJ_LootChests\woodencrate\data\NoLabel_co.paa"
		};
	};
	class CJ_LootChest_Wood_Green_Tools_Small: CJ_LootChest_Wood_small_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_green_co.paa",
			"CJ_LootChests\woodencrate\data\Label_Tools_co.paa"
		};
	};
	class CJ_LootChest_Wood_Green_Foods_Small: CJ_LootChest_Wood_small_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_green_co.paa",
			"CJ_LootChests\woodencrate\data\Label_Foods_co.paa"
		};
	};
	class CJ_LootChest_Wood_Green_Medics_Small: CJ_LootChest_Wood_small_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_green_co.paa",
			"CJ_LootChests\woodencrate\data\Label_Medic_co.paa"
		};
	};
	class CJ_LootChest_Wood_Green_Medium: CJ_LootChest_Wood_medium_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_green_co.paa",
			"CJ_LootChests\woodencrate\data\NoLabel_co.paa"
		};
	};
	class CJ_LootChest_Wood_Green_Tools_Medium: CJ_LootChest_Wood_medium_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_green_co.paa",
			"CJ_LootChests\woodencrate\data\Label_Tools_co.paa"
		};
	};
	class CJ_LootChest_Wood_Green_Foods_Medium: CJ_LootChest_Wood_medium_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_green_co.paa",
			"CJ_LootChests\woodencrate\data\Label_Foods_co.paa"
		};
	};
	class CJ_LootChest_Wood_Green_Medics_Medium: CJ_LootChest_Wood_medium_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_green_co.paa",
			"CJ_LootChests\woodencrate\data\Label_Medic_co.paa"
		};
	};
	class CJ_LootChest_Wood_Green_Large: CJ_LootChest_Wood_large_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_green_co.paa",
			"CJ_LootChests\woodencrate\data\NoLabel_co.paa"
		};
	};
	class CJ_LootChest_Wood_Green_Tools_Large: CJ_LootChest_Wood_large_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_green_co.paa",
			"CJ_LootChests\woodencrate\data\Label_Tools_co.paa"
		};
	};
	class CJ_LootChest_Wood_Green_Foods_Large: CJ_LootChest_Wood_large_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_green_co.paa",
			"CJ_LootChests\woodencrate\data\Label_Foods_co.paa"
		};
	};
	class CJ_LootChest_Wood_Green_Medics_Large: CJ_LootChest_Wood_large_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\woodencrate\data\WoodenCrate_green_co.paa",
			"CJ_LootChests\woodencrate\data\Label_Medic_co.paa"
		};
	};
	class CJ_LootChest_Ammo_Small_Brown: CJ_AmmoCrate_Small_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\grenadecrate\data\Grenadebox_brown_co.paa"
		};
	};
	class CJ_LootChest_Ammo_Small_Green: CJ_AmmoCrate_Small_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\grenadecrate\data\Grenadebox_green_co.paa"
		};
	};
	class CJ_LootChest_Ammo_Large_Brown: CJ_AmmoCrate_Large_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\ammocrate\data\ammocrate_brown_co.paa"
		};
	};
	class CJ_LootChest_Ammo_Large_Green: CJ_AmmoCrate_Large_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\ammocrate\data\ammocrate_green_co.paa"
		};
	};
	class Inventory_Base;
	class CJ_Key_Base: Inventory_Base
	{
		scope=0;
		animClass="lockpick";
		rotationFlags=17;
		RestrainUnlockType=0;
		weight=4;
		fragility=0.0099999998;
		hiddenSelections[]=
		{
			"key"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class lockpicker_move_in
				{
					soundSet="lockpicker_move_in_SoundSet";
					id=110202;
				};
				class lockpicker_move_out
				{
					soundSet="lockpicker_move_out_SoundSet";
					id=110203;
				};
				class lockpicker_loop
				{
					soundSet="lockpicker_loop_SoundSet";
					id=203;
				};
				class lockpicker_end
				{
					soundSet="lockpicker_end_SoundSet";
					id=110204;
				};
			};
		};
	};
	class CJ_Military_Key_Base: CJ_Key_Base
	{
		scope=0;
		displayName="Key";
		descriptionShort="Any kind of modern Key, maybe for some locks, doors or crates...";
		model="CJ_LootChests\keys\military\military_key.p3d";
		itemSize[]={1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"CJ_LootChests\keys\military\data\military_key.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"CJ_LootChests\keys\military\data\military_key.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"CJ_LootChests\keys\military\data\military_key_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"CJ_LootChests\keys\military\data\military_key_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"CJ_LootChests\keys\military\data\military_key_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class CJ_Old_Key_Base: CJ_Key_Base
	{
		scope=0;
		displayName="Key";
		descriptionShort="Any kind of old Key, maybe for some locks, doors or crates...";
		model="CJ_LootChests\keys\old\old_key.p3d";
		itemSize[]={2,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"CJ_LootChests\keys\old\data\old_key.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"CJ_LootChests\keys\old\data\old_key.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"CJ_LootChests\keys\old\data\old_key_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"CJ_LootChests\keys\old\data\old_key_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"CJ_LootChests\keys\old\data\old_key_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class CJ_Key1: CJ_Military_Key_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\keys\military\data\key_black_co.paa"
		};
	};
	class CJ_Key2: CJ_Military_Key_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\keys\military\data\key_grey_co.paa"
		};
	};
	class CJ_Key3: CJ_Military_Key_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\keys\military\data\key_brown_co.paa"
		};
	};
	class CJ_Key4: CJ_Military_Key_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\keys\military\data\key_green_co.paa"
		};
	};
	class CJ_Key5: CJ_Military_Key_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\keys\military\data\key_olive_co.paa"
		};
	};
	class CJ_Key6: CJ_Military_Key_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\keys\military\data\key_yellow_co.paa"
		};
	};
	class CJ_Key7: CJ_Military_Key_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\keys\military\data\key_red_co.paa"
		};
	};
	class CJ_Key8: CJ_Military_Key_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\keys\military\data\key_blue_co.paa"
		};
	};
	class CJ_Key9: CJ_Old_Key_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\keys\old\data\old_key_1_co.paa"
		};
	};
	class CJ_Key10: CJ_Old_Key_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\keys\old\data\old_key_2_co.paa"
		};
	};
	class CJ_Key11: CJ_Old_Key_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\keys\old\data\old_key_3_co.paa"
		};
	};
	class CJ_Key12: CJ_Old_Key_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"CJ_LootChests\keys\old\data\old_key_4_co.paa"
		};
	};
};
class CfgSoundShaders
{
	class MilitaryLootChestsOpen_SoundShader
	{
		samples[]=
		{
			
			{
				"CJ_LootChests\sound\military_open",
				1
			}
		};
		range=10;
		volume=1.5;
	};
	class WoodenLootChestsOpen_SoundShader
	{
		samples[]=
		{
			
			{
				"CJ_LootChests\sound\wooden_open",
				1
			},
			
			{
				"CJ_LootChests\sound\wooden_open2",
				1
			},
			
			{
				"CJ_LootChests\sound\wooden_open3",
				1
			}
		};
		range=10;
		volume=3;
	};
};
class CfgSoundSets
{
	class MilitaryLootChestsOpen_SoundSet
	{
		soundShaders[]=
		{
			"MilitaryLootChestsOpen_SoundShader"
		};
	};
	class WoodenLootChestsOpen_SoundSet
	{
		soundShaders[]=
		{
			"WoodenLootChestsOpen_SoundShader"
		};
	};
};
