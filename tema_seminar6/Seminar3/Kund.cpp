#include "Kund.h"



Kund::Kund(int i, std::string n)
{
	id = i;
	Name = n;
}

Kund::Kund()
{
}

void Kund::setId(int i)
{
	id = i;
}

void Kund::setName(std::string n)
{
	Name = n;
}

int Kund::getId()
{
	return id;
}

std::string Kund::getName()
{
	return Name;
}
