//Name: Robin Horan
//Course: CMPS 301
//Due Date: September 23, 2015
//Professor: Ray Ahmadnia
//Purpose: Homework that ask full name and displays birthday message
//----------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main()
{
	//declaring variables 
	string fname, lname;
	char initial;

	//display opening message 
	cout << "Give me your name, I will send you a birthday card  " << endl;

	//initializing variables
	cout << "           What is your first name: "; cin >> fname;
	cout << "           What is your middle initial: "; cin >> initial;
	cout << "           What is your last name: "; cin >> lname;

	//output
	cout << "                       <<<<<<< Happy Birthday " << fname << " " << initial << " " << lname << " >>>>>>>" << endl;

	system("pause");
	return 0;
}
//-------------------------------------------------------OUTPUT---------------------------------------------------------------------
//Give me your name, I will send you a birthday card
//           What is your first name : Barack
//           What is your middle initial : H
//           What is your last name : Obama
//                       <<<<<<< Happy Birthday Barack H Obama >>>>>>>
//Press any key to continue . . .
//----------------------------------------------------------------------------------------------------------------------------------