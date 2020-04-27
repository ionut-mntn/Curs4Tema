#pragma once
#include "Kunde.h"
#include "Auto.h"
#include <vector>

using namespace std;

class Rental
{
public:

	vector<Kunde> Kunden;
	vector<Auto> Autos;

	void addClient(Kunde c);
	void deleteClient(Kunde c);
	void updateClient(Kunde& c, string NAME);
	void addAuto(Auto a);
	void deleteAuto(Auto a);

	void show_orders();
};