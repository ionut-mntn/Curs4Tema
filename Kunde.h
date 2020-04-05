#pragma once
#include <iostream>
#include <string>

using std::string;
using std::ostream;
using std::to_string;

class Kunde
{
private:
	int id;
	string Name;
public:

	Kunde(int, string);

	int getId() const;		// asta tre sa fie const, pentru ca garanteaza ca
	void setId(int value);
	string getName() const;
	void setName(string value);

	string toString();

	friend ostream& operator<<(ostream& os, const Kunde &c);
	bool operator==(const Kunde& c1);

	//~Kunde() = default;
};