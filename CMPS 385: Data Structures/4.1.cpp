//Name: Robin Horan
//Homework #: 4.1
//Course: CMPS 385
//Due Date: March 1, 2017
//Professor: Ray Ahmadnia
//Purpose: User created library
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>
#include "STACKPAC.h"

using namespace std;

int main()
{
	STACK<int, 7> A;
	STACK<char, 5> C;
	STACK<string, 12> MONTHS;
	int count = 0;

	A.ClearStack();
	C.ClearStack();
	MONTHS.ClearStack();

	int a[7] = { 5, 9, 7, 6, 2, 3 };
	char c[5] = { 'e', 'o', 'a', 'i', 'u' };
	string months[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov","Dec" };

	while (!A.FullStack())
	{
		A.PushStack(a[count]);
		count++;
	}
	count = 0;

	while (!C.FullStack())
	{
		C.PushStack(c[count]);
		count++;
	}
	count = 0;

	while (!MONTHS.FullStack())
	{
		MONTHS.PushStack(months[count]);
		count++;
	}
	count = 0;

	cout << "Content of array a in reverse: ";
	while (!A.EmptyStack())
	{
		cout << A.PopStack() << " ";
	}
	cout << endl;

	cout << "Content of array c in reverse: ";
	while (!C.EmptyStack())
	{
		cout << C.PopStack() << " ";
	}
	cout << endl;

	cout << "Content of array months in reverse: ";
	while (!MONTHS.EmptyStack())
	{
		cout << MONTHS.PopStack() << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Content of array a in reverse: 0 3 2 6 7 9 5
//Content of array c in reverse: u i a o e
//Content of array months in reverse: Dec Nov Oct Sep Aug Jul Jun May Apr Mar Feb Jan
//Press any key to continue . . .
//--------------------------------------------------------------------------