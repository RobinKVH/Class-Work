//Name: Robin Horan
//Homework 8.3
//Course: CMPS 371
//Due Date: Januaty 26, 2018
//Professor: Ray Ahmadnia
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
using namespace std;

float sa, vol, r, s, h;

void askSphere()
{
	cout << "Enter sphere radius: "; cin >> r;
}
void displaySphere()
{
	cout << "Volume = " << vol << endl;
	cout << "Surface Area = " << sa << endl;
	cout << "------------------------------" << endl;
}
void askCube()
{
	cout << "Enter cube width: "; cin >> s;
}
void displayCube()
{
	cout << "Volume = " << vol << endl;
	cout << "Surface Area = " << sa << endl;
	cout << "------------------------------" << endl;
}
void askCylinder()
{
	cout << "Enter sphere radius and height: "; cin >> r >> h;
}
void displayCylinder()
{
	cout << "Volume = " << vol << endl;
	cout << "Surface Area = " << sa << endl;
	cout << "------------------------------" << endl;
}
int main()
{
	int two = 2, three = 3, four = 4, six = 6;
	cout << fixed << showpoint << setprecision(2);
	_asm
	{
		call askSphere;
		//circle volume
		fld r;
		fld r;
		fmul;
		fld r;
		fmul;
		fldpi;
		fild four;
		fmul;
		fmul;
		fstp vol;
		//circle surface area
		fld r;
		fld r;
		fmul;
		fldpi;
		fild four;
		fmul;
		fmul;
		fild three;
		fdiv;
		fstp sa;
		call displaySphere;
		call askCube;
		//cube volume
		fld s;
		fld s;
		fmul;
		fld s;
		fmul;
		fstp vol;
		//cube surface area
		fld s;
		fld s;
		fmul;
		fild six; 
		fmul;
		fstp sa;
		call displayCube;
		call askCylinder;
		//cylinder volume
		fld r;
		fld r;
		fmul;
		fldpi;
		fmul;
		fld h;
		fmul;
		fstp vol;
		//cylinder surface area
		fld r;
		fld h;
		fmul;
		fldpi;
		fild two;
		fmul;
		fmul;
		fstp sa;
		call displayCylinder;
	}

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter sphere radius: 4.1
//Volume = 866.09
//Surface Area = 70.41
//------------------------------
//Enter cube width: 6.3
//Volume = 250.05
//Surface Area = 238.14
//------------------------------
//Enter sphere radius and height: 5.4 10.45
//Volume = 957.31
//Surface Area = 354.56
//------------------------------
//Press any key to continue . . .
//--------------------------------------------------------------------------