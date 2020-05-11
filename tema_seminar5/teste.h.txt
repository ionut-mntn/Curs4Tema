#pragma once
#include "CrudRepository.h"
#include <assert.h>
void afis(std::vector<Auto> masini) {
	for (int i = 0; i < masini.size(); i++)
		std::cout << masini.at(i).getId() << ' ' << masini.at(i).getMarke() << ' ' << masini.at(i).getModell() << std::endl;
}
void testare() {
	AutoInMemoryRepository a;
	assert(a.save(Auto(1,"BMW","M4")) == Auto(-1, "", ""));
	assert(a.save(Auto(2,"AUDI","RS7")) == Auto(-1, "", ""));
	assert(a.save(Auto(3,"VW","CC")) == Auto(-1, "", ""));
	assert(a.save(Auto(4,"MERCEDES","C63")) == Auto(-1, "", ""));
	afis(a.findAll());

}