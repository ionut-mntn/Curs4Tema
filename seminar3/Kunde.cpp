#pragma once
//template 
#include "Kunde.h"
Kunde::Kunde(int id, string name)
{
	this-> id = id;
	Name = name;	// nu am nevoie de this-> pt ca tot ce se petrece aici e case sensitive
}

int Kunde::getId()const { return id; }
void Kunde::setId(int value) { id = value; }
string Kunde::getName()const { return Name; }
void Kunde::setName(string value) { Name = value; }

string Kunde::toString()
{
	//return "";
	return to_string(id) + ": " + string(Name);
}

bool Kunde::operator==(const Kunde &c)
{
	
	//if (id == c.getId()) return true;
	//return false;
	return(id == c.getId());
}

ostream& operator<<(ostream& os, const Kunde& c)
{
	os << c.getId() << " " << c.getName();		// asta cumva baga in stream
	return os;									// si abia apoi asta returneaza stream ul(ca sa il pot combina cu alte operatii)
}
