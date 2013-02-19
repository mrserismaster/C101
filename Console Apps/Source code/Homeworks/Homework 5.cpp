

#include <iostream>

using namespace std;

int main () 
{ 

	int m, n; 
	bool prime = true; 

	cout << "Your input: "; 
	cin >> m;

	cout << "The prime numbers less than or equal to " << m << " are: \n";

	for (int i=2; i<m; i++)
		for (int j=2; j<i; j++)
		{
			if (i % j == 0)
				break;
			else if (i == j+1)
				cout << i << " ";
		}

	//for (n=2; n<m; n++) { 
    //if (m %n == 0) prime=false; 
//}
	

	//if (prime == true)  cout << m << " is a prime number"; 
	//else cout << m << " is a composite number"; 
	cout <<endl; 
   
return 0; 
} 