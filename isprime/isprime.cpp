// isprime.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	int value;
	char answer;
	int i;
	
	do
	{
		cout << "please enter a value ";
		cin >> value;

		//determine if prime
		for (i = 2; i < value; i++)
		{
			if (value % i == 0)
				break;
		}
		if (i == value)
			cout << "is Prime!! " << endl;
		else
			cout << "is not Prime. :(  " << endl;



		cout << "Another one?? ";
		cin >> answer;

	} while ((answer == 'Y') || (answer == 'y'));

    return 0;
}

