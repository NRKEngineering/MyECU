#ifndef _NRK1000_MAPSENSOR_H_
#define _NRK1000_MAPSENSOR_H_

#include <stdio.h>   // For printf
#include <stdint.h>

#include "../include/NRK1000_MAP_Lookup.h"

class NRK1000_MapSensor
{	
public:
	NRK1000_MapSensor();
	virtual ~NRK1000_MapSensor(){};

	void vMFSetUpMAP();
	float fMFGetMAP();

};

#endif
