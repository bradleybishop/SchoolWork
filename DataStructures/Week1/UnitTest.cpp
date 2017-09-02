/*
	Brad Bishop
	Chapter 1: Programming Exercise #4

	UnitTest.cpp

	Tests personType class functionality
*/

#include <iostream>
#include "personType.h"

using namespace std;

void main()
{
	cout << "Testing Person Class" << endl;

	cout << "Create object setting first and last name only and display" << endl << endl;
	personType *person = new personType("Brad", "Bishop");
	person->print();
	cout << endl << endl;

	cout << "Create object setting first,middle and last name and display" << endl << endl;
	person = new personType("Bradley", "James", "Bishop");
	person->print();
	cout << endl << endl;

	cout << "Update Middle Name and display" << endl << endl;
	person->setMiddleName("John");
	person->print();
	cout << endl << endl;

	cout << "Update First Name and display" << endl << endl;
	person->setFirstName("Brad");
	person->print();
	cout << endl << endl;

	cout << "Update last name and display" << endl << endl;
	person->setLastName("Smith");
	person->print();
	cout << endl << endl;

	cout << "Check if first name matches 'Bob'" << endl << endl;
	if (person->firstNameEquals("Bob"))
		cout << "First Name Matches";
	else
		cout << "First name does not match";

	cout << endl << endl;

	cout << "Check if first name matches 'Brad'" << endl << endl;
	if (person->firstNameEquals("Brad"))
		cout << "First name matches";
	else
		cout << "First name does not match";

	cout << endl << endl;

	cout << "Check if last name matches 'Smith'" << endl << endl;
	if (person->lastNameEquals("Smith"))
		cout << "Last name matches";
	else
		cout << "Last name does not match";

	cout << endl << endl;

	cout << "Check if last name matches 'Bishop'" << endl << endl;
	if (person->lastNameEquals("Bishop"))
		cout << "Last name matches";
	else
		cout << "Last name does not match";

	cout << endl << endl;

	system("pause");

	return;
}