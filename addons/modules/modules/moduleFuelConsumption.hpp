class MEH_ModuleFuelConsumption: MEH_ModuleBase {
    scope = 2;
    displayName = CSTRING(ModuleFuelConsumption_DisplayName);
    icon = "";
    category = "MEH";

    function = QFUNC(ModuleFuelConsumption);
    functionPriority = 1;
    isGlobal = 0;
    isTriggerActivated = 1;
    isDisposable = 1;
    is3DEN = 1;

    class Attributes: AttributesBase {
        class ConsumptionCoef: Edit {
            property = QGVAR(ModuleFuelConsumption_ConsumptionCoef);
            displayName = CSTRING(ModuleFuelConsumption_ConsumptionCoef_DisplayName);
            tooltip = CSTRING(ModuleFuelConsumption_ConsumptionCoef_Tooltip);
            defaultValue = 1;
            typeName = "NUMBER";
            validate = "NUMBER";
        };

        class ModuleDescription: ModuleDescription {};
    };

    class ModuleDescription: ModuleDescription {
        description[] = {
            CSTRING(ModuleFuelConsumption_ModuleDescription_Description),
            "",
            CSTRING(ModuleDescription_TriggerActivated_Optional),
            CSTRING(ModuleDescription_TriggerActivated_Server),
            CSTRING(ModuleDescription_Repeatable_False)
        };
        position = 0;
        direction = 0;
    };
};