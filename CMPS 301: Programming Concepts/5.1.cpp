//Name: Robin Horan
//Course: CMPS 301
//Due Date: October 7, 2015
//Professor: Ray Ahmadnia
//Purpose: Asking for name and age and displaying birth year
//-------------------------------------------------------------------------------
#include <iostream>
#include <string>

using namespace std;
int main()
{
	//declaring variables
	string name;
	int age, year;

	//asking input
	cout << "Please enter your name: "; cin >> name;
	cout << name << ", how old are you? "; cin >> age;

	//calculation
	year = 2015 - age;

	//output
	cout << "\tWOW, " << name << "you were born in " << year << endl;

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//Please enter your name: Bill
//Bill, how old are you? 19
//	WOW, Billyou were born in 1996
//Press any key to continue . . .
//-------------------------------------------------------------------------------