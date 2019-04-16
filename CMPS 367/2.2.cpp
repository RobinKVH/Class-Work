//Name: Robin Horan
//Course: CMPS 367
//Due Date: February 22, 2016
//Professor: Ray Ahmadnia
//Purpose: Counting how many uppercase letters, digits, and vowels are in a sentence
//--------------------------------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	//declaring variables
	char letter;
	int upper = 0, digit = 0, vowel = 0;

	//asking input
	cout << "Enter a sentence: ";
	cin.get(letter);

	while (letter != '\n')
	{
		switch (letter)
		{
		case 'A': upper++; vowel++; break;
		case 'B': upper++; break;
		case 'C': upper++; break;
		case 'D': upper++; break;
		case 'E': upper++; vowel++; break;
		case 'F': upper++; break;
		case 'G': upper++; break;
		case 'H': upper++; break;
		case 'I': upper++; vowel++; break;
		case 'J': upper++; break;
		case 'K': upper++; break;
		case 'L': upper++; break; 
		case 'M': upper++; break;
		case 'N': upper++; break;
		case 'O': upper++; vowel++; break;
		case 'P': upper++; break;
		case 'Q': upper++; break;
		case 'R': upper++; break;
		case 'S': upper++; break;
		case 'T': upper++; break;
		case 'U': upper++; vowel++; break;
		case 'V': upper++; break;
		case 'W': upper++; break;
		case 'X': upper++; break;
		case 'Y': upper++; break;
		case 'Z': upper++; break;
		case '0': digit++; break;
		case '1': digit++; break;
		case '2': digit++; break;
		case '3': digit++; break;
		case '4': digit++; break;
		case '5': digit++; break;
		case '6': digit++; break;
		case '7': digit++; break;
		case '8': digit++; break;
		case '9': digit++; break;
		case 'a': vowel++; break;
		case 'e': vowel++; break;
		case 'i': vowel++; break;
		case 'o': vowel++; break;
		case 'u': vowel++; break;
		}
		cin.get(letter);
	}

	//displaying output
	cout << setfill('.');
	cout << left << setw(29) << "\tNumber of uppercase letters" << "=" << upper << ":";
	for (int i = 1; i <= upper; i++)
	{
		cout << '*';
	}
	cout << endl;

	cout << left << setw(29) << "\tNumber of digits" << "=" << digit << ":";
	for (int i = 1; i <= digit; i++)
	{
		cout << '*';
	}
	cout << endl;

	cout << left << setw(29) << "\tNumber of vowels" << "=" << vowel << ":";
	for (int i = 1; i <= vowel; i++)
	{
		cout << '*';
	}
	cout << endl;


	system("pause");
	return 0;
}
//--------------------------------OUTPUT------------------------------------
//Enter a sentence: Today Is Wed Feb 12
//	Number of uppercase letters.=4:****
//	Number of digits............=2:**
//	Number of vowels............=5:*****
//Press any key to continue . . .
//--------------------------------------------------------------------------