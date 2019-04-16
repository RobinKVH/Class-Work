//Name: Robin Horan
//Course: CMPS 301
//Due Date: November 11, 2015
//Professor: Ray Ahmadnia
//Purpose: Using for loop to get stats of inputed numbers
//-------------------------------------------------------------------------------
#include <iomanip>
#include <iostream>

using namespace std;
int main()
{
	//declaring variables
	int num, size;
	int min = 100;
	int max = -100;
	int sum = 0;
	float average;

	cout << "Please enter the number of students: "; cin >> size;
	for (int i = 1; i <= size; i++)
	{
		cout << "\tEnter score: "; cin >> num;
		if (num > max)
		{
			max = num;
		}
		if (num < min)
		{
			min = num;
		}

		sum = sum + num;
	}

	//calculating average
	average = sum / size;

	//displaying output
	cout << fixed << setprecision(2) << showpoint;
	cout << "\t\tClass Average: " << average << endl;
	cout << "\t\tHighest Score: " << max << endl;
	cout << "\t\tLowest Score: " << min << endl;
	


	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//Please enter the number of students: 5
//	Enter score: 85
//	Enter score: 75
//	Enter score: 55
//	Enter score: 95
//	Enter score: 88
//		Class Average: 79.00
//		Highest Score: 95
//		Lowest Score: 55
//Press any key to continue . . .
//-------------------------------------------------------------------------------