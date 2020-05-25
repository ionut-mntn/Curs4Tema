#pragma once
#include "Sorter.h"
#include "utils.h"
#include <algorithm>
class SortStandard:public Sorter
{
public:
	void sort(std::vector<Auto>& v);

};

