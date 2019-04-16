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
	cout << "Male" << endl;
	cout << "   Teenagers.............100.00" << endl;
	cout << "   Adults.................90.00" << endl;
	cout << "   Children...............50.00" << endl;
	cout << "Female" << endl;
	cout << "   Teenagers.............110.00" << endl;
	cout << "   Adults.................80.00" << endl;
	cout << "   Children...............45.00" << endl;


	//starting loop
	for (int i = 0; i < 2; i++)
	{

		//asking input
		cout << "What is your name? "; cin >> name;
		cout << " " << name << ", what is your gender (m/f)? "; cin >> gender;
		cout << " How old are you? "; cin >> age;

		//determining and displaying price
		switch (gender)
		{
		case 'M': case 'm': if (age >= 13 && age <= 19)
		{
			cout << " " << name << ", your monthly payment is 100.00" << endl;
		}
				  else if (age > 19)
				  {
					  cout << " " << name << ", your monthly payment is 90.00" << endl;
				  }
				  else if (age < 13)
				  {
					  cout << " " << name << ", your monthly payment is 50.00" << endl;
				  }
				  else
				  {
					  cout << " That is not a valid age." << endl;
				  }
				  break;
		case 'F': case 'f':if (age >= 13 && age <= 19)
		{
			cout << " " << name << ", your monthly payment is 110.00" << endl;
		}
				  else if (age > 19)
				  {
					  cout << " " << name << ", your monthly payment is 80.00" << endl;
				  }
				  else if (age < 13 && age > 0)
				  {
					  cout << " " << name << ", your monthly payment is 45.00" << endl;
				  }
				  else
				  {
					  cout << " That is not a valid age." << endl;
				  }
				  break;
		default: cout << " That is not a valid gender."; break;
		}
		cout << "" << endl;
	}

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//----------Health Club----------
//Male
//   Teenagers.............100.00
//   Adults.................90.00
//   Children...............50.00
//Female
//   Teenagers.............110.00
//   Adults.................80.00
//   Children...............45.00
//What is your name ? John
// John, what is your gender(m / f) ? M
// How old are you ? 10
// John, your monthly payment is 50.00
//
//What is your name ? Kristy
// Kristy, what is your gender(m / f) ? f
// How old are you ? 17
// Kristy, your monthly payment is 110.00
//
//Press any key to continue . . .
//-------------------------------------------------------------------------------