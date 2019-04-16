//Name: Robin Horan
//Course: CMPS 301
//Due Date: September 15, 2015
//Professor: Ray Ahmadnia
//Purpose: Homework that displays a letter with variables
//------------------------------------------------------------------------------------------------------
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	string Friend_Name, Friend_Address, Friend_PhoneNumber;

	Friend_Name = "Mary Jones";
	Friend_Address = "234 E.Main Street";
	Friend_PhoneNumber = "714 - 123 - 4567";

	cout << "Hello "; cout << Friend_Name; cout << endl;
	cout << "I just found out that you live in "; cout << Friend_Address; cout << " and"; cout << endl;
	cout << "your phone number is "; cout << Friend_PhoneNumber; cout << endl;
	cout << "Good to know you!"; cout << endl;
	system("pause");
	return 0;
}
//-----------------------------------------OUPUT--------------------------------------------------------
//Hello Mary Jones
//I just found out that you live in 234 E.Main Street and
//your phone number is 714 - 123 - 4567
//Good to know you!
//Press any key to continue . . .
//------------------------------------------------------------------------------------------------------