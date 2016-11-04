#include <iostream>
using namespace std;

// function prototypes
void printIntro();
void displayValue(int num);
void showSum(int a, int b, int c);
double my_pow(double b, int n);

// main
int main()
{
	printIntro();
	displayValue(5);
	showSum(1,2,3);
	showSum(-1,-2,3);
	
	cout << "Using my_pow, 3 to the power of 3 is: " << my_pow(3,3) << endl;
	cout << "Using my_pow, 1.3 to the power of 6 is: " << my_pow(1.3,6) << endl;
	cout << "Using my_pow, -3.3 to the power of 13 is: " << my_pow(-3.3,13) << endl;
	
	return 0;
}

// function implementations
void printIntro()
{
	cout << "Hello from functions4" << endl;
}

void displayValue(int num)
{
	cout << "The value of num is " << num << endl;
}

void showSum(int a, int b, int c)
{
	cout << "The sum of " << a << "+" << b << "+" << c << " is: " << a+b+c << endl;
}

double my_pow(double b, int n)
{
	double result = b;
	for(int i=1; i<n; i++) result=result*b;
	return result;
}
