//Name: Robin Horan
//Course: CMPS 301
//Due Date: October 28, 2015
//Professor: Ray Ahmadnia
//Purpose: dislaying menu, aking order, and displaying bill using switch
//-------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	//declaring variables
	float amount, bill;
	char type_gas, type_wash;

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

	//asking input
	cout << "How many gallons of gas? "; cin >> amount;
	cout << "\tEnter the type of gas (P/U/R): "; cin >> type_gas;
	cout << "\tEnter the type of car wash (S/D/R): "; cin >> type_wash;

	//calculating bill
	switch (type_gas)
	{
	case 'P': case 'p': bill = amount * 4.3; break;
	case 'U': case 'u': bill = amount * 4.2; break;
	case 'R': case 'r': bill = amount * 4.1; break;
	default: cout << "That is not an available type of gas." << endl; break;
	}

	switch (type_wash)
	{
	case 'S': case 's': bill = bill + 4; break;
	case 'D': case 'd': bill = bill + 5; break;
	case 'R': case 'r': bill = bill + 6; break;
	default: cout << "That is not an available type of carwash." << endl; break;
	}

	//displaying output
	cout << fixed << setprecision(2) << showpoint;
	cout << "\n\t\tTotal Bill : " << bill << endl;


	system("pause");
	return 0;
}
//------------------------------------OUTPUT-------------------------------------
//-------------Exxon Gas Station-------------
//Type of Gas
//  Premium(P)...........................4.30
//  Unleaded(U)..........................4.20
//  Regular(R)...........................4.10
//Type of Car Wash
//  Washall(W)...........................4.00
//  Super(S).............................5.00
//  Deluxe(D)............................6.00
//How many gallons of gas ? 10.2
//  Enter the type of gas(P / U / R) : r
//  Enter the type of car wash(S / D / R) : d
//		
//		Total Bill : 46.82
//Press any key to continue . . .
//-------------------------------------------------------------------------------