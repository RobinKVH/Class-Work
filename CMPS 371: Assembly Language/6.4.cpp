//Name: Robin Horan
//Homework 6.4
//Course: CMPS 371
//Due Date: Januaty 19, 2018
//Professor: Ray Ahmadnia
//--------------------------------------------------------------------------
#include <iostream>
#include <ctime>
using namespace std;

short content = 0, y, shift;
int value;
int counter = 0;
void newNumber()
{
	value = rand() % 14 + 2;
	cout << value << "  ";
}
int main()
{
	short a[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	srand(time(NULL));
	int i;

	_asm
	{
		mov i, 0;
	TheLoop1:
		cmp i, 10;
		Je Done1;
		call newNumber;
		mov ebx, value;
		mov eax, 2;
		mul 5;
		mov[a + eax], 1;
		inc i;
		Jmp TheLoop1;
	Done1:
	}
	for (int j = 0; j < 15; j++)
	{
		cout << a[j];
	}
	cout << endl;
	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//--------------------------------------------------------------------------