#include "Rental.h"

Rental::Rental()
{
}
void Rental::reserve_auto(Auto a, Kund k, int t)
{
	Reservierung r = Reservierung(k, a, t);
	res.push_back(r);
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