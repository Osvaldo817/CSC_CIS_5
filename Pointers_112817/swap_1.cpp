#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
	int temp = x;
	x=y;
	y=temp;
}

int main()
{
	int a = 5, b = 7;
	
	cout << "a=" << a << ", b=" << b << endl;
	swap(a,b);
	cout << "a=" << a << ", b=" << b << endl;
	
	return 0;
}
