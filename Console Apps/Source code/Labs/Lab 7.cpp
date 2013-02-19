/*randow_walk.cpp; Your name: 
 */ 

#include <iostream> 
#include <cmath> 
#include <ctime> 

using namespace std; 

int main () 
{ 

int position_x, position_y; 
int direction; 
int steps; 

	position_x=0; 
	position_y=0; 

	cout << "How many random steps do you expect the dog to walk:"; 
	cin >> steps; 

	srand (time(NULL));

	for (int i=0; i<steps; i++) {

		direction = rand() % 4;

		if (direction == 0)
			position_y++;
		else if (direction == 1)
			position_x++;
		else if (direction == 2)
			position_y--;
		else position_x--;
	}
  /* Your code goes here. For each step, you 
1. generate a random number 
2. scale the number to range [0, 1, 2, 3] 
3. If it is 0, the dog goes north, if it is 1, the dog goes 
east, if it is 2, the dog goes south, if it is 3, the 
dog goes west 
4. update the current position of the dog 
*/ 
	cout << "The current position (x, y) is" << endl; 
	cout<< "(" << position_x << "," << position_y << ")" << endl;  
}