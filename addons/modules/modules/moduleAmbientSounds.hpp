class MEH_ModuleAmbientSounds: MEH_ModuleBase {
    scope = 2;
    displayName = CSTRING(ModuleAmbientSounds_DisplayName);
    icon = "";
    category = "MEH";

    function = QFUNC(ModuleAmbientSounds);
    functionPriority = 1;
    isGlobal = 0;
    isTriggerActivated = 1;
    isDisposable = 0;
    is3DEN = 1;

    class Attributes: AttributesBase {
        class SoundArray: Edit {
            control = QUOTE(EditMulti3);
            property = QGVAR(ModuleAmbientSounds_SoundArray);
            displayName = CSTRING(ModuleAmbientSounds_SoundArray_DisplayName);
            tooltip = CSTRING(ModuleAmbientSounds_SoundArray_Tooltip);
            defaultValue = "[""thunder_1"",""thunder_2""]";
            typeName = "STRING";
            verify = "STRING";
        };

        class DelayMin: Edit {
            property = QGVAR(ModuleAmbientSounds_DelayMin);
            displayName = CSTRING(ModuleAmbientSounds_DelayMin_DisplayName);
            tooltip = CSTRING(ModuleAmbientSounds_DelayMin_Tooltip);
            defaultValue = 5;
            typeName = "NUMBER";
            verify = "NUMBER";
        };

        class DelayMax: Edit {
            property = QGVAR(ModuleAmbientSounds_DelayMax);
            displayName = CSTRING(ModuleAmbientSounds_DelayMax_DisplayName);
            tooltip = CSTRING(ModuleAmbientSounds_DelayMax_Tooltip);
            defaultValue = 5;
            typeName = "NUMBER";
            verify = "NUMBER";
        };
    }
}