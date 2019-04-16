//Name: Robin Horan
//Course: CMPS 301
//Due Date: October 28, 2015
//Professor: Ray Ahmadnia
//Purpose: inputing order and displaying price
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	//declaring variables
	float total_bill, drinks_bill, food_bill;
	int no_food, no_drinks, no_soda, no_beer, no_wine, no_pizza, no_sandwich, no_tacos;

	//displaying menu
	cout << "----------K-Store----------" << endl;
	cout << "Drinks" << endl;
	cout << "\tSoda(S)..............1.30" << endl;
	cout << "\tBeer(B)..............2.75" << endl;
	cout << "\tWine(W).............10.15" << endl;
	cout << "Food" << endl;
	cout << "\tPizza(P).............7.20" << endl;
	cout << "\tSandwich(S)..........2.25" << endl;
	cout << "\tTaco(T)..............1.20" << endl;

	//asking orders
	cout << "\nHow many drinks? "; cin >> no_drinks;
	cout << "How many of each kind(Soda, Beer, or Wine)? "; cin >> no_soda >> no_beer >> no_wine;

	cout << "\nHow many food would you like to order? "; cin >> no_food;
	cout << "What kind (Pizza, Sandwich, Tacos)? "; cin >> no_pizza >> no_sandwich >> no_tacos;

	//calculating drink bill
	drinks_bill = (no_soda * 1.3) + (no_beer * 2.75) + (no_wine * 10.15);

	//calculating food bill
	food_bill = (no_pizza * 7.2) + (no_sandwich * 2.25) + (no_tacos * 1.2);

	//calculating total bill
	total_bill = drinks_bill + food_bill;

	//displaying total bill
	cout << fixed << setprecision(2) << showpoint;
	cout << "\nYour total bill = " << total_bill << endl;

	system("pause");
	return 0;

}
//------------------------------------OUTPUT-------------------------------------
//----------K-Store----------
//Drinks
//  Soda(S)..............1.30
//  Beer(B)..............2.75
//  Wine(W).............10.15
//Food
//  Pizza(P).............7.20
//  Sandwich(S)..........2.25
//  Taco(T)..............1.20
//
//How many drinks ? 5
//How many of each kind(Soda, Beer, or Wine) ? 2 2 1
//
//How many food would you like to order ? 5
//What kind(Pizza, Sandwich, Tacos) ? 1 0 4
//
//		Your total bill = 30.25
//Press any key to continue . . .
//-------------------------------------------------------------------------------