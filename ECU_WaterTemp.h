#ifndef _ECU_WATERTEMP_H_
#define _ECU_WATERTEMP_H_

#include <stdio.h> // For printf

class ECU_WaterTemp
{	
public:
	ECU_WaterTemp();
	virtual ~ECU_WaterTemp(){};

	void SetUpWaterTemp();
	void GetWaterTemp();

};

#endif
