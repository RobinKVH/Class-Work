//Name: Robin Horan
//Homework #: 5.2
//Course: CMPS 385
//Due Date: March 8, 2017
//Professor: Ray Ahmadnia
//Purpose: stack manipulation
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include "STACKPAC.h"

using namespace std;

int main()
{
	STACK<int, 10> S, C, TEMPA;
	int x, y;

	S.ClearStack();
	C.ClearStack();
	TEMPA.ClearStack();

	srand(time(0));

	while (!S.FullStack())
	{
		x = rand() % 101;

		S.PushStack(x);

		TEMPA.PushStack(x);
		y = TEMPA.PopStack();
		C.PushStack(y);
	}

	cout << "Stack S\t\tStack C" << endl;;
	while (!S.EmptyStack())
	{
		cout << "   " << S.PopStack() << "\t\t   " << C.PopStack() << endl;
	}
	cout << "\n\n";

	//b)-------------------------------------------------------------------------------------

	STACK<string, 12> ORG, REV, TEMPB;
	string month[12] = { "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC" };
	int count = 0;
	string hold = " ";

	ORG.ClearStack();
	REV.ClearStack();
	TEMPB.ClearStack();

	while (!REV.FullStack())
	{
		REV.PushStack(month[count]);
		TEMPB.PushStack(month[count]);

		count++;
	}

	while (!ORG.FullStack())
	{
		ORG.PushStack(TEMPB.PopStack());
	}

	cout << "Name of months from JAN to DEC: ";
	while (!ORG.EmptyStack())
	{
		cout << ORG.PopStack() << " ";
	}
	cout << endl;

	cout << "Name of months from DEC to Jan: ";
	while (!REV.EmptyStack())
	{
		cout << REV.PopStack() << " ";
	}
	cout << "\n\n\n";

	//c)-------------------------------------------------------------------------------------

	STACK<char, 15> Q, V, U, L;
	char in, u, l, v;

	Q.ClearStack();
	V.ClearStack();
	U.ClearStack();
	L.ClearStack();

	cout << "Enter a sentence: ";

	while (!Q.FullStack())
	{
		cin.get(in);
		if (in == '\n') { break; }
		Q.PushStack(in);

	}

	while (!Q.EmptyStack())
	{
		in = Q.PopStack();
		if (isupper(in))
		{
			U.PushStack(in);
		}

		if (islower(in))
		{
			L.PushStack(in);
		}

		if (in == 'A' || in == 'E' || in == 'I' || in == 'O' || in == 'U' || in == 'a' || in == 'e' || in == 'i' || in == 'o' || in == 'u')
		{
			V.PushStack(in);
		}
	}

	cout << "Uppercase\tLowercase\tVowels" << endl;
	while (!L.EmptyStack())
	{
		u = U.PopStack();
		l = L.PopStack();
		v = V.PopStack();

		if (u <= 'A' || u >= 'z')
		{
			u = ' ';
		}

		if (l <= 'A' || l >= 'z')
		{
			l = ' ';
		}

		if (v <= 'A' || v >= 'z')
		{
			v = ' ';
		}
		cout << "    " << u << " \t\t   " << l << "\t\t  " << v << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Stack S         Stack C
//	17              17
//	54              54
//	90              90
//	4               4
//	18              18
//	28              28
//	70              70
//	98              98
//	85              85
//	1               1
//
//
//Name of months from JAN to DEC: JAN FEB MAR APR MAY JUN JUL AUG SEP OCT NOV DEC
//Name of months from DEC to Jan: DEC NOV OCT SEP AUG JUL JUN MAY APR MAR FEB JAN
//
//
//Enter a sentence: Exam No One
//Uppercase       Lowercase       Vowels
//	  E              x              E
//	  N              a              a
//	  O              m              o
//					 o              O
//					 n              e
//					 e
//
//Press any key to continue . . .
//--------------------------------------------------------------------------