//Name: Robin Horan
//Course: CMPS 367
//Due Date: February 22, 2016
//Professor: Ray Ahmadnia
//Purpose: Practicing addition with randomly generated numbers
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
int main()
{
	//declaring variables
	int x, y, result, answer, correct = 0, wrong = 0;
	char cont;

	//displaying opening message
	cout << "Lets practice addition with random integer numbers < 30\n" << endl;
	//starting addition practice
	do
	{
		//generating values
		srand(time(0));
		x = rand() % 29 + 1;
		y = rand() % 29 + 1;
		result = x + y;

		//displaying questions
		cout << "\t" << x << " + " << y << " = "; cin >> answer;

		//checking answer
		if( answer == result)
		{
			cout << "\t\tCORRECT" << endl;
			correct++;
		}
		else
		{
			cout << "\t\tWRONG" << endl;
			wrong++;
		}
		
		cout << "\t\tContinue(y/n)?"; cin >> cont;
	} while (cont == 'Y' || cont == 'y');

	//displaying number of correct\incorrect
	cout << "\nNumber of CORRECT answers: " << correct << endl;
	cout << "Number of WRONG answers: " << wrong << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Lets practice addition with random integer numbers < 30
//
//	24 + 16 = 40
//		CORRECT
//		Continue(y/n)? y
//	18 + 6 = 25
//		WRONG
//		Continue(y/n)? y
//	5 + 13 = 20
//		WRONG
//		Continue(y/n)? n
//
//Number of CORRECT answers: 1
//Number of WRONG answers: 2
//Press any key to continue . . .
//--------------------------------------------------------------------------