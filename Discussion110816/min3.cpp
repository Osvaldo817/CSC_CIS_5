#include <iostream>
using namespace std;

// function prototype
// remember parameter names are optional, I include them for readability
int min(int x, int y);
int min(int x, int y, int z); 

// main
int main()
{	
	cout << min(1,2,3) << endl;
	cout << min(2,1,3) << endl;
	cout << min(3,2,1) << endl;
		
	return 0;
}

// function implementation
// remember, I just do a simple copy/paste of the prototype on line 6
// and code the logical action of the function in the function body
// min with two parameters
int min(int x, int y)
{
	int result;
	if ( x<y ) result=x;
	else result=y;
	return result;
}

// min with three parameters (overloaded)
int min(int x, int y, int z)
{
	int result=min(x,y);
	result=min(result,z);
	return result;
}
