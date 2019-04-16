//Name: Robin Horan
//Course: CMPS 301
//Due Date: November 11, 2015
//Professor: Ray Ahmadnia
//Purpose: Using for loop to count the number of votes
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	//declaring variables
	char vote;
	int yes = 0; 
	int no = 0;

	//starting for loop, asking input, and counting
	for (int i = 1; i <= 10; i++)
	{
		cout << "Enter vote: "; cin >> vote;
		
		switch (vote)
		{
		case 'Y': case 'y': yes++; break;
		case 'N': case 'n': no++; break;
		}
	}

	//displaying output
	cout << "\tYES VOTES = " << yes << " = ";
	for (int i = 1; i <= yes; i++)
	{
		cout << "*";
	}
	cout << endl;

	cout << "\tNO VOTES = " << no<< " = ";
	for (int i = 1; i <= no; i++)
	{
		cout << "*";
	}
	cout << endl;


	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//Enter vote: y
//Enter vote: N
//Enter vote: N
//Enter vote: N
//Enter vote: Y
//Enter vote: n
//Enter vote: y
//Enter vote: y
//Enter vote: n
//Enter vote: N
//		YES VOTES = 4 = ****
//		NO VOTES = 6 = ******
//Press any key to continue . . .
//-------------------------------------------------------------------------------