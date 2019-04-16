//Name: Robin Horan
//Homework #: 4.3
//Course: CMPS 385
//Due Date: March 1, 2017
//Professor: Ray Ahmadnia
//Purpose: palindrome checker
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include "STACKPAC.h"

using namespace std;

int main()
{
	STACK<char, 50> ONE;
	STACK<char, 50> TWO;
	STACK<char, 50> TEMP;
	char in, trans, cr1, cr2, cont;

	do
	{
		ONE.ClearStack();
		TWO.ClearStack();
		TEMP.ClearStack();

		cout << "Enter a sentence: ";

		while (!ONE.FullStack())
		{
			cin.get(in);
			if (in == '\n') { break; }

			if (isalpha(in) && in != ' ')
			{
				ONE.PushStack(in);
				TEMP.PushStack(in);
				trans = TEMP.PopStack();
				TWO.PushStack(trans);
			}
		}

		while (!ONE.EmptyStack())
		{
			cr1 = ONE.PopStack();
			cr2 = TWO.PopStack();
			cr1 = toupper(cr1); cr2 = toupper(cr2);
			if (cr1 != cr2) { break; }
		}

		if (ONE.EmptyStack() == true)
		{
			cout << "\tIt is a PALINDROME" << endl;
		}
		else
		{
			cout << "\tIt is not a PALINDROME" << endl;
		}
		cout << "CONTINUE(y/n)?"; cin >> cont;
		cont = toupper(cont);

		cin.ignore();
	} while (cont == 'Y');
	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter a sentence: Too bad, I hid a boot
//		It is a PALINDROME
//CONTINUE(y/n)? y
//Enter a sentence: Do Geese see God ?
//		It is a PALINDROME
//CONTINUE(y/n)? n
//Press any key to continue . . .
//--------------------------------------------------------------------------