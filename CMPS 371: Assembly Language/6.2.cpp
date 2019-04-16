//Name: Robin Horan
//Homework 6.2
//Course: CMPS 371
//Due Date: Januaty 19, 2018
//Professor: Ray Ahmadnia
//--------------------------------------------------------------------------
#include <iostream>
using namespace std;

int amount, number, counter = 0;

void askAmount()
{
	cout << "How many numbers would you like to try: "; cin >> amount;
}
void askInput()
{
	cout << "\tEnter an integer number: "; cin >> number;
}
void displayEven()
{
	cout << "\t\t" << number << " is EVEN" << endl;
}
void displayOdd()
{
	cout << "\t\t" << number << " is ODD" << endl;
}

int main()
{
	_asm
	{
		call askAmount;
	TheLoop:
		call askInput;
		inc counter;
		mov eax, number;
		mov ebx, 00000000000000000000000000000001;
		and eax, ebx;
		cmp eax, 0;
		Je EvenNum;
	OddNum:
		call displayOdd;
		Jmp Done;
	EvenNum:
		call displayEven;
		Jmp Done;
	Done:
		mov ecx, counter;
		cmp ecx, amount;
		Jl TheLoop;
	}

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//How many numbers would you like to try: 4
//	Enter an integer number: 124
//		124 is EVEN
//	Enter an integer number: 37
//		37 is ODD
//	Enter an integer number: 3456
//		3456 is EVEN
//	Enter an integer number: 555
//		555 is ODD
//Press any key to continue . . .
//--------------------------------------------------------------------------