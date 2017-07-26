#ifndef _ECU_AIRTEMP_H_
#define _ECU_AIRTEMP_H_

#include <stdio.h> // For printf

class ECU_CamAngle
{	
public:
	ECU_CamAngle();
	virtual ~ECU_CamAngle(){};

	void SetUpCamAngle();
	void GetCamAngle();

};

#endif
