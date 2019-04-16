//Name: Robin Horan
//Homework #: 11.1
//Course: CMPS 367
//Due Date: May 9, 2016
//Professor: Ray Ahmadnia
//Purpose: Practice with overloading operators
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

class FRACT
{
private: int n, d;
public: 
	void ReadFract()
	{
		cin >> n; cin.ignore(); cin >> d;
	}
	friend FRACT operator+(FRACT A, FRACT B)
	{
		FRACT r;
		r.n = (A.n*B.d) + (B.n*A.d);
		r.d = A.d * B.d;
		return r;
	}
	friend FRACT operator-(FRACT A, FRACT B)
	{
		FRACT r;
		r.n = (A.n*B.d) - (B.n*A.d);
		r.d = A.d * B.d;
		return r;
	}
	friend FRACT operator*(FRACT A, FRACT B)
	{
		FRACT r;
		r.n = A.n * B.n;
		r.d = A.d * B.d;
		return r;
	}
	friend FRACT operator/(FRACT A, FRACT B)
	{
		FRACT r;
		r.n = A.n * B.d;
		r.d = A.d * B.n;
		return r;
	}
	friend void Display(FRACT A)
	{
		cout << " (" << A.n << '/' << A.d << ") ";
	}
};

int main()
{
	FRACT A;
	FRACT B;
	FRACT C;
	FRACT D;
	FRACT E;
	FRACT F;

	cout << "Enter a fraction: "; A.ReadFract();
	cout << "Enter another fraction: "; B.ReadFract();

	C = A + B;
	Display(A); cout << '+'; Display(B); cout << '='; Display(C); cout << endl;

	D = A - B;
	Display(A); cout << '-'; Display(B); cout << '='; Display(D); cout << endl;

	E = A * B;
	Display(A); cout << '*'; Display(B); cout << '='; Display(E); cout << endl;

	F = A / B;
	Display(A); cout << '/'; Display(B); cout << '='; Display(F); cout << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter a fraction: 4/5
//Enter another fraction: 6/7
//(4/5) + (6/7) = (58/35)
//(4/5) - (6/7) = (-2/35)
//(4/5) * (6/7) = (24/35)
//(4/5) / (6/7) = (28/30)
//Press any key to continue . . .
//--------------------------------------------------------------------------