//Name: Robin Horan
//Course: CMPS 301
//Due Date: October 7, 2015
//Professor: Ray Ahmadnia
//Purpose: shows a triangle, asks for input, then displays area and perimeter
//-------------------------------------------------------------------------------
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;
int main()
{

	//declaring variables
	float side_a, side_b, side_c, perimeter, area, stor;
	//showing output
	cout << "      /\\ " << endl;
	cout << "     /  \\" << endl;
	cout << " a  /    \\  b" << endl;
	cout << "   /      \\" << endl;
	cout << "   --------" << endl;
	cout << "      c      " << endl;

	//asking for input
	cout << "Enter the value of sides a, b, and c: "; cin >> side_a >> side_b >> side_c;

	//calculating perimeter
	perimeter = side_a + side_b + side_c;

	//calculating area
	stor = (side_a + side_b + side_c) / 2;
	area = sqrt((stor * (stor - side_a) *(stor - side_b) * (stor - side_c)));

	//displaying output 
	cout << fixed << showpoint << setprecision(2);
	cout << "\tPerimter: " << perimeter << endl;
	cout << "\tArea: " << area << endl;

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//       /\
//      /  \
//  a  /    \  b
//    /      \
//    --------
//       c
//Enter the value of sides a, b, and c: 12.6 8.92 14.2
//	Perimter : 35.72
//	Area : 55.44
//Press any key to continue . . .
//-------------------------------------------------------------------------------