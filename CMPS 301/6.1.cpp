//Name: Robin Horan
//Course: CMPS 301
//Due Date: October 21, 2015
//Professor: Ray Ahmadnia
//Purpose: Using if statements to check the grade of a given score
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	//declaring variables
	int score;

	//starting loop
	for (int i = 0; i < 5; i++)
	{
		//asking iput
		cout << "Enter your score: "; cin >> score;

		//testing scores and output
		if (score < 60)
		{
			cout << "\tYour grade is \"F\"" << endl;
		}

		else if (score < 70)
		{
			cout << "\tYour grade is \"D\"" << endl;
		}
		else if (score < 80)
		{
			cout << "\tYour grade is \"C\"" << endl;
		}
		else if (score < 90)
		{
			cout << "\tYour grade is \"B\"" << endl;
		}
		else if (score < 100)
		{
			cout << "\tYour grade is \"A\"" << endl;
		}
		else
		{
		}
	}

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//Enter your score: 95
//	Your grade is "A"
//Enter your score: 85
//	Your grade is "B"
//Enter your score: 75
//	Your grade is "C"
//Enter your score: 65
//	Your grade is "D"
//Enter your score: 55
//	Your grade is "F"
//Press any key to continue . . .
//-------------------------------------------------------------------------------