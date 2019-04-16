//Name: Robin Horan
//Homework 1.1
//Course: CPSC 455
//Due Date: August 6, 2017
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
	char in;
	int con, x, y, z;
	char cont;

	do
	{
		POST.ClearStack();

		cout << "Enter a postfix expression with a $ at the end: ";
		cin.get(in);
		do
		{
			if (!isdigit(in))
			{
				cout << "\tEnter the the value of " << in << ":"; cin >> con;
				POST.PushStack(con);
			}
			else
			{
				y = POST.PopStack();
				x = POST.PopStack();
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
		}while (in != '$');

		cout << "\t\tFinal Value = " << POST.PopStack() << endl;

		cout << "\t\t\tCONTINUE? (y/n) : "; cin >> cont;
		cont = toupper(cont);
		cin.ignore();
	} while (cont == 'Y');

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter a postfix expression with a $ at the end: ab*ac+*$
// Enter the value of a: 2
// Enter the value of b: 3
// Enter the value of a: 2
// Enter the value of c: 4
//	  Final Value = 36
//        CONTINUE? (y/n) : y
//Enter a postfix expression with a $ at the end: beef*++$
// Enter the value of e: 3;
// Enter the value of f: 4;
// Enter the value of e: 3;
// Enter the value of b: 2;
//	  Final Value = 17
//        CONTINUE? (y/n) : n
//--------------------------------------------------------------------------