#include <iostream>
#include "Tests.h"
int main()
{
	Tests();
	TestActions();
	TestRepo();
	TestController();

	std::cout << "Tests Over\n";

	Main();
}