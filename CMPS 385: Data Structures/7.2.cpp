//Name: Robin Horan
//Homework #: 7.2
//Course: CMPS 385
//Due Date: April 5, 2017
//Professor: Ray Ahmadnia
//Purpose: Queue stlye linked list
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
using namespace std;

struct QUEUE
{
private: 
	struct node
	{
		int info;
		node *next;
	};
	node *front, *rear;
public:
	void ClearQ()
	{
		front = NULL; rear = NULL;
	}

	void PushQ(int x)
	{
		//create new node
		node *q = new(node);
		q->info = x;
		q->next = NULL;

		if (front == NULL)
		{
			//first piece of data and must be put in front
			front = q; rear = q;
		}
		else
		{	//inserting x at the rear of the queue
			rear->next = q;
			rear = q;
		}
	}

	void DisplayQ()
	{
		node *q = front;
		while (q != NULL)
		{
			cout << q->info << "->";
			q = q->next;
		}
		cout << "NULL" << endl;
	}

	int PopQ()
	{
		//remove item from the front
		node *q = front;
		int x = q->info;
		front = front->next;
		delete q;
		return x;
	}
};

int main()
{
	int b[5] = {10, 50, 70, 20, 40};
	int x, max, min;

	QUEUE Q;

	Q.ClearQ();

	for (int i = 0; i < 5; i++)
	{
		Q.PushQ(b[i]);
	}

	Q.DisplayQ();

	x = Q.PopQ();
	max = min = x;
	for(int i = 0; i < 4; i++)
	{
		if (x > max)
		{ 
			max = x;
		}

		if (x < min)
		{
			min = x;
		}
		x = Q.PopQ();
	}
	

	cout << "Max = " << max << "\nMin = " << min << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//10->50->70->20->40->NULL
//Max = 70
//Min = 10
//Press any key to continue . . .
//--------------------------------------------------------------------------