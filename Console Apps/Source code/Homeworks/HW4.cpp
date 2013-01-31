// HW4.cpp
// Author: Derrik Campau
// Date: 1/31/13
// Compiler: Microsoft Visual C++ .NET

#include<iostream>

using namespace std;

int main()
{

	int id, choice;
	double score1, score2, score3;

	cout << "*****************************************\n"
		 << "Welcome to Grade Book. Please select one of 2 options\n"
		 << "1. Enter the student score and determine grade\n"
		 << "2. Exit the program\n"
		 << "*****************************************\n"
		 << "Enter Selection: ";
	
	cin >> choice;

	if (choice == 2)
		exit;

	cout << endl
		 << "--------------------------------"
		 << "Student ID: ";
	
	cin >> id;






	return 0;

}