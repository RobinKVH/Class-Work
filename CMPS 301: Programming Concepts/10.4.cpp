//Name: Robin Horan
//Course: CMPS 301
//Due Date: November 18, 2015
//Professor: Ray Ahmadnia
//Purpose: Using while loop to count grades
//-------------------------------------------------------------------------------
#include <iomanip>
#include <iostream>

using namespace std;
int main()
{
	//delcaring variables
	int a = 0, b = 0, c = 0, d = 0;
	char grade;

	//asking input
	cout << "Enter a group of grades (A,B,C,D):"; cin.get(grade);
	
	//starting loop
	while (grade != '\n')
	{
		//sorting grades
		switch (grade)
		{
		case 'A': case 'a': a++; break;
		case 'B': case 'b': b++; break;
		case 'C': case 'c': c++; break;
		case 'D': case 'd': d++; break;
		}
		cin.get(grade);
	}

	//displaying output
	cout << "\tNo. of \"A\" scores=" << a << endl;
	cout << "\tNo. of \"B\" scores=" << b << endl;
	cout << "\tNo. of \"C\" scores=" << c << endl;
	cout << "\tNo. of \"D\" scores=" << d << endl;

	//finding grade in highest amount
	if (a > b && a > c && a > d)
	{
		cout << "Most students got \"A\" in class!!!" << endl; 
	}
	if (b > a && b > c && b > d)
	{
		cout << "Most students got \"B\" in class!!!" << endl;
	}
	if (c > a && c > b && c > d)
	{
		cout << "Most students got \"C\" in class!!!" << endl;
	}
	if (d > a && d > b && d > c)
	{
		cout << "Most students got \"D\" in class!!!" << endl;
	}


	system("pause");
	return 0;
}

//------------------------------------OUTPUT-------------------------------------
//Enter a group of grades(A, B, C, D): AbcBCCAAda
//		No.of "A" scores = 4
//		No.of "B" scores = 2
//		No.of "C" scores = 3
//		No.of "D" scores = 1
//Most students got "A" in class!!!
//Press any key to continue . . .
//-------------------------------------------------------------------------------