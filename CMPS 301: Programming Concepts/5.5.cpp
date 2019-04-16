//Name: Robin Horan
//Course: CMPS 301
//Due Date: October 7, 2015
//Professor: Ray Ahmadnia
//Purpose: asks for dimensions of a shape and then shows the area
//-------------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	//declaring variables
	float side_a, side_b, height, area;

	//showing shape
	cout << "          a" << endl;
	cout << "    ------------" << endl;
	cout << "   /         |  \\ "<< endl;
	cout << "  /          |h  \\ " << endl;
	cout << " /           |    \\ " << endl;
	cout << " ------------------" << endl;
	cout << "           b" << endl;

	//asking input
	cout << "Enter the values of a, b, and h: "; cin >> side_a >> side_b >> height;

	//calculating area
	area = (side_a + side_b) * height / 2;

	//output
	cout << fixed << showpoint << setprecision(2);
	cout << "\tArea = (a+b)h/2 = " << area << endl;

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//          a
//     ------------
//    /        |   \
//   /         | h  \
//  /          |     \
//  ------------------
//          b
//Enter the values of a, b, and h: 8.78 4.23 3.57
//	Area = (a+b)h/2 = 23.22
//Press any key to continue . . .
//-------------------------------------------------------------------------------