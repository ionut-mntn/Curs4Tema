#include "PKW.h"

PKW::PKW(int id, string mar, string mod, string s) : Auto{ id, mar, mod }
{
	Sonderausstattungen = s;
}

string PKW::getSE()const {return Sonderausstattungen;}
void PKW::setSE(string s) {Sonderausstattungen = s;}

string PKW::toString()
{
	//return Auto.toString() + Sonderausstattungen;
	//return Auto.toString(this) + Sonderausstattungen;
	return Auto::toString() + " " + Sonderausstattungen;
}