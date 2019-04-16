//Name: Robin Horan
//Course: CMPS 301
//Due Date: October 28, 2015
//Professor: Ray Ahmadnia
//Purpose: Asking for grade and displaying score range using switch
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
	//declaring variables
	string name;
	char grade;

	//starting loop
	for (int i = 0; i < 5; i++)
	{ 
		//asking input
		cout << "Enter your name: "; getline(cin, name);
		cout << name << ", enter your score: "; cin >> grade;
		cin.ignore();

		//testing input and displaying output
		switch (grade)
		{
		case 'A':case 'a': cout << "\tYour score is above 90" << endl; break;
		case 'B':case 'b': cout << "\tYour score is between 80 - 89" << endl; break;
		case 'C':case 'c': cout << "\tYour score is between 70 - 79" << endl; break;
		case 'D':case 'd': cout << "\tYour score is between 60 - 69" << endl; break;
		case 'F':case 'f': cout << "\tYour score is below 60" << endl; break;
		default: cout << "This is not a valid score" << endl; break;
		}
		//system("pause");
		//return 0;
	}

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//Enter your name : Bill Clinton
//Bill Clinton, enter your score : A
//		Your score is above 90
//Enter your name : Tom E Brown
//Tom E Brown, enter your score : b
//		Your score is between 80 - 89
//Enter your name : John Wick
//John Wick, enter your score : C
//		Your score is between 70 - 79
//Enter your name : Barack Obama
//Barack Obama, enter your score : d
//		Your score is between 60 - 69
//Enter your name : John Wayne
//		John Wayne, enter your score : F
//Your score is below 60
//Press any key to continue . . .
//-------------------------------------------------------------------------------