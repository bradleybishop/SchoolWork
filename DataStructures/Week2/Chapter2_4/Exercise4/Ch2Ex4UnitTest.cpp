/*
	Brad Bishop
	Chapter 2: Programming Exercise #4

	Ch2Ex4UnitTest.cpp

	Tests circleType class functionality
*/

#include <iostream>
#include <string>
#include "circleType.h"

using namespace std;

//Prints information about the given circle object to the screen.
// Radius, center point, circumference and area.
void printCircleInformation(circleType *circle)
{
	cout << "The radius of the circle is: "
		<< circle->getRadius() << endl;
	cout << "The circle is located at: "
		<< circle->print() << endl;
	cout << "The circumference of the circle is: "
		<< circle->getCircumference() << endl;

	cout << "The area of the circle is: "
		<< circle->getArea() << endl;
}

int main()
{
	double radius = 2.5;
	int x = 10;
	int y = 15;
	double newRadius = 8.6;
	int newX = 30;
	int newY = 45;
	cout << "Creating circle with radius: " << to_string(radius)
		<< " and a location of (" << to_string(x) << ","
		<< to_string(y) << ")" << endl;
	circleType *circle = new circleType(x, y, radius);

	printCircleInformation(circle);

	cout << endl << "Changing circles radius to " << newRadius << endl << endl;
	circle->setRadius(newRadius);
	cout << "Changing circles center point to (" << newX << "," << newY << ")" << endl << endl;
	circle->setCoordinates(newX, newY);
	
	printCircleInformation(circle);

	cout << endl << endl << "Testing circleType print information method: "
		<< endl << circle->printCircleInformation() << endl;
	system("pause");
	return 0;
}

