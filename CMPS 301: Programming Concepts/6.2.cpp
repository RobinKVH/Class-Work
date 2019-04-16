//Name: Robin Horan
//Course: CMPS 301
//Due Date: October 21, 2015
//Professor: Ray Ahmadnia
//Purpose: Program asking for order and using if statements
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	//declaring variables
	float amount, totalbill, gasprice, washprice;
	char typegas, typewash;

	//displaying menu
	cout << "-------------Exxon Gas Station-------------" << endl;
	cout << "Type of Gas" << endl;
	cout << "\tPremium(P)...........................4.30" << endl;
	cout << "\tUnleaded(U)..........................4.20" << endl;
	cout << "\tRegular(R)...........................4.10" << endl;
	cout << "Type of Car Wash" << endl;
	cout << "\tWashall(W)...........................4.00" << endl;
	cout << "\tSuper(S).............................5.00" << endl;
	cout << "\tDeluxe(D)............................6.00" << endl;

	//asking for order
	cout << "How many gallons of gas? "; cin >> amount;
	cout << "\tEnter the type of gas: "; cin >> typegas;
	cout << "\tEnter the type of carwash: "; cin >> typewash;

	//calculating gas
	if (typegas == 'P' || typegas == 'p')
	{
		gasprice = amount * 4.30;
	}
	else if (typegas == 'U' || typegas == 'u')
	{
		gasprice = amount *4.20;
	}
	else if (typegas == 'R' || typegas == 'r')
	{
		gasprice = amount * 4.10;
	}
	else {}

	//calculating wash price
	if (typewash == 'W' || typewash == 'w')
	{
		washprice = 4.00;
	}
	else if (typewash == 'S' || typewash == 's')
	{
		washprice = 5.00;
	}
	else if (typewash == 'D' || typewash == 'd')
	{
		washprice = 6.00;
	}
	else {}

	//calculating total price
	totalbill = gasprice + washprice;

	//output
	cout << fixed << setprecision(2) << showpoint;
	cout << "" << endl;
	cout << "\t\t\tTotal Bill: " << totalbill << endl;

	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//-------------Exxon Gas Station-------------
//Type of Gas
//	Premium(P)...........................4.30
//	Unleaded(U)..........................4.20
//	Regular(R)...........................4.10
//Type of Car Wash
//	Washall(W)...........................4.00
//	Super(S).............................5.00
//	Deluxe(D)............................6.00
//How many gallons of gas ? 10.2
//	Enter the type of gas : R
//	Enter the type of carwash : D
//
//			Total Bill : 47.82
//Press any key to continue . . .
//-------------------------------------------------------------------------------