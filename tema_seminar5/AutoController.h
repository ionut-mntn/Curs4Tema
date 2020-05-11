#pragma once
#include "CrudRepository.h"
class AutoController
{
private:


	AutoController();
	static AutoController* instance;

public:

	static AutoController* return_instance();
	AutoInMemoryRepository repo;

	void set_repo(AutoInMemoryRepository a);

	Auto findAutoById(int id);
	std::vector<Auto> findAll();
	Auto saveAuto(Auto a);
	Auto updateAuto(Auto a);
	Auto deleteAuto(int id);
	void sort_autos();

};
