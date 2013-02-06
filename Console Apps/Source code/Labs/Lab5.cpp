// Lab5.cpp
// Author: Derrik Campau
// Date: 2/6/13
// Compiler: Microsoft Visual C++ .NET

#include <iostream>

using namespace std;

int main()
{
	int number, i;
	int sum = 0;

	cout << "Please enter a positive number: ";
	cin >> number;

	for (i=1; i<=number; i++)
	{
		sum = sum + i;
	}

	cout << "The summation of " << number << " is " << sum << endl;

	return 0;
}

/*
Please enter a positive number: 100
The summation of 100 is 5050

------------------------------------

Please enter a positive number: 4
The summation of 4 is 10
*/