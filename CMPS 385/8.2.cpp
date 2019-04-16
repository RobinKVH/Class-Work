//Name: Robin Horan
//Homework #: 8.2
//Course: CMPS 385
//Due Date: April 12, 2017
//Professor: Ray Ahmadnia
//Purpose: 
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
using namespace std;

struct MONTH
{
	string name;
	int days;
};



class HASH
{
private: 
	struct node
	{
		string month;
		int day;
		node*next;
	};
	 node*H[4];
public: 
		void ClearHashTable()
		{
			for (int i = 0; i < 4; ++i)
				{
					H[i] = NULL;
				}
		}
		int HashFunc(string x)
		{
			return (int(x[0]) + int(x[1]) + int(x[2])) % 4;
		}

		void Insert(string x, int y)
		{
			int i = HashFunc(x);
			//Insert X in front of H[i]
			node*q;
			q = new(node);
			q->month = x;
			q->day = y;
			q->next = H[i];
			H[i] = q;
		};

		void SearchHashTable(string x)
		{
			int i = HashFunc(x);
			//search for x in H[i]
			node*p = H[i];
			while (p != NULL&&p->month != x)
			{
				p = p->next;
			}
			if (p == NULL)
			{
				cout << x << " is not in the list\n";
			}
			else
			{
				cout << "Number of days in " << x << " is " << p->day << endl;
			}
		}

		void DisplayHashTable()
		{
			for (int i = 0; i<4; ++i)
			{
				cout << "H[" << i << "]->";
				node*p = H[i];
				while (p != NULL)
				{
					cout << p->month << "->";
					p = p->next;
				}
				cout << "NULL\n";
			}
		}
};

int main()
{
	MONTH month[12] = { { "JAN",31 },{ "FEB",28 },{ "MAR",31 },{ "APR",30 },{ "MAY",31 },{ "JUN",30 },{ "JUL",31 },{ "AUG",31 },{ "SEP",30 },{ "OCT",31 }
	,{ "NOV",30 },{ "DEC",31 } };
	HASH H;
	string search;
	char cont;

	H.ClearHashTable();

	for (int i = 0; i < 12; ++i)
	{
		H.Insert(month[i].name, month[i].days);
	}
	H.DisplayHashTable();

	do
	{
		cout << "Enter a month: "; cin >> search;
		H.SearchHashTable(search);
		cout << "\tCONTINUE?(y/n): "; cin >> cont;
		cont = toupper(cont);

	} while (cont == 'Y');

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//H[0]->DEC->SEP->MAR->NULL
//H[1]->AUG->JUN->FEB->JAN->NULL
//H[2]->OCT->NULL
//H[3]->NOV->JUL->MAY->APR->NULL
//Enter a month : JAN
//Number of days in JAN is 31
//	CONTINUE? (y / n) : y
//Enter a month : FEB
//Number of days in FEB is 28
//	CONTINUE? (y / n) : n
//Press any key to continue . . .
//--------------------------------------------------------------------------