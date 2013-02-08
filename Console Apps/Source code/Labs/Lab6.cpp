// Lab6.cpp
// Author: Derrik Campau
// Date: 2/7/13
// Compiler: Microsoft Visual C++ .NET

#include<iostream>
using namespace std;

int main ()
{
	int m, n;

	for (m=0; m<10; m++)
	{
		for (n=0; n<m; n++) cout << " ";
		for (n=0; n<(19-2*m); n++) cout << "*";
		for (n=0; n<m; n++) cout << " ";
		cout << endl;
	}

		return 0;
}