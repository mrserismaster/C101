// Lab6.cpp
// Author: Derrik Campau
// Date: 2/7/13
// Compiler: Microsoft Visual C++ .NET

#include <iostream>
using namespace std;
/*        

Original code

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
*/

//inverse of above
int main ()
{
	int m, n;

	for (m=10; m>=0; m--)
	{
		for (n=0; n<m; n++) cout << " ";
		for (n=0; n<(21-2*m); n++) cout << "*";
		for (n=0; n<m; n++) cout << " ";
		cout << endl;
	}
		return 0;
}

/*
          *
         ***
        *****
       *******
      *********
     ***********
    *************
   ***************
  *****************
 *******************
*********************
*/