//Name: Robin Horan
//Course: CMPS 301
//Due Date: October 7, 2015
//Professor: Ray Ahmadnia
//Purpose: asks for name quiz scores and exam scores and outputs average
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
	float exam_a, exam_b, quiz_a, quiz_b, quiz_c, exam_ave, quiz_ave;

	//asking for input 
	cout << "Please enter your name: "; cin >> name;
	cout << " " << name << ", enter your scores in 3 quizes: "; cin >> quiz_a >> quiz_b >> quiz_c;
	cout << " " << name << ", enter your scores in 2 exams: "; cin >> exam_a >> exam_b;

	//calculating average 
	exam_ave = (exam_a + exam_b) / 2;
	quiz_ave = (quiz_a + quiz_b + quiz_c) / 3;

	//displaying output 
	cout << fixed << showpoint << setprecision(2);
	cout << "" << endl;
	cout << name << ", this is how much I know about you" << endl;
	cout << "\tYour Name is " << name << endl;
	cout << "\tYour average in your quizezes is " << quiz_ave << endl;
	cout << "\tYour average in your exams is " << exam_ave << endl;

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//Please enter your name : Tom
//Tom, enter your scores in 3 quizes : 10 7 9
//Tom, enter your scores in 2 exams : 88 77
//
//Tom, this is how much I know about you
//	Your Name is Tom
//	Your average in your quizezes is 8.67
//	Your average in your exams is 82.50
//Press any key to continue . . .
//-------------------------------------------------------------------------------