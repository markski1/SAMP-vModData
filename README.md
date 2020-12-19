# mrks_vModData
Library to obtain information about vehicle components in SA-MP.

## Installation

### If you have vSync
Make sure to include mrks_vModData AFTER vSync. This way, vModData will re-use certain parts of vSync instead of adding them again, and it'll ensure the best possible compatibility.

### If you don't have vSync
Include mrks_vModData anywhere after the base samp includes.

## Functions and Usage

mrks_vModData is short and simple. It's functions are as follows:

### Vehicle support functions

Function | Behaviour
--- | ---
VehicleSupportsComponent(modelid, cid) | Returns true if the given [vehicle model](https://open.mp/es/docs/scripting/resources/vehicleid) supports the given [component](https://open.mp/es/docs/scripting/resources/carcomponentid), false if otherwise.
VehicleSupportsAnyComponent(modelid) | Same as above, but returns wether the vehicle supports ANY component whatsoever.
VehicleSupportsCarmodSlot(modelid, carmodtype) | Similar to `VehicleSupportsComponent`, this one instead returns wether any component of a given [component slot](https://open.mp/es/docs/scripting/resources/Componentslots) is supported.
VehicleSupportsNitro(modelid) | Returns true if the vehicle supports nitrous, false if otherwise.
<br>

### Component data getters

Function | Behaviour
--- | ---
GetComponentName(cid) | Returns a string containing the name of the given [component](https://open.mp/es/docs/scripting/resources/carcomponentid).
GetComponentPrice(cid) | Returns the single player price of the given [component](https://open.mp/es/docs/scripting/resources/carcomponentid).
GetComponentSlot(cid) | Returns the [component slot](https://open.mp/es/docs/scripting/resources/Componentslots) where the given [component](https://open.mp/es/docs/scripting/resources/carcomponentid) belongs.

<br>

### Miscelaneous

Function | Behaviour
--- | ---
IsComponentType(cid, carmodtype) | Returns wether the given [component](https://open.mp/es/docs/scripting/resources/carcomponentid) belongs in the given [component slot](https://open.mp/es/docs/scripting/resources/Componentslots).
IsValidComponent(cid) | Returns wether the given [component id](https://open.mp/es/docs/scripting/resources/carcomponentid) is valid.

<br>

## TODO
- No ideas at the moment. Feel free to open an issue and make suggestions.

## Known bugs
- None at the moment. Report bugs by opening an issue.

## How to collaborate
Just open a Pull Request with your code.
