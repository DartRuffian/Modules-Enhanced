class MEH_ModuleSites: MEH_ModuleBase {
    scope = 2;
    displayName = CSTRING(ModuleSites_DisplayName);
    icon = "";
    category = "MEH";

    function = QFUNC(ModuleSites);
    functionPriority = 1;
    isGlobal = 0;
    isTriggerActivated = 0;
    isDisposable = 1;
    is3DEN = 1;

    class Attributes: AttributesBase {
        class Faction: Combo {
            property = QGVAR(ModuleSites_Faction);
            displayName = CSTRING(ModuleSites_Faction_DisplayName);
            tooltip = CSTRING(ModuleSites_Faction_Tooltip);
            defaultValue = 0;
            typeName = "NUMBER";
            class Values {
                // Blufor
                class NATO {
                    name = CSTRING(ModuleSites_Faction_Values_NATO_Name);
                    value = 0;
                };
                class NATO_P {
                    name = CSTRING(ModuleSites_Faction_Values_NATO_P_Name);
                    value = 1;
                };
                class NATO_W {
                    name = CSTRING(ModuleSites_Faction_Values_NATO_W_Name);
                    value = 2;
                };
                class FIA_B {
                    name = CSTRING(ModuleSites_Faction_Values_FIA_B_Name);
                    value = 3;
                };

                // Opfor
                class CSAT {
                    name = CSTRING(ModuleSites_Faction_Values_CSAT_Name);
                    value = 4;
                };
                class CSAT_P {
                    name = CSTRING(ModuleSites_Faction_Values_CSAT_P_Name);
                    value = 5;
                };
                class SPETSNAZ {
                    name = CSTRING(ModuleSites_Faction_Values_SPETSNAZ_Name);
                    value = 6;
                };
                class FIA_O {
                    name = CSTRING(ModuleSites_Faction_Values_FIA_O_Name);
                    value = 7;
                };

                // Guer
                class AAF {
                    name = CSTRING(ModuleSites_Faction_Values_AAF_O_Name);
                    value = 8;
                };
                class FIA {
                    name = CSTRING(ModuleSites_Faction_Values_FIA_Name);
                    value = 9;
                };
                class LDF {
                    name = CSTRING(ModuleSites_Faction_Values_LDF_Name);
                    value = 10;
                };
                class LOOTERS {
                    name = CSTRING(ModuleSites_Faction_Values_LOOTERS_Name);
                    value = 11;
                };
                class SYNDIKAT {
                    name = CSTRING(ModuleSites_Faction_Values_SYNDIKAT_Name);
                };
            };
        };

        class Type: Combo {
            property = QGVAR(ModuleSites_Type);
            displayName = CSTRING(ModuleSites_Type_DisplayName);
            tooltip = CSTRING(ModuleSites_Type_Tooltip);
            defaultValue = 1;
            typeName = "NUMBER";
            class Values {
                class Roadblock {
                    name = CSTRING(ModuleSites_Type_Values_Roadblock_Name);
                    value = 0;
                };
                class ObservationPost {
                    name = CSTRING(ModuleSites_Type_Values_ObservationPost_Name);
                    value = 1;
                };
                class RadarSite {
                    name = CSTRING(ModuleSites_Type_values_RadarSite_Name);
                    value = 2;
                };
                class AntiAirSite {
                    name = CSTRING(ModuleSites_Type_Values_AntiAirSite_Name);
                    value 3;
                };
                class SAMSite {
                    name = CSTRING(ModuleSites_Type_Values_SAMSite_Name);
                    value = 4;
                };
                class Firebase {
                    name = CSTRING(ModuleSites_Type_Values_Firebase_Name);
                    value = 3;
                };
                class Base {
                    name = CSTRING(ModuleSites_Type_Values_Base_Name);
                    value = 2;
                };
            };
        };

        class BuildingOccupation: Edit {
            property = QGVAR(ModuleSites_BuildingOccupation);
            displayName = CSTRING(ModuleSites_BuildingOccupation_DisplayName);
            tooltip = CSTRING(ModuleSites_BuildingOccupation_Tooltip);
            defaultValue = "0.5";
            typeName = "NUMBER";
        };

        class AddTeleporter: Checkbox {
            property = QGVAR(ModuleSites_AddTeleporter);
            displayName = CSTRING(ModuleSites_AddTeleporter_DisplayName);
            tooltip = CSTRING(ModuleSites_AddTeleporter_Tooltip);
            defaultValue = 1;
            typeName = "BOOL";
        };

        class ModuleDescription: ModuleDescription {};
    };

    class ModuleDescription: ModuleDescription {
        description[] = {
            CSTRING(ModuleSites_ModuleDescription_Description),
            "",
            CSTRING(ModuleDescription_TriggerActivated_False),
            CSTRING(ModuleDescription_Repeatable_False)
        };
        position = 1;
        direction = 1;
    };
};