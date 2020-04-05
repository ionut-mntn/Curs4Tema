#pragma once
#include <vector>
#include "Auto.h"
#include "Kunde.h"
using std::vector;
class Rental
{
private:
	vector<Kunde> clients;
	vector<Auto> autos;
	// static int noAutos; // number of vehicels
	// static int noClients; // number of clients
public:

	//constructor
	Rental(vector<Kunde> clients_list, vector<Auto> vehicles_list);

	vector<Kunde> getClients();
	void setClients(vector<Kunde> value);
	vector<Auto> getAutos();
	void setAutos(vector<Auto> value);

	void add_client(Kunde c);
	void delete_client(int id);
	void update_client(int id, Kunde new_c);
	void add_auto(Auto a);
	void delete_auto(int id);

	int getNoClients();
	int getNoAutos();

	string toString();

/*
	static void reatribuie_id_uri(int id);
	void reatribuie_id_uri(int id);
*/

	//destructor
	//~Rental() = default;				// nuj daca e bn ce fac eu aici cu `default`
};