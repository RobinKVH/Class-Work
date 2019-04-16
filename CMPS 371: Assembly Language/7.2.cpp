//Name: Robin Horan
//Homework 7.2
//Course: CMPS 371
//Due Date: Januaty 19, 2018
//Professor: Ray Ahmadnia
//--------------------------------------------------------------------------
#include <iostream>
using namespace std;

int total = 0, large = 0, black = 0;

int main()
{
	int a[4][4] = {10, 20, 30, 40,
				   20, 10, 40, 30,
				    5, 15, 20, 25,
				   30, 25, 20, 15};

	int i;
	_asm
	{
		mov ebx, 0;
		mov i, 0;
	Loop1:
		cmp i, 16;
		Je Done1;
		add ecx, [a+ebx];
		inc i;
		add ebx, 4;
		Jmp Loop1;
	Done1:
		mov total, ecx;
		mov ebx, 8;
		mov i, 0;
		mov ecx, 0;
	Loop2:
		cmp i, 4;
		Je Done2;
		add ecx, [a + ebx];
		inc i;
		add ebx, 16;
		Jmp Loop2;
	Done2:
		mov large, ecx;
		mov ebx, 48;
		mov i, 0;
		mov ecx, 0;
	Loop3:
		cmp i, 4;
		Je Done3;
		add ecx, [a + ebx];
		inc i;
		add ebx, 4;
		Jmp Loop3;
	Done3:
		mov black, ecx;
	}
	cout << "Total Number of Shirts: " << total << endl;
	cout << "Large Shirts: " << large << endl;
	cout << "Black Shirts: " << black << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Total Number of Shirts: 355
//Large Shirts: 110
//Black Shirts: 90
//Press any key to continue . . .
//--------------------------------------------------------------------------