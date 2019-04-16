//Name: Robin Horan
//Course: CMPS 301
//Due Date: October 21, 2015
//Professor: Ray Ahmadnia
//Purpose: Program asking info and giving appropriate price
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
	//declaring variables
	string name; 
	char gender;
	int age;

	//displaying menu
	cout << "----------Health Club----------" << endl;
	cout << "Men" << endl;
	cout << "   Teenagers.............100.00" << endl;
	cout << "   Adults................120.00" << endl; 
	cout << "Women" << endl;
	cout << "   Teenagers.............110.00" << endl;
	cout << "   Adults.................90.00" << endl;

	//starting loop
	for (int i = 0; i < 2; i++)
	{
		//asking input
		cout << "What is your name? "; cin >> name;
		cout << " " << name << ", what is your gender(M/F)? "; cin >> gender;
		cout << " How old are you? "; cin >> age;

		//displaying price
		if (gender == 'm' || gender == 'M')
		{
			if (age <= 19)
			{
				cout << " Mr. " << name << ", your monthly payment is 100.00" << endl;
				cout << "" << endl;
			}
			else
			{
				cout << " Mr. " << name << ", your monthly payment is 120.00" << endl;
				cout << "" << endl;
			}
		}
		else
		{
			if (age <= 19)
			{
				cout << " Ms. " << name << ", your monthly payment is 110.00" << endl;
				cout << "" << endl;
			}
			else
			{
				cout << " Ms. " << name << ", your monthly payment is 90.00" << endl;
				cout << "" << endl;
			}
		}
	}

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//----------Health Club----------
//Men
//   Teenagers.............100.00
//   Adults................120.00
//Women
//   Teenagers.............110.00
//   Adults.................90.00
//What is your name ? John
// John, what is your gender(M / F) ? M
// How old are you ? 17
// Mr.John, your monthly payment is 100.00
//
//What is your name ? Kristy
// Kristy, what is your gender(M / F) ? f
// How old are you ? 27
// Ms.Kristy, your monthly payment is 90.00
//
//Press any key to continue . . .
//-------------------------------------------------------------------------------