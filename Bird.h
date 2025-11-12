#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"
#include <string>
#include <Animal.h>
using namespace std;
class Bird : public Animal {

	private
		float wingSpan;

	public
		Bird(string name, int age, bool isHungry, float wingSpan)
		
		~Bird() {};

	void display() {
		Animal::display();
		cout << "Wing Span: " << wingSpan << " meters" << endl;
	}
}
