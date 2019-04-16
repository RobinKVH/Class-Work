//Name: Robin Horan
//Homework 2.2
//Course: CMPS 371
//Due Date: Januaty 12, 2018
//Professor: Ray Ahmadnia
//--------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	int sand, drinks, chips;
	cout << "\t-------- K Store Menu --------" << endl;
	cout << "\tSandwich....................$4" << endl;
	cout << "\tDrink.......................$2" << endl;
	cout << "\tChips.......................$1" << endl;
	cout << "\n\tHow many sandwiches? "; cin >> sand;
	cout << "\tHow many drinks? "; cin >> drinks;
	cout << "\tHow many chips? "; cin >> chips;

	int four = 4, two = 2, one = 1, total;

	_asm
	{
		mov eax, sand;
		imul four;
		mov total, eax;
		mov eax, drinks;
		imul two;
		add total, eax;
		mov eax, chips;
		imul one;
		add total, eax;
	}

	cout << "\t\tYour total is " << total << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
// --------K Store Menu--------
//Sandwich....................$4
//Drink.......................$2
//Chips.......................$1
//
//How many sandwiches? 3
//How many drinks? 2
//How many chips? 4
//		Your total is 20
//Press any key to continue . . .
//--------------------------------------------------------------------------