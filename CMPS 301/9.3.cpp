//Name: Robin Horan
//Course: CMPS 301
//Due Date: November 11, 2015
//Professor: Ray Ahmadnia
//Purpose: Using for loop to display a table of currencies and converstion 
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	//declaring variables
	int size;

	//asking input
	cout << "To see my currency exchange table, please enter the table size: "; cin >> size;

	//displaying header
	cout << left << setw(2) << " $" << right << setw(9) << "\235   " << setw(7) << "E  " <<setw(7) << "\234  " << endl;
	cout << "__________________________" << endl;
	cout << fixed << setprecision(2) << showpoint;

	//starting output of table with for loop
	for (int i = 1; i <= size; i++)
	{
		cout << right << setw(2) << i << setw(9) << i*121.57 << setw(7) << i*0.92 << setw(7) << i*0.65 << endl;
	}
		


	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//To see my currency exchange table, please enter the table size : 10
// $     ¥       E      £
//__________________________
// 1   121.57   0.92   0.65
// 2   243.14   1.84   1.30
// 3   364.71   2.76   1.95
// 4   486.28   3.68   2.60
// 5   607.85   4.60   3.25
// 6   729.42   5.52   3.90
// 7   850.99   6.44   4.55
// 8   972.56   7.36   5.20
// 9  1094.13   8.28   5.85
// 10  1215.70   9.20   6.50
//Press any key to continue . . .
//-------------------------------------------------------------------------------