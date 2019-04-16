//Name: Robin Horan
//Homework #: 5.3
//Course: CMPS 367
//Due Date: March 21, 2016
//Professor: Ray Ahmadnia
//Purpose: Using array generate random meessage
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
using namespace std;

int Random();
void Display(string x[], int c);
void AskCont(char& a);

int main()
{
	//declaring variables
	string Future[5] = { "Study", "Go to movie", "Stay home", "Call your friend", "Go to Las Vegas" };
	char cont;
	
	//starting loop
	do
	{
		//generating random number
		int choice = Random();
		Display(Future, choice);
		AskCont(cont);
	} while (cont == 'y');

	system("pause");
	return 0;
}
int Random()
{
	srand(time(0));
	return rand() % 4;
}
void Display(string x[], int c)
{
	cout << x[c] << endl;
}
void AskCont(char& a)
{
	cout << "\tContinue(y/n)?"; cin >> a;
	a = tolower(a);
}
//--------------------------------OUTPUT------------------------------------
//Stay home
//	Continue(y/n)? y
//Go to movie
//	Continue(y/n)? n
//Press any key to continue . . .
//--------------------------------------------------------------------------