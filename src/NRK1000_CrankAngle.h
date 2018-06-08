#ifndef _NRK1000_CRANKANGLE_H_
#define _NRK1000_CRANKANGLE_H_

#include "../include/NRK1000_includes.h"
#include "../include/NRK1000_EngineParams.h"

class NRK1000_CrankAngle
{	
public:
	NRK1000_CrankAngle(All_Engine_Params &allEngine);
	virtual ~NRK1000_CrankAngle(){};

	void SetUpCrankAngle(All_Engine_Params &allEngine);
	void GetCrankAngle(All_Engine_Params &allEngine);
	void SimAngle(All_Engine_Params &allEngine, int fsim);

};

#endif
