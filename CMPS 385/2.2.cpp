//Name: Robin Horan
//Homework #: 2.2
//Course: CMPS 385
//Due Date: February 15, 2017
//Professor: Ray Ahmadnia
//Purpose: Practice with recursive functions and runtime
//--------------------------------------------------------------------------
#include <iostream>
#include <iostream>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;

int sum(int n, int m)
{
	if (n == m)
	{
		return m;
	}
	else
	{
		return (n + sum(n + 1, m));
	}
}

int g(int x)
{
	if (x <= 3)
	{
		return 2;
	}
	else
	{
		return (x + g(x - 1) + g(x - 2)) ;
	}
}

int f(int y)
{
	if (y == 2)
	{
		return pow(3, y);
	}
	else
	{
		return pow(3, y) + f(y - 1);
	}
}

int main()
{
	//part A
	int n, m;
	cout << "Part A: \nEnter n: "; cin >> n;
	cout << "Enter m: "; cin >> m;
	cout << sum(n, m) << "\n\n";

	//part B
	int x;
	cout << "Part B: \nEnter n: "; cin >> x;
	int start = clock();
	cout << g(x) << endl;
	int stop = clock();
	cout << "Runtime = " << (stop - start)/1000 << " seconds\n\n";

	//part C
	int y;
	cout << "Part C:\nEnter n: "; cin >> y;
	cout << f(y) << endl;


	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Part A:
//Enter n: 3
//Enter m: 8
//33
//
//Part B:
//Enter n: 41
//779585027
//Runtime = 3 seconds
//
//Part C:
//Enter n: 10
//88569
//Press any key to continue . . .
//--------------------------------------------------------------------------