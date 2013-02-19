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
	choice = 1;

	while (choice == 1)
	{
	if (choice == 1) {
		cout << "*****************************************\n"
			<< "Welcome to Grade Book. Please select one of 2 options\n"
			<< "1. Enter the student score and determine grade\n"
			<< "2. Exit the program\n"
			<< "*****************************************\n"
			<< "Enter Selection: ";
	cin >> choice;
	}
	if (choice != 1) {
		cout << "GoodBye!\n";
		return 0;
	}

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
		 << id << "			" << grade << "			" << letter << endl
		 << endl
		 << endl;
	}

	if (choice == 2)
		exit;

	return 0;

}

/*
*****************************************
Welcome to Grade Book. Please select one of 2 options
1. Enter the student score and determine grade
2. Exit the program
*****************************************
Enter Selection: 1

--------------------------------
Student ID: 1
Exam 1 score: 100
Exam 2 score: 90
Exam 3 score: 95
--------------------------------
Student ID              Grade (%)               Final Grade
1                       95                      A


*****************************************
Welcome to Grade Book. Please select one of 2 options
1. Enter the student score and determine grade
2. Exit the program
*****************************************
Enter Selection: 1

--------------------------------
Student ID: 2
Exam 1 score: 88
Exam 2 score: 80
Exam 3 score: 75
--------------------------------
Student ID              Grade (%)               Final Grade
2                       81                      B


*****************************************
Welcome to Grade Book. Please select one of 2 options
1. Enter the student score and determine grade
2. Exit the program
*****************************************
Enter Selection: 1

--------------------------------
Student ID: 3
Exam 1 score: 77
Exam 2 score: 77
Exam 3 score: 64
--------------------------------
Student ID              Grade (%)               Final Grade
3                       72.6667                 C


*****************************************
Welcome to Grade Book. Please select one of 2 options
1. Enter the student score and determine grade
2. Exit the program
*****************************************
Enter Selection: 1

--------------------------------
Student ID: 4
Exam 1 score: 60
Exam 2 score: 60
Exam 3 score: 60
--------------------------------
Student ID              Grade (%)               Final Grade
4                       60                      D


*****************************************
Welcome to Grade Book. Please select one of 2 options
1. Enter the student score and determine grade
2. Exit the program
*****************************************
Enter Selection: 1

--------------------------------
Student ID: 5
Exam 1 score: 0
Exam 2 score: 50
Exam 3 score: 75
--------------------------------
Student ID              Grade (%)               Final Grade
5                       41.6667                 F


*****************************************
Welcome to Grade Book. Please select one of 2 options
1. Enter the student score and determine grade
2. Exit the program
*****************************************
Enter Selection: 2
GoodBye!
*/