#pragma once
#include <string>
#include "Auto.h"
#include <vector>
using namespace std;

class Kunde
{
private:

	int id;
	string name;
	

public:

	vector <Auto> comenzi;

	Kunde();
	Kunde(int id, string name);
	int get_id();
	string get_name();
	void set_id(int ID);
	void set_name(string NAME);

	void show_clients();
};

