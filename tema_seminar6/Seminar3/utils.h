#pragma once
#include "Auto.h"
struct mai_mic {
	bool operator()(const Auto& a1,const Auto& a2) { return a1.getMarke() < a2.getMarke(); };
};
