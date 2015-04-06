#include "script_component.hpp"

#define _dsp (uiNamespace getVariable "ATragMX_Display")

(_dsp displayCtrl 600) ctrlEnable true;
(_dsp displayCtrl 601) ctrlEnable true;
(_dsp displayCtrl 602) ctrlEnable true;

(_dsp displayCtrl 600 + GVAR(ATragMX_currentUnit)) ctrlEnable false;

[] call FUNC(update_gun);
[] call FUNC(update_atmosphere);
[] call FUNC(update_target);
[] call FUNC(update_result);
