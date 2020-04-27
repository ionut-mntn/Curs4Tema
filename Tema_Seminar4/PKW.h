#pragma once
#include "Auto.h"
#include <iostream>
#include <string>

using namespace std;

class PKW :public Auto
{
private:

	string Sonderausstattungen;

public:

	PKW();
	PKW(string Sonderausstattungen, int ID, string MARKE, string MODELL);

};
