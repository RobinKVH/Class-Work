//Name: Robin Horan
//Course: CMPS 301
//Due Date: November 18, 2015
//Professor: Ray Ahmadnia
//Purpose: Using while loop to calculate stats of scores
//-------------------------------------------------------------------------------
#include <iomanip>
#include <iostream>

using namespace std;
int main()
{
	//delcaring variables
	int score, count = 0, max = 0, min = 100;
	float average, total = 0;

	//asking input
	cout << "Please enter a group of scores with -1 at the end: ";
	cin >> score;

	//starting loop
	while (score != -1)
	{
		total += score;
		
		//testing max value
		if (score > max)
		{
			max = score;
		}

		//testing min value
		if (score < min)
		{
			min = score;
		}

		cin >> score;
		count++;
	}

	//calculating score average
	average = total / count;

	//displaying output
	cout << fixed << setprecision(2) << showpoint;
	cout << "\tClass average = " << average << endl;
	cout << "\tMaximum score = " << max << endl;
	cout << "\tMinimum score = " << min << endl;

	system("pause");
	return 0;
}

//------------------------------------OUTPUT-------------------------------------
//Please enter a group of scores with - 1 at the end : 85 75 55 95 88 - 1
//		Class average = 79.60
//		Maximum score = 95
//		Minimum score = 55
//Press any key to continue . . .
//-------------------------------------------------------------------------------