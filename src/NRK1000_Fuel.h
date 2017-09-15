#ifndef _NRK1000_FUEL_H_
#define _NRK1000_FUEL_H_

#include <stdio.h> // For printf
#include <stdint.h>
#include "../include/NRK1000_EngineParams.h"
#include "../include/NRK1000_includes.h"

class NRK1000_MapSensor;
class NRK1000_AirTemp;
class NRK1000_WaterTemp;

class NRK1000_Fuel
{	
public:
	NRK1000_Fuel();
	virtual ~NRK1000_Fuel(){};

	void SetUpFuel();
	void GetFuel();

};

#endif
