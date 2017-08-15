#ifndef _ECU_CRANKANGLE_H_
#define _ECU_CRANKANGLE_H_

#include "includes.h"

class ECU_CrankAngle
{	
public:
	ECU_CrankAngle();
	virtual ~ECU_CrankAngle(){};

	void SetUpCrankAngle();
	void GetCrankAngle();

};

#endif
