//Name: Robin Horan
//Homework 2.3
//Course: CMPS 371
//Due Date: Januaty 12, 2018
//Professor: Ray Ahmadnia
//--------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	int value;
	cout << "Enter a three digit int number: "; cin >> value;

	int sum = 0;
	int hundred = 100, ten = 10, one = 1;
	_asm
	{
		mov eax, value;
		cdq;
		idiv hundred;
		add sum, eax ;
		mov eax, edx;
		cdq;
		idiv ten;
		add sum, eax;
		mov eax, edx;
		cdq;
		idiv one;
		add sum, eax;
	}
	cout << "The sum of digits in " << value << " is " << sum << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter a three digit int number: 362
//The sum of digits in 362 is 11
//Press any key to continue . . .
//--------------------------------------------------------------------------