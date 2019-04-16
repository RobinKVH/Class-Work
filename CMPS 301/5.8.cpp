//Name: Robin Horan
//Course: CMPS 301
//Due Date: October 7, 2015
//Professor: Ray Ahmadnia
//Purpose: calculating the total value of an amount of coins
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const float quarters = 0.25;
const float dimes = 0.10;
const float nickels = 0.05;
const float pennies = 0.01;
int main()
{
	// declaring variables
	int no_quarters, no_dimes, no_nickels, no_pennies;
	float total;
	
	//asking input
	cout << "Let's see how much money you have with you" << endl;
	cout << "\tEnter the number of quarters: "; cin >> no_quarters;
	cout << "\tEnter the number of dimes: "; cin >> no_dimes;
	cout << "\tEnter the number of nickels: "; cin >> no_nickels;
	cout << "\tEnter the number of pennies: "; cin >> no_pennies;

	//calculation
	total = (quarters * no_quarters) + (dimes * no_dimes) + (nickels * no_nickels) + (pennies * no_pennies);

	//displaying output
	cout << "\t\tWOW! You have $" << total << endl;

	system("pause");
	return 0;

}
//------------------------------------OUTPUT-------------------------------------
//Let's see how much money you have with you
//	Enter the number of quarters : 8
//	Enter the number of dimes : 5
//	Enter the number of nickels : 10
//	Enter the number of pennies : 11
//		WOW!You have $3.11
//Press any key to continue . . .
//-------------------------------------------------------------------------------