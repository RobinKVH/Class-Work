//Name: Robin Horan
//Homework 7.1
//Course: CMPS 371
//Due Date: Januaty 19, 2018
//Professor: Ray Ahmadnia
//--------------------------------------------------------------------------
#include <iostream>
using namespace std;

int total = 0, max, min;

int main()
{
	int a[7] = { 33, 66, 11, 17, 20, 25, 10 };
	int i;
	_asm
	{
		mov ebx, 0;//array counter
		mov ecx, [a + 0];//max
		mov max,ecx;
		mov edx, [a + 0];//min
		mov min, edx;
		mov eax, [a + 0];//total
		add total, eax;
		mov i, 1;
	TheLoop:
		cmp i, 7;
		Je Done;
		add ebx, 4;
		mov ecx, max;
		cmp ecx, [a + ebx];
		Jl NewMax;
		mov edx, min;
		cmp edx, [a + ebx];
		Jg NewMin;
		Jmp Cont;
	NewMax:
		mov ecx, [a + ebx];
		mov max, ecx;
		Jmp Cont;
	NewMin: 
		mov edx, [a + ebx];
		mov min, edx;
	Cont:
		mov eax, [a + ebx];
		add total, eax;
		inc i;
		Jmp TheLoop;
	Done:
		mov max, ecx;
		mov min, edx;
	}
	cout << "Total: " << total << endl;
	cout << "Maximum: " << max << endl;
	cout << "Minimum: " << min << endl;



	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Total: 182
//Maximum: 66
//Minimum: 10
//Press any key to continue . . .
//--------------------------------------------------------------------------