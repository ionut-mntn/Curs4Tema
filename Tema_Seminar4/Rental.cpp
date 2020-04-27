#include "Auto.h"
#include "Rental.h"
#include <iostream>
#include <string>

using namespace std;

void Rental::show_orders()
{
	cout << "Orders:\n";

	for (int i = 0; i < Kunden.size(); i++)
	{
		cout << "ID: " << Kunden[i].get_id() << " Name: " << Kunden[i].get_name() << " List:\n";
		for (int j = 0; j < Kunden[i].comenzi.size(); j++)
			Kunden[i].comenzi[j].show_auto();
		cout << endl;
	}

}

void Rental::addClient(Kunde c) {
	if (Kunden.size() == 0) {
		Kunden.push_back(c);
		return;
	}

	for (auto i = Kunden.begin(); i != Kunden.end(); ++i) {
		if (i->get_id() == c.get_id()) {
			return;
		}
	}
	Kunden.push_back(c);

}

void Rental::addAuto(Auto a) {
	if (Autos.size() == 0) {
		Autos.push_back(a);
		return;
	}

	for (auto i = Autos.begin(); i != Autos.end(); ++i) {
		if (i->get_id() == a.get_id()) {
			return;
		}
	}
	Autos.push_back(a);

}

void Rental::deleteClient(Kunde c) {
	if (Kunden.size() == 0) {
		return;
	}
	for (int i = 0; i < Kunden.size(); i++) {
		if (Kunden[i].get_id() == c.get_id()) {
			Kunden.erase(Kunden.begin() + i);
			return;
		}
	}
}

void Rental::deleteAuto(Auto a) {
	if (Autos.size() == 0) {
		return;
	}
	for (int i = 0; i < Autos.size(); i++) {
		if (Autos[i].get_id() == a.get_id()) {
			Autos.erase(Autos.begin() + i);
			return;
		}
	}
}

void Rental::updateClient(Kunde& c, string NAME) {
	if (Kunden.size() == 0) {
		return;
	}
	for (int i = 0; i < Kunden.size(); i++) {
		if (Kunden[i].get_id() == c.get_id()) {
			Kunden[i].set_name(NAME);
			c = Kunden[i];
		}
	}
}