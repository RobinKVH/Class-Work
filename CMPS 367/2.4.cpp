//Name: Robin Horan
//Course: CMPS 367
//Due Date: February 22, 2016
//Professor: Ray Ahmadnia
//Purpose: Counting the type of each gender from input 
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
int main()
{
	//declaring variables
	char gender;
	int male = 0, female = 0;

	//asking input
	cout << "Enter a group of genders(m=male, f=female): ";
	cin.get(gender);

	//sorting input
	while (gender != '\n')
	{
		switch (gender)
		{
		case 'M': case 'm': male++; break;
		case 'F': case 'f': female++; break;
		default: cout << gender << " is not a recognized gender." << endl; break;
		}
		cin.get(gender);
	}

	//displaying results
	cout << "\tMales    :";
	for (int i = 1; i <= male; i++)
	{
		cout << "*";
	}
	cout << endl;

	cout << "\tFemales  :";
	for (int i = 1; i <= female; i++)
	{
		cout << "*";
	}
	cout << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter a group of genders(m=male, f=female): mmFFfMffff
//  Males   : ***
//	Females : *******
//Press any key to continue . . .
//--------------------------------------------------------------------------