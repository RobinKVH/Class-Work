//Name: Robin Horan
//Homework 6.3
//Course: CMPS 371
//Due Date: Januaty 19, 2018
//Professor: Ray Ahmadnia
//--------------------------------------------------------------------------
#include <iostream>
using namespace std;

short value, y, counter = 0, temp, oncounter = 0, counter1 = 0;

void displayBase2()
{
	cout << "AX =";
	unsigned x = 1 << 15;
	for (int i = 0; i < 16; i++)
	{
		if (counter % 4 == 0)
		{
			cout << " ";
		}

		y = x & value;
		if(y == 0)
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
void displayOn()
{
	cout << oncounter << " sprinklers are ON" << endl;
}
void displayDefective()
{
	cout << "Defective sprinklers are: "; 
}
void displayOff()
{
	cout << counter1 << "  ";
}
void displayFin()
{
	cout << endl;
}
int main()
{
	_asm
	{
		mov ax, 0x6A2F;
		mov value, ax;
		call displayBase2;
		mov temp, 0x6A2F;
	TheLoop1:
		inc counter1;
		cmp counter1, 16;
		Je Done1;
		mov cx, temp;
		mov bx, 0000000000000001;
		and bx, cx;
		shr cx, 1;
		mov temp, cx;
		cmp bx, 1;
		Je On;
		Jmp TheLoop1;
	On:
		inc oncounter;
		Jmp TheLoop1;
	Done1:
		call displayOn;
		call displayDefective;
		mov temp, 0x6A2F;
		mov counter1, 17;
	TheLoop2:
		dec counter1;
		cmp counter1, 0;
		Je Done2;
		mov cx, temp;
		mov bx, 1000000000000000;
		and bx, cx;
		shl cx, 1;
		mov temp, cx;
		cmp bx, 0;
		Je Off;
		Jmp TheLoop2;
	Off:
		call displayOff;
		Jmp TheLoop2;
	Done2:
		call displayFin;
	}

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//AX = 0110 1010 0010 1111
//9 sprinklers are ON
//Defective sprinklers are: 16  13  11  9  8  7  5
//Press any key to continue . . .
//--------------------------------------------------------------------------