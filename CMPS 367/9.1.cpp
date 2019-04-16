//Name: Robin Horan
//Homework #: 9.1
//Course: CMPS 367
//Due Date: April 25, 2016
//Professor: Ray Ahmadnia
//Purpose: Practice with template classes
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;

template <class T, int n>
class ONE
{
private: T x[n];
public:
	ONE(string fname);
	void Display();
	void SortArray();
};

int main()
{
	ONE <char, 4> P("9.1File1.txt");
	ONE <int, 5> Q("9.1File2.txt");
	ONE <string, 5> R("9.1File3.txt");

	cout << "Original Characters: ";
	P.Display();
	P.SortArray();
	cout << "Sorted Characters: ";
	P.Display();

	cout << "Original Integers: ";
	Q.Display();
	Q.SortArray();
	cout << "Sorted Inegers: ";
	Q.Display();

	cout << "Original Names: ";
	R.Display();
	R.SortArray();
	cout << "Sorted Names: ";
	R.Display();


	system("pause");
	return 0;
}

template <class T, int n>
ONE<T, n>::ONE(string fname)
{
	fstream f;
	f.open(fname, ios::in);
	for (int i = 0; i < n; i++)
	{
		f >> x[i];
	}
	f.close();
}
template <class T, int n>
void ONE<T, n>::Display()
{
	for (int i = 0; i < n; i++)
	{
		cout << x[i] << " ";
	}
	cout << endl;
}
template <class T, int n>
void ONE<T, n>::SortArray()
{
	sort(x, x + n);
}
//--------------------------------OUTPUT------------------------------------
//Original Characters: l o v e
//Sorted Characters: e l o v
//Original Integers: 40 50 30 10 20
//Sorted Inegers: 10 20 30 40 50
//Original Names: Tom Bob Mary John Adam
//Sorted Names: Adam Bob John Mary Tom
//Press any key to continue . . .
//--------------------------------------------------------------------------