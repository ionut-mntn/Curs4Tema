#include "Console.h"
#include <iostream>


using namespace std;

Console::Console(AutoController c)
{
	ac = c;
}

Console::~Console()
{
}

void Console::show_clients_and_cars()
{
	cout << "Autos:\n";

	for (int i = 0; i < ac.repo.rental.Autos.size(); i++)
		ac.repo.rental.Autos[i].show_auto();

	cout << "\nClients:\n";
	for (int i = 0; i < ac.repo.rental.Kunden.size(); i++)
		ac.repo.rental.Kunden[i].show_clients();
	
	cout << endl;
}

void Console::build_menu()
{
	cout << "\nOptions\n0 - Exit\n1 - Find Auto by ID\n2 - Find All\n3 - Save Auto to Client\n4 - Update Auto\n5 - Delete Auto\n6 - Show Orders\n";
}

void Console::choose_option()
{
	build_menu();
	cout << "Choose option:\nYour option: ";
	char option = '69';

	cin >> option;

	if (option == '1')
	{
		int id;
		cout << "\nEnter Auto ID to be found: ";
		cin >> id;

		Auto a;

		a = ac.findAutoById(id);

		a.show_auto();
	}
	if (option == '2')
	{
		cout << "List of Autos:\n";

		for (int i = 0; i < ac.repo.rental.Autos.size(); i++)
			ac.repo.rental.Autos[i].show_auto();
	}
	if (option == '3')
	{
		show_clients_and_cars();

		int id;
		int id_car;

		cout << "Give client ID: ";
		cin >> id;

		cout << "Give car ID: ";
		cin >> id_car;

		Auto a;
		for (int i = 0; i < ac.repo.rental.Autos.size(); i++)
			if (id_car == ac.repo.rental.Autos[i].get_id())
				a = ac.repo.rental.Autos[i];

		Kunde k;
		for (int i = 0; i < ac.repo.rental.Kunden.size(); i++)
			if (id == ac.repo.rental.Kunden[i].get_id())
				k = ac.repo.rental.Kunden[i];

		ac.saveAuto(a, k);
	}
	if (option == '4')
	{
		show_clients_and_cars();
		ac.repo.rental.show_orders();

		int id;
		int id_car1;
		int id_car2;

		cout << "Give client ID: ";
		cin >> id;

		cout << "Give client car ID: ";
		cin >> id_car1;

		cout << "Give update car ID: ";
		cin >> id_car2;

		Auto a1;
		for (int i = 0; i < ac.repo.rental.Autos.size(); i++)
			if (id_car1 == ac.repo.rental.Autos[i].get_id())
				a1 = ac.repo.rental.Autos[i];
		Auto a2;
		for (int i = 0; i < ac.repo.rental.Autos.size(); i++)
			if (id_car2 == ac.repo.rental.Autos[i].get_id())
				a2 = ac.repo.rental.Autos[i];

		Kunde k;
		for (int i = 0; i < ac.repo.rental.Kunden.size(); i++)
			if (id == ac.repo.rental.Kunden[i].get_id())
				k = ac.repo.rental.Kunden[i];

		ac.updateAuto(a1, a2, k);
	}
	if (option == '5')
	{
		int id;
		int id_car;

		cout << "Give client ID: ";
		cin >> id;

		cout << "Give car ID: ";
		cin >> id_car;
	
		Auto a;
		for (int i = 0; i < ac.repo.rental.Autos.size(); i++)
			if (id == ac.repo.rental.Autos[i].get_id())
				a = ac.repo.rental.Autos[i];

		Kunde k;
		for (int i = 0; i < ac.repo.rental.Kunden.size(); i++)
			if (id_car == ac.repo.rental.Kunden[i].get_id())
				k = ac.repo.rental.Kunden[i];

		ac.deleteAuto(a, k);
	}
	if (option == '0')
	{
		return;
	}
	if (option == '6')
	{
		ac.repo.rental.show_orders();
	}

	choose_option();
}