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
	void edit_reservation(Auto a, Kund k, int flag);
public:
	Rental();
	void reserve_auto(Auto a, Kund k, int t);
	void return_auto(Auto a, Kund k);
	void extend_reservation(Auto a, Kund k);

	/*void add_client(Kund k);
	void delete_client(Kund k);
	void update_client(Kund k);
	void add_Auto(Auto a);
	void delete_Auto(Auto a);*/

};

