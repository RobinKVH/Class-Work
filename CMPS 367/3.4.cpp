//Name: Robin Horan
//Course: CMPS 367
//Due Date: February 29, 2016
//Professor: Ray Ahmadnia
//Purpose: Caclulating the total balacne after interest with user input
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	//declaring variables
	float balance, payment, time, rate;

	//asking input
	cout << "Enter the money you want to deposit now (P): "; cin >> payment;
	cout << "Enter the interest rate: "; cin >> rate;
	cout << "Enter duration in year (t): "; cin >> time;

	//calculating new balance
	balance = payment * exp(rate * time);

	//displaying output
	cout << fixed << setprecision(2) << showpoint;
	cout << "\tYour balance after 5 years is " << balance << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter the money you want to deposit now(P): 20000
//Enter the interest rate: .05
//Enter duration in year(t): 5
//	Your balance after 5 years is 25680.51
//Press any key to continue . . .
//--------------------------------------------------------------------------