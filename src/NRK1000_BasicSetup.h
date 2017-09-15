#ifndef _NRK1000_BASIC_SETUP_H_
#define _NRK1000_BASIC_SETUP_H_

#include "../include/NRK1000_includes.h"

#include "XmlParserBase.h"
// This class will read the config xml and setup the parameters on startup.

class NRK1000_Basic_Setup: XmlParserBase
{	

public:
	NRK1000_Basic_Setup(std::string ConfigFile);
	virtual ~NRK1000_Basic_Setup(){};

	void Read_XML();
	void Write_XML();


};



#endif // _NRK1000_BASIC_SETUP_H_
