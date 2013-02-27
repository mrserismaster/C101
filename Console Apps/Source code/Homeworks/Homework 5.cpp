//By: Derrik Campau
//Homework 5.cpp
//Date: 2/24/13

#include <iostream>

using namespace std;

int main () 
{ 

	int m; 

	cout << "Your input: "; 
	cin >> m;

	cout << "The prime numbers less than or equal to " << m << " are: \n";

	for (int i=2; i<m; i++) {			
			
		for (int j=2; j<=i; j++) {

			if (i == 2)					// Eliminates a scneario where the program would check 2 % 2 and not print 2 to the screen
				cout << i << " \t";
			else if (i % j == 0)		// Checks to see if number can be divided by another, smaller int
				break;
			else if (i == j+1)			// Prints number if prime
				cout << i << " \t";
		}
	}
	
	cout <<endl; 
   
return 0; 
} 

/*
Your input: 100
The prime numbers less than or equal to 100 are:
2       3       5       7       11      13      17      19      23      29
31      37      41      43      47      53      59      61      67      71
73      79      83      89      97
*/