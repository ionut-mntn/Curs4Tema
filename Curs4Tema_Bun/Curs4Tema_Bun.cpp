#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <exception>

using std::cout;
using std::string;
using std::vector;
using std::exception;


template <typename T>
const T suma(const T* sir, int start, int end, const T& Anfangswert) // am vazut pe learncpp.com la niste exemple cu clase ":default" 
//in signatura constructorului; sper ca la asta va refereati...
{
	T result = Anfangswert; // sper ca ii pune valoarea si nu adresa aici! ( si cred ca da; is it because of implicit dereference? prolly..)
	for (int i = start; i < end; i++)
		result = result + sir[i];  // scriu asa si nu "+=" pt ca poate
	// am sa vreau sa folosesc si pt o clasa ceva, si e mai probabil
	// ca orice obiect sa aiba suprascris operatorul + decat += ( zic eu.. acuma nuj sigur)
	return result;
}


template <typename U>
auto sum{ [](U v[], int a, int b, U Anfangswert = 0) {
	U suma = Anfangswert;
	for (int i = a; i <= b; i++)
		suma = suma + v[i];
	return suma;
	} 
};


 // aici ceva nu imi mergea bine 
template <typename U> // nu stiu daca e ok aici sa fie tot T, ca mai sus...intuitiv, cred ca nu e nicio problema
// am sa pun totusi 'U' just in case
auto suma_lambda_ish{ [](const U* sir, int start, int end, U Anfangswert = 0) {
// mi se pare un pic ciudat ca definesc aici, global, o functie care ar trebui sa fie lambda, deci ceva succint si scris chiar acolo unde este necesara..
// dar am incercat o gramada de chestii separat intr-o ciorna si nu prea mergeau si am ramas la varianta asta...
	//U sum = Anfangswert; // aici sper ca o sa faca compilatorul niste conversii implicite
	for (int i = start; i < end; i++)
		Anfangswert = Anfangswert + sir[i]; // nu am folosit += pentru ca poate o sa vreau sa folosesc functia pentru niste obiecte de un tip definit de mine, pentru care nu am suprascris
	//operatorul += ; dupa capul meu e mai safe asa,
	return Anfangswert;
	}
};


class shape {

private:
	std::string Name;
	float Flache;
public:
	shape(std::string n, float fl) {
		Name = n;
		Flache = fl;
	}

	std::string getName() {
		return Name;
	}
	void setName(std::string n) {
		Name = n;
	}

	float getFlache() {
		return Flache;
	}
	void setFlache(float f) {
		Flache = f;
	}
};


void f1(shape* s, float x) 
{
	(s)->setFlache((s)->getFlache() * x);
}

void f2(shape* s, float y) 
{
	if (!y)
		(s)->setFlache((s)->getFlache() / y);
	else
	{
		std::exception e; throw e;
	}
}


void f3(shape* s, float n = 0) 
{
	std::string new_str = "";
	new_str = (s)->getName() + " " + std::to_string((s)->getFlache()) + " !";
	(s)->setName(new_str);
}


void apply(std::vector<shape*> v, void (*f)(shape*, float)) 
{
	for (int i = 0; i < v.size(); i++) 
		f(v.at(i), 2);
}


int main()
{
	//Cerinta 1
	int sir1[]{ 1, 2, 3, 4, 5 };
	double sir2[]{ 1.1, 2.0, 3.2, 4.4, 5.2 };

	cout << suma(sir1, 0, 5, 100) << '\n';
	//cout << sum<int>(sir2, 0, 5, 100)<<'\n';
	cout << suma(sir2, 0, 5, 100.0) << '\n';
	//cout << sum<double>(sir3, 0, 5, 110.0)<<'\n';

	cout << '\n';

	//Cerinta 2
	cout << suma_lambda_ish<int>(sir1, 0, 5) << '\n';
	cout << suma_lambda_ish<double>(sir2, 0, 5) << '\n';
	
	//Cerinta 3
	/*
	shape s1 = shape("Triunghi", 8);
	shape s2 = shape("Dreptunghi", 10);
	vector<shape> container{ s1,s2 };
	
	apply(container, f3);
	for(int i = 0; i < container.size(); i ++)
		cout << (container.at(i))->getName()
	*/

	shape* s1 = new shape("Triunghi", 8);
	shape* s2 = new shape("Dreptunghi", 14);
	std::vector<shape*> v{ s1,s2 };
	for (int i = 0; i < 2; i++)
		cout << v[i]->getFlache() << " " << v[i]->getName() << '\n';
	
	apply(v, f3);
	
	for (int i = 0; i < 2; i++)
		cout << v[i]->getFlache() << " " << v[i]->getName() << '\n';

	return 0;
}