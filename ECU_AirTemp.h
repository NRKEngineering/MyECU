#ifndef _ECU_AIRTEMP_H_
#define _ECU_AIRTEMP_H_

#include <stdio.h> // For printf
#include "includes.h"

class ECU_AirTemp
{	
public:
	ECU_AirTemp();
	virtual ~ECU_AirTemp(){};

	void SetUpAirTemp();
	void GetAirTemp();

};

#endif
