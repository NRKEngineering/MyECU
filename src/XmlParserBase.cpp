#include "XmlParserBase.h"

XmlParserBase::XmlParserBase(const std::string& fileName)
{	std::cout << "Xml Config File is " << fileName << std::endl;
	if(fp = fopen(fileName.c_str(), "r"))
	{	std::cout << "File Opened\n";
		fclose(fp);
	}
	else
	{	std::cout << "File did not open\n";
	}
	
	

	

	

}
