//Name: Robin Horan
//Homework 1.4
//Course: CPSC 455
//Due Date: August 27, 2017
//Professor: Ray Ahmadnia
//Purpose: 
//--------------------------------------------------------------------------
#include <iomanip>
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

int main()
{
	string in, temp;
	fstream old, rev;

	old.open("1.4data.txt", ios::in);
	rev.open("1.4newdata.txt", ios::out);

	if (old.is_open() && rev.is_open())
	{
		while (!old.eof())
		{
			old >> in;
			if (in[0] == '/')
			{
				if (in[1] == '/')
				{
					getline(old, in, '\n');
					in = "\n";
				}
				else if (in == ";")
				{
					in = in + "\n";
				}
				else
				{
					in = in + " ";
				}
				rev << in;
			}
			else
			{
				if (in == ";")
				{
					in = in + "\n";
				}
				else
				{
					in = in + " ";
				}
				rev << in;
			}
		}
	}
	else
	{
		cout << "ERROR OPENING FILES" << endl;
	}

	old.close();
	rev.close();

	cout << "File has been successfully converted" << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//File has been successfully converted
//Press any key to continue . . .
//--------------------------------------------------------------------------