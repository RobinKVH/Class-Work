#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include "STACKPAC.h"
using namespace std;

int main()
{
	STACK<char, 20> S;
	string input;
	int inputlen, iy;
	int count = 0;
	char x, y;
	int type;

	int table[16][11] = {
		{ 305, 100, 100, 100, 100, 304, 100, 100, 201, 202, 203 },
		{ 100, 306, 307, 100, 100, 100, 100, 500, 100, 100, 100 },
		{ 100, 403, 403, 308, 309, 100, 403, 403, 100, 100, 100 },
		{ 100, 406, 406, 406, 406, 100, 406, 406, 100, 100, 100 },
		{ 305, 100, 100, 100, 100, 304, 100, 100, 210, 202, 203 },
		{ 100, 408, 408, 408, 408, 100, 408, 408, 100, 100, 100 },
		{ 305, 100, 100, 100, 100, 304, 100, 100, 100, 211, 203 },
		{ 305, 100, 100, 100, 100, 304, 100, 100, 100, 212, 203 },
		{ 305, 100, 100, 100, 100, 304, 100, 100, 100, 100, 213 },
		{ 305, 100, 100, 100, 100, 304, 100, 100, 100, 100, 214 },
		{ 100, 306, 307, 100, 100, 100, 315, 100, 100, 100, 100 },
		{ 100, 401, 401, 308, 309, 100, 401, 401, 100, 100, 100 },
		{ 100, 402, 402, 308, 309, 100, 402, 402, 100, 100, 100 },
		{ 100, 404, 404, 404, 404, 100, 404, 404, 100, 100, 100 },
		{ 100, 405, 405, 405, 405, 100, 405, 405, 100, 100, 100 },
		{ 100, 407, 407, 407, 407, 100, 407, 407, 100, 100, 100 },
	};

	S.ClearStack();

	cout << "Enter input:";
	cin >> input;
	inputlen = input.length();

	S.PushStack(0);
	x = S.PopStack();
	y = input[count];


	 do
	{
		cout << "[" << x << "," << y << "]" << endl;

		switch (y)
		{
		case 'i': iy = 0; break;
		case '+': iy = 1; break;
		case '-': iy = 2; break;
		case '*': iy = 3; break;
		case '/': iy = 4; break;
		case '(': iy = 5; break;
		case ')': iy = 6; break;
		case '$': iy = 7; break;
		case 'E': iy = 8; break;
		case 'T': iy = 9; break;
		case 'F': iy = 10; break;
		default: break;
		}

		type = table[x][iy] % 100;

	} while (count < 30);


	system("pause");
	return 0;
}