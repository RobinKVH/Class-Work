//Name: Robin Horan
//Homework 7.3
//Course: CMPS 371
//Due Date: Januaty 19, 2018
//Professor: Ray Ahmadnia
//--------------------------------------------------------------------------
#include <iostream>
using namespace std;

int total = 0, medium = 0, shortsleeve = 0, blue = 0;

int main()
{
	int a[3][3][2] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
	int i;
	_asm
	{
		mov ebx, 0;//arraycounter
		mov i, 0;
	TheLoop1:
		cmp i, 18;
		Je Done1;
		mov eax, [a + ebx];
		add total, eax;
		inc i;
		add ebx, 4;
		Jmp TheLoop1;
	Done1:
		mov ebx, 8;
		mov i, 0;
	TheLoop2:
		cmp i, 3;
		Je Done2;
		mov eax, [a + ebx];
		add medium, eax;
		add ebx, 4;
		mov eax, [a + ebx];
		add medium, eax;
		inc i;
		add ebx, 20;
		Jmp TheLoop2;
	Done2:
		mov ebx, 0;
		mov i, 0;
	TheLoop3:
		cmp i, 9;
		Je Done3;
		mov eax, [a+ebx];
		add shortsleeve, eax;
		inc i;
		add ebx, 8;
		Jmp TheLoop3;
	Done3:
		mov ebx, 24;
		mov i, 0;
	TheLoop4:
		cmp i, 6;
		Je Done4;
		mov eax, [a + ebx];
		add blue, eax;
		add ebx, 4;
		inc i;
		Jmp TheLoop4;
	Done4:

	}
	cout << "Total Number of Shirts: " << total << endl;
	cout << "Total Number of Medium Shirts: " << medium << endl;
	cout << "Total Number of Short Sleeved Shirts: " << shortsleeve << endl;
	cout << "Total Number of Blue Shirts: " << blue << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Total Number of Shirts: 171
//Total Number of Medium Shirts: 57
//Total Number of Short Sleeved Shirts: 81
//Total Number of Blue Shirts: 57
//Press any key to continue . . .
//--------------------------------------------------------------------------