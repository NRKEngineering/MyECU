#ifndef _NRK1000_WATERTEMP_H_
#define _NRK1000_WATERTEMP_H_

#include <stdio.h> // For printf
#include <stdint.h>

class NRK1000_WaterTemp
{	
public:
	NRK1000_WaterTemp();
	virtual ~NRK1000_WaterTemp(){};

	void vWTSetUpWaterTemp();
	void vWTGetWaterTemp();

};

#endif
