// HW4.cpp
// Author: Derrik Campau
// Date: 1/31/13
// Compiler: Microsoft Visual C++ .NET

#include<iostream>

using namespace std;

int main()
{

	int id, choice;
	double score1, score2, score3, grade;

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
		 << "--------------------------------\n"
		 << "Student ID: ";
	
	cin >> id;

	cout << "Exam 1 score: ";
	cin >> score1;

	cout << "Exam 2 score: ";
	cin >> score2;

	cout << "Exam 3 score: ";
	cin >> score3;

	grade = ((score1 + score2 + score3) / 3);



	cout << "--------------------------------\n"
		 << "Student ID		Grade (%)		Final Grade\n"
		 << id << "			" << grade << "		";





	return 0;

}