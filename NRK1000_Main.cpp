// Standard Includes
#include "includes.h"

// Namespaces
using namespace std;
using namespace NRK1000;

// Scheduler Includes
//#include "FreeRTOS.h"	// From freeRTOS
//#include "task.h"	// From freeRTOS

// Class Declerations
class NRK1000_CrankAngle;
class NRK1000_CamAngle;
class NRK1000_MapSensor;
class NRK1000_AirTemp;
class NRK1000_WaterTemp;

void Get_All_Params(All_Engine_Params * allEngine,ECU_MapSensor *MAP)
{	allEngine->MAP.MapValue = MAP->GetMAP();
	AirTemp->GetAirTemp();
	WaterTemp->GetWaterTemp();

}

//******** Main function - Start of program ***********************************

// Startup logic- FIXME keep adding to this as the program grows
// Create objects
// Run setup for each module
// Check ready to run loop
// Start main loop

/*	Sensor values and fuel needed are calcualted for each tick.
	Interputs for the spark them trigger the injectors and 
	coils to fire for the calcualted time at that interupt.

*/

int main()
{	
	// Global Variables
	uint32_t mainTick = 0;		// Main system tick
	
	// Setup microcontroller hardware - RTOS (Try freeRTOS)

	//prvSetupHardware();

	// Create tasks for the RTOS
	//CreateDemoTask();
	
	// Start the RTOS scheduler
	// TaskStartScheduler()

	/* Need to set up xml file for all configurable engine params.
	   Then they can be loaded into the program here.
	*/

	// **** Set up param structs
	unique_ptr <All_Engine_Params> allEngine (new All_Engine_Params);

	// **** Set up sensors

	// Create objects
	// Analog inputs
	
	unique_ptr <NRK1000_MapSensor> MAP (new NRK1000_MapSensor);
	unique_ptr <NRK1000_AirTemp> AirTemp (new NRK1000_AirTemp);
	unique_ptr <NRK1000_WaterTemp> WaterTemp (new NRK1000_WaterTemp);
	

	// Digital Inputs
	unique_ptr <NRK1000_CrankAngle> CrankAngle (new NRK1000_CrankAngle);
	unique_ptr <NRK1000_CamAngle> CamAngle (new NRK1000_CamAngle);

	// Calculations
	unique_ptr <NRK1000_Fuel> Fuel (new NRK1000_Fuel);
	unique_ptr <NRK1000_Ignition> Ignition (new NRK1000_Ignition);


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
		Get_All_Params(allEngine, *MAP);

		// Calculate fuel
		// Needs to use MAP, Air & water Temps and injector details to calcaulte injector PWM time
		// This vaule is them placed into injectorPWM
		injectorPWM = Fuel->GetFuel(*allEngine);

		// Calcualte ignition timing
		CalculateIgnitionTiming();

		std::cout << "Tick = " << mainTick << std::endl;
		mainTick++;
	}
	
	// Should not get here!
	return 0;
}
