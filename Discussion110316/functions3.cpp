#include <iostream>
using namespace std;

// function prototypes
void printIntro();
void displayValue(int num);
void showSum(int a, int b, int c);

// main
int main()
{
	printIntro();
	displayValue(5);
	showSum(1,2,3);
	showSum(-1,-2,3);
	
	return 0;
}

// function implementations
void printIntro()
{
	cout << "Hello from functions3" << endl;
}

void displayValue(int num)
{
	cout << "The value of num is " << num << endl;
}

void showSum(int a, int b, int c)
{
	cout << "The sum of " << a << "+" << b << "+" << c << " is: " << a+b+c << endl;
}
