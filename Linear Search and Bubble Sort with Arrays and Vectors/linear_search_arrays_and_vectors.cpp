#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// linear search functions
int linear_search(int a[], int sz, int target)
{
	for(int i=0;i<sz;i++)
	{
		if ( a[i]==target ) return i; // if target value found, return with subscript
	}
	return -1;
}

int linear_search_v(vector<int> v, int target)
{
	for(int i=0;i<v.size();i++)
	{
		if ( v[i]==target ) return i; // if target value found, return with subscript
	}
	return -1;
}

// main function
int main()
{
	const int SZ = 5;
	
	srand( time(0) );
	
	int a[SZ]; // declare array 'a' of size SZ
	vector<int> v(SZ); // declare array 'v' of size SZ
	
	// fill array a with SZ random numbers
	for(int i=0;i<SZ;i++)
	{
		a[i]=rand();
		v[i]=a[i];
	}
		
	cout << "Random numbers in array: ";
	for(int i=0;i<SZ-1;i++)
		cout << a[i] << ", ";
	
	cout << a[SZ-1] << endl;
	
	cout << "Random numbers in vector: ";
	for(int i=0;i<v.size()-1;i++)
		cout << v[i] << ", ";
	
	cout << v[v.size()-1] << endl;
	
	int target;
	cout << "Enter an integer for me to find: ";
	cin >> target;
	
	// demonstrate linear_search, both the array version and the vector version
	int index_found_array = linear_search(a,SZ,target);
	int index_found_vector = linear_search_v(v,target);
	
	// output our results
	if ( index_found_array != -1 ) 
		cout << "Found " << target << " at index " << index_found_array << endl;
	else 
		cout << "Did not find " << target << endl;
		
	if ( index_found_vector != -1 ) 
		cout << "Found " << target << " at index " << index_found_vector << endl;
	else 
		cout << "Did not find " << target << endl;
		
}
