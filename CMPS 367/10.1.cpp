//Name: Robin Horan
//Homework #: 10.1
//Course: CMPS 367
//Due Date: May 2, 2016
//Professor: Ray Ahmadnia
//Purpose: Practice with user defined libraries
//--------------------------------------------------------------------------
#include "P10.h"

int main()
{
	ONE<string, 5> P;
	ONE<float, 7> Q;

	cout << "Enter 5 names: "; P.Read();
	cout << "Enter 7 incomes: "; Q.Read();

	P.SortArray();
	Q.SortArray();

	cout << "This is array x of object P in sorted form: "; P.Display();
	cout << "This is array x of object Q in sorted form: "; Q.Display();

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter 5 names: Robin John Nat Cameron Simi
//Enter 7 incomes: 5000 10000 850 1500 1501 45000 98000
//This is array x of object P in sorted form: Cameron John Nat Robin Simi
//This is array x of object Q in sorted form: 850 1500 1501 5000 10000 45000 98000
//Press any key to continue . . .
//--------------------------------------------------------------------------