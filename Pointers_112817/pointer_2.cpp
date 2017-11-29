#include <iostream>
#include <cstdio>
using namespace std;

int foo()
{
	cout << "hi there!"	<< endl;
}

int main()
{
	int x = 10;
	
	int* intptr;
	
	intptr = &x;
	
	cout << "address of x: " << &x << endl;
	cout << "address stored by intptr: " << intptr << endl;
	cout << "data at address stored by intptr: " << *intptr << endl;
	
	printf("%ld\n",&foo);
	
	return 0;
}
