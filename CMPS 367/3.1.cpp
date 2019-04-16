//Name: Robin Horan
//Course: CMPS 367
//Due Date: February 29, 2016
//Professor: Ray Ahmadnia
//Purpose: Converting telephone numbers into full numeric form
//--------------------------------------------------------------------------
#include <iomanip>
#include <iostream>

using namespace std;
int main()
{
	//declaring variables
	char number, cont;
	int counter1, counter2 = 0;

	do
	{
		counter1 = 0;
		cout << "Enter a telephone number: ";
		if (counter2 == 0)
		{
			cin.ignore(4);
		}
		else
		{
			cin.ignore(5);
		}
		cin.get(number);

		cout << "\tThe numeric form is 1-800-";
		while (number != '\n')
		{
			if (counter1 == 3)
			{
				cout << "-";
			}

			number = toupper(number);
			if (number >= 'A' && number <= 'C')
			{
				number = '2';
			}
			else if (number >= 'D' && number <= 'F')
			{
				number = '3';
			}
			else if (number >= 'G' && number <= 'I')
			{
				number = '4';
			}
			else if (number >= 'J' && number <= 'L')
			{
				number = '5';
			}
			else if (number >= 'M' && number <= 'O')
			{
				number = '6';
			}
			else if (number >= 'P' && number <= 'S')
			{
				number = '7';
			}
			else if (number >= 'T' && number <= 'V')
			{
				number = '8';
			}
			else if (number >= 'W' && number <= 'Z')
			{
				number = '9';
			}
			else
			{
			}

			//output
			cout << number;
			counter1++;
			cin.get(number);
		}

		//asking to continue
		counter2++;
		cout << endl;
		cout << "Continue(y/n)?";
		cin >> cont;
		cont = toupper(cont);
	} while (cont == 'Y');

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter a telephone number: 1800dentist
//	The numeric form is 1-800-336-8478
//Continue(y/n)? y
//Enter a telephone number: 1800FixCars
//	The numeric form is 1-800-349-2277
//Continue(y/n)? n
//Press any key to continue . . .
//--------------------------------------------------------------------------