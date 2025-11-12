#ifndef REPTILE_H
#define REPTILE_H

#include <string>
#include <Animal.h>
using namespace std;
class Reptile: public Animal {
private :
	bool isVenomous;	

public:
	Reotile(string name, int age, bool isHungry, bool isVenomous);

~Reptile () {};
	
void display() {
Animal::display();
cout << "Is Venomous: " << (isVenomous ? "Yes" : "No") << endl;
	}
};
	
