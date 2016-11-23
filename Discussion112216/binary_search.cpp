#include <iostream>
using namespace std;

int binarySearch(int searchValue, int a[], int sz)
{	
	int low=0, high=sz-1;
	
	while ( low <= high )
	{
		int mid=(low+high)/2;
		if ( a[mid]== searchValue ) return mid;
		else if ( a[mid] < searchValue ) low=mid+1;
		else high=mid-1;
	}
	
	return -1;
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
int main()
{
	int array1[10] = { 1,32,4,128,16,512,64,8,256,2 };
	bubble_sort(array1,10);
	
	cout << "Enter value to search for: ";
	int target;
	cin >> target;
	
	int foundIndex = binarySearch(target,array1,10);
	if ( foundIndex != -1 )
		cout << "Woot! Found the value at index " << foundIndex << "!" << endl;
	else 
		cout << "Awwww, didn't find the value in the array!" << endl;
		
	return 0;
}
