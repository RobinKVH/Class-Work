//Name: Robin Horan
//Homework 8.1
//Course: CMPS 371
//Due Date: Januaty 26, 2018
//Professor: Ray Ahmadnia
//--------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string name;
int drinkamount, foodamount;
float total;
char drinktype, foodtype, cont;
void askName()
{
	cout << "Enter your name: "; cin >> name;
}
void askAmount()
{
	cout <<"\t" << name << ", how many drinks and food would you like? "; cin >> drinkamount >> foodamount;
}
void askDrinkType()
{
	cout << "\t\tWhat kind of drink(S/B/C)? "; cin >> drinktype;
}
void askFoodType()
{
	cout << "\t\tWhat kind of food(H/P)? "; cin >> foodtype;
}
void displayTotal()
{
	cout << fixed << showpoint << setprecision(2);
	cout << "\t\t\tTotal = " << total << endl;
}
void askCont()
{
	cout << "CONTINUE(Y/N)? "; cin >> cont;
}
int main()
{
	float sodaprice = 1.4, beerprice = 1.5, chipsprice = 2.0, hambprice = 3.75, pizzaprice = 5.9;
	_asm
	{
	TheLoop:
		cmp cont, 'N';
		Je Fin;
		call askName;
		call askAmount;
		call askDrinkType;
		call askFoodType;
		cmp drinktype, 'S';
		Je Soda;
		cmp drinktype, 'B';
		Je Beer;
	Chips:
		fld chipsprice;
		Jmp Done1;
	Beer:
		fld beerprice;
		Jmp Done1;
	Soda:
		fld sodaprice;
	Done1:
		fild drinkamount;
		fmul;
		cmp foodtype, 'H';
		Je Hamburger;
	Pizza:
		fld pizzaprice;
		Jmp Done2;
	Hamburger:
		fld hambprice;
	Done2:
		fild foodamount;
		fmul;
		fadd;
		fstp total;
		call displayTotal;
		call askCont;
		Jmp TheLoop;
	Fin:

	}

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter your name : John
//	John, how many drinks and food would you like ? 2 3
//		What kind of drink(S / B / C) ? B
//		What kind of food(H / P) ? H
//			Total = 14.25
//CONTINUE(Y / N) ? Y
//Enter your name : Mary
//	Mary, how many drinks and food would you like ? 3 4
//		What kind of drink(S / B / C) ? S
//		What kind of food(H / P) ? P
//			Total = 27.80
//CONTINUE(Y / N) ? N
//Press any key to continue . . .
//--------------------------------------------------------------------------