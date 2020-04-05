#pragma once
//template
#include "Rental.h"
vector<Kunde> Rental::getClients() { return clients; }
void Rental::setClients(vector<Kunde> value) { clients = value; }
vector<Auto> Rental::getAutos() { return autos; }
void Rental::setAutos(vector<Auto> value) { autos = value; }

Rental::Rental(vector<Kunde> clients_list, vector<Auto> vehicles_list)
{
	clients = clients_list; //noClients = 0;
	autos = vehicles_list; //noAutos = 0;
}

void Rental::add_client(Kunde c)
{
	clients.push_back(c);
}

/*
void Rental::reatribuie_id_uri(int id)
{
	int l = clients.size();
	for (int i = id - 1; i < l; i++)
		clients[i].setId(clients[i].getId() - 1);
	// exemplu: l-am sters pe cel cu id ul 3, inseamna ca l-am sters pe 
	// cel de pe pozitia 2, deci s-au translatat toti pe cate o pozitie mai la stanga
	// Asa ca, voi incepe de la index ul id si le voi decrementa fiecaruia id ul
}
*/

void Rental::delete_client(int id)
{
	/*
	clients.erase(std::remove(clients.begin(), clients.end(), c), clients.end());
	// daca toata linia asta de cod e doar ca sa sterg un element din container, atunci nu s prea folositoare stl urile astea, no offense
	// vec.erase(std::remove(vec.begin(), vec.end(), int_to_remove), vec.end());
	*/
	int l = clients.size();
	for(int i = 0; i < l; i++)
		if (clients[i].getId() == id)
		{
			clients.erase(clients.begin() + i);
			return;
		}
	// if (clients.size()) reatribuie_id_uri(id);
}

//void Rental::update_client(const Kunde &c) // grija aici cum e pasat parametrul asta ca fac mai jos o comparatie cu ajutorul operatorului ==
// ( revenind asupra comentariului, nu mai stiu EXACT ce voiam sa zic..guess explicit is almost always better than implicit; probabil ceva legat de
// functii care schimba the state of the object vs functii care nu fac asta)
void Rental::update_client(int id, Kunde new_client) // grija aici cum e pasat parametrul asta ca fac mai jos o comparatie cu ajutorul operatorului ==
// nu am asumat ca id urile sunt unice, nu se preciza
{
	int l = clients.size();
	for (int i = 1; i <= l; i++)					// indexare de la 1 la inclusiv l, pentru ca nu o sa ii cer user ului sa dea un id "0"
		if (clients[i - 1].getId() == id)			// minus 1 aici din aceleasi considerente
		{
			clients[i - 1] = new_client;
			return;
		}
}

void Rental::add_auto(Auto a)
{
	autos.push_back(a);
}

void Rental::delete_auto(int id)
{
//	autos.erase(std::remove(autos.begin(), autos.end(), a), autos.end());
	int l = autos.size();
	for (int i = 0; i < l; i++)
		if (autos[i].getId() == id)
		{
			autos.erase(autos.begin() + i);
			return;
		}

}

int Rental::getNoClients() { return clients.size(); /*return noClients;*/ }
int Rental::getNoAutos() { return autos.size(); /*return noAutos;*/ }

string Rental::toString()
{
	string de_returnat = "\n";

	string lista_masini = "LISTA MASINI\n=====================\n\n";
	int l1 = autos.size();
	for (int i = 0; i < l1; i++)
		lista_masini += autos[i].toString() + "\n";
	
	de_returnat += lista_masini + "\n\n";
	
	string lista_clienti = "LISTA CLIENTI\n===================\n\n";

	int l2 = clients.size();
	for (int i = 0; i < l2; i++)
		lista_clienti += clients[i].toString() + "\n";
	de_returnat += lista_clienti;

	de_returnat += '\n';		// vad ca merge sa adaug unui string si un singur caracter; nu trebuie neaparat sa fie array de caractere, prolly si l converteste el
	return de_returnat;
}