#ifndef MAMMAL_H
#define MAMMAL_H

#include <string>
#include <Animal.h>
using namespace std;
class Mammal : public Animal {

	private
		string furColor;

public:
	Mammal(string name, int age, bool isHungry, string furColor)
		
		~Mammal() {};

	void display() {
		Animal::display();
		cout << "Fur Color: " << furColor << endl;
	}


};
