//Name: Robin Horan
//Homework 6.1
//Course: CMPS 371
//Due Date: Januaty 19, 2018
//Professor: Ray Ahmadnia
//--------------------------------------------------------------------------
#include <iostream>
using namespace std;

char input;

void askInput()
{
	cout << "Enter a sentence: ";
}
void getInput()
{
	cin.get(input);
}
void toLower()
{
	input = tolower(input);
	cout << input;
}
void toUpper()
{
	input = toupper(input);
	cout << input;
}
void makeSpace()
{
	cout << " ";
}
int main()
{
		_asm
		{
			call askInput;
		TheLoop:
			call getInput;
			cmp input, '\n';
			Je Done;
			cmp input, 'Z';
			Jle Tolower;
			cmp input, 'a'
			Jge Toupper;
			cmp input, ' ';
			Je Space;
		Space:
			call makeSpace;
			Jmp TheLoop;
		Tolower:
			call toLower;
			Jmp TheLoop;
		Toupper:
			call toUpper;
			Jmp TheLoop;
		Done:
		}

		cout << endl;
	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter a sentence: Today is Tue
//tODAY IS tUE
//Press any key to continue . . .
//--------------------------------------------------------------------------