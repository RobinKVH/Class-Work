//Name: Robin Horan
//Course: CMPS 301
//Due Date: October 7, 2015
//Professor: Ray Ahmadnia
//Purpose: asks for name nad gpa and displays supportive message
//-------------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{
	//declaring variables
	string name;
	float gpa;
	
	//asking input
	cout << "Please enter your name and your GPA: "; cin >> name >> gpa;

	//output
	cout << fixed << showpoint << setprecision(2);
	cout << name << ", with a GPA of " << gpa << " you will find a great job." << endl;
	cout << "\t\t\t\t\t\tKeep working hard," << endl;
	cout << "\t\t\t\t\t\tYour advisor" << endl;

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//Please enter your name and your GPA : Mary 3.2
//Mary, with a GPA of 3.20 you will find a great job.
//						Keep working hard,
//						Your advisor
//Press any key to continue . . .
//-------------------------------------------------------------------------------