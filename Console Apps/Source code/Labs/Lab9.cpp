/*prime test. Your name: Derrik Campau
There are bugs in this program. You job is to find all bugs and
correct them */

#include <iostream>
using namespace std;

//prototype
bool is_prime(int);

//main function, get positive number (larger than 1) from the user
//and determine whether it is a prime number. If it is not a prime number
//express it as the sum of two prime numbers

int main () {

	int input, p1, p2, j;
	p1 = 0;
	p2 = 0;
	j = 2;

	cout << "Please enter an even positive integer larger than 2: ";
	cin >> input;

	for (int i=2; i<input-1; i++);
		j++;
	{
		if (is_prime(j) && is_prime(input));
			p1 = j;
			p2 = input-p1;
	}

	cout << input << " can be decomposed into two prime numbers " << p1 << "  and " << p2 << endl;

	return 0;
}

//function that determine parameter n is a prime number or not
//if n is a prime number return true, else return false

bool is_prime(int n) {
	bool prime = false;

	for (int i=2; i<=n; i++); {
		int m = 1;
		m++;
		if (m == 2)					// Eliminates a scneario where the program would check 2 % 2 and not print 2 to the screen
			prime = true;
		else if (m % n == 0)		// Checks to see if number can be divided by another, smaller int
			prime = false;
		else if (m == n+1)			// Prints number if prime
			prime = true;
/*		//if (n == 2)
			//prime = true;
		if (n/i == 0) 
			prime = false; */
	}

	return prime;
}