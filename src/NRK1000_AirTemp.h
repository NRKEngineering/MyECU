#ifndef _NRK1000_AIRTEMP_H_
#define _NRK1000_AIRTEMP_H_

#include <stdio.h> // For printf
#include "../include/NRK1000_includes.h"

class NRK1000_AirTemp
{	
public:
	NRK1000_AirTemp();
	virtual ~NRK1000_AirTemp(){};

	void SetUpAirTemp();
	void GetAirTemp();

};

#endif
