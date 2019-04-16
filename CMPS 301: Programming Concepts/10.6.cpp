//Name: Robin Horan
//Course: CMPS 301
//Due Date: November 18, 2015
//Professor: Ray Ahmadnia
//Purpose: Using switch to output date in full from number form
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	//declaring variables
	int day, month, year;

	//asking input 
	cout << "Enter today's date: "; 
	cin >> month; 
	cin.ignore(); 
	cin >> day; 
	cin.ignore(); 
	cin >> year;
	
	//testing and outputting month
	switch (month)
	{
	case 1: cout << "Oh!! January "; break;
	case 2: cout << "Oh!! February "; break;
	case 3: cout << "Oh!! March "; break;
	case 4: cout << "Oh!! April "; break;
	case 5: cout << "Oh!! May "; break;
	case 6: cout << "Oh!! June "; break;
	case 7: cout << "Oh!! July "; break;
	case 8: cout << "Oh!! August "; break;
	case 9: cout << "Oh!! September "; break;
	case 10: cout << "Oh!! October  "; break;
	case 11: cout << "Oh!! November "; break;
	case 12: cout << "Oh!! December "; break;
	}

	//testing and outputting day
	switch (day)
	{
	case 1: case 21: case 31: cout << day << "st, "; break;
	case 2: case 22: cout << day << "nd, "; break;
	case 3: case 23: cout << day << "rd, "; break;
	default: cout << day << "th, "; break;
	}

	cout << year << endl; 

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//Enter today's date: 11/16/2015
//Oh!! November 16th, 2015
//Press any key to continue . . .
//-------------------------------------------------------------------------------