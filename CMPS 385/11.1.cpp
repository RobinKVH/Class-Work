//Name: Robin Horan
//Homework #: 11.1
//Course: CMPS 385
//Due Date: May 10, 2017
//Professor: Ray Ahmadnia
//Purpose: Getting data from multiple trees using different key values
//--------------------------------------------------------------------------
#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct ACCOUNT
{
	int id;
	string name;
	float balance;
};

struct TREE
{
private:
	struct node
	{
		int id;
		string name;
		float balance;
		node *right;
		node *left;
	};
	node *root;
public:
	TREE() { root = NULL; }
	void CopyData_1(node *&p, int x, string y, float z) //constant throughout: id = x, name = y, balance = z
	{
		if (p == NULL)
		{
			p = new node; p->id = x; p->name = y; p->balance = z;
			p->right = NULL; p->left = NULL;
		}
		else
		{
			if (x < p->id) { CopyData_1(p->left, x, y, z); }
			if (x > p->id) { CopyData_1(p->right, x, y, z); }
		}
	}
	void CopyData_2(node *&p, int x, string y, float z)
	{
		if (p == NULL)
		{
			p = new node; p->id = x; p->name = y; p->balance = z;
			p->right = NULL; p->left = NULL;
		}
		else
		{
			if (y < p->name) { CopyData_2(p->left, x, y, z); }
			if (y > p->name) { CopyData_2(p->right, x, y, z); }
		}
	}
	void BalanceId(node *p, int x)
	{
		if (p != NULL)
		{
			BalanceId(p->left, x);
			if (x == p->id)
			{
				cout << "\t\t" << p->name << " your balance is $" << p->balance << endl;
			}
			BalanceId(p->right, x);
		}
	}
	void BalanceName(node *p, string y)
	{
		if (p != NULL)
		{
			BalanceName(p->left, y);
			if (y == p->name)
			{
				cout << "\t\t" << p->name << " your balance is $" << p->balance << endl;
			}
			BalanceName(p->right, y);
		}
	}
	void Deposit(node *p, int x, float amount)
	{
		if (p != NULL)
		{
			Deposit(p->left, x, amount);
			if (x == p->id)
			{
				p->balance += amount;
				cout << "\t\tOkay, your new balance is $" << p->balance << endl;
			}
			Deposit(p->right, x, amount);
		}
	}
	void Withdraw(node *p, string y, float amount)
	{
		if (p != NULL)
		{
			Withdraw(p->left, y, amount);
			if (y == p->name)
			{
				p->balance -= amount;
				cout << "\t\tOkay, your new balance is $" << p->balance << endl;
			}
			Withdraw(p->right, y, amount);
		}
	}
	void Display(node *p)
	{
		if (p != NULL)
		{
			Display(p->left);
			cout << " " << left << setw(3) << p->id << left << setw(18) << p->name << right << setw(10)<< p->balance << endl;
			Display(p->right);
		}
	}
	void CopyData_1(int x, string y, float z)
	{
		CopyData_1(root, x, y, z);
	}
	void CopyData_2(int x, string y, float z)
	{
		CopyData_2(root, x, y, z);
	}
	void BalanceId(int x)
	{
		BalanceId(root, x);
	}
	void BalanceName(string y)
	{
		BalanceName(root, y);
	}
	void Deposit(int x, float amount)
	{
		Deposit(root, x, amount);
	}
	void Withdraw(string y, float amount)
	{
		Withdraw(root, y, amount);
	}
	void Display()
	{
		Display(root);
	};
};

int main()
{
	TREE TREE1;
	TREE TREE2;

	int id; string name; float balance;
	int option; char cont; float amount;

	fstream f;
	f.open("11.1.data.txt", ios::in);
	for (int i = 0; i < 5; i++)
	{
		f >> id >> name >> balance;
		TREE1.CopyData_1(id, name, balance);
		TREE2.CopyData_2(id, name, balance);
	}

	cout << "-----------------ULV Bank-----------------" << endl;
	cout << "1. Show balance when id is given" << endl;
	cout << "2. Show balacne when name is given" << endl;
	cout << "3. Deposit when id is given" << endl;
	cout << "4. Withdraw when name is given" << endl;
	cout << "5. Display all records from both trees\n" << endl;


	do
	{
		cout << "Please enter your choice: "; cin >> option;

		switch (option)
		{
		case 1: 
			cout << "\tWhat is your id number: "; cin >> id;
			TREE1.BalanceId(id); 
			break;
		case 2: 
			cout << "\tWhat is your name: "; cin >> name;
			TREE2.BalanceName(name); 
			break;
		case 3:
			cout << "\tWhat is your id number: "; cin >> id;
			cout << "\t\tHow much would you like to deposit? "; cin >> amount;
			TREE1.Deposit(id, amount);
			break;
		case 4: 
			cout << "\tWhat is your name: "; cin >> name;
			cout << "\t\t" << name << " how much would you like to withdraw? "; cin >> amount;
			TREE2.Withdraw(name, amount); 
			break;
		case 5: 
			cout << "TREE 1" << endl; 
			cout << " ID   Name               Balance" << endl;
			cout << "---------------------------------" << endl;
			TREE1.Display(); 
			cout << "\nTREE 2" << endl; 
			cout << " ID   Name               Balance" << endl;
			cout << "---------------------------------" << endl;
			TREE2.Display();
			break;
		default:
			cout << "This is not a recognized option." << endl;
			break;
		}
		cout << "CONTINUE(y/n)? "; cin >> cont;
	} while (cont == 'Y' || cont == 'y');

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//-----------------ULV Bank-----------------
//1. Show balance when id is given
//2. Show balacne when name is given
//3. Deposit when id is given
//4. Withdraw when name is given
//5. Display all records from both trees
//
//Please enter your choice: 1
//	What is your id number: 55
//		Torres,James your balance is $555.55
//CONTINUE(y/n)? y
//Please enter your choice: 2
//	What is your name: Li,Bin
//		Li,Bin your balance is $1111.11
//CONTINUE(y/n)? y
//Please enter your choice: 3
//	What is your id number: 33
//		How much would you like to deposit? 100
//		Okay, your new balance is $433.33
//CONTINUE(y/n)? y
//Please enter your choice: 4
//	What is your name: Zhou,Quan
//		Zhou,Quan how much would you like to withdraw? 100
//		Okay, your new balance is $6566.66
//CONTINUE(y/n)? y
//Please enter your choice: 5
//	TREE 1
//	ID   Name               Balance
//	---------------------------------
//	11 Li, Bin               1111.11
//	33 Clark, Amanda          433.33
//	44 Blanchard, Matthew    4444.44
//	55 Torres, James          555.55
//	66 Zhou, Quan            6666.66
//
//	TREE 2
//	ID   Name               Balance
//	---------------------------------
//	44 Blanchard, Matthew    4444.44
//	33 Clark, Amanda          333.33
//	11 Li, Bin               1111.11
//	55 Torres, James          555.55
//	66 Zhou, Quan            6566.66
//CONTINUE(y/n)? n
//Press any key to continue . . .
//--------------------------------------------------------------------------