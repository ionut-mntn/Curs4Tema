#pragma once
#include "Kund.h"
#include "Auto.h"
class Reservierung
{
private:
	Kund person;
	Auto masina;
	int tage;
public:
	Reservierung(Kund p, Auto a, int t);

	void setPerson(Kund p);
	void setAuto(Auto a);
	void setTage(int t);

	Kund getPerson();
	Auto getAuto();
	int getTage();
};
