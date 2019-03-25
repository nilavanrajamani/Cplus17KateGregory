#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(std::string firstName, std::string lastName, int arbitrary) :firstName(firstName), lastName(lastName), arbitraryNumber(arbitrary) {
	cout << "constructing" << firstName << " " << lastName << endl;
}

Person::Person() : arbitraryNumber(0)
{
	cout << "constructing " << firstName << " " << lastName << endl;
}

Person::~Person() {
	cout << "destuctiong" << firstName << lastName << endl;
}

string Person::getName() {
	return firstName + " " + lastName;
}

