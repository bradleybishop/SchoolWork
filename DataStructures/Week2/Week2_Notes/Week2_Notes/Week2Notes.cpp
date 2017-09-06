#include <iostream>
#include <string>
#include "personType.h"

using namespace std;

class yClass
{
public:
	void one();
	void two(int, int);
	yClass();
private:
	int a;
	int b;
};

class xClass : public yClass
{
public:
	void one();
	xClass();
private:
	int z;
};

void yClass::one()
{
	cout << a + b << endl;
}

void yClass::two(int x, int y)
{
	a = x;
	b = y;
}

yClass::yClass()
{
	a = 0;
	b = 0;
}

void xClass::one()
{
	//a = 10;
	//b = 15;
	//z = 30;
	//cout << a + b + z << endl;
}

xClass::xClass()
{
	z = 0;
}

template <class Type>
Type surprise(Type x, Type y)
{
	return x + y;
}

int main()
{
	yClass y;
	xClass x;
	y.two(1, 2);
	y.one();
	x.one();

	cout << surprise(5, 6) << endl;
	string str1 = "Sunny";
	string str2 = " Day";
	cout << surprise(str1, str2) << endl;

	system("pause");
	return 0;
}