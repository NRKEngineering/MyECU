#include <stdio.h>
#include "ECU_MapSensor.h"
#include "EngineParams.h"

int main()
{	
	//Variables
	uint32_t mainTick = 0;

	/* Need to set up xml file for all configurable engine params.
	   Then they can be loaded into the program here	
	*/

	// Set up sensors
	ECU_CrankAngle *CrankAngle = new ECU_CrankAngle;
	ECU_CamAngle *CamAngle = new ECU_CamAngle;
	ECU_MapSensor *MAP = new ECU_MapSensor;
	ECU_AirTemp *AirTemp = new ECU_AirTemp;
	ECU_WaterTemp *WaterTemp = new ECU_WaterTemp;
		
	CrankAngle->SetUpCrankAngle();
	CamAngle->SetUpCamAngle();
	MAP->SetUpMAP();
	AirTemp->SetUpAirTemp();
	WaterTemp->SetUpWaterTemp();

	// Set up outputs

	// Program main loop
	while(true)
	{	// Calcualte fuel
		MAP->GetMAP();
		AirTemp->GetAirTemp();
		WaterTemp->GetWaterTemp();

		// Calcualte ignition timing

		i++;
		//printf("Hello\n");
		mainTick++;
	}
}
