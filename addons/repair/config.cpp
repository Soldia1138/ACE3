#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {"ACE_Wheel", "ACE_Track"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_interaction"};
        author = ECSTRING(common,ACETeam);
        authors[] = {"commy2", "Glowbal", "Jonpas"};
        PBO_URL;
        VERSION_CONFIG;
    };
};

#include "ACE_Repair.hpp"
#include "ACE_Settings.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgActions.hpp"
#include "CfgVehicles.hpp"
#include "CfgEden.hpp"
