//Name: Robin Horan
//Homework #: 3.4
//Course: CMPS 385
//Due Date: February 22, 2017
//Professor: Ray Ahmadnia
//Purpose: 
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std;

template<class T>
class STACK
{
private: T a[10];
		 int counter;
public:
	void ClearStack()
	{
		counter = 0;
	}
	bool EmptyStack()
	{
		if (counter == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool FullStack()
	{
		if (counter == 10)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void PushStack(T n)
	{
		a[counter] = n; counter++;
	}
	T PopStack()
	{
		counter--; return a[counter];
	}
	~STACK(){}
};

int main()
{
	STACK<int> NUM; 
	STACK<char> ALPHA;
	STACK<string> MONTHS;
	int numrand, alpharand, monthsrand;

	NUM.ClearStack();
	ALPHA.ClearStack();
	MONTHS.ClearStack();

	srand(time(0));

	while (!NUM.FullStack())
	{
		numrand = rand() % 30;
		alpharand = rand() % 25;
		monthsrand = (rand() % 12) + 1;

		NUM.PushStack(numrand);

		ALPHA.PushStack(char(65 + alpharand));

		switch (monthsrand)
		{
		case 1: MONTHS.PushStack("January"); break;
		case 2: MONTHS.PushStack("February"); break;
		case 3: MONTHS.PushStack("March"); break;
		case 4: MONTHS.PushStack("April"); break;
		case 5: MONTHS.PushStack("May"); break;
		case 6: MONTHS.PushStack("June"); break;
		case 7: MONTHS.PushStack("July"); break;
		case 8: MONTHS.PushStack("August"); break;
		case 9: MONTHS.PushStack("September"); break;
		case 10: MONTHS.PushStack("October"); break;
		case 11: MONTHS.PushStack("November"); break;
		case 12: MONTHS.PushStack("December"); break;
		default: break;
		}
	}

	cout << "  Numbers\tUppercase Letters\tMonths" << endl;
	cout << "------------------------------------------------" << endl;
	
	while (!NUM.EmptyStack())
	{
		cout << "     " << NUM.PopStack() << "\t\t\t" << ALPHA.PopStack() << "\t\t" << MONTHS.PopStack() << endl;
	}

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//  Numbers       Uppercase Letters       Months
//------------------------------------------------
//  9                  V                 April
//  15                 I                 August
//  16                 E                 October
//  7                  I                 March
//  16                 V                 May
//  29                 R                 September
//  5                  A                 July
//  26                 P                 December
//  27                 T                 April
//  15                 K                 January
//Press any key to continue . . .
//--------------------------------------------------------------------------