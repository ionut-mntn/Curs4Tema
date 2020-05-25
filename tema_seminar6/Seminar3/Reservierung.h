#pragma once
#include "Kund.h"
#include "Auto.h"
class Reservierung
{
private:
	Kund person;
	Auto masina;
	int tage;
	int status;
public:
	Reservierung(Kund p, Auto a, int t);

	void setPerson(Kund p);
	void setAuto(Auto a);
	void setTage(int t);
	void setStatus(int s);

	Kund getPerson();
	Auto getAuto();
	int getTage();
};

