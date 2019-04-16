//Name: Robin Horan
//Homework #: 6.2
//Course: CMPS 385
//Due Date: March 29, 2017
//Professor: Ray Ahmadnia
//Purpose: Linked list average, max, min
//--------------------------------------------------------------------------
#include <iostream>
#include <string>

using namespace std;

//declaration for each location of the array
struct PERSON
{
	string name;
	int age;
	double gpa;
};

//declaration for each node of the linked list
struct node
{
	string NAME;
	int AGE;
	double GPA;
	node *next;
};

int main()
{
	PERSON p[6] = { { "Tom", 21,2.1 },{ "Bill", 33,3.3 },{ "Jack", 44,2.4 },{ "Bin", 15, 2.5 },{ "Donald", 32,3.2 }, {"Marry", 18, 3.1 } };

	//copy data from the array P into a linked list
	node *List;
	node *temp;
	List = new (node);
	List->NAME = p[0].name;
	List->AGE = p[0].age;
	List->GPA = p[0].gpa;

	temp = List;
	for (int i = 1; i < 5; i++)
	{
		temp->next = new(node);
		temp = temp->next;
		temp->NAME = p[i].name;
		temp->AGE = p[i].age;
		temp->GPA = p[i].gpa;
	}
	temp->next = NULL;

	//display the linked list
	temp = List;
	while (temp != NULL)
	{
		cout << temp->NAME << ", " << temp->AGE << ", " << temp->GPA  << "--> ";
		temp = temp->next;
	}
	cout << "NULL\n";
	//compute average of all gpas

	double total = 0;
	int count = 0;
	int max = 0;
	int min = 100;
	double ave;
	temp = List;
	while (temp != NULL)
	{
		count++;
		total += temp->GPA;
		if (temp->AGE > max)
		{
			max = temp->AGE;
		}

		if (temp->AGE < min)
		{
			min = temp->AGE;
		}

		temp = temp->next;
	}

	cout << "Max Age = " << max << "\t\tMin Age = " << min << endl;

	temp = List;
	while (temp != NULL)
	{
		if (temp->AGE == max)
		{
			cout << "The oldest person is " << temp->NAME << endl;
		}
		temp = temp->next;
	}

	ave = total / count;
	cout << "Average = " << ave << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Tom, 21, 2.1--> Bill, 33, 3.3--> Jack, 44, 2.4--> Bin, 15, 2.5--> Donald, 32, 3.2--> NULL
//Max Age = 44            Min Age = 15
//The oldest person is Jack
//Average = 2.7
//Press any key to continue . . .
//--------------------------------------------------------------------------