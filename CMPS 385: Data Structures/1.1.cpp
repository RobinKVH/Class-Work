//Name: Robin Horan
//Homework #: 1.1
//Course: CMPS 385
//Due Date: February 7, 2017
//Professor: Ray Ahmadnia
//Purpose: Practice with arrays, functions, and file processing
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

struct PERSON
{
	string name;
	int age;
	float gpa;
};

void Copy(string fname, PERSON a[]);
void Display(PERSON a[]);
void DisplayTeens(PERSON a[]);
void AverageGpa(PERSON a[], float& ave);
float AverageAge(PERSON a[]);
void Display(float gpa, float age);

int main()
{
	PERSON a[5];

	Copy("1.1data.txt", a);

	Display(a);
	DisplayTeens(a);

	float GpaAve;
	AverageGpa(a, GpaAve);
	
	float AgeAve;
	AgeAve = AverageAge(a);

	Display(GpaAve, AgeAve);

	system("pause");
	return 0;
}

void Copy(string fname, PERSON a[])
{
	fstream f;
	f.open(fname, ios::in);

	for (int i = 0; i < 5; i++)
	{
		f >> a[i].name >> a[i].age >> a[i].gpa;
	}
	f.close();
}

void Display(PERSON a[])
{
	cout << "This is the content of array a" << endl;
	cout << "\tName\tAge   GPA" << endl;
	cout << "\t--------------------" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "\t" << a[i].name << "\t" << a[i].age << "   " << a[i].gpa << endl;
	}
}

void DisplayTeens(PERSON a[])
{
	cout << "This is the list of teenagers\n\t\t";
	for (int i = 0; i < 5; i++)
	{
		if (a[i].age <= 19)
		{
			cout << a[i].name << "\t";
		}
	}
	cout << endl;
}

void AverageGpa(PERSON a[], float& ave)
{
	float total = 0;
	for (int i = 0; i < 5; i++)
	{
		total += a[i].gpa;
	}
	ave = total / 5;
}

float AverageAge(PERSON a[])
{
	float  total = 0;
	for (int i = 0; i < 5; i++)
	{
		total += a[i].age;
	}
	return (total / 5);
}

void Display(float gpa, float age)
{
	cout << fixed << setprecision(2) << showpoint;
	cout << "Their GPA average is: " << gpa << endl;
	cout << "Their AGE average is: " << age << endl;
}
//--------------------------------OUTPUT------------------------------------
//This is the content of array a
//		Name    Age   GPA
//		--------------------
//		Matthew 33   3.3
//		Edwin   44   4.3
//		Amanda  19   2.91
//		Cameron 17   3.11
//		Holly   21   3.2
//This is the list of teenagers
//					Amanda  Cameron
//Their GPA average is : 3.36
//Their AGE average is : 26.80
//Press any key to continue . . .
//--------------------------------------------------------------------------