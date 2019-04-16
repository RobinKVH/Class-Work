//Name: Robin Horan
//Homework 7.4
//Course: CMPS 371
//Due Date: Januaty 19, 2018
//Professor: Ray Ahmadnia
//--------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib> 
using namespace std;

int s[7];
int value;

void newNumber()
{
	value = rand() % 100;
}
void displayNumber()
{
	cout << value << "  ";
}
void newLine()
{
	cout << endl;
}
void sortArray()
{
	sort(s, s + 7);
}

int main()
{
	srand(time(NULL));
	int i;

	_asm
	{
		mov ebx, 0;//array counter;
		mov i, 0;
	TheLoop1:
		cmp i, 7;
		Je Done1;
		call newNumber;
		mov eax, value;
		mov[s + ebx], eax;
		add ebx, 4;
		inc i;
		Jmp TheLoop1;
	Done1:
		mov ebx, 0;
		mov i, 0;
	TheLoop2:
		cmp i, 7;
		Je Done2;
		mov eax, [s + ebx];
		mov value, eax;
		call displayNumber;
		add ebx, 4;
		inc i;
		Jmp TheLoop2;
	Done2:
		call newLine;
		call sortArray;
		mov ebx, 0;
		mov i, 0;
	TheLoop3:
		cmp i, 7;
		Je Done3;
		mov eax, [s + ebx];
		mov value, eax;
		call displayNumber;
		add ebx, 4;
		inc i;
		Jmp TheLoop3;
	Done3:
		call newLine;
	}

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//38  1  51  67  15  87  57
//1  15  38  51  57  67  87
//Press any key to continue . . .
//--------------------------------------------------------------------------