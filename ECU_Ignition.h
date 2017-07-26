#ifndef _ECU_IGNITION_H_
#define _ECU_IGNITION_H_

#include <stdio.h> // For printf

class ECU_Ignition
{	
public:
	ECU_Ignition();
	virtual ~ECU_Ignition(){};

	void SetUpIgnition();
	void GetIgnition();

};

#endif
