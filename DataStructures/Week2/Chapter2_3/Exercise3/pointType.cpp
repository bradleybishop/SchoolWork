/*
Brad Bishop
Chapter 2: Programming Exercise #3

pointType.cpp

pointType implementation file.
*/
#include <iostream>
#include <string>
#include "pointType.h"

using namespace std;

pointType::pointType()
{
	xPoint = 0;
	yPoint = 0;
}

pointType::pointType(int x, int y)
{
	xPoint = x;
	yPoint = y;
}

pointType::pointType(pointType & point)
{
	xPoint = point.getX();
	yPoint = point.getY();
}

int pointType::getX() const
{
	return xPoint;
}

int pointType::getY() const
{
	return yPoint;
}

void pointType::setX(int x)
{
	xPoint = x;
}

void pointType::setY(int y)
{
	yPoint = y;
}

void pointType::setCoordinates(int x, int y)
{
	xPoint = x;
	yPoint = y;
}

string pointType::print() const
{
	string result = "(";
	result += to_string(xPoint) + "," + to_string(yPoint) + ")";
	return result;
}
