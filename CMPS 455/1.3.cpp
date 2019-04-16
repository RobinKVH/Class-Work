//Name: Robin Horan
//Homework 1.3
//Course: CPSC 455
//Due Date: August 20, 2017
//Professor: Ray Ahmadnia
//Purpose: 
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int table[4][2] = {1, 2,
					   1, 2,
					   3, 2,
	                   3, 3};
	int state = 0, i = 0, col, j = 1;
	string input;


	do
	{
		fstream f;
		f.open("1.3data.txt", ios::in);
		if (j == 2)
		{
			f >> input;
		}
		f >> input;
		f.close();

		while (input[i] != '$')
		{
			switch (input[i])
			{
			case'a': col = 0; break;
			case'b': col = 1; break;
			}

			state = table[state][col];
			i++;
		}

		if (state == 2)
		{
			cout << input << " is accepted" << endl;
		}
		else
		{
			cout << input << " is rejected" << endl;
		}

		j++;
	} while (j <= 2);
	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//aaab$ is accepted
//bcbbca$ is rejected
//Press any key to continue . . .
//--------------------------------------------------------------------------