//Name: Robin Horan
//Homework #: 4.1
//Course: CMPS 367
//Due Date: March 9, 2016
//Professor: Ray Ahmadnia
//Purpose: Practice with functions(template and overloaded)
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

template <class T> void ReadData(T& a, T& b);
void Display(string a, string b, int c, int d);
float FindAgeAve(int a, int b);
void Display(string a, string b, int c, int d, float e);

int main()
{
	int Age1, Age2;
	cout << "Enter two friends' ages: "; ReadData(Age1, Age2);

	string name1, name2;
	cout << "Enter two friends' names: "; ReadData(name1, name2);

	Display(name1, name2, Age1, Age2);

	float AgeAve = FindAgeAve(Age1, Age2);

	Display(name1, name2, Age1, Age2, AgeAve);

	system("pause");
	return 0;
}

template <class T>
void ReadData(T& a, T& b)
{
	cin >> a >> b;
}
void Display(string a, string b, int c, int d)
{
	setfill(' ');
	cout << "\t\t" << left << setw(8) << "Name" << "Age" << endl;
	cout << "\t  ----------------------" << endl;
	cout << "\t\t" << left << setw(8) << a << c << endl;
	cout << "\t\t" << left << setw(8) << b << d << endl;
}
float FindAgeAve(int a, int b)
{
	return (a + b) / 2.;
}
void Display(string a, string b, int c, int d, float e)
{
	cout << fixed << setprecision(2) << showpoint;
	cout << "My friends average age is " << e << endl;
	if (c > d)
	{
		cout << a << " your age is above average" << endl;
	}
	else
	{
		cout << b << " your age is above average" << endl;
	}
}
//--------------------------------OUTPUT------------------------------------
//Enter two friends' ages: 27 19
//Enter two friends' names: Bill John
//	 	 Name    Age
//	 ---------------------
//		 Bill    27
//		 John    19
//My friends average age is 23.00
//Bill your age is above average
//Press any key to continue . . .
//--------------------------------------------------------------------------