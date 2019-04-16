//Name: Robin Horan
//Course: CMPS 301
//Due Date: September 30, 2015
//Professor: Ray Ahmadnia
//Purpose: Asking for exam and quiz scores and displaying the average of both
//-------------------------------------------------------------------------------
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
	//initializing variables
	string name;
	float exam_a, exam_b, exam_c, quiz_a, quiz_b, quiz_c, exam_ave, quiz_ave;

	//asking for input
	cout << "Please enter your name: "; cin >> name;
	cout << " " << name << ", enter your scores in 3 exams: "; cin >> exam_a >> exam_b >> exam_c;
	cout << " " << name << ", enter your scores in 3 quizes: "; cin >> quiz_a >> quiz_b >> quiz_c;

	//calculating average
	exam_ave = (exam_a + exam_b + exam_c) / 3;
	quiz_ave = (quiz_a + quiz_b + quiz_c) / 3;

	//displaying output
	cout << fixed << showpoint << setprecision(2);
	cout << "Dear " << name << "," << endl;
	cout << " Your exams average is " << exam_ave << " and quizzes average is " << quiz_ave << "." << endl;
	cout << " It seems that you are doing great." << endl;
	cout << "\t\t\t\t\tYour advisor" << endl;

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//Please enter your name : Amanda
// Amanda, enter your scores in 3 exams : 77 88 89
// Amanda, enter your scores in 3 quizes : 15 20 17
//Dear Amanda,
// Your exams average is 84.67 and quizzes average is 17.33.
// It seems that you are doing great.
//									Your advisor
//Press any key to continue . . .
//-------------------------------------------------------------------------------