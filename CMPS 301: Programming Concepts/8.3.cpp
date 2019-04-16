//Name: Robin Horan
//Course: CMPS 301
//Due Date: November 4, 2015
//Professor: Ray Ahmadnia
//Purpose: Using for loop to display table of conversation rates at increasing values
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
	//declaring variables
	int size;

	//displaying header
	cout << "Enter the table size: "; cin >> size;
	cout << setfill(' ');
	cout << fixed << setprecision(2) << showpoint;
	cout << right << setw(3) << "$" << right << setw(10) << "Yen  " << right << setw(10) << "B.Pound" << right << setw(10) << "Euro" << endl;
	cout << "-----------------------------------" << endl;

	//starting loop
	for (int i = 1; i <= size; i++)
	{
		cout << right << setw(3) << i << right << setw(10) << 120.66*i << right << setw(10) << 0.65*i << right << setw(10) << 0.91*i << endl;

	}
	

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//Enter the table size: 5
//  $     Yen     B.Pound      Euro
//-----------------------------------
//  1    120.66      0.65      0.91
//  2    241.32      1.30      1.82
//  3    361.98      1.95      2.73
//  4    482.64      2.60      3.64
//  5    603.30      3.25      4.55
//Press any key to continue . . .
//-------------------------------------------------------------------------------