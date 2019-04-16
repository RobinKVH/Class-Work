//Name: Robin Horan
//Homework 2.4
//Course: CMPS 371
//Due Date: Januaty 12, 2018
//Professor: Ray Ahmadnia
//--------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	int value;
	cout << "Enter temperature in Fahrenheit: "; cin >> value;

	int c, five = 5, nine = 9;
	_asm
	{
		mov eax, value;
		sub eax, 32;
		imul five;
		idiv nine;
		mov c, eax;
	}
	cout << value << char(248) << "F is " << c << char(248) << "C" << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter temperature in Fahrenheit : 95
//95°F is 35°C
//Press any key to continue . . .
//--------------------------------------------------------------------------