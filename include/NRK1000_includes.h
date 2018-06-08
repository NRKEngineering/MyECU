#ifndef _INCLUDES_H_
#define _INCLUDES_H_

#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include <memory>	// For smart pointers
#include <thread>
#include <string>
#include <ctpl_stl.h>	// For thread pool

enum Thread_Names
{	TR_SENSORS = 0,
	TR_IGNITION,
	TR_FUEL,
	TR_CAM,
	TR_CRANK,
	TR_LAST

};

#endif // _INCLUDES_H_
