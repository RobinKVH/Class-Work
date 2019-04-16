//Name: Robin Horan
//Homework #: 3.2
//Course: CMPS 385
//Due Date: February 22, 2017
//Professor: Ray Ahmadnia
//Purpose: Stacks and number manipulation
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

class STACK
{
private: int a[10];
		 int counter;
public:
	void ClearStack()
	{
		counter = 0;
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
	void PushStack(int n)
	{
		a[counter] = n; counter++;
	}
	int PopStack()
	{
		counter--; return a[counter];
	}
	~STACK(){}
};
int main()
{
	STACK S, EVEN, ODD;
	int out, random, check;

	S.ClearStack();
	EVEN.ClearStack();
	ODD.ClearStack();

	srand(time(0));

	while (!S.FullStack())
	{
		random = rand() % 100;
		S.PushStack(random);
		check = random % 2;
		if (check == 0)
		{
			EVEN.PushStack(random);
		}
		else
		{
			ODD.PushStack(random);
		}
	}

	//output of all numbers
	cout << "All Numbers: ";
	while (!S.EmptyStack())
	{
		out = S.PopStack(); cout << out << "  ";
	}
	cout << endl;

	//output of even numbers
	cout << "\tEven Numbers: ";
	while (!EVEN.EmptyStack())
	{
		out = EVEN.PopStack(); cout << out << "  ";
	}
	cout << endl;

	//output of even numbers
	cout << "\tOdd Numbers: ";
	while (!ODD.EmptyStack())
	{
		out = ODD.PopStack(); cout << out << "  ";
	}
	cout << endl;


	system("pause");
	return 0; 
}
//--------------------------------OUTPUT------------------------------------
//All Numbers: 18  11  80  99  17  19  54  15  54  83
//		Even Numbers: 18  80  54  54
//		Odd Numbers: 11  99  17  19  15  83
//Press any key to continue . . .
//--------------------------------------------------------------------------