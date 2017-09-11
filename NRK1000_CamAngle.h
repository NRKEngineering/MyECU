#ifndef _NRK1000_CAMANGLE_H_
#define _NRK1000_CAMANGLE_H_

#include <stdio.h> // For printf
#include "../include/NRK1000_includes.h"

class NRK1000_CamAngle
{	
public:
	NRK1000_CamAngle();
	virtual ~NRK1000_CamAngle(){};

	void vCASetUpCamAngle();
	void vCAGetCamAngle();
//Hello

};

#endif	// _NRK1000_CAMANGLE_H_
