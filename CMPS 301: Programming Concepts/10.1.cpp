//Name: Robin Horan
//Course: CMPS 301
//Due Date: November 18, 2015
//Professor: Ray Ahmadnia
//Purpose: Using do - while loop to check if want to continue math practice
//-------------------------------------------------------------------------------
#include <iomanip>
#include <iostream>

using namespace std;
int main()
{
	//delcaring variables
	char choice, repeat;
	int x, y, key, answer, correct = 0, wrong = 0;

	//displaying menu
	cout << "------Subjects Menu------" << endl;
	cout << "\t1. Addition" << endl;
	cout << "\t2. Subtraction\n" << endl;
	cout << "\tEnter your choice: "; cin >> choice;
	srand(time(0));
	if (choice == '1')
	{
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
	}
	else
	{
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
	}


	cout << "\tNo. of CORRECT answers = " << correct << endl;
	cout << "\tNo. of WRONG answers = " << wrong << endl;



	system("pause");
	return 0;
}

//------------------------------------OUTPUT-------------------------------------
//------Subjects Menu------
//1. Addition
//2. Subtraction
//
//Enter your choice : 1
//7 + 15 = ? 22
//Correct
//CONTINUE(y / n) ? y
//1 + 15 = ? 15
//Wrong
//CONTINUE(y / n) ? n
//No.of CORRECT answers = 1
//No.of WRONG answers = 1
//Press any key to continue . . .
//-------------------------------------------------------------------------------