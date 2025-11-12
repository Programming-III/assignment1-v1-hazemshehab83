#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;
class visitors {	
	private:
	string visitorName;
	int ticetsbouhgt;

	public 
		visitors(string visitorName, int ticetsbouhgt);

	~visitors() {};

	void display() {
		cout << "Visitor Name: " << visitorName << ", Tickets Bought: " << ticetsbouhgt << endl;
	}
