//Name: Robin Horan
//Course: CMPS 301
//Due Date: December 9, 2015
//Professor: Ray Ahmadnia
//Purpose: Adding, subtracting, and multiplying with user defined functions
//-------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int ComputeSum(int n1, int n2)
{
	return n1 + n2;
}
int ComputeDiff(int n1, int n2)
{
	return n1 - n2;
}
int ComputeProd(int n1, int n2)
{
	return n1 * n2;
}
void Display(int n1, int n2, int s, int d, int p)
{
	cout << "\t" << n1 << " + " << n2 << " = " << s << endl;
	cout << "\t" << n1 << " - " << n2 << " = " << d << endl;
	cout << "\t" << n1 << " * " << n2 << " = " << p << endl;
}

int main()
{
	int x, y;

	cout << "Enter two integer numbers: "; cin >> x >> y;

	int sum = ComputeSum(x, y);
	int diff = ComputeDiff(x, y);
	int prod = ComputeProd(x, y);

	Display(x, y, sum, diff, prod);

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//Enter two integer numbers: 4 7
//	4 + 7 = 11
//	4 - 7 = -3
//	4 * 7 = 28
//Press any key to continue . . .
//-------------------------------------------------------------------------------