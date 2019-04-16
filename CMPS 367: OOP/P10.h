#ifndef P10
#define P10
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

template <class T, int n>
class ONE
{
private: T x[n];
public:
	void Read()
	{
		for (int i = 0; i < n; i++)
		{
			cin >> x[i];
		}
	}
	void Display()
	{
		for (int i = 0; i < n; i++)
		{
			cout << x[i] << " ";
		}
		cout << endl;
	}
	void SortArray()
	{
		sort(x, x + n);
	}
};
#endif