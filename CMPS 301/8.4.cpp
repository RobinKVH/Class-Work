//Name: Robin Horan
//Course: CMPS 301
//Due Date: November 4, 2015
//Professor: Ray Ahmadnia
//Purpose: Using switch statement to create fration calculator
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
	//declaring varaibles
	int a, b, c, d, amount;
	char operation;

	//asking for size of loop
	cout << "How many problems would you like to practice? "; cin >> amount;

	//starting loop
	for (int i = 1; i <= amount; i++)
	{
		//asking input
		cout << "Problem #" << i << endl;
		cout << "\tEnter a fraction: "; cin >> a; cin.ignore(); cin >> b;
		cout << "\tEnter another fraction: "; cin >> c; cin.ignore(); cin >> d;
		cout << "\tEnter an operation(+,-,*,/): "; cin >> operation;

		//calculating
		switch (operation)
		{
		case '+': cout << "\t\t" << a << "/" << b << " " << operation << " " << c << "/" << d << " = " << (a + c)*d << "/" << b*d << endl; break;
		case '-': cout << "\t\t" << a << "/" << b << " " << operation << " " << c << "/" << d << " = " << (a - c)*d << "/" << b*d << endl; break;
		case '*': cout << "\t\t" << a << "/" << b << " " << operation << " " << c << "/" << d << " = " << a*c << "/" << b*d << endl; break;
		case '/': cout << "\t\t" << a << "/" << b << " " << operation << " " << c << "/" << d << " = " << a*d << "/" << b*c << endl; break;
		}
	}

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//How many problems would you like to practice ? 2
//Problem #1
//		Enter a fraction : 2/3
//		Enter another fraction : 4/5
//		Enter an operation(+, -, *, /): *
//			2/3 * 4/5 = 8/15
//Problem #2
//		Enter a fraction : 2/5
//		Enter another fraction : 4/5
//		Enter an operation(+, -, *, /): +
//			2/5 + 4/5 = 30/25
//Press any key to continue . . .
//-------------------------------------------------------------------------------