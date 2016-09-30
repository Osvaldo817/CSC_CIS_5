#include <iostream>
using namespace std;

int main()
{
	int x, y;
	
	cout << "If/Else If Demo" << endl;
	
	cout << "Enter an integer value for x and y (seperated by a space): ";
	cin >> x >> y;
	
	if ( x>0 && y>0 )
		cout << "x>0 and y>0" << endl;
		
	else if ( x>0 && y<=0 )
		cout << "x>0 and y<=0" << endl;
	
	else
		cout << "x<=0" << endl;
	
	return 0;
}
