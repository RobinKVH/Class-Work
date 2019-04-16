//Name: Robin Horan
//Course: CMPS 301
//Due Date: October 7, 2015
//Professor: Ray Ahmadnia
//Purpose: Program practicing <cmath>
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	//declaring variables
	float a, b, x, y, z;


	//asking input
	cout << "Enter values for \"a\" and \"b\": "; cin >> a >> b;

	//calculating
	x = pow(a + b, 1 / 5);
	y = a * pow(a + (3 * b), a);
	z = a * ((2 * b) + (5 * a)) / 4;

	//output 
	cout << fixed << showpoint << setprecision(2);
	cout << "\tX = " << x << endl;
	cout << "\tY = " << y << endl;
	cout << "\tZ = " << z << endl;

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//Enter values for "a" and "b": 3.4 6.2
//	X = 1.00
//	Y = 124656.82
//	Z = 24.99
//Press any key to continue . . .
//-------------------------------------------------------------------------------