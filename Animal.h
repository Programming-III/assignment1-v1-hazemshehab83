#include <string>
using namespace std;
class Animal {

	private;
	string name :
	int age;
	bool ishungry;

public:
	Animal(string name, int age, bool isHungry)

		~Animal() {};

	void display() {}

	cout << "Animal Name: " << name << ", Age: " << age << ", Is Hungry: " << ishungry << endl;

	void feed() {
		if (ishungry) {
			cout << name << " is not being fed." << endl;
		else
			cout << name << " is being fed." << endl;
		}
	};

