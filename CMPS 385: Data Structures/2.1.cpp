//Name: Robin Horan
//Homework #: 2.1
//Course: CMPS 385
//Due Date: February 15, 2017
//Professor: Ray Ahmadnia
//Purpose: Practice with <string> and <cstring>
//--------------------------------------------------------------------------
#include <iostream>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string day[5] = { "monday", "Tue", "Wednesday", "Thursday", "Friday" };
	char days[5][10] = { "Monday", "Tuesday", "wednesday", "Thu", "Friday" };

	cout << "This is array day: \n\t";
	for(int i = 0; i < 5; i++)
	{
		cout << day[i] << " ";
	}
	cout << endl;

	cout << "This is array days: \n\t";
	for (int i = 0; i < 5; i++)
	{
			cout << days[i] << " ";
	}
	cout << endl;

	day[0][0] = toupper(day[0][0]);
	cout << "From array day: " << day[0] << endl;

	days[3][0] = toupper(days[3][0]);
	cout << "From array days: " << days[3] << endl;

	cout << "Length of " << day[1] << " is " << day[1].length() << " and length of " << days[1] << " is " << strlen(days[1]) << endl;

	cout << "\nNew array day: ";
	for (int i = 0; i < 5; i++)
	{
		cout << day[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << days[i] << " ";
	}
	cout << endl;



	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//This is array day:
//		monday Tue Wednesday Thursday Friday
//This is array days :
//		Monday Tuesday wednesday Thu Friday
//From array day : Monday
//From array days : Thu
//Length of Tue is 3 and length of Tuesday is 7
//
//New array day : Monday Tue Wednesday Thursday Friday
//Monday Tuesday wednesday Thu Friday
//Press any key to continue . . .
//--------------------------------------------------------------------------