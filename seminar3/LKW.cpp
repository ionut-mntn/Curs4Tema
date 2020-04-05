#pragma once
#include "LKW.h"

LKW::LKW(int id, string mar, string mod, string b, double g) : Auto{ id, mar, mod }
{ 
	Gesamtgewicht = g;
	Bezeichnung = b; 
}
double LKW::getMass() { return Gesamtgewicht; }
void LKW::setMass(double value) { Gesamtgewicht = value; }
string LKW::getDesignation() { return Bezeichnung; }
void LKW::setDesignation(string value) { Bezeichnung = value; }

void LKW::load(double q) //quantity
{
	Gesamtgewicht += q; // eventual try except uri pentru validare
}

void LKW::unload(double q) // quantity
{
	Gesamtgewicht -= q; // idem
}

string LKW::toString()
{
	return Auto::toString() + " " + to_string(Gesamtgewicht) + " " + Bezeichnung;
}