#pragma once
#include <iostream>
#include <string>

using namespace std;

class Auto
{
private:
	int id;
	string Marke;
	string Modell;
public:

	Auto();
	Auto(int ID, string MARKE, string MODELL);

	int get_id();
	string get_Marke();
	string get_Modell();

	void set_id(int ID);
	void set_Marke(string MARKE);
	void set_Modell(string MODELL);

	void show_auto();
};

