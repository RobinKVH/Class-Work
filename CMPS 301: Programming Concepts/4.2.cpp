//Name: Robin Horan
//Course: CMPS 301
//Due Date: September 30, 2015
//Professor: Ray Ahmadnia
//Purpose: Displaying a triangle
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	//declaring variables
	float aside, bside, cside, perimeter;

	//initial message
	cout << "We want to compute the perimeter of this triangle" << endl;
	cout << "             /\\ " << endl;
	cout << "     side_a /  \\ side_b" << endl;
	cout << "	   /    \\ " << endl;
	cout << "           ------ " << endl;
	cout << "           side_c" << endl;

	//asking input
	cout << "          Enter the measure of all three side: "; cin >> aside >> bside >> cside;

	//calculation
	perimeter = aside + bside + cside;

	//output
	cout << "                 Perimeter = " << setprecision(2) << fixed << perimeter << endl;

	system("pause");
	return 0;

}
//------------------------------------OUTPUT-------------------------------------
//We want to compute the perimeter of this triangle
//         /\
// side_a /  \ side_b
//       /    \
//       ------
//       side_c
//		Enter the measure of all three side : 10.5 20.7 15.9
//					Perimeter = 47.10
//Press any key to continue . . .
//-------------------------------------------------------------------------------
