#include <iostream>
#include "Rental.h"
#include "PKW.h"
#include "LKW.h"
#include<string>
#include<vector>

using std::cin;
using std::cout;
// cum se face ca mai jos pot declara variabile de tip string si de tip vector, fara sa scriu `#include <string>`,respectiv `#include <vector>`
// i dunno... poate pot declara si lucra cu cateva chestii de baza specifice tipului, dar poate n-am acces chiar la toate functionalitatile...
// am sa le includ de siguranta
using std::string;
using std::vector;

//using namespace std;

int main()
{
    Kunde proba1{1,"John"};
    cout << proba1.toString() << '\n';

    Auto proba2{ 1,"Nissan","Navara" };
    cout << proba2.toString() << '\n';

    vector<Kunde> clients_list = { Kunde(1,"Marian"), Kunde(2,"Andrei"), Kunde(3,"Bogdan") };
    vector<Auto> vehicles_list = { Auto(1, "Dacia", "Logan"), Auto(2, "Ferrari", "Enzo"), Auto(3, "Lambo","Huracan") };
    Rental firma1(clients_list, vehicles_list);

    cout << firma1.toString();

    firma1.add_auto(Auto(firma1.getNoAutos()+ 1 \
        , "Volkswagen", "Passat"));
    cout << firma1.toString();
    firma1.add_client(Kunde(firma1.getNoClients() + 1\
        ,"Jimmy"));
    cout << firma1.toString();

    firma1.update_client(1, Kunde(1,"Mircea"));
    cout << firma1.toString();

    firma1.delete_client(2);        // eu la functia de delete si modific id ul,
    // pentr uca id ul meu reprezinta nr de ordine in lista; i know it is not properly though..
    cout << firma1.toString();
    
    firma1.add_auto(Auto(420,"Daewoo","Matiz"));
        cout << firma1.toString();

    firma1.delete_auto(1);
        cout << firma1.toString();

    LKW v1{ 121,"MAN","XF 203","nuj ce i asta", 11000.5 }; // 11 tone jumate
        //cout << "AICI::!!!!!!!!!!!!!!::"<< v1 << '\n';
        //cout << v1 << '\n';
        //cout << v1.toString() << '\n';
    
        // !!de probat aici cu functiile alea virtuale si mostenirea ( sa vezi ce se intampla cand are/cand nu are cea mai de jos (derivata) clasa o metoda care 
    // suprascrie metoda `toString` din clasa de baza(cea mai de sus clasa din ierarhia de mostenire))
    
    firma1.add_auto(v1);
        cout << firma1.toString();

    PKW v2{ 121,"Scania","Eagle", "nuj" };
    //cout << "AICI::!!!!!!!!!!!!!!::" << v2 << '\n';
        //cout << v2 << '\n';
        //cout << v2.toString() << '\n';
    
    firma1.add_auto(v2);
        cout << firma1.toString();
    
    // obs proprie: adaugand pkw uri si lkw uri intr un vector<Auto> cred ca imi
    // vor fi considerate drept `Auto` si nu altceva.. adica ma voi putea folosi 
    // doar de metode specifice unui obiect de tip `Auto`

    return 0;
}