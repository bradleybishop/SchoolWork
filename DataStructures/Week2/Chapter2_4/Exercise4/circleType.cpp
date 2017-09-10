/*
Brad Bishop
Chapter 2: Programming Exercise #4

circleType.cpp

circleType implementation file
*/
#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <math.h>
#include "circleType.h"

using namespace std;

circleType::circleType() : pointType(0, 0)
{
	radius = 0;
}

circleType::circleType(circleType & circle) : pointType(circle.getX(), circle.getY())
{
	this->radius = circle.radius;
}

circleType::circleType(pointType & point, double radius) : pointType(point)
{
	this->radius = radius;
}

circleType::circleType(int x, int y, double radius) : pointType(x, y)
{
	this->radius = radius;
}

void circleType::setRadius(double radius)
{
	this->radius = radius;
}

double circleType::getRadius() const
{
	return radius;
}

double circleType::getCircumference() const
{
	return M_PI * getDiameter();
}

double circleType::getArea() const
{
	return M_PI * pow(radius, 2.0);
}

string circleType::printCircleInformation() const
{
	return "Radius: " + to_string(radius)
		+ ", Center Location: " + print()
		+ ", Area: " + to_string(getArea())
		+ ", Circumference: " + to_string(getCircumference());
}

double circleType::getDiameter() const
{
	return radius * 2;
}
