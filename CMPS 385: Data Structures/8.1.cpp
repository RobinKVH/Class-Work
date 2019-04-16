//Name: Robin Horan
//Homework #: 8.1
//Course: CMPS 385
//Due Date: April 12, 2017
//Professor: Ray Ahmadnia
//Purpose: Converting to circular linked list
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

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
	node *c;
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
		c = stack;
		do
		{
			cout << c->info << " -> "; 
			c = c->next;
		} while (c != stack);
		cout << "Repeat" << endl;
	}
	int PopS()
	{
		node *p = stack;
		int x = p->info;
		stack = p->next;
		delete p;
		return x;
	}
	void Convert()
	{
		c = stack;
		while (c->next != NULL)
		{
			c = c->next;
		}
		c -> next = stack;
	}
};

int main()
{
	STACK C;
	int x;

	srand(time(0));
	C.ClearS();

	for (int i = 0; i < 10; i++)
	{
		x = rand() % 50;
		C.PushS(x);
	}
	
	C.Convert();
	C.DisplayS();
	 
	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//19 -> 29 -> 26 -> 19 -> 49 -> 12 -> 43 -> 1 -> 21 -> 46 -> Repeat
//Press any key to continue . . .
//--------------------------------------------------------------------------