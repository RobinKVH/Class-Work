//Name: Robin Horan
//Homework 4.3
//Course: CMPS 371
//Due Date: Januaty 12, 2018
//Professor: Ray Ahmadnia
//--------------------------------------------------------------------------
#include <iostream>
using namespace std;

char vote;
int yesvote = 0, novote = 0;

void askInput()
{
	cout << "Enter a group of votes: ";
}
void getInput()
{
	cin.get(vote);
}
void drawStar()
{
	cout << "*";
}
int main()
{
	_asm
	{
		call askInput;
		call getInput
	TheLoop:
		cmp vote, 'y';
		Je YesCounter;
		cmp vote, 'Y';
		Je YesCounter;
	NoCounter:
		inc novote;
		Jmp Done;
	YesCounter:
		inc yesvote;
	Done:
		call getInput;
		cmp vote, '\n';
		Jne TheLoop;
	}

	cout << "YES VOTES = " << yesvote << " = ";

	_asm 
	{
	StarLoop1:
		call drawStar;
		dec yesvote;
		cmp yesvote, 0;
		Jg StarLoop1;
	}

	cout << "\n NO VOTES = " << novote << " = ";

	_asm
	{
	StarLoop2:
		call drawStar;
		dec novote;
		cmp novote, 0;
		Jg StarLoop2;
	}
	cout << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter a group of votes: yNNNYnyynN
//YES VOTES = 4 = ****
//NO VOTES = 6 = ******
//Press any key to continue . . .
//--------------------------------------------------------------------------