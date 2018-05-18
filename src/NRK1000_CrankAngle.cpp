#include "NRK1000_CrankAngle.h"

NRK1000_CrankAngle::NRK1000_CrankAngle()
{	printf("NRK1000_CrankAngle Constructor\n");

}

void NRK1000_CrankAngle::SetUpCrankAngle()
{	printf("NRK1000_CrankAngle::SetUpCrankAngle\n");

}

void NRK1000_CrankAngle::GetCrankAngle()
{	printf("NRK1000_CrankAngle::GetCrankAngle\n");

}

void NRK1000_CrankAngle::SimAngle(int fsim)
{	printf("NRK1000_CrankAngle::SimAngle()");
	// Produces a simulated crank angle which returns the crank angle as hex
	
	if(fsim)
	{	printf("Simulated crank angle active\n");

	}

	//uint32_t crankAngle = 0;
	// Create thread to run sim
	
	
	//return crankAngle;
}
