//Name: Robin Horan
//Course: CMPS 301
//Due Date: November 11, 2015
//Professor: Ray Ahmadnia
//Purpose: Using for loop to count the number of grades
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	//declaring variables
	char grade;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	//starting for loop to count input
	for (int i = 1; i <= 10; i++)
	{
		cout << "Enter the grade: "; cin >> grade;

		switch (grade)
		{
		case 'A': case 'a': a++; break;
		case 'B': case 'b': b++; break;
		case 'C': case 'c': c++; break;
		case 'D': case 'd': d++; break;
		default: cout << "That is not an acceptable grade." << endl; break;
		}
	}

	//displaying number of each grade
	cout << "\tNumber of \"A\" grades: " << a << endl;
	cout << "\tNumber of \"B\" grades: " << b << endl;
	cout << "\tNumber of \"C\" grades: " << c << endl;
	cout << "\tNumber of \"D\" grades: " << d << endl;


	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//Enter the grade: A
//Enter the grade: b
//Enter the grade: b
//Enter the grade: B
//Enter the grade: C
//Enter the grade: C
//Enter the grade: A
//Enter the grade: A
//Enter the grade: d
//Enter the grade: D
//		Number of "A" grades: 3
//		Number of "B" grades: 3
//		Number of "C" grades: 2
//		Number of "D" grades: 2
//Press any key to continue . . .
//-------------------------------------------------------------------------------