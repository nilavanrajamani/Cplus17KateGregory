#pragma once

#include <string>
class Person {
private:
	std::string firstName;
	std::string lastName;
	int arbitraryNumber;

public:
	Person(std::string firstName, std::string lastName, int arbitrary);
	Person();
	~Person();
	std::string getName();
};