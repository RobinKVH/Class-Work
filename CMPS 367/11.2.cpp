//Name: Robin Horan
//Homework #: 11.2
//Course: CMPS 367
//Due Date: May 9, 2016
//Professor: Ray Ahmadnia
//Purpose: Practice with overloading operators
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
using namespace std;

class POINT
{
private: int x, y;
public:
	void Read(char p)
	{
		cout << "Enter the x an y coordinates of point " << p << ":";
		cin >> x >> y;
	}
	friend POINT operator+(POINT A, POINT B)
	{
		POINT C;
		C.x = A.x + B.x;
		C.y = A.y + B.y;
		return C;
	}
	friend POINT operator-(POINT A, POINT B)
	{
		POINT C;
		C.x = A.x - B.x;
		C.y = A.y - B.y;
		return C;
	}
	friend void Display(POINT A)
	{
		cout << "(" << A.x << "," << A.y << ")";
	}
};

int main()
{
	POINT A;
	POINT B;
	POINT C;
	POINT D;

	A.Read('A');
	B.Read('B');
	C = A + B;
	D = A - B;

	Display(A); cout << " + ";
	Display(B); cout << " = ";
	Display(C); cout << endl;

	Display(A); cout << " - ";
	Display(B); cout << " = ";
	Display(D); cout << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter the x an y coordinates of point A: 10 20
//Enter the x an y coordinates of point B: 30 40
//(10, 20) + (30, 40) = (40, 60)
//(10, 20) - (30, 40) = (-20, -20)
//Press any key to continue . . .
//--------------------------------------------------------------------------