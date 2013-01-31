// HW3.cpp : C++ program that calculates and displays the gratuity to be given to a pizza delivery person.
// Author  : Derrik Campau
// Date    : 1/28/13
// Compiler: MS Visual C++ .NET

#include<iostream>
#include<iomanip>

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

	cout << "----------------------------" << endl << endl;

	cout << "Cost of pizza:		$" << pizza << endl
		 << "Cost of other items:	$" << other << endl
		 << "Less discounts:		$" << discount << "CR" << endl
		 << "============================" << endl
		 << setprecision(2) << "Subtotal:		$" << subtotal << endl
		 << setprecision(2) << "Plus 0.06 sales tax:	$" << (subtotal * .06) << endl
		 << "============================" << endl
		 << setprecision(2) << "Grand total:		$" << (subtotal * 1.06) << endl << endl
		 << setprecision(2) << "Gratuity:		$" << ((subtotal * 1.06) * (tip / 100)) << endl;

	return 0;
}

