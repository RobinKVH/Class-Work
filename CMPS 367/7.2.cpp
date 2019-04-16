//Name: Robin Horan
//Homework #: 7.2
//Course: CMPS 367
//Due Date: April 11, 2016
//Professor: Ray Ahmadnia
//Purpose: Practice with constructors
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;

class Four
{
private: int x[6];
public: 
	//void read data into array
	void Read()
	{
		cout << "Enter 6 int numbers: ";

		for (int i = 0; i < 6; i++)
		{
			cin >> x[i];
		}
	}
	//display array x
	void Display()
	{
		cout << "This is the original data: " << endl;
		cout << "\t";
		for (int i = 0; i < 6; i++)
		{
			cout << x[i] << " ";
		}
		cout << "\n\n";
	}
	//find the max and min data in x
	void MaxMin(int& mx, int& mn)
	{
		for (int i = 0; i < 6; i++)
		{
			if (x[i] > mx)
			{
				mx = x[i];
			}
			if (x[i] < mn)
			{
				mn = x[i];
			}
		}
	}
	//display the max and min values
	void Display(int max, int min)
	{
		cout << "Maximum = " << max << endl;
		cout << "Minimum = " << min << endl;
	}
};

int main()
{
	Four f;
	int max = -1000, min = 1000;
	f.Read();
	f.Display();
	f.MaxMin(max, min);
	f.Display(max, min);

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter 6 int numbers: 60 20 50 40 10 7
//This is the original data:
//	60 20 50 40 10 7
//
//Maximum = 60
//Minimum = 7
//Press any key to continue . . .
//--------------------------------------------------------------------------