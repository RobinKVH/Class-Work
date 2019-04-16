//Name: Robin Horan
//Course: CMPS 301
//Due Date: October 7, 2015
//Professor: Ray Ahmadnia
//Purpose: a menu with constants and displaying using iomanip
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const float cost_drinks = 2.9;
const float cost_sandwiches = 7.1;
const float cost_chips = 0.9;
int main()
{
	//declaring variables
	float bill, no_sandwiches, no_drinks, no_chips;

	//showing menu
	cout << "----------Menu----------" << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << setfill('.');
	cout << left << setw(12) << "Drinks" << right << setw(12) << cost_drinks << endl;
	cout << left << setw(12) << "Sandwiches" << right << setw(12) << cost_sandwiches << endl;
	cout << left << setw(12) << "Chips" << right << setw(12) << cost_chips << endl;

	//askin order
	cout << "\tHow many drinks? "; cin >> no_drinks;
	cout << "\tHow many sandwiches? "; cin >> no_sandwiches;
	cout << "\tHow many chips? "; cin >> no_chips;

	//calculating bill
	bill = (no_drinks * cost_drinks) + (no_sandwiches * cost_sandwiches) * (no_chips * cost_chips);

	//output
	cout << "\t\tTotal bill = " << bill << endl;

	system("pause");
	return 0;

}
//------------------------------------OUTPUT-------------------------------------
//----------Menu----------
//Drinks..............2.90
//Sandwiches..........7.10
//Chips...............0.90
//			How many drinks ? 3
//			How many sandwiches ? 3
//			How many chips ? 2
//				Total bill = 47.04
//Press any key to continue . . .
//-------------------------------------------------------------------------------