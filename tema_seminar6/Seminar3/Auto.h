#pragma once
#include <string>
#include <iostream>
using namespace std;
class Auto
{
protected:
	int id;
	std::string Marke;
	std::string Modell;
public:
	Auto(int, std::string, std::string);
	Auto();
	std::string getMarke()const;
	std::string getModell();
	int getId();

	void setMarke(std::string);
	void setModell(std::string);
	void setId(int);

	bool operator==(const Auto& masina);
	bool operator!=(const Auto & masina);
	friend ostream& operator<<(ostream& os, Auto a);

};

