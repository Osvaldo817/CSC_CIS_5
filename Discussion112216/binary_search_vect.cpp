#include <iostream>
#include <vector>
using namespace std;

void output_vector(vector<int> v)
{
	for(int i=0;i<v.size();i++)	
		cout << v[i] << endl;
}

int binarySearch(int searchValue, vector<int> a)
{	
	int low=0, high=a.size()-1;
	
	while ( low <= high )
	{
		int mid=(low+high)/2;
		if ( a[mid]== searchValue ) return mid;
		else if ( a[mid] < searchValue ) low=mid+1;
		else high=mid-1;
	}
	
	return -1;
}

void bubble_sort(vector<int> &a)
{
	bool swapped;
	
	do {
		swapped = false;
		for(int i=0;i<a.size()-1;i++)
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
	vector<int> vec { 11,232,34,1428,516,6512,764,88,9256,102,1,32,4,128,16,512,64,8,256,2 };
	bubble_sort(vec);
	output_vector(vec);
	
	cout << "Enter value to search for: ";
	int target;
	cin >> target;
	
	int foundIndex = binarySearch(target,vec);
	if ( foundIndex != -1 )
		cout << "Woot! Found the value at index " << foundIndex << "!" << endl;
	else 
		cout << "Awwww, didn't find the value in the array!" << endl;
		
	return 0;
}
