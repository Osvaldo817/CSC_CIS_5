#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

// function prototype
int total(int a[], int sz);
void random_fill(int a[], int sz, int minValue, int maxValue);
void output_array(int a[], int sz);
void bubble_sort(int a[], int sz);

//////////////////////////////////////////////////////////////////

int main()
{
	const int SIZE = 8;
	int my_array[SIZE];
	
	random_fill(my_array,SIZE,0,1000);
	cout << "Unsorted array:" << endl;
	output_array(my_array,SIZE);
	bubble_sort(my_array,SIZE);
	cout << "Sorted array:" << endl;
	output_array(my_array,SIZE);
	
	cout << "Sum of the array is: " << total(my_array,SIZE) << endl;
	return 0;
}

//////////////////////////////////////////////////////////////////

void output_array(int a[], int sz)
{
	for(int i=0;i<sz;i++)
		cout << a[i] << endl;
}

int total(int a[], int sz)
{
	int sum=0;
	for(int i=0;i<sz;i++)
		sum = sum + a[i];
	
	return sum;
}

void random_fill(int a[], int sz, int minValue, int maxValue)
{
	// added functionality to fill array with random values between
	// minValue and maxValue inclusive
	int range = (maxValue+1)-minValue;
	
	srand(time(0));
	for(int i=0;i<sz;i++)
		a[i]=minValue+rand() % range;
}

void bubble_sort(int a[], int sz)
{
	bool swapped;
	
	do {
		swapped = false;
		for(int i=0;i<sz-1;i++)
		{
			if ( a[i] > a[i+1] )
			{
				int t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;
				swapped = true;
			}
		}
	} while(swapped);
}
