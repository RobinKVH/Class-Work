//Name: Robin Horan
//Homework #: 6.1
//Course: CMPS 385
//Due Date: March 29, 2017
//Professor: Ray Ahmadnia
//Purpose: Linked list total
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;

struct node
{
	int info;
	node *next;
};

int main()
{
	node *List1;
	node *temp;
	int a[4] = { 9,8,5,7};
	int total = 0;
	int count = 0;

	List1 = new(node);
	temp = List1;//masterkey
	temp->info = a[0];
	for (int i = 1; i < 4; i++)
	{
		temp->next = new(node);// = a[i];
		temp = temp->next;
		temp->info = a[i];
	}
	temp->next = NULL;

	//display the list
	temp = List1;
	while (temp != NULL)
	{
		cout << temp->info << " -> ";
		temp = temp->next;
	}
	cout << "NULL\n";

	//count the number of nodes and total
	temp = List1;
	while (temp != NULL)
	{

		count++;
		total += temp->info;
		temp = temp->next;
	}
	cout << "Total of all nodes = " << total << endl;
	cout << "Number of nodes = " << count << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//9 -> 8 -> 5 -> 7->NULL
//Total of all nodes = 29
//Number of nodes = 4
//Press any key to continue . . .
//--------------------------------------------------------------------------