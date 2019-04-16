//Name: Robin Horan
//Course: CMPS 367
//Due Date: February 29, 2016
//Professor: Ray Ahmadnia
//Purpose: Outputting city abreviations from user input
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
	//declaring variables
	string city;
	int sp1, sp2;
	char cont, w1, w2, w3;

		do
		{
			//asking input
			cout << "Enter a city name: "; getline(cin, city);

			sp1 = city.find(' ');
			sp2 = city.find(' ', sp1 + 1);

			if (sp1 == -1)
			{
				w1 = city.at(0);
				w2 = city.at(1);
				w2 = toupper(w2);

				cout << "\t" << city << " or " << w1 << w2 << endl;
			}
			else if (sp2 == -1)
			{
				w1 = city.at(0);
				w2 = city.at(sp1 + 1);

				cout << "\t" << city << " or " << w1 << w2 << endl;
			}
			else
			{
				w1 = city.at(0);
				w2 = city.at(sp1 + 1);
				w3 = city.at(sp2 + 1);

				cout << "\t" << city << " or " << w1 << w2 << w3 << endl;
			}
			cout << "\tContinue(y/n)?"; cin >> cont; cin.ignore();
			cont = toupper(cont);
		} while (cont == 'Y');


	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter a city name: Sacramento
//	Sacramento or SA
//	Continue(y/n)? y
//Enter a city name: Los Angeles
//	Los Angeles or LA
//	Continue(y/n)? y
//Enter a city name: La Habra Heights
//	La Habra Heights or LHH
//	Continue(y/n)? n
//Press any key to continue . . .
//--------------------------------------------------------------------------