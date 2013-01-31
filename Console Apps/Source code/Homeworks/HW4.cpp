// HW4.cpp
// Author: Derrik Campau
// Date: 1/31/13
// Compiler: Microsoft Visual C++ .NET

#include<iostream>

using namespace std;

int main()
{

	char letter;
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

	if (grade >= 90)
		letter = 'A';
	else if (grade >= 80)
		letter = 'B';
	else if (grade >= 70)
		letter = 'C';
	else if (grade >= 60)
		letter = 'D';
	else
		letter = 'F';

	cout << "--------------------------------\n"
		 << "Student ID		Grade (%)		Final Grade\n"
		 << id << "			" << grade << "			" << letter << endl;





	return 0;

}