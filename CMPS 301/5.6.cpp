//Name: Robin Horan
//Course: CMPS 301
//Due Date: October 7, 2015
//Professor: Ray Ahmadnia
//Purpose: asking for input using getline(cout, )
//-------------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	//declaring variables
	string name, address, number;

	//asking for input
	cout << "What is your full name: "; getline(cin,name);
	cout << "What is your address: "; getline(cin,address);
	cout << name << ", what is your phone number: "; cin >> number;

	//displaying output
	cout << "This is your info:" << endl;
	cout << setfill('.');
	cout << left << setw(15) << "\tFull name" << right << setw(15) << name << endl;
	cout << left << setw(15) << "\tAddress" << right << setw(15) << address << endl;
	cout << left << setw(15) << "\tPhone number" << right << setw(15) << number << endl;

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//What is your full name : Bill Clinton
//What is your address : 123 Main Street
//Bill Clinton, what is your phone number : 111 - 222 - 333
//This is your info :
//		Full name........Bill Clinton
//		Address.......123 Main Street
//		Phone number......111 - 222 - 333
//Press any key to continue . . .
//-------------------------------------------------------------------------------