//
// Demonstration of doing a linear search
//

#include <iostream>
using namespace std;

// prototype for search function
bool search(float [], int, float);

int main()
{
	// constant for array size, you can change this to any positive value you want
	const int ARRAY_SIZE = 5;
	
	// declare an array with ARRAY_SIZE elements
	float myArray[ARRAY_SIZE];
	
	// introduction message
	cout << "Hi there! Please enter " << ARRAY_SIZE << " floating point numbers..." << endl;
	
	// loop through the inputs from the user
	for(int i=0;i<ARRAY_SIZE;i++)
	{
		// prompt
		cout << "Enter value for element #" << i << ": ";
		// get value for myArray[i]
		cin >> myArray[i];
	}
	
	// prompt the user for a value to search for
	float target;
	cout << "Enter a number for me to search for: ";
	cin >> target;
	
	// set a boolean flag to signal if we found the search value
	bool found_it = false;
	
	// report to the user what the search result was
	cout << "Well... I did ";
	found_it = search( myArray, ARRAY_SIZE, target );
	
	if ( found_it == false )
	{
		cout << "not ";
	}
	
	cout << "find the number!!!!" << endl;
}

/// implemtation of search
bool search(float a[], int size, float target)
{
	// set found flag to false
	bool found=false;
	
	// loop through all elements in the array
	for(int i=0;i<size;i++)
	{
		// if a[i] is equal to target value, we found it
		if ( a[i]==target )
		{
			// set found flag to true
			found=true;
			break;
		}
	}
	
	// found flag contains the results from our search function
	return found;
}
