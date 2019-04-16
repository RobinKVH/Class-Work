//Name: Robin Horan
//Course: CMPS 367
//Due Date: February 22, 2016
//Professor: Ray Ahmadnia
//Purpose: Making a currecny conversion table with user input
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	//declaring variables
	int start, finish, increment;

	//asking input
	cout << "Please enter the table starting value, final value, and increment value: "; cin >> start >> finish >> increment;
	
	//displaying header
	cout << left << setw(3) << "  $" << right << setw(9) << "\235   " << setw(7) << "\234    " << setw(7) << "E   " << endl;
	cout << "==========================" << endl;
	cout << fixed << setprecision(2) << showpoint;

	//displaying table
	for (int i = start; i <= finish; i += increment)
	{
		cout << left << setw(3) << i << right << setw(9) << i*112.87 << setw(7) << i*0.70 << setw(7) << i*0.90 << endl;
	}

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Please enter the table starting value, final value, and increment value: 10 100 10
// $     ¥     £       E
//==========================
//10   1128.70   7.00   9.00
//20   2257.40  14.00  18.00
//30   3386.10  21.00  27.00
//40   4514.80  28.00  36.00
//50   5643.50  35.00  45.00
//60   6772.20  42.00  54.00
//70   7900.90  49.00  63.00
//80   9029.60  56.00  72.00
//90  10158.30  63.00  81.00
//100 11287.00  70.00  90.00
//Press any key to continue . . .
//--------------------------------------------------------------------------