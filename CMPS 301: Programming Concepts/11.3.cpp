//Name: Robin Horan
//Course: CMPS 301
//Due Date: December 9, 2015
//Professor: Ray Ahmadnia
//Purpose: Practicing arithmatic using user defined functions
//-------------------------------------------------------------------------------
#include <iostream>
#include <ctime>

using namespace std;

void DisplayMenu()
{
	cout << "-----Subjects Menu-----" << endl;
	cout << "   1. Addition" << endl;
	cout << "   2. Subtraction\n" << endl;
}
void PracticeAddition()
{
	int x, y, key, answer, correct = 0, wrong = 0;
	char repeat;
	srand(time(0));

	do
	{
		x = rand() % 20 + 1;
		y = rand() % 20 + 1;
		key = x + y;
		cout << "\t\t" << x << " + " << y << " =? "; cin >> answer;
		if (answer == key)
		{
			cout << "\t\t\tCorrect" << endl;
			correct++;
		}
		else
		{
			cout << "\t\t\tWrong" << endl;
			wrong++;
		}
		cout << "\t\tCONTINUE(y/n)?"; cin >> repeat;
	} while (repeat == 'Y' || repeat == 'y');

	cout << "\tNo. of CORRECT answers = " << correct << endl;
	cout << "\tNo. of WRONG answers = " << wrong << endl;
}
void PracticeSubtraction()
{
	int x, y, key, answer, correct = 0, wrong = 0;
	char repeat;
	srand(time(0));

	do
	{
		x = rand() % 20 + 1;
		y = rand() % 20 + 1;
		key = x - y;
		cout << "\t\t" << x << " - " << y << " =? "; cin >> answer;
		if (answer == key)
		{
			cout << "\t\t\tCorrect" << endl;
			correct++;
		}
		else
		{
			cout << "\t\t\tWrong" << endl;
			wrong++;
		}
		cout << "\t\tCONTINUE(y/n)?"; cin >> repeat;
	} while (repeat == 'Y' || repeat == 'y');

	cout << "\tNo. of CORRECT answers = " << correct << endl;
	cout << "\tNo. of WRONG answers = " << wrong << endl;
}
int main()
{
	int choice;
	
	DisplayMenu();
	cout << "\tEnter your choice: "; cin >> choice;
	
	switch (choice)
	{
	case 1: PracticeAddition(); break;
	case 2: PracticeSubtraction(); break;
	}

	cout << "Have a nice day" << endl;

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//-----Subjects Menu-----
//	1. Addition
//	2. Subtraction
//
//		Enter your choice: 1
//			5 + 7 = ? 12
//				Correct
//			CONTINUE(y/n)? y
//			2 + 17 = ? 20
//				Wrong
//			CONTINUE(y/n)? n
//	No.of CORRECT answers= 1
//	No.of WRONG answers= 1
//Have a nice day
//Press any key to continue. . .
//-------------------------------------------------------------------------------