/*
Brad Bishop
Chapter 1: Programming Exercise #4

personType.cpp

personType Implementation
*/
#include <iostream>
#include <string>
#include "personType.h"

using namespace std;

void personType::print() const
{
	cout << firstName << " ";
	if (middleName != "")
		cout << middleName << " ";
	cout << lastName;
}

void personType::setName(string first, string last)
{
	firstName = first;
	lastName = last;
}

void personType::setName(string first, string middle, string last)
{
	firstName = first;
	middleName = middle;
	lastName = last;
}

void personType::setFirstName(string first)
{
	firstName = first;
}

void personType::setMiddleName(string middle)
{
	middleName = middle;
}

void personType::setLastName(string last)
{
	lastName = last;
}

string personType::getFirstName() const
{
	return firstName;
}

string personType::getLastName() const
{
	return lastName;
}

string personType::getMiddleName() const
{
	return middleName;
}

bool personType::firstNameEquals(string first) const
{
	return firstName == first;
}

bool personType::lastNameEquals(string last) const
{
	return lastName == last;
}

//Default constructor
personType::personType()
{
	firstName = "";
	lastName = "";
}

//Constructor with parameters
personType::personType(string first, string last)
{
	firstName = first;
	lastName = last;
}

personType::personType(string first, string middle, string last)
{
	firstName = first;
	middleName = middle;
	lastName = last;
}