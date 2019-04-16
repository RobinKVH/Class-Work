//Name: Robin Horan
//Homework #: 9.2
//Course: CMPS 367
//Due Date: April 25, 2016
//Professor: Ray Ahmadnia
//Purpose: Practice with class member prototypes
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

class TWO
{
private: int a[7];
public:
	void ReadData();
	void Display();
	void FindMaxMin(int& max, int& min);
	void Display(int max, int min);
	~TWO() {};
};

int main()
{
	TWO Z;
	int max, min;

	Z.ReadData();
	Z.Display();

	Z.FindMaxMin(max, min);
	Z.Display(max, min);

	system("pause");
	return 0;
}

void TWO::ReadData()
{
	srand(time(0));
	for (int i = 0; i < 7; i++)
	{
		a[i] = rand() % 50;
	}
};
void TWO::Display()
{
	cout << "Original Data: " << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
};
void TWO::FindMaxMin(int& max, int& min)
{
	max = min = a[0];
	for (int i = 0; i < 7; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}
};
void TWO::Display(int max, int min)
{
	cout << "Maximum = " << max << endl;
	cout << "Minimum = " << min << endl;
};
//--------------------------------OUTPUT------------------------------------
//Original Data:
//16 30 4 38 37 6 37
//Maximum = 38
//Minimum = 4
//Press any key to continue . . .
//--------------------------------------------------------------------------