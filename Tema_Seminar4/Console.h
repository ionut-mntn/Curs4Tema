#pragma once
#include "AutoController.h"
#include "PKW.h"
#include "LKW.h"
using namespace std;

class Console
{
private:

	AutoController ac;

public:
	Console(AutoController c);
	~Console();

	void build_menu();
	void choose_option();
	void show_clients_and_cars();

};

