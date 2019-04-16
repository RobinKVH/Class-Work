//Name: Robin Horan
//Homework #: 3.3
//Course: CMPS 385
//Due Date: February 22, 2017
//Professor: Ray Ahmadnia
//Purpose: Stack and char manipulation
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

class STACK
{
private: char a[20];
		 int counter;
public:
	void ClearStack()
	{
		counter = 0;
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
	void PushStack(char n)
	{
		a[counter] = n; counter++;
	}
	char PopStack()
	{
		counter--; return a[counter];
	}
	~STACK() {}
};

int main()
{
	STACK UPPER, LOWER, VOWEL;
	char in;

	UPPER.ClearStack();
	LOWER.ClearStack();
	VOWEL.ClearStack();

	cout << "Enter a sentence: ";

	while (!UPPER.FullStack())
	{
		cin.get(in);
		if (in == '\n') { break; }
		if (isupper(in))
		{
			UPPER.PushStack(in);
		}

		if (islower(in))
		{
			LOWER.PushStack(in);
		}

		if (in == 'A' || in == 'E' || in == 'I' || in == 'O' || in == 'U' || in == 'a' || in == 'e' || in == 'i' || in == 'o' || in == 'u')
		{
			VOWEL.PushStack(in);
		}
	}

	cout << "\tUppercase Letters: ";
	while (!UPPER.EmptyStack())
	{
		cout << UPPER.PopStack() << " ";
	}
	cout << endl;

	cout << "\tLowercase Letters: ";
	while (!LOWER.EmptyStack())
	{
		cout << LOWER.PopStack() << " ";
	}
	cout << endl;

	cout << "\tVowels: ";
	while (!VOWEL.EmptyStack())
	{
		cout << VOWEL.PopStack() << " ";
	}
	cout << endl;


	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter a sentence: Today Is Monday
//		Uppercase Letters: M I T
//		Lowercase Letters: y a d n o s y a d o
//		Vowels: a o I a o
//Press any key to continue . . .
//--------------------------------------------------------------------------