#include "CrudRepo.h"
#include "AutoRepository.h"
#include <string>
#include "Rental.h"
using namespace std;

AutoInRepo::AutoInRepo()
{

}

AutoInRepo::AutoInRepo(Rental r)
{
	rental = r;
}

Auto AutoInRepo::findOne(int id)
{
	Auto null_auto;

	for (int i = 0; i < rental.Autos.size(); i++)
		if (rental.Autos[i].get_id() == id)
			return rental.Autos[i];

	return null_auto;

}

vector <Auto> AutoInRepo::findAll()
{
	return rental.Autos;
}

Auto AutoInRepo::save(Auto new_car)
{
	Auto null_auto;

	for (int i = 0; i < rental.Autos.size(); i++)
		if (rental.Autos[i].get_id() == new_car.get_id())
			return rental.Autos[i];

	rental.Autos.push_back(new_car);
	return null_auto;
}

Auto AutoInRepo::del(int id)
{
	Auto null_auto;

	for (int i = 0; i < rental.Autos.size(); i++)
		if (rental.Autos[i].get_id() == id)
		{
			rental.Autos.erase(rental.Autos.begin() + i);
			return rental.Autos[i];
		}

	return null_auto;
}

Auto AutoInRepo::update(Auto car, string marke)
{	
	Auto null_auto;

	for (int i = 0; i < rental.Autos.size(); i++)
		if (rental.Autos[i].get_id() == car.get_id())
		{
			rental.Autos[i].set_Marke(marke);
			car = rental.Autos[i];
			return rental.Autos[i];
		}

	return null_auto;
}

