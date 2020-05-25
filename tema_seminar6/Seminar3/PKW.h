#pragma once
#include "Auto.h"
class PKW: public Auto
{
private:
	std::string sonderausstattung;
public:
	PKW(int i, std::string ma, std::string mo, std::string so);
	std::string getSonderausstattung();
	void setSonderausstattung(std::string so);
};

