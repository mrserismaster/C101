//Your name: Derrik Campau

#include <iostream> 
#include <cmath>

using namespace std;

int determine_day_of_week (int day, int month, int year); 

int main() 
{ 

	int day, month, year; 
	int result; 
	
	cout << "Enter a date " << endl; 
	cout << "month: "; 
	cin >> month; 
	cout << "day: "; 
	cin >> day; 
	cout << "year: "; 
	cin >> year; 
	
	result = determine_day_of_week(day, month, year); 
	cout << month << "-" << day << "-" << year << " is "; 
	
	if (result==0) cout << "Sunday"; 
	else if (result == 1) cout << "Monday"; 
	else if (result == 2) cout << "Tuesday"; 
	else if (result == 3) cout << "Wednesday"; 
	else if (result == 4) cout << "Thursday"; 
	else if (result == 5) cout << "Friday"; 
	else cout << "Saturday"; 
	
	cout << endl; 

	return 0; 
} 

int determine_day_of_week(int day, int month, int year) 
{ 
 //Your code goes here 
 
} 