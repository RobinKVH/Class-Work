//Name: Robin Horan
//Course: CMPS 301
//Due Date: December 9, 2015
//Professor: Ray Ahmadnia
//Purpose: Drawing a flag user defined funtions
//-------------------------------------------------------------------------------
#include <iostream>
using namespace std;

void DrawStars(int a)
{
	for (int i = 1; i <= a; i++)
	{
		cout << "[]* * * * *==================" << endl;
		cout << "[] * * * * ==================" << endl;
	}
}
void DrawStripes(int b)
{
	for (int i = 1; i <= b; i++)
	{
		cout << "[]===========================" << endl;
	}
}
void DrawPost(int c)
{
	for (int i = 1; i <= c; i++)
	{
		cout << "[]" << endl;
	}
}
int main()
{
	DrawStars(2);
	DrawStripes(3);
	DrawPost(4);

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//[]* * * * *==================
//[] * * * * ==================
//[]* * * * *==================
//[] * * * * ==================
//[]===========================
//[]===========================
//[]===========================
//[]
//[]
//[]
//[]
//Press any key to continue . . .
//-------------------------------------------------------------------------------