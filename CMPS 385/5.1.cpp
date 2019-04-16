//Name: Robin Horan
//Homework #: 5.1
//Course: CMPS 385
//Due Date: March 8, 2017
//Professor: Ray Ahmadnia
//Purpose: 
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include "STACKPAC.h"
#include <cstring>
#include <string>

using namespace std;

int main()
{
	STACK<int, 10> POST;
	string in;
	int con, x, y, z;
	char cont;

	do
	{
		POST.ClearStack();

		cout << "Enter a postfix expression: ";
		cin >> in;

		do
		{
			if (isdigit(in[0]))
			{
				con = stoi(in);
				POST.PushStack(con);
			}
			else if (!isdigit(in[0]))
			{
				cout << "\tEnter the value of" << in << ": "; cin >> con;
				POST.PushStack(con);
			}
			else
			{
				y = POST.PopStack();
				x = POST.PopStack();
				switch (in[0])
				{
				case '+': z = x + y; POST.PushStack(z); break;
				case '-': z = x - y; POST.PushStack(z); break;
				case '*': z = x * y; POST.PushStack(z); break;
				case '/': z = x / y; POST.PushStack(z); break;
				default: break;
				}
			}
			cin >> in;
		} while (in != "$");


		cout << "\tValue = " << POST.PopStack() << endl;

		cout << "\t\tCONTINUE(y/n)?"; cin >> cont;
		cont = toupper(cont);
		cin.ignore();
	} while (cont == 'Y');

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter a postfix expression: tom jerry + 234 + $
//	Enter the value of tom: 10
//  Enter the value of jerry: 5
//		Value = 249
//		CONTINUE(y/n)? y
//Enter a postfix expression: 12 xyz 13 bill 14 + + + $
//	Enter the value of xyz: 6
//	Enter the value of bill: 10
//		Value = 55
//		CONTINUE(y/n)? n
//Press any key to continue . . .
//--------------------------------------------------------------------------