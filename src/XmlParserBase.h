#ifndef _XMLPARSER_H_
#define _XMLPARSER_H_

//#include "../include/NRK1000_includes.h"
#include <string>
#include <iostream>

// use this as the base class when running set up
// Can use this  library to parse any xml file in future

class XmlParserBase
{	

	FILE *fp;	

public:
	XmlParserBase(const std::string& fileName);
	virtual ~XmlParserBase(){};


};


#endif // _XMLPARSER_H_
