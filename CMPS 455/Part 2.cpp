//Compiler Design Final Project
//Part 2
#include <iostream>
#include <iomanip>
#include "STACKPAC.h"
#include <cstring>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	STACK<char, 50> S; //stack to hold variables
	STACK<char, 50> TEMP; //used for showing contents of stack
	char x, y, temp; //x and y are row and coloumn in input form, temp is used for showing contents of stack
	int ix, iy, key; //ix and iy are row and coloumn in number form to be read from table
	string tempinput, output; //tempinput is direct input from file, is later converted to input
	char input;
	fstream file;
	int table[22][32] = {
		{1, 41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41},
		{41,41, 41, 41, 41, 41, 6,  6,  6,  6,  41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41},
		{41,41,	41,	2,	41,	2,	2,	2,	2,	2,	30,	30,	30,	30,	30,	30,	30,	30,	30,	30,	2,	2,	2,	41,	41,	2,	41,	2,	2,	2,	2,	2 },
		{41,41,	41,	41,	41,	41,	7,	7,	7,	7,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41},
		{41,41,	41,	41,	41,	41,	8,	8,	8,	8,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41},
		{41,41,	41,	41,	41,	41,	9,	9,	9,	9,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	2,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41},
		{41,41,	41,	41,	3,	41,	41,	41,	2,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41},
		{41,41,	41,	41,	41,	4,	4,	4,	4,	4,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41},
		{41,41,	41,	2,	41,	5,	5,	5,	5,	5,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41},
		{41,41,	41,	41,	41,	10,	11,	11,	11,	11,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41},
		{41,41,	41,	41,	41,	12,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41},
		{41,41,	41,	41,	41,	41,	13,	13,	13,	13,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41},
		{41,41,	41,	41,	41,	41,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	41,	41,	2,	41,	14,	41,	41,	41,	41,	41,	41,	41},
		{41,41,	41,	2,	41,	2,	2,	2,	2,	2,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	33,	34,	41,	41,	41},
		{41,41,	41,	41,	41,	41,	15,	15,	15,	15,	15,	15,	15,	15,	15,	15,	15,	15,	15,	15,	41,	41,	41,	41,	15,	41,	41,	41,	41,	41,	41,	41},
		{41,41,	41,	2,	41,	2,	2,	2,	2,	2,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	2,	2,	35,	36,	41},
		{41,41,	41,	41,	41,	41,	9,	9,	9,	9,	31,	31,	31,	31,	31,	31,	31,	31,	31,	31,	41,	41,	41,	41,	37,	41,	41,	31,	31,	41,	41,	41},
		{41,41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	38,	38,	41,	41,	41},
		{41,41,	41,	2,	41,	2,	2,	2,	2,	2,	32,	32,	32,	32,	32,	32,	32,	32,	32,	32,	41,	41,	41,	41,	41,	41,	41,	2,	2,	2,	2,	41},
		{41,41,	41,	41,	41,	41,	41,	41,	41,	41,	2,	2,	2,	2,	2,	2,	2,	2,	2,	2,	41,	41,	41,	41,	41,	41,	41,	39,	40,	41,	41,	41},
		{41,41,	41,	41,	41,	41,	41,	41,	41,	41,	20,	21,	22,	23,	24,	25,	26,	27,	28,	29,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41},
		{41,41, 41,	41,	41,	41,	16,	17,	18,	19,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41} };

	S.ClearStack();
	TEMP.ClearStack();

	//opening input file
	file.open("finalv2.txt", ios::in);
	file >> tempinput;

	//initial startup of stack
	S.PushStack('$');
	S.PushStack('a');
	x = S.PopStack();

	if (tempinput == "program") //converting reserved words into usable char, snipet is used throughout program
	{
		input = y = 'z';
	}
	else if (tempinput == "var")
	{
		input = y = 'y';
	}
	else if (tempinput == "begin")
	{
		input = y = 'x';
	}
	else if (tempinput == "end.")
	{
		input = y = 'w';
	}
	else if (tempinput == "integer")
	{
		input = y = 't';
	}
	else if (tempinput == "print")
	{
		input = y = 'o';
	}
	else
	{
	}

	do
	{
		//checks for consecutive match
		if (x == input)
		{
			output = output + y;

			file >> tempinput;
			if (tempinput == "program")
			{
				input = y = 'z';
			}
			else if (tempinput == "var")
			{
				input = y = 'y';
			}
			else if (tempinput == "begin")
			{
				input = y = 'x';
			}
			else if (tempinput == "end.")
			{
				input = y = 'w';
			}
			else if (tempinput == "integer")
			{
				input = y = 't';
			}
			else if (tempinput == "print")
			{
				input = y = 'o';
			}
			else
			{
				input = y = tempinput[0];
			}
			x = S.PopStack();

			cout << "MATCH" << endl;
		}

		cout << "[" << x << "," << y << "]" << endl;

		//selecting row of table
		//a = <prog>, b = <id>, c = <id>', d = <dec-list>, e = <dec>, f = <dec>', g = <type>, h = <stat-list>, i = <stat-list>'
		//j = <stat>, k = <write>, l = <assign>, m = <expr>, n = <expr>', ! = <term>, @ = <term>', # = <factor>, $ = <number> 
		//% = <number>', ^ = <sign>, & = <digit>, ~ = <letter>
		switch (x)
		{
		case 'a': ix = 0; break;
		case 'b': ix = 1; break;
		case 'c': ix = 2; break;
		case 'd': ix = 3; break;
		case 'e': ix = 4; break;
		case 'f': ix = 5; break;
		case 'g': ix = 6; break;
		case 'h': ix = 7; break;
		case 'i': ix = 8; break;
		case 'j': ix = 9; break;
		case 'k': ix = 10; break;
		case 'l': ix = 11; break;
		case 'm': ix = 12; break;
		case 'n': ix = 13; break;
		case '!': ix = 14; break;
		case '@': ix = 15; break;
		case '#': ix = 16; break;
		case '$': ix = 17; break;
		case '%': ix = 18; break;
		case '^': ix = 19; break;
		case '&': ix = 20; break;
		case '~': ix = 21; break;
		default: break;
		}

		//selecting coloumn of table
		// z = program, y = var, x = begin, w = end., t = integer, o = print
		switch (y)
		{
		case 'z': iy = 0; break;
		case 'y': iy = 1; break;
		case 'x': iy = 2; break;
		case 'w': iy = 3; break;
		case 't': iy = 4; break;
		case 'o': iy = 5; break;
		case 'p': iy = 6; break;
		case 'q': iy = 7; break;
		case 'r': iy = 8; break;
		case 's': iy = 9; break;
		case '0': iy = 10; break;
		case '1': iy = 11; break;
		case '2': iy = 12; break;
		case '3': iy = 13; break;
		case '4': iy = 14; break;
		case '5': iy = 15; break;
		case '6': iy = 16; break;
		case '7': iy = 17; break;
		case '8': iy = 18; break;
		case '9': iy = 19; break;
		case ';': iy = 20; break;
		case ':': iy = 21; break;
		case ',': iy = 22; break;
		case '.': iy = 23; break;
		case '(': iy = 24; break;
		case ')': iy = 25; break;
		case '$': iy = 26; break;
		case '+': iy = 27; break;
		case '-': iy = 28; break;
		case '*': iy = 29; break;
		case '/': iy = 30; break;
		case '=': iy = 31; break;
		default: break;
		}

		key = table[ix][iy];

		//pushing into stack
		switch (key)
		{
		case 1: S.PushStack('w'); S.PushStack('h'); S.PushStack('x'); S.PushStack('d'); S.PushStack('y'); S.PushStack(';'); S.PushStack('b'); S.PushStack('z'); break;
		case 2: break;
		case 3: S.PushStack('t'); break;
		case 4: S.PushStack('i'); S.PushStack('j'); break;
		case 5: S.PushStack('j'); break;
		case 6: S.PushStack('c'); S.PushStack('~'); break;
		case 7: S.PushStack(';'); S.PushStack('g'); S.PushStack(':'); S.PushStack('e'); break;
		case 8: S.PushStack('f'); S.PushStack(','); S.PushStack('b'); break;
		case 9: S.PushStack('b'); break;
		case 10: S.PushStack('k'); break;
		case 11: S.PushStack('l'); break;
		case 12: S.PushStack(';'); S.PushStack(')'); S.PushStack('b'); S.PushStack('('); S.PushStack('o'); break;
		case 13: S.PushStack('m'); S.PushStack('='); S.PushStack('b'); break;
		case 14: S.PushStack('n'); S.PushStack('!'); break;
		case 15: S.PushStack('@'); S.PushStack('#'); break;
		case 16: S.PushStack('p'); break;
		case 17: S.PushStack('q'); break;
		case 18: S.PushStack('r'); break;
		case 19: S.PushStack('s'); break;
		case 20: S.PushStack('0'); break;
		case 21: S.PushStack('1'); break;
		case 22: S.PushStack('2'); break;
		case 23: S.PushStack('3'); break;
		case 24: S.PushStack('4'); break;
		case 25: S.PushStack('5'); break;
		case 26: S.PushStack('6'); break;
		case 27: S.PushStack('7'); break;
		case 28: S.PushStack('8'); break;
		case 29: S.PushStack('9'); break;
		case 30: S.PushStack('c'); S.PushStack('&'); break;
		case 31: S.PushStack('$'); break;
		case 32: S.PushStack('%'); S.PushStack('&'); break;
		case 33: S.PushStack('n'); S.PushStack('!'); S.PushStack('+'); break;
		case 34: S.PushStack('n'); S.PushStack('!'); S.PushStack('-'); break;
		case 35: S.PushStack('@'); S.PushStack('#'); S.PushStack('*'); break;
		case 36: S.PushStack('@'); S.PushStack('#'); S.PushStack('/'); break;
		case 37: S.PushStack(')'); S.PushStack('m'); S.PushStack('('); break;
		case 38: S.PushStack('%'); S.PushStack('&'); S.PushStack('^'); break;
		case 39: S.PushStack('+'); break;
		case 40: S.PushStack('-'); break;
		case 41: cout << "\t\tINPUT IS REJECTED" << endl; system("pause"); return 0;
		default: break;
		}

		//displaying content of the stack
		cout << "Content of Stack: ";
		do
		{
			temp = S.PopStack();
			TEMP.PushStack(temp);
		} while (S.EmptyStack() != true);

		do
		{
			temp = TEMP.PopStack();
			cout << temp;
			S.PushStack(temp);
		} while (TEMP.EmptyStack() != true);
		cout << endl;

		x = S.PopStack();

		//accepting match of input
		if (x == input)
		{
			output = output + y;

			file >> tempinput;
			cout << tempinput;
			if (tempinput == "program")
			{
				input = y = 'z';
			}
			else if (tempinput == "var")
			{
				input = y = 'y';
			}
			else if (tempinput == "begin")
			{
				input = y = 'x';
			}
			else if (tempinput == "end.")
			{
				input = y = 'w';
			}
			else if (tempinput == "integer")
			{
				input = y = 't';
			}
			else if (tempinput == "print")
			{
				input = y = 'o';
			}
			else
			{
				input = y = tempinput[0];
			}

			x = S.PopStack();
			cout << "MATCH" << endl;
		}
	} while (!file.eof());

	cout << "\t\tOutput: " << output << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//[a, z]
//Content of Stack : $whxdy; bz
//pMATCH
//[b, p]
//Content of Stack : $whxdy; c~
//[~, p]
//Content of Stack : $whxdy; cp
//2MATCH
//[c, 2]
//Content of Stack : $whxdy; c&
//[&, 2]
//Content of Stack : $whxdy; c2
//0MATCH
//[c, 0]
//Content of Stack : $whxdy; c&
//[&, 0]
//Content of Stack : $whxdy; c0
//1MATCH
//[c, 1]
//Content of Stack : $whxdy; c&
//[&, 1]
//Content of Stack : $whxdy; c1
//7MATCH
//[c, 7]
//Content of Stack : $whxdy; c&
//[&, 7]
//Content of Stack : $whxdy; c7
//; MATCH
//[c, ; ]
//Content of Stack : $whxdy;
//varMATCH
//MATCH
//[d, p]
//Content of Stack : $whx; g:e
//[e, p]
//Content of Stack : $whx; g:f, b
//[b, p]
//Content of Stack : $whx; g:f, c~
//[~, p]
//Content of Stack : $whx; g:f, cp
//1MATCH
//[c, 1]
//Content of Stack : $whx; g:f, c&
//[&, 1]
//Content of Stack : $whx; g:f, c1
//, MATCH
//[c, , ]
//Content of Stack : $whx; g:f,
//qMATCH
//[f, q]
//Content of Stack : $whx; g:b
//[b, q]
//Content of Stack : $whx; g:c~
//[~, q]
//Content of Stack : $whx; g:cq
//2MATCH
//[c, 2]
//Content of Stack : $whx; g:c&
//[&, 2]
//Content of Stack : $whx; g:c2
//rMATCH
//[c, r]
//Content of Stack : $whx; g:
//[:, r]
//Content of Stack : $whx; g
//[g, r]
//Content of Stack : $whx;
//[; , r]
//Content of Stack : $whx
//[x, r]
//Content of Stack : $wh
//[h, r]
//Content of Stack : $wij
//[j, r]
//Content of Stack : $wil
//[l, r]
//Content of Stack : $wim = b
//[b, r]
//Content of Stack : $wim = c~
//[~, r]
//Content of Stack : $wim = cr
//, MATCH
//[c, , ]
//Content of Stack : $wim =
//[=, , ]
//Content of Stack : $wim
//[m, , ]
//Content of Stack : $wi
//[i, , ]
//Content of Stack : $w
//[w, , ]
//Content of Stack : $
//[$, , ]
//Content of Stack :
//--------------------------------------------------------------------------
//Note: Code works, but parsing table is incorrect