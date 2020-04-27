#include "AutoController.h"
using namespace std;

AutoController::AutoController(AutoInRepo repo)
{
	this->repo = repo;
}

AutoController::AutoController()
{
}

AutoController::~AutoController()
{
}

Auto AutoController::findAutoById(int id)
{
	return repo.findOne(id);
	
}

vector <Auto> AutoController::findAll()
{
	return repo.findAll();
}

Kunde AutoController::saveAuto(Auto car, Kunde client)
{
	Kunde client_fals;

	int gasit_client = -1;
	int gasit_masina = -1;

	for (int i = 0; i < repo.rental.Kunden.size(); i++)
		if (repo.rental.Kunden[i].get_id() == client.get_id())
			gasit_client = i;
	
	for (int i = 0; i < repo.rental.Autos.size(); i++)
		if (repo.rental.Autos[i].get_id() == car.get_id())
			gasit_masina = i;

	if (gasit_client != -1 and gasit_masina != -1)
	{
		repo.rental.Kunden[gasit_client].comenzi.push_back(car);
		return client;
	}

	return client_fals;
}

Kunde AutoController::updateAuto(Auto car1, Auto car2, Kunde& client)
{
	Kunde client_fals;

	int gasit_client = -1;
	int gasit_masina = -1;

	for (int i = 0; i < repo.rental.Kunden.size(); i++)
		if (repo.rental.Kunden[i].get_id() == client.get_id())
			gasit_client = i;

	for (int i = 0; i < repo.rental.Autos.size(); i++)
		if (repo.rental.Autos[i].get_id() == car2.get_id())
			gasit_masina = i;

	if (gasit_client != -1 and gasit_masina != -1)
	{
		for (int i = 0; i < repo.rental.Kunden[gasit_client].comenzi.size(); i++)
			if (repo.rental.Kunden[gasit_client].comenzi[i].get_id() == car1.get_id())
			{
				repo.rental.Kunden[gasit_client].comenzi.erase(repo.rental.Kunden[gasit_client].comenzi.begin() + i);
				repo.rental.Kunden[gasit_client].comenzi.push_back(car2);
				return client;
			}

	}

	return client_fals;
}

Kunde AutoController::deleteAuto(Auto car, Kunde& client)
{
	Kunde client_fals;

	int gasit_client = -1;

	for (int i = 0; i < repo.rental.Kunden.size(); i++)
		if (repo.rental.Kunden[i].get_id() == client.get_id())
			gasit_client = i;

	if (gasit_client != -1)
	{
		for (int i = 0; i < repo.rental.Kunden[gasit_client].comenzi.size(); i++)
			if (repo.rental.Kunden[gasit_client].comenzi[i].get_id() == car.get_id())
			{
				repo.rental.Kunden[gasit_client].comenzi.erase(repo.rental.Kunden[gasit_client].comenzi.begin() + i);
				return client;
			}

	}

	return client_fals;
}