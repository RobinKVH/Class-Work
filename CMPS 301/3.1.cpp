//Name: Robin Horan
//Course: CMPS 301
//Due Date: September 23, 2015
//Professor: Ray Ahmadnia
//Purpose: Homework that displays a rectangle with user input
//------------------------------------------------------------------------------------------------------
#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main()
{
	//declaring variables 
	float width, length, Area, Perimeter;


	//displaying the rectangle
	cout << "        ---------------------" << endl;
	cout << "       |                     |" << endl;
	cout << "       |                     |  width" << endl;
	cout << "       |                     |" << endl;
	cout << "        ---------------------" << endl;
	cout << "                length" << endl;

	//initializing variables
	cout << " Enter the measure of the width: "; cin >> width;
	cout << " Enter the measure of the length: "; cin >> length;

	//calculation
	Area = width * length;
	Perimeter = (width + length) * 2;

	//displaying ouput
	cout << "			Area: " << Area << endl;
	cout << "			Perimeter: " << Perimeter << endl;

	system("pause");
	return 0;
}
//-----------------------------------------OUPUT--------------------------------------------------------
//     ---------------------
//    |                     |
//    |                     | width
//    |                     |
//     ---------------------
//             length
//Enter the measure of the width: 23.9
//Enter the measure of the length: 44.01
//    Area: 1051.84
//	Perimeter: 135.82
//	Press any key to continue . . .
//	-----------------------------------------------------------------------------------------------------