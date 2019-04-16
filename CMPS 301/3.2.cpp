//Name: Robin Horan
//Course: CMPS 301
//Due Date: September 23, 2015
//Professor: Ray Ahmadnia
//Purpose: Homework that ask for integers and does calculations
//----------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main()
{
	//declaring variables 
	int one, two, sum, average;


	//initializing variables
	cout << "Enter two integer numbers: "; cin >> one >> two;

	//calculations
	sum = one + two;
	average = sum / 2;

	//output
	cout << "             " << one << " + " << two << " = " << sum << endl;
	cout << "             the total of " << one << " and " << two << " is " << sum << " and their average is " << average << endl;

	system("pause");
	return 0;
}
//---------------------------------------------------------OUTPUT-------------------------------------------------------------------
//Enter two integer numbers : 12 14
//12 + 14 = 26
//the total of 12 and 14 is 26 and their average is 13
//Press any key to continue . . .
//----------------------------------------------------------------------------------------------------------------------------------