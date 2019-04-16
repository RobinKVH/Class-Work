//Name: Robin Horan
//Homework 4.2
//Course: CMPS 371
//Due Date: Januaty 12, 2018
//Professor: Ray Ahmadnia
//--------------------------------------------------------------------------
#include <iostream>
using namespace std;

char letter;
int a = 0, b = 0, c = 0, d = 0;

void askInput()
{
	cout << "Enter 10 scores: ";
}
void getInput()
{
	cin.get(letter);
}
int main()
{
	int count = 1;
	_asm
	{
		call askInput;
		call getInput;
	TheLoop:
		cmp letter, 'A';
		Je A;
		cmp letter, 'a';
		Je A;
		cmp letter, 'B';
		Je B;
		cmp letter, 'b';
		Je B;
		cmp letter, 'C';
		Je C;
		cmp letter, 'c';
		Je C;
	D:
		inc d;
		Jmp Done;
	A:
		inc a;
		Jmp Done;
	B:
		inc b;
		Jmp Done;
	C:
		inc c;
		Jmp Done;
	Done:
		call getInput;
		inc count;
		cmp count, 10;
		Jle TheLoop;
	}
	cout << "No. of \"A\" scores = " << a << endl;
	cout << "No. of \"B\" scores = " << b << endl;
	cout << "No. of \"C\" scores = " << c << endl;
	cout << "No. of \"D\" scores = " << d << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter 10 scores: AbbBcCaAdD
//No.of "A" scores = 3
//No.of "B" scores = 3
//No.of "C" scores = 2
//No.of "D" scores = 2
//Press any key to continue . . .
//--------------------------------------------------------------------------