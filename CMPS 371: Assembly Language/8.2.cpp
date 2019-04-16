//Name: Robin Horan
//Homework 8.2
//Course: CMPS 371
//Due Date: Januaty 26, 2018
//Professor: Ray Ahmadnia
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
using namespace std;

float a, b, c, x1, x2;

void askInput()
{
	cout << "Enter the values of a, b, and c: "; cin >> a >> b >> c;
}

int main()
{
	int four = 4, two = 2, neg = -1;
	_asm
	{
		call askInput;
		fld b;
		fld b;
		fmul;
		fild four;
		fld a;
		fmul;
		fld c;
		fmul;
		fsub;
		fsqrt;
		fld b;
		fild neg;
		fmul;
		fadd;
		fild two;
		fld a;
		fmul;
		fdiv;
		fstp x1;
		fld b;
		fild neg;
		fmul;
		fld b; 
		fld b;
		fmul;
		fld a;
		fild four;
		fmul;
		fld c;
		fmul;
		fsub;
		fsqrt;
		fsub;
		fld a;
		fild two;
		fmul;
		fdiv;
		fstp x2;
	}
	cout << fixed << showpoint << setprecision(2);
	cout << "X1 = " << x1 << endl;
	cout << "X2 = " << x2 << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter the values of a, b, and c: 1 -.88 -3.3
//X1 = 2.31
//X2 = -1.43
//Press any key to continue . . .
//--------------------------------------------------------------------------