#include "AutoController.h"
#include "utils.h"
AutoController* AutoController::instance = NULL;


AutoController::AutoController() {
	AutoInMemoryRepository a;

	a.save(Auto(1, "BMW", "M4"));
	a.save(Auto(2, "AUDI", "RS7"));
	a.save(Auto(3, "VW", "CC"));
	a.save(Auto(4, "MERCEDES", "C63"));
	//repo = a;
	//instance.repo = a;
}

AutoController*  AutoController::return_instance()
{
	if (!instance)
		instance = new AutoController();

	return instance;
}

void AutoController::set_repo(AutoInMemoryRepository a)
{
	instance->repo = a;
}

void AutoController::set_sorter(Sorter* s)
{
	sorter = s;
}




Auto AutoController::findAutoById(int id)
{
	return instance->repo.findOne(id);
}

std::vector<Auto> AutoController::findAll()
{
	return instance->repo.findAll();
}

Auto AutoController::saveAuto(Auto a)
{
	return instance->repo.save(a);
}

Auto AutoController::updateAuto(Auto a)
{
	return instance->repo.update(a);
}

Auto AutoController::deleteAuto(int id)
{
	return instance->repo.del(id);
}

void AutoController::sort_autos()
{
	sorter->sort(instance->repo.autos);
}

/*void AutoController::sort_autos_standard()
{
	std::sort(instance->repo.autos.begin(), instance->repo.autos.end(), mai_mic() );
}*/
