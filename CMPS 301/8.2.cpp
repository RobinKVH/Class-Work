//Name: Robin Horan
//Course: CMPS 301
//Due Date: November 4, 2015
//Professor: Ray Ahmadnia
//Purpose: Calculating average and grades and using loops for multiple students
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
	//declaring variables
	int amount, score1, score2;
	string name;
	float average;

	//asking amount of students
	cout << "----------Consulting Center----------" << endl;
	cout << "Let's see how you are doing in your classes." << endl;
	cout << "Please enter the number of students: "; cin >> amount;

	//starting loop
	for (int i = 1; i <= amount; i++)
	{
		//asking input
		cout << "\tWhat's your name? "; cin >> name;
		cout << "\t" << name << ", please enter your scores in two exams: "; cin >> score1 >> score2;

		//calculating average
		average = (score1 + score2) / 2;

		//finding grade
		if (average <= 100 && average >= 85)
		{
			cout << "\t\tYour average is " << average << " and your grade is A.\n" << endl;
		}
		else if (average < 85 && average >=70)
		{
			cout << "\t\tYour average is " << average << " and your grade is B.\n" << endl;
		}
		else if (average < 70 && average >= 55)
		{
			cout << "\t\tYour average is " << average << " and your grade is C.\n" << endl;
		}
		else
		{
			cout << "\t\tYou have entered unacceptable grades.\n" << endl;		
		}

	}


	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//----------Consulting Center----------
//Let's see how you are doing in your classes.
//Please enter the number of students : 3
//	What's your name? John
//	John, please enter your scores in two exams : 66 88
//		Your average is 77 and your grade is B.
//
//	What's your name? Bill
//	Bill, please enter your scores in two exams : 99 88
//		Your average is 93 and your grade is A.
//
//	What's your name? Arnold
//	Arnold, please enter your scores in two exams : 66 55
//		Your average is 60 and your grade is C.
//
//Press any key to continue . . .
//-------------------------------------------------------------------------------