//Name: Robin Horan
//Course: CMPS 301
//Due Date: September 15, 2015
//Professor: Ray Ahmadnia
//Purpose: Homework that displays menu with variables
//------------------------------------------------------------------------
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	float Drink_Price, Chips_Price, Beer_Price;

	Drink_Price = 2.25;
	Chips_Price = 1.75;
	Beer_Price = 2.15;

	cout << "    --------Menu--------"; cout << endl;
	cout << "    Drinks           "; cout << Drink_Price; cout << endl;
	cout << "    Chips            "; cout << Chips_Price; cout << endl;
	cout << "    Beers            "; cout << Beer_Price; cout << endl;
	cout << "                     "; cout << endl;
	cout << "Please select your order from the menu"; cout << endl;

	system("pause");
	return 0;
}
//---------------------------------OUTPUT---------------------------------
//--------Menu--------
//Drinks           2.25
//Chips            1.75
//Beers            2.15
//Please select your order from the menu
//
//Press any key to continue . . .
//------------------------------------------------------------------------