//Name: Robin Horan
//Homework #: 8.2
//Course: CMPS 367
//Due Date: April 18, 2016
//Professor: Ray Ahmadnia
//Purpose: Practice with template classes 
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

template <class T, int n>
class ONE
{
private: T a[n];
public: 
	ONE()
	{
		cout << "Enter five names: ";
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
	}
	ONE(int x)
	{
		cout << "Enter 4 integer numbers: ";
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
	}
	void Display()
	{
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	void SortArray()
	{
		sort(a, a + n);
	}
	~ONE() {}
};
int main()
{
	ONE <string, 5> name;
	ONE <int, 4> num(1);

	cout << endl;
	cout << "This is the list of all names: ";
	name.Display();
	cout << "This is the list of all numbers: ";
	num.Display();

	name.SortArray();
	num.SortArray();

	cout << endl;
	cout << "This is the sorted form of all names: ";
	name.Display();
	cout << "This is the sorted form of all numbers: ";
	num.Display();

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter 5 names: John Adam Mary Tom Bill
//Enter 4 integer numbers: 2011 1920 2000 1948
//
//This is the list of all names: John Adam Mary Tom Bill
//This is the list of all numbers: 2011 1920 2000 1948
//
//This is the sorted form of all names: Adam Bill John Mary Tom
//This is the sorted form of all numbers: 1920 1948 2000 2011
//Press any key to continue . . .
//--------------------------------------------------------------------------