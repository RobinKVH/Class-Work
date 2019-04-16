//Name: Robin Horan
//Course: CMPS 301
//Due Date: September 30, 2015
//Professor: Ray Ahmadnia
//Purpose: Asking for info and using <iomanip> for output
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
	//initializing variables
	string name, major;
	int age;

	//asking input
	cout << "What is your name: "; cin >> name;
	cout << name << ", how old are you? "; cin >> age;
	cout << name << ", what is your major? "; cin >> major;

	//output 
	cout << "This is your report card" << endl;
	cout << setfill('.');
	cout << left << setw(10) << "\tName" << right << setw(10) << name << endl;
	cout << left << setw(10) << "\tAge" << right << setw(10) << age << endl;
	cout << left << setw(10) << "\tMajor" << right << setw(10) << major << endl;

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//What is your name : John
//John, how old are you ? 25
//John, what is your major ? CMPS
//This is your report card
//		Name...........John
//		Age..............25
//		Major..........CMPS
//Press any key to continue . . .
//-------------------------------------------------------------------------------