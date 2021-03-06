// Standard Includes
#include "../include/NRK1000_includes.h"

// Namespaces
using namespace std;

// Custom Includes
#include "../include/NRK1000_Global_Defines.h"
#include "../include/NRK1000_EngineParams.h"
#include "XmlParserBase.h"
#include "NRK1000_MapSensor.h"
#include "NRK1000_CamAngle.h"
#include "NRK1000_CrankAngle.h"
#include "NRK1000_AirTemp.h"
#include "NRK1000_WaterTemp.h"
#include "NRK1000_Fuel.h"
#include "NRK1000_Ignition.h"
#include "NRK1000_BasicSetup.h"

// Class 
class NRK1000_CrankAngle;
class NRK1000_CamAngle;
class NRK1000_MapSensor;
class NRK1000_AirTemp;
class NRK1000_WaterTemp;
class XmlParserBase;

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


	// **** Set up param structs
	unique_ptr <All_Engine_Params> allEngine (new All_Engine_Params);

	// Read Config file and setup parameters
	string ConfigFile = "config/NRK1000_Main_Config.xml";
	unique_ptr <NRK1000_Basic_Setup> basicSetup (new NRK1000_Basic_Setup(ConfigFile));
	
	
	// **** Set up sensors

	// Create objects
	unique_ptr <NRK1000_CrankAngle> pCrankAngle (new NRK1000_CrankAngle(*allEngine));
	unique_ptr <NRK1000_CamAngle> pCamAngle (new NRK1000_CamAngle);
	unique_ptr <NRK1000_MapSensor> pMAP (new NRK1000_MapSensor);
	unique_ptr <NRK1000_AirTemp> pAirTemp (new NRK1000_AirTemp);
	unique_ptr <NRK1000_WaterTemp> pWaterTemp (new NRK1000_WaterTemp);
	unique_ptr <NRK1000_Fuel> pFuel (new NRK1000_Fuel);
	unique_ptr <NRK1000_Ignition> pIgnition (new NRK1000_Ignition);
	
	// Run setup functions for each object	
	pCrankAngle->SetUpCrankAngle(*allEngine);
	pCamAngle->SetUpCamAngle();
	pMAP->SetUpMAP();
	pAirTemp->SetUpAirTemp();
	pWaterTemp->SetUpWaterTemp();
	pFuel->SetUpFuel();
	pIgnition->SetUpIgnition();

	// **** Inputs
     /* Crank - Digital
        Cam - Digital
        Map - analog
        MAF - Voltage - Analog
        MAF - Frequency
        IAT - Analog
        CLT - Analog
        TPS - Analog
        O2 - Analog
        Flex - Analog
        Knock - digital
        Speed sensor - digital
        EGT - Analog(Thermocouple)

        Inputs - 4 x digital
                 8 x analog
        
        */
    // **** Outputs
        /*
        Fuel Injector
        Ignition
        Fuel Pump
        Idle Valve
        Tacho
        PWM Relays
        Alternator control
        

        */

	// **** Set up outputs

	// **** Create some threads

		// Get the maximum number of threads the processor can support
		int numThreads = thread::hardware_concurrency();
		cout << "Number of threads is " << numThreads << endl;
		
		// Create the thread pool
		//ctpl::thread_pool threadPool(numThreads);	// A test of the ctpl library
		//thread t[numThreads];

		//int threadCnt = threadPool.size();
		//cout << "Number of ctpl threads is " << threadCnt << endl;

		//int simOn = 1;
		//std::thread t(pCrankAngle->SimAngle(simOn));

		//pCrankAngle->SimAngle(1);

	// **** Program main loop
// Main Loop Logic- FIXME keep adding to this as the program grows
// Get all the current sensor values
// Calculate the fuel needed
// Calcuclate the spark needed
// Calculate boost control
// Calcualte nitros control
// TODO - add further module controls here
// Complete error checks
	int loop = 1;
	while(loop)
	{	

		// Calculate Crank
		pCrankAngle->GetCrankAngle(*allEngine);
		// Get Sensors Values	// Could run in thread in background

		// Calculate fuel
		
		// Calculate Cam

		

		// Calculate Ingnition


		// Calcualte ignition timing

	

		//cout << mainTick << endl;
		mainTick++;
	}
}
