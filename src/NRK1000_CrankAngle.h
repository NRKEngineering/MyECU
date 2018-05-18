#ifndef _NRK1000_CRANKANGLE_H_
#define _NRK1000_CRANKANGLE_H_

#include "../include/NRK1000_includes.h"

class NRK1000_CrankAngle
{	
public:
	NRK1000_CrankAngle();
	virtual ~NRK1000_CrankAngle(){};

	void SetUpCrankAngle();
	void GetCrankAngle();
	void SimAngle(int fsim);

};

#endif
