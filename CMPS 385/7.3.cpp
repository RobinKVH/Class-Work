//Name: Robin Horan
//Homework #: 7.3
//Course: CMPS 385
//Due Date: April 5, 2017
//Professor: Ray Ahmadnia
//Purpose: Ordered linked list
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
using namespace std;

class ORDERED
{
private:
	struct node
	{
		int info;
		node *next;
	};
	node *ORDER;
public:
	void ClearO() { ORDER = NULL; }
	void PushO(int x)
	{
		//create a new node
		node *q = new node; q->info = x; q->next = NULL;
		if (ORDER == NULL)
		{
			//insert x in front of the list
			ORDER = q;
		}
		else
		{
			node *t, *r; r = t = ORDER;
			while (r != NULL && r->info < x)
			{
				t = r; r = r->next;
			}
			if (t == r)
			{
				//insert x in front of the list
				q->next = r; ORDER = q;
			}
			else
			{//insert x at the rear or somewhere in between
				q->next = r;
				t->next = q;
			}
		}
	}
	void DisplayO()
	{
		node *p = ORDER;
		while (p != NULL)
		{
			cout << p->info << "-->";
			p = p->next;
		}
		cout << "NULL\n";
	}
	int PopO()
	{
		node *p = ORDER;
		int x = p->info;
		ORDER = p->next;
		delete p;
		return x;
	}
};

int main()
{
	ORDERED O;
	int c[6] = { 100, 500, 800, 300, 200, 900};
	int x, check;
	int count = 0;
	double ave;
	double total = 0;

	O.ClearO();

	for (int i = 0; i < 6; i++)
	{
		O.PushO(c[i]);
	}
	
	O.DisplayO();

	for (int i = 0; i < 6; i++)
	{
		x = O.PopO();
		check = x % 2;
		if (check == 0)
		{
			count++;
			total += x;
		}
	}

	ave = total / count;
	cout << "Average of Even Numbers = " << ave << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//100-->200-->300-->500-->800-->900-->NULL
//Average of all Even Numbers = 466.667
//Press any key to continue . . .
//--------------------------------------------------------------------------