//Name: Robin Horan
//Homework #: 8.1
//Course: CMPS 367
//Due Date: April 18, 2016
//Professor: Ray Ahmadnia
//Purpose: Using structures and classes to gather stats
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

class P8
{
private: 
struct STUDENT
{
	string name;
	int age;
	float gpa;
};
	STUDENT a[6];
public:
	void CopyData()
	{
		fstream f;
		f.open("8.1data.txt", ios::in);
		for (int i = 0; i < 6; i++)
		{
			f >> a[i].name >> a[i].age >> a[i].gpa;
		}
		f.close();
	}
	void Display()
	{
		cout << "Name\t\tAge\tGPA" << endl;
		cout << "---------------------------" << endl;
		for (int i = 0; i < 6; i++)
		{
			cout << a[i].name << "\t\t" << a[i].age << "\t" << a[i].gpa << endl;
		}
	}
	float FindGpaAve()
	{
		float total =0;
		for (int i = 0; i < 6; i++)
		{
			total += a[i].gpa;
		}
		return total / 6.;
	}
	void FindAgeAve(float& AgeAve)
	{
		int total = 0;
		for (int i = 0; i < 6; i++)
		{
			total += a[i].age;
		}
		AgeAve = total / 6.;
	}
	void Display(float GpaAve, float AgeAve)
	{
		cout << fixed << setprecision(2) << showpoint;
		cout << "\tAge Average = " << AgeAve << endl;
		cout << "\tGPA Average = " << GpaAve << endl;
	}
};

int main()
{
	P8 p;
	float GpaAve, AgeAve;

	p.CopyData();
	p.Display();

	GpaAve = p.FindGpaAve();
	p.FindAgeAve(AgeAve);
	p.Display(GpaAve, AgeAve);


	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Name            Age     GPA
//---------------------------
//Bryan           21      3.1
//Kevin           17      2.8
//James           22      3.1
//Yue             16      3.2
//Allyson         19      2.9
//Esteban         24      3.1
//		Age Average = 19.83
//		GPA Average = 3.03
//Press any key to continue . . .
//--------------------------------------------------------------------------