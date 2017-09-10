#pragma once
#include <iostream>
#include <string>

class pointType
{
public:
	pointType();
	pointType(int x, int y);
	pointType(pointType &point);

	int getX() const;
	int getY() const;

	void setX(int x);
	void setY(int y);

	void setCoordinates(int x, int y);
	
	//string print() const;


private:
	int xPoint;
	int yPoint;
};

