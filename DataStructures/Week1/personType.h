/*
Brad Bishop
Chapter 1: Programming Exercise #4

personType.h

personType header file.
*/
#include <string>

using namespace std;

class personType
{
public:
	void print() const;
	//Function to output the first name and last name
	//in the form firstName lastName.

	void setName(string first, string last);
	//Function to set firstName and lastName according to the
	//parameters.
	//Postcondition: firstName = first; lastName = last

	void setName(string first, string middle, string last);
	//Function to set firstName, middleName and lastName
	//according to the parameters.
	//Postcondition: firstName = first; middleName = middle;
	//	lastName = last

	void setFirstName(string first);
	//Function to set the first name according to the parameters.
	//Postcondition: firstName = first

	void setLastName(string last);
	//Function to set the last name according to the parameters.
	//Postcondition: lastName = last

	void setMiddleName(string middle);
	//Function to set the middle name according to the parametrs.
	//postcondition: middleName = middle

	string getFirstName() const;
	//Function to return the first name.
	//Postcondition: The value of firstName is returned.

	string getLastName() const;
	//Function to return the last name.
	//Postcondition: The value of lastName is returned.

	string getMiddleName() const;
	//Function to return the middle name.
	//Postcondition: The value of middleName is returned.

	bool firstNameEquals(string first) const;
	//Function to check if the first name matches the parameter.
	//Postcondition: the comparision value is returned.

	bool lastNameEquals(string last) const;
	//Function to check if the last name matches the parameter.'
	//Postcondition: the comparision value is returned.

	personType();
	//Default constructor
	//Sets firstName and lastName to null strings.
	//Postcondition: firstName = ""; lastName = "";

	personType(string first, string last);
	//Constructor with parameters.
	//Sets firstName and lastName according to the parameters.
	//Postcondition: firstName = first; lastName = last; 

	personType(string first, string middle, string last);
	//Constructor with parameters.
	//Sets firstName, middlename and lastName according to the parameters.
	//Postcondition: firstName = first; middleName = middle; lastName = last;

private:
	string firstName; //variable to store the first name
	string lastName;  //variable to store the last name
	string middleName; //variable to store the middle name
};

