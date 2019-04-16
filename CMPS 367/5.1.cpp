//Name: Robin Horan
//Homework #: 5.1
//Course: CMPS 367
//Due Date: March 21, 2016
//Professor: Ray Ahmadnia
//Purpose: Using arrays to generate numbers and calculate simple stats
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
using namespace std;

void Assign(int x[]);
void Display(int x[]);
void FindMaxMin(int x[], int& max, int& min);
void Display(int max, int min);
float FindAve(int x[]);
void Display(int x[], float ave);

int main()
{
	//creating random numbers
	int a[10];
	Assign(a);
	Display(a);

	//finding max and min of genereated values
	int max, min;
	FindMaxMin(a, max, min);
	Display(max, min);

	//finding average of values and displaying values that are higher
	float average = FindAve(a);
	Display(a, average);

	system("pause");
	return 0;
}
void Assign(int x[])
{
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		x[i] = rand() % 99 + 1;
	}
}
void Display(int x[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << x[i] << " ";
	}
	cout << endl;
}
void FindMaxMin(int x[], int& max, int& min)
{
	max = min = x[0];
	for (int i = 0; i < 10; i++)
	{
		if (x[i] > max)
		{
			max = x[i];
		}
		if (x[i] < min)
		{
			min = x[i];
		}
	}
}
void Display(int max, int min)
{
	cout << "Max = " << max << endl;
	cout << "Min = " << min << endl;
}
float FindAve(int x[])
{
	int total = 0;
	for (int i = 0; i < 10; i++)
	{
		total += x[i];
	}
	return total / 10.;
}
void Display(int x[], float ave)
{
	cout << "Values above average: ";
	for (int i = 0; i < 10; i++)
	{
		if (x[i] > ave)
		{
			cout << x[i] << " ";
		}
	}
	cout << endl;
}
//--------------------------------OUTPUT------------------------------------
//93 37 81 16 84 93 89 67 62 44
//Max = 93
//Min = 16
//Values above average: 93 81 84 93 89 67
//Press any key to continue . . .
//--------------------------------------------------------------------------