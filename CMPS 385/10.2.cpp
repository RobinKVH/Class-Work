//Name: Robin Horan
//Homework #: 10.2
//Course: CMPS 385
//Due Date: April 26, 2017
//Professor: Ray Ahmadnia
//Purpose: BST output practice
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
using namespace std;

struct TREE
{
private:
	struct node
	{
		int info;
		node *left;
		node *right;
	};
	node *root;
	int total = 0;
	int count = 0;
public:
	TREE() { root = NULL; }
	void Insert(node *&p, int x)
	{
		if (p == NULL)
		{
			p = new node; p->info = x;
			p->left = NULL; p->right = NULL;
		}
		else
		{
			if (x > p->info) { Insert(p->right, x); }
			if (x < p->info) { Insert(p->left, x); }
		}
	}
	void DisplayIn(node *p)
	{
		if (p != NULL)
		{
			DisplayIn(p->left);
			cout << p->info << "  ";
			DisplayIn(p->right);
		}
	}
	void DisplayPost(node *p)
	{
		if (p != NULL)
		{
			DisplayPost(p->left);
			DisplayPost(p->right);
			cout << p->info << "  ";
		}
	}
	void DisplayPre(node *p)
	{
		if (p != NULL)
		{
			cout << p->info << "  ";
			DisplayPre(p->left);
			DisplayPre(p->right);
		}
	}
	int NodeCount(node *p)
	{
		if (p != NULL)
		{
			count++;
			NodeCount(p->left);
			NodeCount(p->right);
		}
		return count;
	}
	int NodeTotal(node *p)
	{
		if (p != NULL)
		{
			total += p->info;
			NodeTotal(p->left);
			NodeTotal(p-> right);
		}
		return total;
	}
	void Insert(int x)
	{
		Insert(root, x);
	}
	void DisplayIn()
	{
		DisplayIn(root);
	}
	void DisplayPost()
	{
		DisplayPost(root);
	}
	void DisplayPre()
	{
		DisplayPre(root);
	}
	int NodeCount()
	{
		return NodeCount(root);
	}
	int NodeTotal()
	{
		return NodeTotal(root);
	}
};

int main()
{
	TREE T;

	int a[6] = {25, 9, 36, 2, 17, 40};

	for (int i = 0; i < 6; i++)
	{
		T.Insert(a[i]);
	}

	cout << "PREORDER: "; T.DisplayPre(); cout << endl;
	cout << "INORDER: "; T.DisplayIn(); cout << endl;
	cout << "POSTORDER: "; T.DisplayPost(); cout << endl;
	cout << "Number of nodes: " << T.NodeCount() << endl;
	cout << "Sum of data in nodes: " << T.NodeTotal() << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//PREORDER: 25  9  2  17  36  40
//INORDER: 2  9  17  25  36  40
//POSTORDER: 2  17  9  40  36  25
//Number of nodes: 6
//Sum of data in nodes: 129
//Press any key to continue . . .
//--------------------------------------------------------------------------