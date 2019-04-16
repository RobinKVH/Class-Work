//Name: Robin Horan
//Course: CMPS 301
//Due Date: December 9, 2015
//Professor: Ray Ahmadnia
//Purpose: Creating a power table with user defined functions
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;

void DrawHeading()
{
	cout << " " << left << setw(4) << "N" << setw(7) << "N^1/2" << setw(6) << "N^1/4" << endl;
}
void UnderLineHeading(int length)
{
	for (int i = 1; i <= length; i++)
	{
		cout << "-";
	}
	cout << endl;
}
void ShowTable(int s)
{
	for (int i = 1; i <= s; i++)
	{
		cout << fixed << setprecision(2) << showpoint;
		cout << " " << left << setw(4) << i << setw(7) << pow(i, 0.5) << setw(6) << pow(i, 0.25) << endl;
	}
}
int main()
{
	int size;
	cout << "Enter the table size: "; cin >> size;

	DrawHeading();
	UnderLineHeading(20);
	ShowTable(size);

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//Enter the table size: 3
// N   N ^ 1 / 2  N ^ 1 / 4
//--------------------
// 1   1.00   1.00
// 2   1.41   1.19
// 3   1.73   1.32
//Press any key to continue . . .
//-------------------------------------------------------------------------------