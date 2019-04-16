//Name: Robin Horan
//Homework #: 4.2
//Course: CMPS 385
//Due Date: March 1, 2017
//Professor: Ray Ahmadnia
//Purpose: postfix solution
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include "STACKPAC.h"

using namespace std;

int main()
{
	STACK<int, 20> POST;
	char in, cont;
	int con, x, y, z;
	
	do
	{
		POST.ClearStack();

		cout << "Enter a postfix expression: ";
		cin.get(in);
		do
		{
			//converting char to int
			con = in - '0';
			if (isdigit(in))
			{
				POST.PushStack(con);
			}
			else
			{
				x = POST.PopStack();
				y = POST.PopStack();
				switch (in)
				{
				case '+': z = x + y; POST.PushStack(z); break;
				case '-': z = x - y; POST.PushStack(z); break;
				case '*': z = x * y; POST.PushStack(z); break;
				case '/': z = x / y; POST.PushStack(z); break;
				default: break;
				}
			}
			cin.get(in);
		} while (in != '$');

		cout << "\tValue = " << POST.PopStack() + 2 << endl;

		cout << "\t\tCONTINUE(y/n)?"; cin >> cont;
		cont = toupper(cont);
		cin.ignore();

	} while (cont == 'Y');

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter a postfix expression: 12 * 3 + 4 - $
//	Value = 1
//		CONTINUE(y/n)? y
//Enter a postfix expression: 11 + 2 * 3 - 4 + $
//	Value = 5
//		CONTINUE(y/n)? n
//Press any key to continue . . .
//--------------------------------------------------------------------------