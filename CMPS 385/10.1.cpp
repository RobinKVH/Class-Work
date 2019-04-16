//Name: Robin Horan
//Homework #: 10.1
//Course: CMPS 385
//Due Date: April 26, 2017
//Professor: Ray Ahmadnia
//Purpose: BST with structure data
//--------------------------------------------------------------------------
#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct MONTH
{
	string name;
	int days;
};

struct TREE
{
private:
	struct node
	{
		string name;
		int days;
		node *right;
		node *left;
	};
	node *root;
	int countzero = 0;
	int countone = 0;
	int counttwo = 0;
public: 
	TREE() { root = NULL; }
	void Insert(node *&p, string x, int y)
	{
		if (p == NULL)
		{
			p = new node; p->name = x; p->days = y;
			p->right = NULL; p->left = NULL;
		}
		else 
		{
			if (x < p->name) { Insert(p->left, x, y); }
			if (x > p->name) { Insert(p->right, x, y); }
		}
	}
	void Display(node *p)
	{
		if (p != NULL)
		{
			Display(p->left);
			cout << " " <<left << setw(10) << p->name << right << setw(3) << p->days << endl; 
			Display(p->right);
		}
	}
	void Search(node *p, string x)
	{
		if (p != NULL)
		{
			Search(p->left, x);
			if (x == p->name)
			{
				cout << "There are " << p->days << " days in " << x << endl;
			}
			Search(p->right, x);
		}
	}
	int CountZero(node *p)
	{
		if (p != NULL)
		{
			CountZero(p->left);
			if (p->left == NULL && p->right == NULL)
			{
				countzero++;
			}
			CountZero(p->right);
		}
		return countzero;
	}
	int CountOne(node *p)
	{
		if (p != NULL)
		{
			CountOne(p->left);
			if ((p->left == NULL && p->right != NULL) || (p->left != NULL && p-> right == NULL))
			{
				countone++;
			}
			CountOne(p->right);
		}
		return countone;
	}
	int CountTwo(node *p)
	{
		if (p != NULL)
		{
			CountTwo(p->left);
			if (p->left != NULL && p->right != NULL)
			{
				counttwo++;
			}
			CountTwo(p->right);
		}
		return counttwo;
	}
	void Insert(string x, int y)
	{
		Insert(root, x, y);
	}
	void Display()
	{
		Display(root);
	}
	void Search(string x)
	{
		Search(root, x);
	}
	int CountZero()
	{
		return CountZero(root);
	}
	int CountOne()
	{
		return CountOne(root);
	}
	int CountTwo()
	{
		return CountTwo(root);
	}
};

int main()
{
	TREE T;
	string name;
	int days;
	string search;

	fstream f;
	f.open("10.1.data.txt", ios::in);
	for (int i = 0; i < 12; i++)
	{
		f >> name >> days;
		T.Insert(name, days);
	}

	cout << " Months\t   Days" << endl;
	cout << "----------------" << endl;
	T.Display();

	cout << "\nNumber of nodes with two children: " << T.CountTwo() << endl;
	cout << "Number of nodes with zero children: " << T.CountZero() << endl;
	cout << "Number of nodes with one child: " << T.CountOne() << endl;

	cout << "\nWhat month would you like to search for: "; cin >> search;
	T.Search(search);

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
// Months    Days
//----------------
// April      30
// August     31
// December   31
// February   28
// January    31
// July       31
// June       30
// March      31
// May        31
// November   30
// October    31
// September  30
//
//Number of nodes with two children: 2
//Number of nodes with zero children: 3
//Number of nodes with one child: 7
//
//What month would you like to search for: May
//There are 31 days in May
//Press any key to continue . . .
//--------------------------------------------------------------------------