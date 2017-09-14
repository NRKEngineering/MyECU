#include "ECU_MapSensor.h"


ECU_MapSensor::ECU_MapSensor()
{	printf("ECU_MapSensor Constructor\n");

}

void ECU_MapSensor::SetUpMAP()
{	printf("ECU_MapSensor::SetUpMAP\n");

}

float ECU_MapSensor::GetMAP()
{	printf("ECU_MapSensor::GetMAP\n");
	// Will recieve the sensor vaule as a hex number and comare to lookup table
	float MAP;	
	return (MAP = mapData[400]);
	
}
