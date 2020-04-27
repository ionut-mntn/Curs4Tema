#include <iostream>
#include <string>
#include "Auto.h"

using namespace std;

void Auto::show_auto()
{
	cout << "ID: " << id << " Marke: " << Marke << " Modell: " << Modell << endl;
}

Auto::Auto()
{

	id = 0;
	Marke = "?";
	Modell = "?";

}

Auto::Auto(int ID, string MARKE, string MODELL)
{
	id = ID;
	Marke = MARKE;
	Modell = MODELL;
}

int Auto::get_id()
{
	return this->id;
}

string Auto::get_Marke()
{
	return this->Marke;
}

string Auto::get_Modell()
{
	return this->Modell;
}

void Auto::set_id(int ID)
{
	this->id = ID;
}

void Auto::set_Marke(string MARKE)
{
	this->Marke = MARKE;
}

void Auto::set_Modell(string MODELL)
{
	this->Modell = MODELL;
}