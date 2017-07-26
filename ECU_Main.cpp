// Standard Includes
#include <stdio.h>
#include <stdint.h>

// Custom Includes
#include "Global_Defines.h"
#include "EngineParams.h"
#include "ECU_MapSensor.h"
#include "ECU_CamAngle.h"
#include "ECU_CrankAngle.h"
#include "ECU_AirTemp.h"
#include "ECU_WaterTemp.h"
#include "ECU_Fuel.h"
#include "ECU_Ignition.h"

// Class 
class ECU_CrankAngle;
class ECU_CamAngle;
class ECU_MapSensor;
class ECU_AirTemp;
class ECU_WaterTemp;

//******** Main function - Start of program ***********************************
int main()
{	
	//Variables
	uint32_t mainTick = 0;		// Main system tick
	uint32_t currentFuelCalc = 0;	// Current calculated fuel required

	/* Need to set up xml file for all configurable engine params.
	   Then they can be loaded into the program here.
	*/

	// Set up sensors
	ECU_CrankAngle *CrankAngle = new ECU_CrankAngle;
	ECU_CamAngle *CamAngle = new ECU_CamAngle;
	ECU_MapSensor *MAP = new ECU_MapSensor;
	ECU_AirTemp *AirTemp = new ECU_AirTemp;
	ECU_WaterTemp *WaterTemp = new ECU_WaterTemp;
	ECU_Fuel *Fuel = new ECU_Fuel;
	ECU_Ignition *Ignition = new ECU_Ignition;
		
	CrankAngle->SetUpCrankAngle();
	CamAngle->SetUpCamAngle();
	MAP->SetUpMAP();
	AirTemp->SetUpAirTemp();
	WaterTemp->SetUpWaterTemp();

	// Set up outputs

	// Program main loop
	while(true)
	{	// Calculate fuel
		currentFuelCalc = Fuel->GetFuel(MAP, AirTemp, WaterTemp);		
		MAP->GetMAP();
		AirTemp->GetAirTemp();
		WaterTemp->GetWaterTemp();

		// Calcualte ignition timing
		CrankAngle->GetCrankAngle();
		CamAngle->GetCamAngle();

		//printf("Hello\n");
		mainTick++;
	}
}
