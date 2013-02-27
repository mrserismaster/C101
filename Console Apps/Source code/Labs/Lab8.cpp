// Name: Derrik Campau
// Lab8
// 2/27/2013

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
 int weekDay, c, y, s;
	if ((year % 100 == 0) && (month == 1))
	{
		c = (year / 100) -1;
		y = (year % 100) + 99;
		month = month + 10;
	}
	else if ((year % 100 == 0) && (month == 2))
	{
		c = (year / 100) -1;
		y = (year % 100) + 99;
		month = month + 10;
	}
	else if ((month == 1) || (month == 2)) 
	{
		c = year / 100;
		y = (year % 100) - 1;
		month = month + 10;
	}
	else 
	{
		c = year / 100;
		y = year % 100;
		month = month - 2;
	}
	s = (day + floor(2.6*month - 0.2) - 2*c + y + floor(y/4.0) + floor(c/4.0));
	weekDay = s % 7;
	cout << day << " " << weekDay << " " << y << " " << c << " " << s << endl;
	return (weekDay);
}