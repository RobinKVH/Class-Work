//Name: Robin Horan
//Course: CMPS 301
//Due Date: September 23, 2015
//Professor: Ray Ahmadnia
//Purpose: Homework that converts Fahrenheit to Celsius
//----------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;
int main()
{
	//declaring variables 
	float f, c; 

	//displaying opening message
	cout << "I can convert temperature from degrees to Fahrenheit to degrees Celsius. Try me" << endl;

	//initializing variables
	cout << "     Enter a temperature in Fahrenheit: "; cin >> f;

	//calculation
	c = 5 * (f - 32) / 9;

	//displaying output
	cout << "     "<< f << " Fahrenheit is " << setprecision(2) << fixed << c << " Celsius"  << endl;

	system("pause");
	return 0;
}
//-------------------------------------------------------OUTPUT---------------------------------------------------------------------
//I can convert temperature from degrees to Fahrenheit to degrees Celsius.Try me
//     Enter a temperature in Fahrenheit : 97
//     97 Fahrenheit is 36.11 Celsius
//Press any key to continue . . .
//----------------------------------------------------------------------------------------------------------------------------------