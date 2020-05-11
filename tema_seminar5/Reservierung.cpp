#include "Reservierung.h"

Reservierung::Reservierung(Kund p, Auto a, int t)
{
	person = p;
	masina = a;
	tage = t;
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