//Name: Robin Horan
//Homework #: 3.1
//Course: CMPS 385
//Due Date: February 22, 2017
//Professor: Ray Ahmadnia
//Purpose: Practice stacks and number conversion
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

template<class T>
class STACK
{
private: T a[20];
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
			if (counter == 20)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		void PushStack(T x)
		{
			a[counter] = x; counter++;
		}
		T PopStack()
		{
			counter--; return a[counter];
		}
		~STACK() {}
};

int main()
{
	STACK<int> B;
	STACK<int> H;
	STACK<char> O;
	int dec, bin, hex, oct, rem, pop;
	char out;

	cout << "Enter a positive int number: "; cin >> dec;
	bin = dec;
	oct = dec;
	hex = dec;

	//converting to binary
	B.ClearStack();
	while (bin != 0)
	{
		rem = bin % 2;
		B.PushStack(rem);
		bin = bin / 2;
	}

	cout << dec << " at base 2 is ";
	while (!B.EmptyStack())
	{
		pop = B.PopStack(); cout << pop;
	}
	cout << endl;

	//converting to octal
	O.ClearStack();
	while (oct != 0)
	{
		rem = oct % 8;
		O.PushStack(rem);
		oct = oct / 8;
	}

	cout << dec << " at base 8 is ";
	while (!O.EmptyStack())
	{
		pop = O.PopStack(); cout << pop;
	}
	cout << endl;

	//converting to hexadecimal
	H.ClearStack();
	while (hex != 0)
	{
		rem = hex % 16;
		switch (rem)
		{
		case 10: H.PushStack('A'); break;
		case 11: H.PushStack('B'); break;
		case 12: H.PushStack('C'); break;
		case 13: H.PushStack('D'); break;
		case 14: H.PushStack('E'); break;
		case 15: H.PushStack('F'); break;
		default: H.PushStack(char(rem+48)); break;
		}
		hex = hex / 16;
	}

	cout << dec << " in base 16 is ";
	while (!H.EmptyStack())
	{
		out = H.PopStack(); cout << out;
	}
	cout << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter a positive int number: 163
//163 at base 2 is 10100011
//163 at base 8 is 243
//163 in base 16 is A3
//Press any key to continue . . .
//--------------------------------------------------------------------------