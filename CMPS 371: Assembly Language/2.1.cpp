//Name: Robin Horan
//Homework 2.1
//Course: CMPS 371
//Due Date: Januaty 12, 2018
//Professor: Ray Ahmadnia
//--------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	int w, l, p, a;

	cout << "\t -------------\n";
	cout << "\t|             |\n";
	cout << "\t|             | width\n";
	cout << "\t|             |\n";
	cout << "\t -------------\n";
	cout << "\t    length \n";

	cout << "Enter the measure of width: "; cin >> w;
	cout << "Enter the measure of length: "; cin >> l;

	_asm
	{
		mov eax, w;
		imul l;
		mov a, eax;
		mov eax, w;
		add eax, l;
		add eax, eax;
		mov p, eax;
	}

	cout << "\t      Area = " << a << endl;
	cout << "\t      Perimeter = " << p << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//		 -------------
//		|             |
//		|             | width
//		|             |
//		 -------------
//			length
//Enter the measure of width: 23
//Enter the measure of length: 44
//		Area = 1012
//		Perimeter = 134
//Press any key to continue . . .
//--------------------------------------------------------------------------