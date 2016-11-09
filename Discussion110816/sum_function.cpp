#include <iostream>
using namespace std;

// function prototype
double sum(double, double); 

// main
int main()
{
	cout << sum(4.5,6.6) << endl;
	return 0;
}

// function implementation
// remember, I just do a simple copy/paste of the prototype on line 6
// and code the logical action of the function in the function body
double sum(double x, double y)
{
	double result;
	result = x+y;
	return result;
}
