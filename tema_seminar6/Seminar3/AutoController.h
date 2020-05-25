#pragma once
#include "CrudRepository.h"
#include <algorithm>
#include "Sorter.h"

class AutoController
{
private:
	
	
	AutoController();
	static AutoController* instance;
	Sorter* sorter;

public:

	static AutoController *return_instance();
	AutoInMemoryRepository repo;

	void set_repo(AutoInMemoryRepository a);
	void set_sorter(Sorter* s);

	Auto findAutoById(int id);
	std::vector<Auto> findAll();
	Auto saveAuto(Auto a);
	Auto updateAuto(Auto a);
	Auto deleteAuto(int id);

	void sort_autos();

	//void sort_autos_standard();


};

