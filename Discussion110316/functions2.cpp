#include <iostream>
using namespace std;

// function prototypes
void printIntro();
void displayValue(int num);

// main
int main()
{
	printIntro();
	displayValue(5);
	
	return 0;
}

// function implementations
void printIntro()
{
	cout << "Hello from function2" << endl;
	displayValue(10);
}

void displayValue(int num)
{
	cout << "The value of num is " << num << endl;
}
