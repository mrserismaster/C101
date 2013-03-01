// HW6.cpp
// 2.28.2013
// Derrik Campau
// This program will add the digits of the number entered by the user

#include <iostream>
#include <cmath>

int digitSumCalc(int);

using namespace std;

int main() {

	int input, result;

	cout << "Please enter a positive integer: ";
	cin >> input;

	result = digitSumCalc(input);		//calls the digitsum function

	cout << "The digit sum of the number you entered is: " << result << endl;

	return 0;
}

int digitSumCalc(int number) {

	int sum = 0;

	while ( number > 0 ) {
	sum += number % 10;
	number /= 10;
	}

	return sum;
}