#ifndef _ECU_MAPSENSOR_H_
#define _ECU_MAPSENSOR_H_

#include <stdio.h>   // For printf
#include <stdint.h>

#include "MAP_Lookup.h"

class ECU_MapSensor
{	
public:
	ECU_MapSensor();
	virtual ~ECU_MapSensor(){};

	void SetUpMAP();
	float GetMAP();

};

#endif
