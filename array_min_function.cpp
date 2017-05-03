// example function with array parameter
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// function prototype for min function
int min(const int [], int);
int max(const int [], int);
void output(const int [], int);
void fill_random(int [], int);

int main()
{
	const int SZ = 5;
	int x[SZ] = { 5, 4, 2, 8, 9 };
	
	output(x,SZ); // output contents of array x
	
	int minimum = min(x,SZ);
	int maximum = max(x,SZ);
	
	cout << "The smallest value found was: " << minimum << endl;
	cout << "The largest value found was: " << maximum << endl;
	
	fill_random(x,SZ);
	output(x,SZ);
	
	minimum = min(x,SZ);
	maximum = max(x,SZ);
	cout << "The smallest value found was: " << minimum << endl;
	cout << "The largest value found was: " << maximum << endl;
	
	return 0;
}

// function definition
int min(const int a[], int sz)
{
	int smallest = a[0]; // initialize smallest to value at a[0]
	
	for(int i=1; i<sz; i++)	// loop through the array elements
		if ( a[i] < smallest ) // if a[i] is smaller than smallest, then
			smallest = a[i]; // smallest is assigned the value at a[i]
			
	return smallest; // when loop is done, smallest contains smallest
					 // value from the array
}

int max(const int a[], int sz)
{
	int largest = a[0]; // initialize largest to value at a[0]
	
	for(int i=1; i<sz; i++)	// loop through the array elements
		if ( a[i] > largest ) // if a[i] is bigger than largest, then
			largest = a[i]; // largest is assigned the value at a[i]
			
	return largest; // when loop is done, largest contains largest
					// value from the array
}

// output items in the array
void output(const int a[], int sz)
{
	for(int i=0; i<sz-1; i++)
		cout << a[i] << ", ";
	cout << a[sz-1] << endl;
}

// function to fill array with random numbers between 0..(sz-1)
void fill_random(int a[], int sz)
{
	srand(time(0)+sz); // seed is time(0) + size of array
	for(int i=0;i<sz;i++)
		a[i] = rand() % sz;
}
