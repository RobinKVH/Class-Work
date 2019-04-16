//Name: Robin Horan
//Homework 8.2
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
	char key[6][10] = {
		{ 1,  12, 12, 12, 12, 12, 12, 12, 12, 12},
		{ 2,  2,  12, 12, 12, 12, 2,  12, 12, 12},
		{ 12, 12, 3,  4,  12, 12, 12, 5,  5,  5},
		{ 6,  6,  12, 12, 12, 12, 6,  12, 12, 12},
		{ 12, 12, 5,  5,  7,  8,  12, 5,  5,  5},
		{ 9,  10, 12, 12, 12, 12, 11, 12, 12, 12}};

	S.ClearStack();
	TEMP.ClearStack();

	//asking input
	cout << "Enter Input String: ";
	cin >> input;
	length = input.length();

	//initial startup of stack
	S.PushStack('$');
	S.PushStack('S');
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
		case 'S': ix = 0; break;
		case 'E': ix = 1; break;
		case 'Q': ix = 2; break;
		case 'T': ix = 3; break;
		case 'R': ix = 4; break;
		case 'F': ix = 5; break;
		default: break;
		}

		//selecting coloumn of table
		switch (y)
		{
		case 'a': iy = 0; break;
		case 'b': iy = 1; break;
		case '+': iy = 2; break;
		case '-': iy = 3; break;
		case '*': iy = 4; break;
		case '/': iy = 5; break;
		case '(': iy = 6; break;
		case ')': iy = 7; break;
		case '$': iy = 8; break;
		case '=': iy = 9; break;
		default: break;
		}

		table = key[ix][iy];

		//pushing into stack
		switch (table)
		{
		case 1: S.PushStack('E'); S.PushStack('='); S.PushStack('a'); break;
		case 2: S.PushStack('Q'); S.PushStack('T'); break;
		case 3: S.PushStack('Q'); S.PushStack('T'); S.PushStack('+'); break;
		case 4: S.PushStack('Q'); S.PushStack('T'); S.PushStack('-'); break;
		case 5: break;
		case 6: S.PushStack('R'); S.PushStack('F'); break;
		case 7: S.PushStack('R'); S.PushStack('F'); S.PushStack('*'); break;
		case 8: S.PushStack('R'); S.PushStack('F'); S.PushStack('/'); break;
		case 9: S.PushStack('a'); break;
		case 10: S.PushStack('b'); break;
		case 11: S.PushStack(')'); S.PushStack('E'); S.PushStack('('); break;
		case 12: cout << "\t\tINPUT IS REJECTED" << endl; system("pause"); return 0;
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
//Enter Input String : a = (a + a)*b$
//[S, a]
//Content of Stack : $E = a
//MATCH
//MATCH
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
//[F, b]
//Content of Stack : $QRb
//MATCH
//[R, $]
//Content of Stack : $Q
//[Q, $]
//Content of Stack : $
//MATCH
//		Output : a = (a + a)*b$
//Press any key to continue . . .

//Enter Input String : a = a*(b - a)$
//[S, a]
//Content of Stack : $E = a
//MATCH
//MATCH
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
//[E, b]
//Content of Stack : $QR)QT
//[T, b]
//Content of Stack : $QR)QRF
//[F, b]
//Content of Stack : $QR)QRb
//MATCH
//[R, -]
//Content of Stack : $QR)Q
//[Q, -]
//Content of Stack : $QR)QT -
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
//[R, $]
//Content of Stack : $Q
//[Q, $]
//Content of Stack : $
//MATCH
//		Output : a = a*(b - a)$
//Press any key to continue . . .

//Enter Input String : a = (a + a)b$
//[S, a]
//Content of Stack : $E = a
//MATCH
//MATCH
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
//[R, b]
//		INPUT IS REJECTED
//Press any key to continue . . .
//--------------------------------------------------------------------------