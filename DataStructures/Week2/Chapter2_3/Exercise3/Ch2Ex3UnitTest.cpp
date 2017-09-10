#include <iostream>
#include <string>
#include "pointType.h"

using namespace std;

int main()
{
	pointType *point = new pointType(10, 5);
	cout << "The point is located at " << endl;
		//<< point->print() << endl;

	delete point;

	system("pause");
	return 0;
}