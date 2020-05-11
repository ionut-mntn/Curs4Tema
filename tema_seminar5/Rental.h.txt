#pragma once
#include "Auto.h"
#include "Kund.h"
#include <iostream>
#include <vector>
#include "Reservierung.h"
#define NULL_AUTO Auto(-1,"","");

class Rental
{
private:
	/*std::vector<Auto> autos;
	std::vector<Kund> kunden;*/
	std::vector<Reservierung> res;
public:
	Rental();
	void reserve_auto(Auto a, Kund k, int t);
	/*void add_client(Kund k);
	void delete_client(Kund k);
	void update_client(Kund k);
	void add_Auto(Auto a);
	void delete_Auto(Auto a);*/

};