//Name: Robin Horan
//Course: CMPS 301
//Due Date: September 23, 2015
//Professor: Ray Ahmadnia
//Purpose: Homework that ask for exam scores and computes the average
//----------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main()
{
	//declaring variables 
	float exam1, exam2, exam3, average;

	//display opening message 
	cout << "I can compute your midterm's average, try me" << endl;

	//initializing variables
	cout << "           Enter your scores in 3 exams: "; cin >> exam1 >> exam2 >> exam3;

	//calculation
	average = (exam1 + exam2 + exam3) / 3;

	//displaying output
	cout << "               Your average is: " << average << endl;

	system("pause");
	return 0;
}
//----------------------------------------------------------OUTPUT------------------------------------------------------------------
//I can compute your midterm's average, try me
//           Enter your scores in 3 exams: 88 79 43
//               Your average is : 70
//Press any key to continue . . .
//----------------------------------------------------------------------------------------------------------------------------------