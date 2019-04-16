//Name: Robin Horan
//Course: CMPS 301
//Due Date: December 16, 2015
//Professor: Ray Ahmadnia
//Purpose: Calculating stats with user defined funtions
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
using namespace std;

void ReadData(int& a, int& b, int& c)
{
	cout << "Enter three integer numbers: "; cin >> a >> b >> c;
}
void DisplayAll(int a, int b, int c)
{
	cout << "You just entered: x=" << a << " y=" << b << " z=" << c << endl;
}
int ComputeTotal(int a, int b, int c)
{
	return a + b + c;
}
void DisplaySum(int s)
{
	cout << "The total of x, y, and z is " << s << "." << endl;
}
void FindMaxMin(int a, int b, int c, int& max, int& min)
{
	if (a > b && a > c)
	{
		max = a;
	}
	if (b > a && b > c)
	{
		max = b;
	}
	if (c > a && c > b)
	{
		max = c;
	}

	if (a < b && a < c)
	{
		min = a;
	}
	if (b < a && b < c)
	{
		min = b;
	}
	if (c < a && c << b)
	{
		min = c;
	}
}
void DisplayMaxMin(int max, int min)
{
	cout << "Max and Min of x, y, and z are: " << max << "  " << min << endl;
}
double FindAverage(int a, int b, int c)
{
	return (a + b + c) / 3.;
}
void DisplayAve(float ave)
{
	cout << fixed << setprecision(2) << showpoint;
	cout << "The average of x, y, and z is: " << ave << endl;
}
void DrawBargraph(int a, int b, int c)
{
	cout << "This bargraph represents x, y, and z" << endl;

	//bargraph for x
	cout << "\tX = ";
	for(int i = 1; i <= a; i++)
	{
		cout << " *";
	}
	cout << endl;

	//bargraph for y
	cout << "\tY = ";
	for (int i = 1; i <= b; i++)
	{
		cout << " *";
	}
	cout << endl;

	//bargraph for z
	cout << "\tX = ";
	for (int i = 1; i <= c; i++)
	{
		cout << " *";
	}
	cout << endl;

}
int main()
{
	int x=0, y=0, z=0;

	//read three numbers into x, y, and z
	ReadData(x, y, z);

	//display all three numbers
	DisplayAll(x, y, z);

	//compute and retur nthe total of x, y, and z
	int sum = ComputeTotal(x, y, z);
	DisplaySum(sum);

	//find the maximum and the minimum of x, y, and z
	int max, min;
	FindMaxMin(x, y, z, max, min);
	DisplayMaxMin(max, min);

	//find and return the average of x, y, and z
	float average = FindAverage(x, y, z);
	DisplayAve(average);

	//draw a bargraph for x, y, and z values 
	DrawBargraph(x, y, z);

	//terminate program
	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//Enter three integer numbers: 4 6 2
//You just entered: x=4 y=6 z=2
//The total of x, y, and z is 12.
//Max and Min of x, y, and z are: 6  2
//The average of x, y, and z is: 4.00
//This bargraph represents x, y, and z
//		X = * * * *
//		Y = * * * * * *
//		X = * *
//Press any key to continue . . .
//-------------------------------------------------------------------------------