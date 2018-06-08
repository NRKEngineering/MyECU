#ifndef _ENGINE_PARAMS_
#define _ENGINE_PARAMS_

#include "NRK1000_includes.h"

struct Injector_Params
{	uint32_t flowRate; // cc/min
	uint32_t deadTime;	// ms ( how long the injector takes to produce and stop fueling after pulse cycle)
	uint32_t ohms;
	uint8_t numInjectors;
	uint32_t injectorPWM;	// Current calculated fuel required

};

struct Ignitor_Params
{	uint8_t sparkMode;
	uint8_t numCoils;
	

};

struct Engine_Params
{	uint32_t displacement;	// cubic centimeters 
	uint8_t numCylnders;	// number
	uint8_t stroke;		// 0 = 2, 1 = 4
	

};

struct Fuel_Params
{	Injector_Params Injectors;
	uint8_t controlAlg; // 0 = Speed density, 1 = , 2 = , 3 = 
};

struct Ignition_Params
{	Ignitor_Params spark;
	uint8_t crankAngle;

};

struct MAP_Params
{	

};

struct Temp_Params
{	
};

struct RunTimeValues
{	uint32_t curretnMapValue;
	uint32_t currentcoolantTemp;
	uint32_t currentinletAirTemp;
};

struct All_Engine_Params
{	RunTimeValues rtv;	
	Engine_Params Engine;	
	Fuel_Params Fuel;
	Ignition_Params Ignition;
	Temp_Params Temp;
	MAP_Params MAP;
};

#endif // _ENGINE_PARAMS_
