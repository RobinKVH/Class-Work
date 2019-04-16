//Name: Robin Horan
//Course: CMPS 301
//Due Date: November 18, 2015
//Professor: Ray Ahmadnia
//Purpose: Using for loop to display conversion rate at a set range
//-------------------------------------------------------------------------------
#include <iomanip>
#include <iostream>

using namespace std;
int main()
{
	//delcaring variables
	int low, high;

	//asking input
	cout << "To see my currency exchange table, please enter the table's starting and ending dollar values: "; cin >> low >> high;

	//table header
	cout << left << setw(2) << " $" << right << setw(9) << "\235   " << setw(7) << "E  " << setw(7) << "\234  " << endl;
	cout << "__________________________" << endl;
	cout << fixed << setprecision(2) << showpoint;

	//starting table
	for (int i = low; i <= high; i++)
	{
		cout << right << setw(2) << i << setw(9) << i*121.57 << setw(7) << i*0.92 << setw(7) << i*0.65 << endl;
	}

	system("pause");
	return 0;
}

//------------------------------------OUTPUT-------------------------------------
//To see my currency exchange table, please enter the table's starting and ending
//dollar values : 10 20
// $     ¥       E      £
//__________________________
//10  1215.70   9.20   6.50
//11  1337.27  10.12   7.15
//12  1458.84  11.04   7.80
//13  1580.41  11.96   8.45
//14  1701.98  12.88   9.10
//15  1823.55  13.80   9.75
//16  1945.12  14.72  10.40
//17  2066.69  15.64  11.05
//18  2188.26  16.56  11.70
//19  2309.83  17.48  12.35
//20  2431.40  18.40  13.00
//Press any key to continue . . .
//-------------------------------------------------------------------------------