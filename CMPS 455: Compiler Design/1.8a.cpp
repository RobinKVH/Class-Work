//Name: Robin Horan
//Homework 8.1
//Course: CPSC 455
//Due Date: November 1, 2017
//Professor: Ray Ahmadnia
//Purpose: Predictive Parsing Table
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include "STACKPAC.h"
#include <cstring>
#include <string>

using namespace std;
int main()
{
	STACK<char, 20> S;
	STACK<char, 20> TEMP;
	char x, y, temp; //x and y are row and coloumn in characters
	int ix, iy, table, length; //ix and iy are row and cloumn in number form
	int count = 0;
	string input, output;
	char key[5][8] = {
		{1 , 10, 10 , 10 , 10, 1, 10, 10},
		{10, 2 , 3, 10, 10, 10, 4, 4},
		{5, 10, 10, 10, 10, 5, 10, 10},
		{10, 4, 4, 6, 7, 10, 4, 4},
		{8, 10, 10, 10, 10, 9, 10, 10}};
	
	S.ClearStack();
	TEMP.ClearStack();

	//asking input
	cout << "Enter Input String: ";
	cin >> input;
	length = input.length();

	//initial startup of stack
	S.PushStack('$');
	S.PushStack('E');
	x = S.PopStack();
	y = input[count];

	
	do
	{
		//checks for consecutive match
		if (x == input[count])
		{
			output = output + y;
			count++;
			y = input[count];
			x = S.PopStack();
			cout << "MATCH" << endl;
		}

		cout << "[" << x << "," << y << "]" << endl;
		//selecting row of table
		switch (x)
		{
		case 'E': ix = 0; break;
		case 'Q': ix = 1; break;
		case 'T': ix = 2; break;
		case 'R': ix = 3; break;
		case 'F': ix = 4; break;
		default: break;
		}

		//selecting coloumn of table
		switch (y)
		{
		case 'a': iy = 0; break;
		case '+': iy = 1; break;
		case '-': iy = 2; break;
		case '*': iy = 3; break;
		case '/': iy = 4; break;
		case '(': iy = 5; break;
		case ')': iy = 6; break;
		case '$': iy = 7; break;
		default: break;
		}

		table = key[ix][iy];

		//pushing into stack
		switch (table)
		{
		case 1: S.PushStack('Q'); S.PushStack('T'); break;
		case 2: S.PushStack('Q'); S.PushStack('T'); S.PushStack('+'); break;
		case 3: S.PushStack('Q'); S.PushStack('T'); S.PushStack('-'); break;
		case 4: break;
		case 5: S.PushStack('R'); S.PushStack('F'); break;
		case 6: S.PushStack('R'); S.PushStack('F'); S.PushStack('*'); break;
		case 7: S.PushStack('R'); S.PushStack('F'); S.PushStack('/'); break;
		case 8: S.PushStack('a'); break;
		case 9: S.PushStack(')'); S.PushStack('E'); S.PushStack('('); break;
		case 10: cout << "\t\tINPUT IS REJECTED" << endl; system("pause"); return 0;
		default: break;
		}

		//displaying content of the stack
		cout << "Content of Stack: ";
		do
		{
			temp = S.PopStack();
			TEMP.PushStack(temp);
		} while (S.EmptyStack() != true);

		do
		{
			temp = TEMP.PopStack();
			cout << temp;
			S.PushStack(temp);
		} while (TEMP.EmptyStack() != true);
		cout << endl;

		x = S.PopStack();

		//accepting match of input
		if (x == input[count])
		{
			output = output + y;
			count++;
			y = input[count];
			x = S.PopStack();
			cout << "MATCH" << endl;
		}
	} while (length - count != 0);

	cout << "\t\tOutput: " << output << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter Input String : (a + a)*a$
//[E, (]
//Content of Stack : $QT
//[T, (]
//Content of Stack : $QRF
//[F, (]
//Content of Stack : $QR)E(
//MATCH
//[E, a]
//Content of Stack : $QR)QT
//[T, a]
//Content of Stack : $QR)QRF
//[F, a]
//Content of Stack : $QR)QRa
//MATCH
//[R, +]
//Content of Stack : $QR)Q
//[Q, +]
//Content of Stack : $QR)QT +
//MATCH
//[T, a]
//Content of Stack : $QR)QRF
//[F, a]
//Content of Stack : $QR)QRa
//MATCH
//[R, )]
//Content of Stack : $QR)Q
//[Q, )]
//Content of Stack : $QR)
//MATCH
//[R, *]
//Content of Stack : $QRF*
//MATCH
//[F, a]
//Content of Stack : $QRa
//MATCH
//[R, $]
//Content of Stack : $Q
//[Q, $]
//Content of Stack : $
//MATCH
//		Output : (a + a)*a$
//Press any key to continue . . .


//Enter Input String : a*(a / a)$
//[E, a]
//Content of Stack : $QT
//[T, a]
//Content of Stack : $QRF
//[F, a]
//Content of Stack : $QRa
//MATCH
//[R, *]
//Content of Stack : $QRF*
//MATCH
//[F, (]
//Content of Stack : $QR)E(
//MATCH
//[E, a]
//Content of Stack : $QR)QT
//[T, a]
//Content of Stack : $QR)QRF
//[F, a]
//Content of Stack : $QR)QRa
//MATCH
//[R, / ]
//Content of Stack : $QR)QRF /
//MATCH
//[F, a]
//Content of Stack : $QR)QRa
//MATCH
//[R, )]
//Content of Stack : $QR)Q
//[Q, )]
//Content of Stack : $QR)
//MATCH
//[R, $]
//Content of Stack : $Q
//[Q, $]
//Content of Stack : $
//MATCH
//		Output : a*(a / a)$
//Press any key to continue . . .


//Enter Input String : a(a + a)$
//[E, a]
//Content of Stack : $QT
//[T, a]
//Content of Stack : $QRF
//[F, a]
//Content of Stack : $QRa
//MATCH
//[R, (]
//		INPUT IS REJECTED
//Press any key to continue . . .
//--------------------------------------------------------------------------