#include <iostream>
using namespace std;

// function prototype
// remember parameter names are optional, I include them for readability
//void sum(int x, int y); 

void sum(int x, int y)
{
	cout << x << " + " << y << " = ";
	cout << x+y << endl;
}

// main
int main()
{
	sum(2,3); // should output: 2 + 3 = 5
	sum(-5,6); // should output: -5 + 6 = 1
	
	return 0;
}

// function implementation
// remember, I just do a simple copy/paste of the prototype on line 6
// and code the logical action of the function in the function body

