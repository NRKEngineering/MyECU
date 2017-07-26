#ifndef _ECU_AIRTEMP_H_
#define _ECU_AIRTEMP_H_

#include <stdio.h> // For printf

class ECU_CrankAngle
{	
public:
	ECU_CrankAngle();
	virtual ~ECU_CrankAngle(){};

	void SetUpCrankAngle();
	void GetCrankAngle();

};

#endif
