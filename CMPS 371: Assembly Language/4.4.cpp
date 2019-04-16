//Name: Robin Horan
//Homework 4.4
//Course: CMPS 371
//Due Date: Januaty 12, 2018
//Professor: Ray Ahmadnia
//--------------------------------------------------------------------------
#include <iostream>
using namespace std;

int score, amount, max, min, ave, counter, divide;

void getScore()
{
	cin >> score;
	counter--;
}

int main()
{
	cout << "Please enter the number of students: "; cin >> amount;
	cout << "Enter " << amount << " scores: ";
	counter = amount;
	divide = amount - 1;
	int total = 0;
	_asm
	{
		call getScore;
		mov eax, score;//total
		mov total, eax;
		mov ebx, score;//max
		mov max, ebx;
		mov ecx, score;//min
		mov min, ecx;
		mov edx, amount;//counter
	TheLoop:
		dec edx;
		call getScore;
		mov eax, score;
		add total, eax;
		mov ebx, max;
		cmp score, ebx;
		Jg NewMax;
		mov ecx, min;
		cmp score, ecx;
		Jl NewMin;
		Jmp Done;
	NewMax:
		mov ebx, score;
		mov max, ebx;
		Jmp Done;
	NewMin:
		mov ecx, score;
		mov min, ecx;
		Jmp Done;
	Done:
		mov edx, counter;
		cmp edx, 1;
		Jg TheLoop;
		mov eax, total;
		cdq;
		idiv divide;
		mov ave, eax;
	}


	cout << "Class Average: " << ave << endl;
	cout << "Maximum Score: " << max << endl;
	cout << "Minimum Score: " << min << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Please enter the number of students : 5
//Enter 5 scores : 85 75 55 95 88
//Class Average : 77
//Maximum Score : 95
//Minimum Score : 55
//Press any key to continue . . .
//--------------------------------------------------------------------------