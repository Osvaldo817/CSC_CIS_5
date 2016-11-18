#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

// function prototype
int total(int a[], int sz);
void random_fill(int a[], int sz);
void output_array(int a[], int sz);

//////////////////////////////////////////////////////////////////

int main()
{
	const int SIZE = 5;
	int my_array[SIZE];
	
	random_fill(my_array,SIZE);
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

void random_fill(int a[], int sz)
{
	srand(time(0));
	for(int i=0;i<sz;i++)
		a[i]=rand();
}
