#include "NRK1000_CrankAngle.h"

NRK1000_CrankAngle::NRK1000_CrankAngle(All_Engine_Params &allEngine)
{	printf("NRK1000_CrankAngle Constructor\n");
	allEngine.Ignition.crankAngle = 0;
	
}

void NRK1000_CrankAngle::SetUpCrankAngle(All_Engine_Params &allEngine)
{	printf("NRK1000_CrankAngle::SetUpCrankAngle\n");

}

void NRK1000_CrankAngle::GetCrankAngle(All_Engine_Params &allEngine)
{	//printf("NRK1000_CrankAngle::GetCrankAngle\n");
	int current_crankAngle = allEngine.Ignition.crankAngle;
	printf("Current crank angle is %d\n", current_crankAngle);
}

void NRK1000_CrankAngle::SimAngle(All_Engine_Params &allEngine, int fsim)
{	printf("NRK1000_CrankAngle::SimAngle()");
	// Produces a simulated crank angle which returns the crank angle as hex
	// Crank angle between x0 and x167
	if(fsim)
	{	printf("Simulated crank angle active\n");
		/* 32+2 tooth sensor
			1 = 0		x0
			2 = 10		xA
			3 = 20		x14
			4 = 30		x1E
			.
			.
			.
			34 = 330	x14A
			35 = 340	x154
			36 = 350	x15E

		*/


	}

	//uint32_t crankAngle = 0;
	// Create thread to run sim
	
	
	//return crankAngle;
}
