// Standard Includes
#include "includes.h"

// Namespaces
using namespace std;

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

void Get_All_Params(All_Engine_Params * allEngine,ECU_MapSensor *MAP)
{	allEngine->MAP.MapValue = MAP->GetMAP();
	//AirTemp->GetAirTemp();
	//WaterTemp->GetWaterTemp();

}

//******** Main function - Start of program ***********************************

// Startup logic- FIXME keep adding to this as the program grows
// Create objects
// Run setup for each module
// Check ready to run loop
// Start main loop
int main()
{	
	// Global Variables
	uint32_t mainTick = 0;		// Main system tick
	

	/* Need to set up xml file for all configurable engine params.
	   Then they can be loaded into the program here.
	*/

	// **** Set up param structs
	unique_ptr <All_Engine_Params> allEngine (new All_Engine_Params);

	// **** Set up sensors

	// Create objects
	unique_ptr <ECU_CrankAngle> CrankAngle (new ECU_CrankAngle);
	unique_ptr <ECU_CamAngle> CamAngle (new ECU_CamAngle);
	unique_ptr <ECU_MapSensor> MAP (new ECU_MapSensor);
	unique_ptr <ECU_AirTemp> AirTemp (new ECU_AirTemp);
	unique_ptr <ECU_WaterTemp> WaterTemp (new ECU_WaterTemp);
	unique_ptr <ECU_Fuel> Fuel (new ECU_Fuel);
	unique_ptr <ECU_Ignition> Ignition (new ECU_Ignition);
	
	// Run setup functions for each object	
	CrankAngle->SetUpCrankAngle();
	CamAngle->SetUpCamAngle();
	MAP->SetUpMAP();
	AirTemp->SetUpAirTemp();
	WaterTemp->SetUpWaterTemp();
	Fuel->SetUpFuel();
	Ignition->SetUpIgnition();

	// **** Set up outputs

	// **** Program main loop

	
// Main Loop Logic- FIXME keep adding to this as the program grows
// Get all the current sensor values
// Calculate the fuel needed
// Calcuclate the spark needed
// Calculate boost control
// Calcualte nitros control
// TODO - add further module controls here
// Complete error checks
	int loop = 0;
	while(loop)
	{	
		// Get Sensors Vaules	
		//Get_All_Params(allEngine, *MAP);

		// Calculate fuel
		// Needs to use MAP, Air & water Temps and injector details to calcaulte injector PWM time
		// This vaule is them placed into injectorPWM
		//injectorPWM = Fuel->GetFuel(*allEngine);

		// Calcualte ignition timing
		//CrankAngle->GetCrankAngle();
		//CamAngle->GetCamAngle();

		//cout << "Hello Me" << endl;
		//cout << mainTick << endl;
		mainTick++;
	}
}
