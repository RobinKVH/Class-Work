//Name: Robin Horan
//Homework #: 6.2
//Course: CMPS 367
//Due Date: April 4, 2016
//Professor: Ray Ahmadnia
//Purpose: Account data from a file
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;

struct PERSON
{
	char name[10];
	float balance;
	int ID;
};
void ReadData(PERSON x[], int n);
void Display(PERSON x[], int n);
void IDBalance(PERSON x[], int n);
void NameBalance(PERSON x[], int n);
void Withdraw(PERSON x[], int n);
void Deposit(PERSON x[], int n);
int main()
{
	PERSON x[6];
	char choice, cont;

	//displaying menu
	cout << "------------------Menu------------------" << endl;
	cout << "a. Display all records" << endl;
	cout << "b. Show balance when ID is given" << endl;
	cout << "c. Show balance when name is given" << endl;
	cout << "d. Withdraw when ID is given" << endl;
	cout << "e. Deopsit when name is given" << endl;
	cout << "----------------------------------------" << endl;

	ReadData(x, 6);

	do
	{
		cout << "Enter your choice: "; cin >> choice;
		choice = tolower(choice);
		switch (choice)
		{
		case 'a': Display(x, 6); break;
		case 'b': IDBalance(x, 6); break;
		case 'c': NameBalance(x, 6); break;
		case 'd': Withdraw(x, 6); break;
		case 'e': Deposit(x, 6); break;
		default: cout << "This is not a possible option." << endl; break;
		}
		cout << "\tContinue(y/n)?";
		cin.ignore();
		cin >> cont;
	} while (cont == 'y' || cont == 'Y');

	system("pause");
	return 0;
}
void ReadData(PERSON x[], int n)
{
	fstream fdata;
	fdata.open("6.2text.txt", ios::in);
	for (int i = 0; i < n; i++)
	{
		fdata >> x[i].ID >> x[i].name >> x[i].balance;
	}
	fdata.close();
}
void Display(PERSON x[], int n)
{
	cout << "  ID  Name\tBalance" << endl;
	cout << "-------------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "  " << x[i].ID << "  " << x[i].name << "\t" << x[i].balance << endl;
	}
}
void IDBalance(PERSON x[], int n)
{
	int ID;
	cout << "Enter your ID number: "; cin >> ID;
	for (int i = 0; i < n; i++)
	{
		if (x[i].ID == ID)
		{
			cout << x[i].name << ", your balance is " << x[i].balance << endl;
		}
	}
}
void NameBalance(PERSON x[], int n)
{
	char name[10];
	cout << "Enter your name: "; cin >> name;
	for (int i = 0; i < n; i++)
	{
		if (strcmp(x[i].name, name)==0)
		{
			cout << x[i].name << ", your balance is " << x[i].balance << endl;
		}
	}
}
void Withdraw(PERSON x[], int n)
{
	int ID, amount;
	cout << "Enter your ID number: "; cin >> ID;
	cout << "How much would you like to withdraw? "; cin >> amount;
	for (int i = 0; i < n; i++)
	{
		if (x[i].ID == ID)
		{
			x[i].balance -= amount;
			cout << "Your balance is now " << x[i].balance << endl;
		}
	}
}
void Deposit(PERSON x[], int n)
{
	char name[10];
	int amount;
	cout << "Enter your name: "; cin >> name;
	cout << "How much would you like to deposit? "; cin >> amount;
	for (int i = 0; i < n; i++)
	{
		if (strcmp(x[i].name, name) == 0)
		{
			x[i].balance += amount;
			cout << "Your balance is now " << x[i].balance << endl;
		}
	}
}
//--------------------------------OUTPUT------------------------------------
//------------------Menu------------------
//a.Display all records
//b.Show balance when ID is given
//c.Show balance when name is given
//d.Withdraw when ID is given
//e.Deopsit when name is given
//----------------------------------------
//Enter your choice : a
//  ID  Name      Balance
//-------------------------
//  22  Angelica  123.45
//  33  Jacob     2345.67
//  44  Amanda    345.67
//  55  Karia     456.78
//  66  Allyson   5678.9
//  77  Jonathan  67.89
//	Continue(y/n)? y
//Enter your choice : b
//Enter your ID number : 33
//Jacob, your balance is 2345.67
//	Continue(y/n)? y
//Enter your choice : c
//Enter your name : Jonathan
//Jonathan, your balance is 67.89
//	Continue(y/n)? y
//Enter your choice : d
//Enter your ID number : 55
//How much would you like to withdraw ? 100
//Your balance is now 356.78
//	Continue(y/n)? y
//Enter your choice : e
//Enter your name : Karla
//How much would you like to deposit ? 200
//Your balance is now 656.78
//	Continue(y/n)? n
//Press any key to continue . . .
//--------------------------------------------------------------------------