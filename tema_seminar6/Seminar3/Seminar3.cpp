#include <iostream>
#include "Kund.h"
#include "Rental.h"
#include "LKW.h"
#include "PKW.h"
#include "teste.h"
#include "UI.h"



int main()
{
	LKW l = LKW(1, "Audi", "A4", 1500, "Nu stiu");
	PKW p = PKW(2, "BMW", "M4", "WTF");
	Kund k = Kund(1, "Mihai");
	


	//testare();
	
	//AutoInMemoryRepository a;

	//AutoController::set_repo(a);
	//AutoController::return_instance();


	
	
	UI ui;
	ui.meniu();

	
	



}

