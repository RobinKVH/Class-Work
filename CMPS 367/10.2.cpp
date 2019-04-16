//Name: Robin Horan
//Homework #: 10.2
//Course: CMPS 367
//Due Date: May 2, 2016
//Professor: Ray Ahmadnia
//Purpose: Practice using friend class members
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class POINT
{
private: float x, y;
public:
	void Read(char v)
	{
		cout << "\tEnter coordinate of " << v << ":"; cin >> x >> y;
	}
	friend void Show(POINT p, char c)
	{
		cout << c << "(" << p.x << " ," << p.y << ")";
	}
	friend float Distance(POINT p, POINT q)
	{
		return sqrt((p.x - q.x)*(p.x - q.x) + (p.y - q.y)*(p.y - q.y));
	}
    void ComputeArea(float length, float width)
	{
		cout << "The area of this rectangle is: " << length * width << endl;
	}
};

int main()
{
	POINT A;
	POINT B;
	POINT C;
	POINT D;
	float length, width;

	//asking initial input
	cout << "To draw a rectangle, please: " << endl;
	A.Read('A'); B.Read('B'); C.Read('C'); D.Read('D');

	//drawing rectangle
	cout << "\t\t"; Show(A, 'A'); cout << "--------------------"; Show(B, 'B'); cout << endl;
	cout << "\t\t      |                    |" << endl;
	cout << "\t\t      |                    |" << endl;
	cout << "\t\t      |                    |" << endl;
	cout << "\t\t"; Show(C, 'C'); cout << "--------------------"; Show(D, 'D');  cout << endl;

	cout << fixed << setprecision(2) << showpoint;
	length = Distance(A, B);
	width = Distance(B, D);
	cout << "Length of side AB = " << length << endl;
	cout << "Length of side BD = " << width << endl; 

	A.ComputeArea(length, width);

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//To draw a rectangle, please:
//	Enter coordinate of A : 2 5
//	Enter coordinate of B : 10 5
//	Enter coordinate of C : 2 1
//	Enter coordinate of D : 10 1
//		A(2, 5)--------------------B(10, 5)
//			  |					   |
//			  |					   |
//			  |					   |
//		C(2, 1)--------------------D(10, 1)
//Length of side AB = 8.00
//Length of side BD = 4.00
//The area of this rectangle is : 32.00
//Press any key to continue . . .
//--------------------------------------------------------------------------