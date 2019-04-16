//Name: Robin Horan
//Homework #: 6.3
//Course: CMPS 367
//Due Date: April 4, 2016
//Professor: Ray Ahmadnia
//Purpose: Cstring manipulation with arrays and functions
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;

void PartA(char x[4][7]);
void PartB(char x[4][7]);
void PartC(char x[4][7]);

int main()
{
	char name[4][7] = { "John", "Bob", "Tom", "Mary" };

	PartA(name);
	PartB(name);
	PartC(name);

	system("pause");
	return 0;
}
void PartA(char x[4][7])
{
	cout << "Part a, all names in uppercase: ";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			x[i][j] = toupper(x[i][j]);
			cout << x[i][j];
		}
	}
	cout << endl;
}
void PartB(char x[4][7])
{
	cout << "Part b, names followed by their length: ";
	for (int i = 0; i < 4; i++)
	{
		cout << x[i] << "->" << strlen(x[i]) << "   ";
	}
	cout << endl;
}
void PartC(char x[4][7])
{
	cout << "Part c, names in lowecase: ";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			x[i][j] = tolower(x[i][j]);
			cout << x[i][j];
		}
	}
	cout << endl;
	cout << "  Names in lowercase but beigns with uppercase: ";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			x[i][0] = toupper(x[i][0]);
			cout << x[i][j];
		}
	}
	cout << endl;
}

//--------------------------------OUTPUT------------------------------------
//Part a, all names in uppercase: JOHN   BOB    TOM    MARY
//Part b, names followed by their length: JOHN->4   BOB->3   TOM->3   MARY->4
//Part c, names in lowecase: john   bob    tom    mary
//  Names in lowercase but beigns with uppercase: John   Bob    Tom    Mary
//Press any key to continue . . .
//--------------------------------------------------------------------------