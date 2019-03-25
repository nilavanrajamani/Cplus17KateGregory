#include "Tweeter.h"
#include <iostream>

using namespace std;

Tweeter::Tweeter(std::string first, std::string last, int arbitrary, std::string handle) : Person(first, last, arbitrary), twitterhandle(handle)
{
	cout << "constructing Tweeter " << twitterhandle << endl;
}

Tweeter::~Tweeter() {
	cout << " destructing tweeter " << twitterhandle << endl;
}