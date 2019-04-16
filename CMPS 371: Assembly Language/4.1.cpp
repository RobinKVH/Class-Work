//Name: Robin Horan
//Homework 4.1
//Course: CMPS 371
//Due Date: Januaty 12, 2018
//Professor: Ray Ahmadnia
//--------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

string name;
char gender, cont;
int age, cost;

void askNameGender()
{
	cout << "Enter your name and gender: ";
	cin >> name >> gender;
}
void askAgeMale()
{
	cout << "Mr. " << name << ", how old are you? "; cin >> age;
}
void askAgeFemale()
{
	cout << "Mrs. " << name << ", how old are you? "; cin >> age;
}
void displayCostMale()
{
	cout << "\tMr. " << name << " your membership is $" << cost << endl;
}
void displayCostFemale()
{
	cout << "\tMrs. " << name << " your membership is $" << cost << endl;
}
void Cont()
{
	cout << "\t\tContinue(y/n)?"; cin >> cont;
}
int main()
{

	cout << "-----------ULV Fitness-----------" << endl;
	cout << "Male" << endl;
	cout << "  Adults.....................$150" << endl;
	cout << "  Teenagers..................$100" << endl;
	cout << "Female" << endl; 
	cout << "  Adults.....................$170" << endl;
	cout << "  Teenagers..................$120" << endl;

	_asm
	{
	DoWhile:
		call askNameGender;
		cmp gender, 'm';
		Je MaleL;
	False1:
		cmp gender, 'M';
		Je MaleU;
	False2:
		call askAgeFemale;
		cmp age, 19;
		Jnle AdultFemale;
	TeenageFemale:
		mov cost, 120;
		Jmp DoneFemale;
	AdultFemale:
		mov cost, 170;
		Jmp DoneFemale;
	MaleU:
		call askAgeMale;
		cmp age, 19;
		Jnle AdultMale;
	TeenageMale:
		mov cost, 100;
		Jmp DoneMale;
	AdultMale:
		mov cost, 150;
		Jmp DoneMale;
	MaleL:
		Jmp MaleU;
	DoneFemale:
		call displayCostFemale;
		Jmp Done;
	DoneMale:
		call displayCostMale;
		Jmp Done;
	Done:
		call Cont;
		cmp cont, 'y';
		Je DoWhile;

	}

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//---------- - ULV Fitness---------- -
//Male
//Adults.....................$150
//Teenagers..................$100
//Female
//Adults.....................$170
//Teenagers..................$120
//Enter your name and gender: John m
//Mr.John, how old are you ? 27
//	Mr.John your membership is $150
//		Continue(y / n) ? y
//Enter your name and gender : Mary F
//Mrs.Mary, how old are you ? 15
//	Mrs.Mary your membership is $120
//		Continue(y / n) ? n
//Press any key to continue . . .
//--------------------------------------------------------------------------