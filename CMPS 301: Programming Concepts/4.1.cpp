//Name: Robin Horan
//Course: CMPS 301
//Due Date: September 30, 2015
//Professor: Ray Ahmadnia
//Purpose: Ordering food and using <iomanip>
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//declaring constants
const float sand_price=2.60;
const float drinks_price=1.10;
const float chips_price=0.95;

int main()
{
	//declaring variables
	double bill;
	int no_sand, no_drinks, no_chips;

	//displaying menu
	cout << "----------K Store Menu----------" << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << setfill('.');
	cout << left << setw(22) << "1. Sandwiches" << right << setw(10) << sand_price << endl;
	cout << left << setw(22) << "2. Drinks" << right << setw(10) << drinks_price << endl;
	cout << left << setw(22) << "3. Chips" << right << setw(10) << chips_price << endl;

	//asking for input
	cout << "\tHow many sandwiches? "; cin >> no_sand;
	cout << "\tHow many drinks? "; cin >> no_drinks;
	cout << "\tHow many chips? "; cin >> no_chips;

	//calculating bill
	bill = (no_sand * sand_price) + (no_drinks * drinks_price) + (no_chips * chips_price);

	//output
	cout << "\t\tYour total bill is " << bill << endl;

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//----------K Store Menu----------
//1. Sandwiches...............2.60
//2. Drinks...................1.10
//3. Chips....................0.95
//		How many sandwiches ? 3
//		How many drinks ? 2
//		How many chips ? 4
//			Your total bill is 13.80
//Press any key to continue . . .
//-------------------------------------------------------------------------------