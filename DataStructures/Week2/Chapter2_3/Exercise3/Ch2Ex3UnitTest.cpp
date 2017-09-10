/*
Brad Bishop
Chapter 2: Programming Exercise #3

Ch2Ex3UnitTest.cpp

Tests pointType class functionality
*/
#include <iostream>
#include <string>
#include "pointType.h"

using namespace std;

int main()
{
	pointType *point = new pointType(10, 5);
	cout << "The point is located at: "
		<< point->print() << endl;

	cout << "The x coordinate is: "
		<< point->getX() << endl;

	cout << "The y coordinate is: "
		<< point->getY() << endl;

	cout << "Setting x coordinate to: 15" << endl;
	cout << "Setting y corrdinate to: 25" << endl;
	point->setX(15);
	point->setY(25);

	cout << "The x coordinate is now: "
		<< point->getX() << endl;

	cout << "The y coordinate is now: "
		<< point->getY() << endl;

	delete point;

	system("pause");
	return 0;
}