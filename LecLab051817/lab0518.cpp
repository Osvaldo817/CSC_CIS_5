#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

// function prototype for generate_random_array
int * generate_random_array(int size, int min, int max);
void display_array(int *a, int size, int field_width);
int calc_width(int m); // calculates the ideal width for numbers no bigger than m

int main()
{
	// test our function
	// create a dynamic array of 10 random numbers between 1 and 1000
	int *a = generate_random_array(10,1,1000);
	int *b = generate_random_array(50,0,10000);
	
	int field_width = calc_width(10000);
	
	display_array(a,10,field_width);
	display_array(b,50,field_width);
}

// function definition
int * generate_random_array(int size, int min, int max)
{
	static bool seed = false;
	
	if ( !seed )
	{
		srand(time(0));
		seed=true;
	}
	
	// create our array with size # of elements
	int *p = new int[size];
	
	// fill the array with random numbers between min and max
	for(int i=0;i<size;i++)
	{
		*(p+i) = rand() % (max-min+1)+min;
	}
	
	return p;
}

void display_array(int *a, int size, int field_width)
{
	for(int i=0;i<size;i++)
	{
		cout << setw(field_width) << *(a+i) << " ";
		if ( (i+1) % 5 == 0 )
			cout << endl;		
	}
	cout << endl;	
}

int calc_width(int m) // calculates the ideal width for numbers no bigger than m
{
	return 2+ceil(log10(m));
}
