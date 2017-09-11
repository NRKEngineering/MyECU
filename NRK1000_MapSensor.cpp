#include "NRK1000_MapSensor.h"


NRK1000_MapSensor::NRK1000_MapSensor()
{	printf("NRK1000_MapSensor Constructor\n");

}

void NRK1000_MapSensor::vMFSetUpMAP()
{	printf("NRK1000_MapSensor::SetUpMAP\n");

}

float NRK1000_MapSensor::fMFGetMAP()
{	printf("NRK1000_MapSensor::GetMAP\n");
	// Will recieve the sensor vaule as a hex number and comare to lookup table
	float MAP;	
	return (MAP = mapData[400]);
	
}
