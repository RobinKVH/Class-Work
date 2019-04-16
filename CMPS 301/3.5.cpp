//Name: Robin Horan
//Course: CMPS 301
//Due Date: September 23, 2015
//Professor: Ray Ahmadnia
//Purpose: Homework that asks order and calculates total bill
//----------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main()
{
	//declaring variables 
	int No_Drinks, No_Chips, No_Nuts;
	float drinks, chips, nuts, Bill;

	//initializing known variables
	drinks = 1.25;
	chips = 1.09;
	nuts = 1.18;

	//display menu
	cout << "------------------Menu------------------" << endl;
	cout << "Coke................................" << drinks << endl;
	cout << "Chips..............................." << chips << endl;
	cout << "Nuts................................" << nuts << endl;
	cout << "                      " << endl;

	//initializing variables
	cout << "     How many drinks? "; cin >> No_Drinks;
	cout << "     How many chips? "; cin >> No_Chips;
	cout << "     How many nuts? "; cin >> No_Nuts;
	cout << "                      " << endl;

	//calculation
	Bill = (drinks * No_Drinks) + (chips * No_Chips) + (nuts * No_Nuts);

	//displaying output
	cout << "       Total Bill: " << Bill << endl;



	system("pause");
	return 0;
}
//-------------------------------------------------------OUTPUT---------------------------------------------------------------------
//------------------Menu------------------
//Coke................................1.25
//Chips...............................1.09
//Nuts................................1.18
//
//     How many drinks ? 2
//	   How many chips ? 1
//	   How many nuts ? 2
//
//            Total Bill : 5.95
//Press any key to continue . . .
//----------------------------------------------------------------------------------------------------------------------------------