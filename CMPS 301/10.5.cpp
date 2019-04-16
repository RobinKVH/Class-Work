//Name: Robin Horan
//Course: CMPS 301
//Due Date: November 18, 2015
//Professor: Ray Ahmadnia
//Purpose: Using while loop to calculate average of input
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
	//declaring variables
	string name;
	int score, count = 0;
	float average, sum = 0;

	//asking input
	cout << "Enter your full name: "; getline(cin, name);
	cout << " " << name << ", enter a group of scores with -1 at the end: "; 
	cin >> score;

	//starting loop
	while (score != -1)
	{
		sum += score;
		count++;
		cin >> score;
	}

	//calculating average
	average = sum / count;

	//displaying output
	cout << fixed << setprecision(2) << showpoint;
	cout << "\tYour average is: " << average << endl;

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//Enter your full name: John Adam Smith
// John Adam Smith, enter a group of scores with -1 at the end: 22 55 77 80 -1
//	Your average is: 58.50
//Press any key to continue . . .
//-------------------------------------------------------------------------------