#include "Rental.h"

void Rental::edit_reservation(Auto a, Kund k, int flag)
{
	for (int i = 0; i < res.size(); i++) {
		if (res.at(i).getAuto() == a && res.at(i).getPerson().getId() == k.getId()) { //eventual override la ==
			res.at(i).setStatus = flag;
			return;
		}
	}
}

Rental::Rental()
{
	
}
void Rental::reserve_auto(Auto a, Kund k, int t)
{
	Reservierung r = Reservierung(k, a, t);
	res.push_back(r);
}
void Rental::return_auto(Auto a, Kund k)
{
	edit_reservation(a,k,2);
}
void Rental::extend_reservation(Auto a, Kund k)
{
	edit_reservation(a, k, 1);
}
/*
void Rental::add_client(Kund k)
{
	kunden.push_back(k);
}

void Rental::delete_client(Kund k)
{
	for (int i = 0; i < kunden.size(); i++)
		if (kunden.at(i).getId() == k.getId())
			kunden.erase(kunden.begin() + i);
}

void Rental::update_client(Kund k)
{
	for (int i = 0; i < kunden.size(); i++)
		if (kunden.at(i).getId() == k.getId()) {
			std::string n;
			std::cout << "Introduceti nume nou: "; std::cin >> n;
			kunden.at(i).setName(n);
		}
}

void Rental::add_Auto(Auto a)
{
	autos.push_back(a);
}

void Rental::delete_Auto(Auto a)
{
	for (int i = 0; i < autos.size(); i++)
		if (autos.at(i).getId() == a.getId())
			autos.erase(autos.begin() + i);
}
*/