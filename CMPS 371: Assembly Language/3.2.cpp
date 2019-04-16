//Name: Robin Horan
//Homework 3.2
//Course: CMPS 371
//Due Date: Januaty 12, 2018
//Professor: Ray Ahmadnia
//--------------------------------------------------------------------------
#include <iostream>
using namespace std;

char drink;
int drinkamount, sandwichamount, total = 0, sandwich;

void askDrink()
{
	cout << "What kind of drink(S=Soda, W=Water, B=Beer)? "; cin >> drink;
}
void askDrinkAmount()
{
	cout << "How many drinks? "; cin >> drinkamount;
}
void askSandwich()
{
	cout << "What size of sandwich(10/12)? "; cin >> sandwich;
}
void askSandwichAmount()
{
	cout << "How many sandwiches? "; cin >> sandwichamount;
}

int main()
{
	cout << "------------------7-11 Convenient Store------------------" << endl;
	cout << "Drinks" << endl;
	cout << "  Soda(S)..............................................$2" << endl;
	cout << "  Water(W).............................................$1" << endl;
	cout << "  Beer(B)..............................................$3" << endl;
	cout << "Sandwiches" << endl;
	cout << "  10 inches............................................$3" << endl;
	cout << "  12 inches............................................$5\n" << endl;

	int one = 1, two = 2, three = 3, five = 5;
	_asm
	{
		call askDrinkAmount;
		call askDrink;
		cmp drink, 'S';
		Je Soda;
		cmp drink, 'W';
		Je Water;
	Beer:
		mov eax, drinkamount;
		imul three;
		Jmp Done1;
	Soda:
		mov eax, drinkamount;
		imul two;
		Jmp Done1;
	Water:
		mov eax, drinkamount;
		imul one;
		Jmp Done1;
	Done1:
		mov total, eax;
		call askSandwichAmount;
		call askSandwich;
		cmp sandwich, 10;
		Je Ten;
	Twelve:
		mov eax, sandwichamount;
		imul five;
		Jmp Done2;
	Ten:
		mov eax, sandwichamount;
		imul three;
	Done2:
		add total, eax;
	}
	cout << "Your total  bill = " << total << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//------------------7-11 Convenient Store------------------
//Drinks
//  Soda(S)..............................................$2
//  Water(W).............................................$1
//  Beer(B)..............................................$3
//Sandwiches
//  10 inches............................................$3
//  12 inches............................................$5
//
//How many drinks ? 1
//  What kind of drink(S = Soda, W = Water, B = Beer) ? W
//How many sandwiches ? 2
//  What size of sandwich(10 / 12) ? 12
//Your total  bill = 11
//  Press any key to continue . . .
//--------------------------------------------------------------------------
//How many drinks ? 2
//  What kind of drink(S = Soda, W = Water, B = Beer) ? S
//How many sandwiches ? 2
//  What size of sandwich(10 / 12) ? 12
//Your total  bill = 14
//  Press any key to continue . . .
//--------------------------------------------------------------------------
//How many drinks ? 3
//  What kind of drink(S = Soda, W = Water, B = Beer) ? B
//How many sandwiches ? 1
//  What size of sandwich(10 / 12) ? 10
//Your total  bill = 12
//  Press any key to continue . . .
//--------------------------------------------------------------------------