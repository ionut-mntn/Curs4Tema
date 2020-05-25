#pragma once
#include "Rental.h"
/**
* CRUD operations repository interface
*/
template <class E>
class CrudRepository {
public:
	/**
	* @param id -the id of the entity to be returned id must not be null
	* @return the entity with the specified id or null - if there is no entity with the given id
	*
	*/
	virtual E findOne(int id) = 0;
	/**
	* @return all entities
	*/
	virtual std::vector<E> findAll() = 0;
	/**
	* @param entity entity must be not null
	* @return null- if the given entity is saved otherwise returns the entity (id already exists)
	*
	*/
	virtual E save(E entity) = 0;
	/**
	* removes the entity with the specified id
	*
	* @param id id must be not null
	* @return the removed entity or null if there is no entity with the given id
	*
	*/
	virtual E del(int id) = 0;
	/**
	* @param entity entity must not be null
	* @return null - if the entity is updated, otherwise returns the entity - (e.g id does not exist).
	*
	*/
	virtual E update(E entity) = 0;
	virtual ~CrudRepository() {};
};


class AutoInMemoryRepository:public CrudRepository<Auto> {
public:
	std::vector<Auto> autos;
public:
	int size() {
		return autos.size();
	}
	
	Auto findOne(int id) {
		if (id<0 || id>autos.size())
			return NULL_AUTO;
		for (int i = 0; i < autos.size(); i++)
			if (autos.at(i).getId() == id)
				return autos.at(i);
		return NULL_AUTO;
	}
	
	std::vector<Auto> findAll() {
		return autos;
	}
	
	Auto save(Auto masina) {
		
		for (int i = 0; i < autos.size(); i++)
			if (autos.at(i).getId() == masina.getId())
				return autos.at(i);
		autos.push_back(masina);
		return NULL_AUTO;

	}
	Auto del(int id) {
		if (id<0 || id>autos.size())
			return NULL_AUTO;
		for (int i = 0; i < autos.size(); i++) {
			if (autos.at(i).getId() == id) {
				Auto tmp = autos.at(i);
				autos.erase(autos.begin() + i);
				return tmp;
			}
		}
		return NULL_AUTO;

	}
	Auto update(Auto masina) {
		for (int i = 0; i < autos.size(); i++) 
			if (autos.at(i).getId() == masina.getId()) {
				autos.at(i) = masina;
				return NULL_AUTO;
			}

		return masina;

	}

};