//Name: Robin Horan
//Homework #: 1.2
//Course: CMPS 385
//Due Date: February 7, 2017
//Professor: Ray Ahmadnia
//Purpose: Practice with arrays, functions, and file processing
//--------------------------------------------------------------------------
#include <iomanip>
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

template<class T> void Show(T x[], int n);
void String2Upper(string x[], int n);
void Char2Upper(char x[], int n);

int main()
{
	int a[5] = { 9, 7, 8, 1, 6 };
	string s[3] = { "Winners", "never", "quit" };
	char c[5] = { 'e', 'o', 'u' , 'a', 'i' };

	cout << "Original array a: "; Show(a, 5);
	cout << "Original array s: "; Show(s, 3);
	cout << "Original array c: "; Show(c, 5);

	String2Upper(s, 3);
	Char2Upper(c, 5);

	sort(a, a + 5);
	sort(s, s + 3);
	sort(c, c + 5);

	cout << "\nSorted array a: "; Show(a, 5);
	cout << "Sorted array s: "; Show(s, 3);
	cout << "Sorted array c: "; Show(c, 5);

	system("pause");
	return 0;
}

template<class T>
void Show(T x[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << x[i] << " ";
	}
	cout << endl;
}

void String2Upper(string x[], int n)
{
	for (int i = 0; i < n; i++)
	{
		transform(x[i].begin(), x[i].end(), x[i].begin(), ::toupper);
	}
}

void Char2Upper(char x[], int n)
{
	for (int i = 0; i < n; i++)
	{
		x[i] = toupper(x[i]);
	}
}
//--------------------------------OUTPUT------------------------------------
//Original array a: 9 7 8 1 6
//Original array s: Winners never quit
//Original array c: e o u a i
//
//Sorted array a: 1 6 7 8 9
//Sorted array s: NEVER QUIT WINNERS
//Sorted array c: A E I O U
//Press any key to continue . . .
//--------------------------------------------------------------------------