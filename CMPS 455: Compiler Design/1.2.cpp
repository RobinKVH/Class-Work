//Name: Robin Horan
//Homework 1.2
//Course: CPSC 455
//Due Date: August 13, 2017
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

		cout << "Enter a postfix expression with a $ at the end: ";
		cin >> in;

		do
		{
			if (isdigit(in[0]))
			{
				con = stoi(in);
				POST.PushStack(con);
			}
			else if (isalpha(in[0]))
			{
				cout << "\tEnter the the value of " << in << ": "; 
				cin >> con;
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

		cout << "\t\tFinal Value = " << POST.PopStack() << endl;

		cout << "\t\t\tCONTINUE? (y/n) : "; cin >> cont;
		cont = toupper(cont);
		cin.ignore();
	} while (cont == 'Y');

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter a postfix expression with a $ at the end: ab 22 * c + ab + $
//	Enter the value of ab: 2
//	Enter the value of c: 4
//	Enter the value of ab: 2
//		Final Value = 50
//	CONTINUE ? (y / n): y
//Enter a postfix expression with a $ at the end: tom jerry 123 + tom * - $
//	Enter the value of tom: 2
//	Enter the value of jerry: 3
//	Enter the value of tom: 2
//		Final Value = -250
//	CONTINUE ? (y / n): n
//--------------------------------------------------------------------------