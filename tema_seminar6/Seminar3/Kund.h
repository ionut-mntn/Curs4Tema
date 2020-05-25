#pragma once
#include <string>
class Kund
{
private:
	int id;
	std::string Name;
public:
	Kund(int i, std::string n);
	Kund();
	void setId(int i);
	void setName(std::string n);
	int getId();
	std::string getName();
};

