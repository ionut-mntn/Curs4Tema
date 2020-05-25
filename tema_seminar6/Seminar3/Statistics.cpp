#include "Statistics.h"
#include <map>
Auto Statistics::most_popular_auto(std::vector<Reservierung> res)
{
	std::map<int, int> m;
	for (int i = 0; i < res.size(); i++) {
		if (m.find(res.at(i).getAuto().getId()) == m.end())
			m[res.at(i).getAuto().getId()] = 1;
		else
			m[res.at(i).getAuto().getId()]++;
	}
	int max = 0;
	int id;
	for (int i = 0; i < m.size(); i++) {
		if (m[res.at(i).getAuto().getId()] > max) {
			max = m[res.at(i).getAuto().getId()];
			id = res.at(i).getAuto().getId();
		}
			
	}

	for (int i = 0; i < res.size(); i++) {
		if (res.at(i).getAuto().getId() == id)
			return res.at(i).getAuto();
	}

	return NULL_AUTO;
}
