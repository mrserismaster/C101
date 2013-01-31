// temperature.cpp:  
// Author: Derrik Campau
// Date: 1/30/13
// Compiler: Microsoft Visual C++ .NET

#include <iostream>

using namespace std;

int main()
{
	double body_temperature;

	cout << "Your body temperature: " << endl; // prompts for user input

	cin >> body_temperature; //read input from user

	if (body_temperature >= 98.6) 
	
		cout << "You probably have a fever";
	
	if ((body_temperature < 98.6) && (body_temperature >= 96.0))
	
		cout<< "You have a normal temperature";
	
	else
	
		cout << "I cannot tell, please see your doctor";
	

	return 0;

}