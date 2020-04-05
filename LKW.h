#pragma once
#include<string>
#include "Auto.h"
using std::to_string;
using std::string;
class LKW: public Auto // atentie la pus public aici!! ca sa se poata faca ceva type-casting
// daca nu puneam `public` aici, atunci, asa cum a zis mr. Luchian Grigore(FTW) pe stackoverflow.com:
// "class inheritance is private by default.
// When you privately inherit from a class or a struct, you explicitly say, 
//among other things, that direct conversion from a derived type to a base type 
//isn't possible. "(!!pentru ca mostenirea se face,implicit, in mod privat!!)
{
private:
	double Gesamtgewicht;
	string Bezeichnung;
public:

	// constructor
	LKW(int id, string mar, string mod, string b, double g = 0);

	double getMass();
	void setMass(double value);
	string getDesignation();
	void setDesignation(string value);

	void load(double);
	void unload(double); // cum a zis si domn' prof; se pot omite numele in forward-declarations

	string toString();

	// virtual toString(); ... de incercat si aici de vazut..

	// nu stiu sigur daca trebuie facut destructor..daca 
};