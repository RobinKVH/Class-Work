//Name: Robin Horan
//Homework #: 7.1
//Course: CMPS 385
//Due Date: April 5, 2017
//Professor: Ray Ahmadnia
//Purpose: Stack style linked list
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class STACK
{
private:
	struct node
	{
		int info;
		node *next;
	};
	node *stack;
public:
	void ClearS()
	{
		stack = NULL;
	}
	void PushS(int x)
	{
		//create new node
		node *q = new(node);
		q->info = x;
		//inserting info in front of the list
		q->next = stack;
		stack = q;
	}
	void DisplayS()
	{
		node *p = stack;
		while (p != NULL)
		{
			cout << p->info << " -> ";
			p = p->next;
		}
		cout << "NULL" << endl;
	}
	int PopS()
	{
		node *p = stack;
		int x = p->info;
		stack = p->next;
		delete p;
		return x;
	}
};

int main()
{
	int a[7] = {3,6,9,1,8,5,2};
	int count = 0;
	int total = 0;

	STACK S;

	S.ClearS();

	for (int i = 0; i < 7; i++)
	{
		S.PushS(a[i]);
	}

	S.DisplayS();

	for (int i = 0; i < 7; i++)
	{
		total += S.PopS();
		count++;
	}

	cout << "Total = " << total << "\nNumber of Nodes = " << count << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//2 -> 5 -> 8 -> 1 -> 9 -> 6 -> 3->NULL
//Total = 34
//Number of Nodes = 7
//Press any key to continue . . .
//--------------------------------------------------------------------------