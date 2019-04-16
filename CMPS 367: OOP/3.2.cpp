//Name: Robin Horan
//Course: CMPS 367
//Due Date: February 29, 2016
//Professor: Ray Ahmadnia
//Purpose: Counting the type of characters in a sentence
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	//declaring variables
	char letter;
	int letters = 0, digits = 0, words = 1, vowels = 0;

	//asking input
	cout << "Enter a sentence: ";

	//start the counting
	while (cin.get(letter), letter != '\n')
	{
		if (isalpha(letter))
		{
			letters++;
		}
		else if (isdigit(letter))
		{
			digits++;
		}
		else if (isspace(letter))
		{
			words++;
		}
		else
		{
		}
		switch (letter)
		{
		case 'A': case 'a': vowels++; break;
		case 'E': case 'e': vowels++; break;
		case 'I': case 'i': vowels++; break;
		case 'O': case 'o': vowels++; break;
		case 'U': case 'u': vowels++; break;
		}

	}

	//showing output
	cout << setfill('.');
	cout << left << setw(20) << " No. of letters" << letters << endl;
	cout << left << setw(20) << " No. of digits" << digits << endl;
	cout << left << setw(20) << " No. of words" << words << endl;
	cout << left << setw(20) << " No. of vowels" << vowels << endl;

	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter a sentence: To Build Something, First You have to Tear it off
// No.of letters.....39
// No.of digits......0
// No.of words.......10
// No.of vowels......16
//Press any key to continue . . .
//--------------------------------------------------------------------------