//Name: Robin Horan
//Homework #: 12.1
//Course: CMPS 385
//Due Date: May 17, 2017
//Professor: Ray Ahmadnia
//Purpose: 
//--------------------------------------------------------------------------
#include <iomanip>
#include <iostream>
using namespace std;

class FRACT
{
private: int n; int d;
public:
	void ReadFraction()
	{
		cin >> n; cin.ignore(); cin >> d;
	}
	friend FRACT operator+ (FRACT p, FRACT q)
	{
		FRACT r;
		r.n = (p.n * q.d) + (q.n * p.d);
		r.d = p.d * q.d;
		return r;
	}
	friend FRACT operator- (FRACT p, FRACT q)
	{
		FRACT r;
		r.n = (p.n * q.d) - (q.n * p.d);
		r.d = p.d * q.d;
		return r;
	}
	friend FRACT operator* (FRACT p, FRACT q)
	{
		FRACT r;
		r.n = p.n * q.n;
		r.d = p.d * q.d;
		return r;
	}
	friend FRACT operator/ (FRACT p, FRACT q)
	{
		FRACT r;
		r.n = p.n * q.d;
		r.d = p.d * q.n;
		return r;
	}
	friend void operator++ (FRACT &p)
	{
		p.n++;
		p.d++;
	}
	friend void operator-- (FRACT &p)
	{
		p.n--;
		p.d--;
	}
	void Display()
	{
		cout << n << "/" << d;
	}
};

int main()
{
	FRACT F1, F2, F3;

	cout << "Enter a fraction: "; F1.ReadFraction();
	cout << "Enter another fraction: "; F2.ReadFraction();

	F3 = F1 + F2;
	cout << "\t"; F1.Display(); cout << " + "; F2.Display(); cout << " = "; F3.Display(); cout << endl;

	F3 = F1 - F2;
	cout << "\t"; F1.Display(); cout << " - "; F2.Display(); cout << " = "; F3.Display(); cout << endl;

	F3 = F1 * F2;
	cout << "\t"; F1.Display(); cout << " * "; F2.Display(); cout << " = "; F3.Display(); cout << endl;

	F3 = F1 / F2;
	cout << "\t"; F1.Display(); cout << " / "; F2.Display(); cout << " = "; F3.Display(); cout << endl;

	cout << "\t"; F2.Display(); cout << " ++";
	++F2; cout << " = "; F2.Display(); cout << endl;

	cout << "\t"; F1.Display(); cout << " --";
	--F1; cout << " = "; F1.Display(); cout << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter a fraction: 4/5
//Enter another fraction: 6/7
//	4/5 + 6/7 = 58/35
//	4/5 - 6/7 = -2/35
//	4/5 * 6/7 = 24/35
//	4/5 / 6/7 = 28/30
//	6/7 ++ = 7/8
//	4/5 -- = 3/4
//Press any key to continue . . .
//--------------------------------------------------------------------------