#pragma once
#include <string>
#include "Auto.h"
using std::string;
class PKW: public Auto // atentie la pus public aici!! ca sa se poata faca ceva type-casting
{
private:
	string Sonderausstattungen;
public:
	//constructor
	PKW(int, string, string, string);		//!!ATENTIE: const e illegal aici; dar evident ca e ilegal, pentru ca tu VREI sa modifici the current state of the object

	string getSE() const;					// get special equipment
	void setSE(string);				// set special equipmen

	//virtual toString(); ... de incercat si aici de vazut..
	string toString();

	//destructorul, dar cred ca se tine cont de el implicit
	//~PKW()
};