//Name: Robin Horan
//Homework 3.1
//Course: CMPS 371
//Due Date: Januaty 12, 2018
//Professor: Ray Ahmadnia
//--------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	short a, b, c, d, e, f, x, y;
	short one, two, three, four;//one - two / three - four

	cout << "This program solves the system" << endl;
	cout << "\taX + bY = c" << endl;
	cout << "\tdX + eY = f" << endl;
	cout << "Enter the values of a, b, and c: "; cin >> a >> b >> c;
	cout << "Enter the values of d, e, and f: "; cin >> d >> e >> f;

	_asm
	{
		mov ax, c; 
		imul e;
		mov one, ax; // one = ce
		mov ax, b;
		imul f;
		mov two, ax; //two = bf
		mov ax, a;
		imul e;
		mov three, ax; // three = ae
		mov ax, b;
		imul d;
		mov four, ax; //four = bd
		mov ax, one;
		mov bx, two;
		sub ax, bx;
		mov cx, three;
		mov dx, four;
		sub cx, dx;
		mov three, cx;
		cwd;
		idiv cx;
		mov x, ax;

		mov ax, a;
		imul f;
		mov one, ax;
		mov ax, c;
		imul d;
		mov two, ax;
		mov ax, a;
		imul e;
		mov three, ax;
		mov ax, b;
		imul d;
		mov four, ax;
		mov ax, one;
		mov bx, two;
		sub ax, bx;
		mov cx, three;
		mov dx, four;
		sub cx, dx;
		cwd;
		idiv cx;
		mov y, ax;
	}

	cout << "\tX = " << x << endl;
	cout << "\tY = " << y << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//This program solves the system
//		aX + bY = c
//		dX + eY = f
//Enter the values of a, b, and c: 3 1 1
//Enter the values of d, e, and f: 1 - 2 5
//		X = 1
//		Y = -2
//Press any key to continue . . .
//--------------------------------------------------------------------------