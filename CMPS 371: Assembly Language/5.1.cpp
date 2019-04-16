//Name: Robin Horan
//Homework 5.1
//Course: CMPS 371
//Due Date: Januaty 19, 2018
//Professor: Ray Ahmadnia
//--------------------------------------------------------------------------
#include <iostream>
using namespace std;

short counter, y, value, ram, floppy, printers;

void displayBase2()
{
	unsigned x = 1 << 15;
	cout << "AX =";
	for (int i = 0; i < 16; i++)
	{
		if (counter % 4 == 0)
		{
			cout << " ";
		}

		y = x & value;
		if (y == 0)
		{
			cout << 0;
		}
		else
		{
			cout << 1;
		}
		value = value << 1;
		counter++;
	}
	cout << endl;
}
void displayRam()
{
	cout << "The size of ram is " << ram << "K" << endl;
}
void displayFloppy()
{
	cout << "The number of floppy drives are " << floppy << endl;
}
void displayPrinters()
{
	cout << "The number of printers are " << printers << endl;
}
int main()
{
	_asm
	{
		mov ax, 0xFB87;
		mov value, ax;
		call displayBase2;
		mov ax, 0xFB87;
		mov bx, 0000000000001100b;
		and bx, ax;
		cmp bx, 0;
		Je Ram16;
		cmp bx, 4;
		Je Ram32;
		cmp bx, 8;
		Je Ram64;
	Ram128:
		mov ram, 128;
		call displayRam;
		Jmp Next1;
	Ram64:
		mov ram, 64;
		call displayRam;
		Jmp Next1;
	Ram32:
		mov ram, 32;
		call displayRam;
		Jmp Next1;
	Ram16:
		mov ram, 16;
		call displayRam;
	Next1://for floppy drives
		mov bx, 0000000111000000b;
		and bx, ax;
		shr bx, 6;
		inc bx;
		mov floppy, bx;
		call displayFloppy;
		mov ax, 0xFB87;
		mov bx, 1110000000000000b;//for printers
		and bx, ax;
		shr bx, 13;
		mov printers, bx;
		call displayPrinters;

		
	}

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//AX = 1111 1011 1000 0111
//The size of ram is 32K
//The number of floppy drives are 7
//The number of printers are 7
//Press any key to continue . . .
//--------------------------------------------------------------------------