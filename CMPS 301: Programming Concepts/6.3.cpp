//Name: Robin Horan
//Course: CMPS 301
//Due Date: October 21, 2015
//Professor: Ray Ahmadnia
//Purpose: Program asking for order and using if statements
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>

const float soda = 1.30;
const float beer = 2.75;
const float wine = 10.15;
const float pizza = 7.20;
const float sandwich = 2.25;
using namespace std;
int main()
{
	//declaring variables
	float total_bill, food_bill, drink_bill;
	char type_food, type_drinks;
	int no_drinks, no_food;

	//displaying menu
	cout << "-----------K-Store-----------" << endl; //29
	cout << setfill('.');
	cout << fixed << setprecision(2) << showpoint;
	cout << "Drinks" << endl;
	cout << left << setw(15) << "   Soda(S)" << right << setw(14) << soda << endl;
	cout << left << setw(15) << "   Beer(B)" << right << setw(14) << beer << endl;
	cout << left << setw(15) << "   Wine(W)" << right << setw(14) << wine << endl;
	cout << "Food" << endl;
	cout << left << setw(15) << "   Pizza(P)" << right << setw(14) << pizza << endl;
	cout << left << setw(15) << "   Sandwich(S)" << right << setw(14) << sandwich << endl;

	//asking order
	cout << "How many drinks? "; cin >> no_drinks;
	cout << "What would you like to drink, Soda, Beer, or Wine? "; cin >> type_drinks;
	cout << "\nHow many foods? "; cin >> no_food;
	cout << "What would you like to eat, pizza or sandwich? "; cin >> type_food;

	//calculating drink bill
	if (type_drinks == 's' || type_drinks == 'S')
	{
		drink_bill = no_drinks * soda;
	}
	else if (type_drinks == 'b' || type_drinks == 'B')
	{
		drink_bill = no_drinks * beer;
	}
	else if (type_drinks == 'w' || type_drinks == 'W')
	{
		drink_bill = no_drinks * wine;
	}
	else
	{
		drink_bill = 0;
		cout << "That is not an available drink." << endl;
	}

	//calculating food bill
	if (type_food == 'p' || type_food == 'P')
	{
		food_bill = no_food * pizza;
	}
	else if (type_food == 's' || type_food == 'S')
	{
		food_bill = no_food * sandwich;
	}
	else
	{
		food_bill = 0;
		cout << "That is not an available meal." << endl;
	}

	//calculating total bill
	total_bill = food_bill + drink_bill;

	//displaying total bill
	cout << "\n\tYour total bill = " << total_bill << endl;

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//-----------K-Store-----------
//Drinks
//   Soda(S)...............1.30
//   Beer(B)...............2.75
//   Wine(W)..............10.15
//Food
//   Pizza(P)..............7.20
//   Sandwich(S)...........2.25
//How many drinks ? 2
//What would you like to drink, Soda, Beer, or Wine ? b
//
//How many foods ? 3
//What would you like to eat, pizza or sandwich ? S
//
//		Your total bill = 12.25
//Press any key to continue . . .
//-------------------------------------------------------------------------------