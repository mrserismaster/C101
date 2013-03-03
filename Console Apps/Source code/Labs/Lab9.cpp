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

	int input, p1, p2, i;
	p1 = 2;
	p2 = 0;
	i = 2;

	cout << "Please enter an even positive integer larger than 2: ";
	cin >> input;

	for (int i=2; i<input-1; i++);
	{
		if (is_prime(i) && is_prime(input));
			p1 = i;
			p2 = input-p1;
	}

	cout << input << " can be decomposed into two prime numbers " << p1 << "  and " << p2 << endl;

	return 0;
}

//function that determine parameter n is a prime number or not
//if n is a prime number return true, else return false

bool is_prime(int n) {
	bool prime = false;
	int i = 2;

	for (int i=2; i<=n; i++); {
		//if (n == 2)
			//prime = true;
		if (n/i == 0) 
			prime = false;
	}

	return prime;
}