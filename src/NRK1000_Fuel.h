#ifndef _ECU_FUEL_H_
#define _ECU_FUEL_H_

#include <stdio.h> // For printf
#include <stdint.h>
#include "EngineParams.h"
#include "includes.h"

class ECU_MapSensor;
class ECU_AirTemp;
class ECU_WaterTemp;

class ECU_Fuel
{	
public:
	ECU_Fuel();
	virtual ~ECU_Fuel(){};

	void SetUpFuel();
	uint32_t GetFuel(ECU_MapSensor& MAP, ECU_AirTemp& AirTemp, ECU_WaterTemp& WaterTemp, Injector_Params& injectorParams);

};

#endif
