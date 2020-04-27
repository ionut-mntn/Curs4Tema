#pragma once
#include <vector>
#include "CrudRepo.h"
#include "Rental.h"

using namespace std;

class AutoInRepo: public CrudRepository<Auto>
{
public:

	Rental rental;

	AutoInRepo(); 

	AutoInRepo(Rental r); //acces la vectorii din rental

	Auto findOne(int id);

	vector <Auto> findAll();

	Auto save(Auto new_car);

	Auto del(int id);

	Auto update(Auto car, string marke);

};
