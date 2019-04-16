//Compiler Design Final Project
//Part 1
#include <iomanip>
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

int main()
{
	string in;
	fstream old, rev;
	
	//opening both files
	old.open("finalv1.txt", ios::in);
	rev.open("finalv2.txt", ios::out);

	//checking if both files are open, presents error message if they are not
	if (old.is_open() && rev.is_open())
	{
		while (!old.eof())
		{
			old >> in;

			if (in[0] == '/') //checking for comment
			{
				if (in[1] == '*')
				{
					getline(old, in, '/');
					in = "";
				}
			}
			else if (in == "var" || in == "begin") //checking for input with special rules
			{
				rev << in;
				rev << '\n';
			}
			else
			{
				if (in == ";") //entering a new line with ;
				{
					rev << in;
					rev << "\n";
				}
				else //transfering all other characters
				{
					rev << in;
					rev << " ";
				}
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