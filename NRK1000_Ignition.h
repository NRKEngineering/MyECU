#ifndef _NRK1000_IGNITION_H_
#define _NRK1000_IGNITION_H_

#include <stdio.h> // For printf
#include <stdint.h>

class NRK1000_Ignition
{	
public:
	NRK1000_Ignition();
	virtual ~NRK1000_Ignition(){};

	void vIGSetUpIgnition();
	void vIGGetIgnition();

};

#endif
