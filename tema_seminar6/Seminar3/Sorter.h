#pragma once
#include <vector>
#include "Auto.h"
class Sorter //a se templatiza
{
public:
	virtual void sort(std::vector<Auto>& v)=0;
};

