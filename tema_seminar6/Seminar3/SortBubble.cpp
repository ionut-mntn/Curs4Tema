#include "SortBubble.h"

void SortBubble::sort(std::vector<Auto>& v)
{
	{
		for (int i = 0; i < v.size(); ++i)
		{
			for (int j = 0; j < v.size(); ++j)
			{
				if (v[i].getMarke() < v[j].getMarke())
				{
					swap(v[i], v[j]);

				}
			}
		}
	}
}

