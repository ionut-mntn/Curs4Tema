#include "Reservierung.h"

Reservierung::Reservierung(Kund p, Auto a, int t)
{
	person = p;
	masina = a;
	tage = t;
	status = 0;
}

void Reservierung::setPerson(Kund p)
{
	person = p;
}

void Reservierung::setAuto(Auto a)
{
	masina = a;
}

void Reservierung::setTage(int t)
{
	tage = t;
}

void Reservierung::setStatus(int s)
{
	status = s;
}

Kund Reservierung::getPerson()
{
	return person;
}

Auto Reservierung::getAuto()
{
	return masina;
}

int Reservierung::getTage()
{
	return tage;
}
