//Name: Robin Horan
//Homework #: 6.1
//Course: CMPS 367
//Due Date: April 4, 2016
//Professor: Ray Ahmadnia
//Purpose: Asking about inventory using a text file
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;

void ReadData(string fname, int T[3][4]);
void Display(int T[3][4]);
void Total(int T[3][4]);
void TotalColor(int T[3][4]);
void TotalSize(int T[3][4]);

int main()
{
	int T[3][4], choice;
	char cont;

	//displaying menu
	cout << "--------------ABC T-Shirts Company--------------" << endl;
	cout << "1. Display inventory" << endl;
	cout << "2. Total number of all shirts" << endl;
	cout << "3. Number of a given color shirts" << endl;
	cout << "4. Number of a given size shirts" << endl;
	cout << "------------------------------------------------" << endl;

	ReadData("6.1data.txt", T);

	do
	{
		//asking choice
		cout << "Please enter your choice(1-4):"; cin >> choice;

		switch (choice)
		{
		case 1: Display(T); break;
		case 2: Total(T); break;
		case 3: TotalColor(T); break;
		case 4: TotalSize(T); break;
		default: cout << "Not a possible option."; break;
		}
		cout << "\tContinue(y/n)?";
		cin.ignore();
		cin >> cont;
		cout << "------------------------------------------------" << endl;
	} while (cont == 'y' || cont == 'Y');

	system("pause");
	return 0;
}
void ReadData(string fname, int T[3][4])
{
	fstream fdata;
	fdata.open(fname, ios::in);
	for (int color = 0; color < 3; color++)
	{
		for (int size = 0; size < 4; size++)
		{
			fdata >> T[color][size];
		}
	}
	fdata.close();
}
void Display(int T[3][4])
{
	cout << "\tS\tM\tL\tXL" << endl;
	cout << "RED\t";
	for (int size = 0; size < 4; size++)
	{
		cout << T[0][size] << "\t";
	}
	cout << endl;

	cout << "GREEN\t";
	for (int size = 0; size < 4; size++)
	{
		cout << T[1][size] << "\t";
	}
	cout << endl;

	cout << "BLUE\t";
	for (int size = 0; size < 4; size++)
	{
		cout << T[2][size] << "\t";
	}
	cout << endl;
}
void Total(int T[3][4])
{
	int total = 0;
	for (int color = 0; color < 3; color++)
	{
		for (int size=0; size < 4; size++)
		{
			total += T[color][size];
		}
	}
	cout << "Total Inventory: " << total << endl;
}
void TotalColor(int T[3][4])
{
	int total = 0, storage;
	char color[6];
	cout << "Please enter the color in uppercase: "; cin >> color;

	if (strcmp(color,"RED")==0)
	{
		storage = 0;
	}
	else if (strcmp(color, "GREEN") == 0)
	{
		storage = 1;
	}
	else if (strcmp(color, "BLUE") == 0)
	{
		storage = 2;
	}
	else
	{}

	for (int size = 0; size < 4; size++)
	{
		total += T[storage][size];
	}

	cout << "Total number of " << color << " shirts is " << total << endl;
}
void TotalSize(int T[3][4])
{
	int total = 0, storage;
	char size[3];
	cout << "Please enter the size in uppercase: "; cin >> size;
	
	if(strcmp(size, "S")==0)
	{
		storage = 0;
	}
	else if (strcmp(size, "M") == 0)
	{
		storage = 1;
	}
	else if (strcmp(size, "L") == 0)
	{
		storage = 2;
	}
	else if (strcmp(size, "XL") == 0)
	{
		storage = 3;
	}
	else
	{}

	for (int color = 0; color < 3; color++)
	{
		total += T[color][storage];
	}

	cout << "Total number of " << size << " shirts is " << total << endl;
}

//--------------------------------OUTPUT------------------------------------
//--------------ABC T - Shirts Company--------------
//1. Display inventory
//2. Total number of all shirts
//3. Number of a given color shirts
//4. Number of a given size shirts
//------------------------------------------------
//Please enter your choice(1 - 4) :1
//		  S       M       L       XL
//RED     10      20      30      40
//GREEN   50      60      70      80
//BLUE    90      90      80      70
//		Continue(y / n) ? y
//------------------------------------------------
//Please enter your choice(1 - 4) : 2
//Total Inventory : 690
//		Continue(y / n) ? y
//------------------------------------------------
//Please enter your choice(1 - 4) : 3
//Please enter the color in uppercase : RED
//Total number of RED shirts is 100
//		Continue(y / n) ? y
//------------------------------------------------
//Please enter your choice(1 - 4) : 4
//Please enter the size in uppercase : S
//Total number of S shirts is 150
//		Continue(y / n) ? n
//------------------------------------------------
//Press any key to continue . . .
//--------------------------------------------------------------------------