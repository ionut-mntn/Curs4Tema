#include "Kunde.h"
#include <iostream>
#include <string>

using namespace std;

void Kunde::show_clients()
{
	cout << "ID: " << id << " Name: " << name << endl;
}

Kunde::Kunde()
{
	this->id = 0;
	this->name = "?";
}

Kunde::Kunde(int ID, string NAME)
{

	this->id = ID;
	this->name = NAME;

}

int Kunde::get_id()
{
	return this->id;
}

string Kunde::get_name()
{
	return this->name;
}

void Kunde::set_id(int ID)
{
	this->id = ID;
}

void Kunde::set_name(string NAME)
{
	this->name = NAME;
}
