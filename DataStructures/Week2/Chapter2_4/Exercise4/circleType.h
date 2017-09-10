/*
Brad Bishop
Chapter 2: Programming Exercise #4

circleType.h

circleType header file.
*/
#pragma once
#include <iostream>
#include <string>
#include "pointType.h"

using namespace std;

class circleType :
	public pointType
{
public:
	circleType();
	circleType(circleType &circle);
	circleType(pointType &point, double radius);
	circleType(int x, int y, double radius);
	void setRadius(double radius);
	double getRadius() const;
	double getCircumference() const;
	double getArea() const;
	string printCircleInformation() const;

private:
	double radius;
	
	double getDiameter() const;
};

