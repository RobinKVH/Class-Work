//Name: Robin Horan
//Homework #: 7.1
//Course: CMPS 367
//Due Date: April 11, 2016
//Professor: Ray Ahmadnia
//Purpose: Finding stats using a constructor
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;

class Three
{
private: int x, y, z;
public: 
	void Read()
	{
		cout << "Enter three int numbers: "; cin >> x >> y >> z;
	}
	float Average()
	{
		return (x + y + z) / 3.;
	}
	void FindMaxMin(int& max, int& min)
	{
		max = ((x > y&&x > z) ? x : (y > z) ? y : z);
		min = ((x < y&&x < z) ? x : (y < z) ? y : z);
	}
	void Display()
	{
		cout << "\tFor x=" << x << " y=" << y << " z=" << z << endl;
	}
	void Display(int mx, int mn, float Ave)
	{
		cout << "\t\tMinimum = " << mn << endl;
		cout << "\t\tMaximum = " << mx << endl;
		cout << fixed << setprecision(2) << showpoint;
		cout << "\t\tAverage = " << Ave << endl;
	}
};

int main()
{
	Three t;
	int min = 1000, max = -1000;
	float ave;
	t.Read();
	t.Display();
	t.FindMaxMin(max, min);
	ave = t.Average();
	t.Display(max, min, ave);
	

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter three int numbers: 22 66 11
//	For x=22 y=66 z=11
//		Minimum = 11
//		Maximum = 66
//		Average = 33.00
//Press any key to continue . . .
//--------------------------------------------------------------------------