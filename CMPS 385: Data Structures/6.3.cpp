//Name: Robin Horan
//Homework #: 6.3
//Course: CMPS 385
//Due Date: March 29, 2017
//Professor: Ray Ahmadnia
//Purpose: 
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

struct node
{
	int info;
	node *next;
};

int main()
{
	node *List;
	node *temp;
	int r;
	int odd = 0;
	int even = 0;
	int count = 0;
	double total = 0;
	int check;
	double ave;

	srand(time(0));

	List = new(node);
	r = (rand() % 20);
	List->info = r;

	temp = List;
	for (int i = 1; i < 10; i++)
	{
		temp->next = new(node);
		temp = temp->next;
		r = (rand() % 20);
		temp->info = r;
	}
	temp->next = NULL;

	temp = List;
	while (temp != NULL)
	{
		total += temp->info;
		count++;
		check = temp->info % 2;
		if (check == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}

		cout << temp->info << " -> ";
		temp = temp->next;
	}
	cout << "NULL" << endl;
	cout << "Number of Odd Numbers: " << odd << endl;
	cout << "Number of Even Numbers: " << even << endl;

	ave = total / count;

	cout << "Average = " << ave << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//18 -> 7 -> 4 -> 15 -> 11 -> 2 -> 3 -> 15 -> 9 -> 15->NULL
//Number of Odd Numbers : 7
//Number of Even Numbers : 3
//Average = 9.9
//Press any key to continue . . .
//--------------------------------------------------------------------------