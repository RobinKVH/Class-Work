//Name: Robin Horan
//Course: CMPS 301
//Due Date: November 11, 2015
//Professor: Ray Ahmadnia
//Purpose: Using for loop to give multiple problems
//-------------------------------------------------------------------------------
#include <iostream>
#include <ctime>

using namespace std;
int main()
{
	//declaring variables
	srand(time(0));
	int x, y, ans, amount;
	char sign;

	//displaying menu and asking input
	cout << "-----Subjects Menu-----" << endl;
	cout << "   1. Addition" << endl;
	cout << "   2. Subtraction\n" << endl;
	cout << "\tEnter your choice: "; cin >> sign;
	cout << "\tHow many problems do you want to practice: "; cin >> amount;

	//generating questions and determine correctness
	switch (sign)
	{
	case '1': for (int i = 1; i <= amount; ++i)
	{
		x = rand() % 50 + 1;
		y = rand() % 50 + 1;
		cout << "\t" << x << " + " << y << " =? "; cin >> ans;
		if (x + y == ans)
		{
			cout << "\t\tCORRECT\n";
		}
		else
		{
			cout << "\t\tWRONG\n";
		}
	}break;
	case '2': for (int i = 1; i <= amount; ++i)
	{
		x = rand() % 50 + 1;
		y = rand() % 50 + 1;
		cout << x << " + " << y << " =? "; cin >> ans;
		if (x + y == ans)
		{
			cout << "\tCORRECT\n";
		}
		else
		{
			cout << "\tWRONG\n";
		}
	}break;
	}
	cout << endl;

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//-----Subjects Menu-----
//1. Addition
//2. Subtraction
//
//	Enter your choice : 1
//	How many problems do you want to practice : 2
//		29 + 9 = ? 56
//			WRONG
//		17 + 34 = ? 51
//			CORRECT
//
//Press any key to continue . . .
//-------------------------------------------------------------------------------