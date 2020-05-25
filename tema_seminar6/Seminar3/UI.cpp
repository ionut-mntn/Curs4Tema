#include "UI.h"
#include "SortBubble.h"
#include "SortStandard.h"
void afisare(std::vector<Auto> masini) {
	for (int i = 0; i < masini.size(); i++)
		std::cout << masini.at(i).getId() << ' ' << masini.at(i).getMarke() << ' ' << masini.at(i).getModell() << std::endl;
}
void UI::meniu() {
	int optiune;
	int id;
	std::string marca, model;
	AutoInMemoryRepository a;

	a.save(Auto(1, "BMW", "M4"));
	a.save(Auto(2, "AUDI", "RS7"));
	a.save(Auto(3, "VW", "CC"));
	a.save(Auto(4, "MERCEDES", "C63"));

	SortBubble sb;
	SortStandard ss;

	AutoController test = *AutoController::return_instance();
	test.set_repo(a);

	AutoController ac = *AutoController::return_instance();

	cout << "sal";

	do {
		std::cout << "Meniu\n";
		std::cout << "1. Find auto by id\n";
		std::cout << "2. Find all\n";
		std::cout << "3. Save auto\n";
		std::cout << "4. Update auto\n";
		std::cout << "5. Delete auto\n";
		std::cout << "6. Sort autos\n";
		std::cout << "7. Sort autos std\n";
		std::cout << "0. Exit\n";
		std::cin >> optiune;

		
		switch (optiune) {
		case 1: std::cout << "Introduceti id-ul: "; std::cin >> id; cout << ac.findAutoById(id) << std::endl; break;
		case 2: std::cout << "Masinile sunt:\n"; afisare(ac.findAll()); cout << std::endl; break;
		case 3: std::cout << "Introduceti un id: "; cin >> id; std::cout << "Introduceti o marca: "; cin >> marca; std::cout << "Introduceti un model: "; cin >> model; ac.saveAuto(Auto(id, marca, model)); break;
		case 4: std::cout << "Introduceti un id: "; cin >> id; std::cout << "Introduceti o marca: "; cin >> marca; std::cout << "Introduceti un model: "; cin >> model; ac.updateAuto(Auto(id, marca, model)); break;
		case 5: std::cout << "Introduceti id-ul: "; std::cin >> id; ac.deleteAuto(id); break;
		case 6: std::cout << "Se sorteaza masinile ";  ac.set_sorter(&sb); ac.sort_autos(); break;
		case 7: std::cout << "Se sorteaza masinile cu alg standard ";  ac.set_sorter(&ss);  ac.sort_autos(); break;
		}



	} while (optiune != 0);








}
