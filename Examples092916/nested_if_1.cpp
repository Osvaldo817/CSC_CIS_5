#include <iostream>
using namespace std;

int main()
{
	int x, y;
	
	cout << "Nested If Statement Demo" << endl;
	
	cout << "Enter an integer value for x and y (seperated by a space): ";
	cin >> x >> y;
	
	if ( x>0 ) {
		if ( y>0 )
		{
			cout << "x>0 and y>0" << endl;
		} // end of block for y>0
	else {
			cout << "x>0 and y<=0" << endl;
		} // end of block for y<=0	
	} // end of block for x>0
	else {
			cout << "x<=0" << endl;
	} // end of block for x<=0
	
} // end of the main function block
