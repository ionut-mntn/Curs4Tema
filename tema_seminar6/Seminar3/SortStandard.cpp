#include "SortStandard.h"

void SortStandard::sort(std::vector<Auto>& v)
{
	std::sort(v.begin(), v.end(), mai_mic());
}
