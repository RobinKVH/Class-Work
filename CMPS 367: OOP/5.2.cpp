//Name: Robin Horan
//Homework #: 5.2
//Course: CMPS 367
//Due Date: March 21, 2016
//Professor: Ray Ahmadnia
//Purpose: Using a template function to display arrays pre and post sort
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

template <class T> void Show(T x[], int n);

int main()
{
	//declaring variables
	int a[5] = { 2,5,9,8,7 };
	char c[6] = { 'a','y','h','p','q','r' };
	string s[5] = { "Mon","Tue","Wed","Thr","Fri" };

	//displaying original arrays
	cout << "This is the original array a: ";  Show(a, 5);
	cout << "This is the original array c: ";  Show(c, 6);
	cout << "This is the original array s: ";  Show(s, 5);

	//sorting the arrays
	sort(a, a + 5);
	sort(c, c + 6);
	sort(s, s + 5);

	//displaying sorted arrays
	cout << "This is the sorted array a: ";  Show(a, 5);
	cout << "This is the sorted array c: ";  Show(c, 6);
	cout << "This is the sorted array s: ";  Show(s, 5);

	system("pause");
	return 0;
}
template <class T>
void Show(T x[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << x[i] << " ";
	}
	cout << endl;
}
//--------------------------------OUTPUT------------------------------------
//This is the original array a: 2 5 9 8 7
//This is the original array c: a y h p q r
//This is the original array s: Mon Tue Wed Thr Fri
//This is the sorted array a: 2 5 7 8 9
//This is the sorted array c: a h p q r y
//This is the sorted array s: Fri Mon Thr Tue Wed
//Press any key to continue . . .
//--------------------------------------------------------------------------