//Name: Robin Horan
//Course: CMPS 301
//Due Date: November 4, 2015
//Professor: Ray Ahmadnia
//Purpose: Using loops to display values in a pattern
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
	for (int i = 5; i <= 50; i += 5)
	{
		cout << i << " ";
	}
	cout << endl;

	for (int j = 3; j <= 36; j += 3)
	{
		cout << j << " ";
	}
	cout << endl;

	for (char k = 'P'; k <= 'V'; k++)
	{
		cout << k << " ";
	}
	cout << endl;

	for (char l = 'v'; l >= 'p'; l--)
	{
		cout << l << " ";
	}
	cout << endl;


	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//5 10 15 20 25 30 35 40 45 50
//3 6 9 12 15 18 21 24 27 30 33 36
//P Q R S T U V
//v u t s r q p
//Press any key to continue . . .
//-------------------------------------------------------------------------------