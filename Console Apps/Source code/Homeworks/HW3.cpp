// HW3.cpp : C++ program that calculates and displays the gratuity to be given to a pizza delivery person.
// Author  : Derrik Campau
// Date    : 1/28/13
// Compiler: MS Visual C++ .NET

#include<iostream>

using namespace std;

int main()
{
	double pizza, other, discount, tip, subtotal;

	cout << "Cost of pizza?: => ";
	cin >> pizza;

	cout << "Cost of other items?: => ";
	cin >> other;

	cout << "Discounts?: => ";
	cin >> discount;

	cout << "Percent tip?: => ";
	cin >> tip;

	subtotal = ((pizza + other) - discount);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "-------------------------------" << endl << endl;

	cout << "Cost of pizza:		$" << pizza << endl
		 << "Cost of other items:	$" << other << endl
		 << "Less discounts:		$" << discount << "CR" << endl
		 << "===============================" << endl
		 << "Subtotal:		$" << subtotal << endl
		 << "Plus 0.06 sales tax:	$" << (subtotal * .06) << endl
		 << "===============================" << endl
		 << "Grand total:		$" << (subtotal * 1.06) << endl << endl
		 << "Gratuity:		$" << ((subtotal * 1.06) * (tip / 100)) << endl;

	return 0;
}

/*
Cost of pizza?: => 12.99
Cost of other items?: => 4.99
Discounts?: => 2.49
Percent tip?: => 12
-------------------------------

Cost of pizza:          $12.99
Cost of other items:    $4.99
Less discounts:         $2.49CR
===============================
Subtotal:               $15.49
Plus 0.06 sales tax:    $0.93
===============================
Grand total:            $16.42

Gratuity:               $1.97
*/