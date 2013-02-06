// Lab5.cpp
// Author: Derrik Campau
// Date: 2/6/13
// Compiler: Microsoft Visual C++ .NET

#include <iostream>

using namespace std;

int main()
{
	int number;
	int sum = 0;
	int i = 1;

	cout << "Please enter a positive number: ";
	cin >> number;

	while (i<=number)
	{
		sum = sum + i;
		i++;
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
