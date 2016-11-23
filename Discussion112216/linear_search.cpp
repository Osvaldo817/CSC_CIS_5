#include <iostream>
using namespace std;

int linearSearch(int searchValue, int a[], int sz)
{
	int found = -1;	
	for(int i=0;i<sz;i++)
	{
		if ( a[i] == searchValue )
		{
			found = i;
			break;
		}
	}	
	return found;
}

int main()
{
	int array1[10] = { 1,32,4,128,16,512,64,8,256,2 };
	
	cout << "Enter value to search for: ";
	int target;
	cin >> target;
	
	int foundIndex = linearSearch(target,array1,10);
	if ( foundIndex != -1 )
		cout << "Woot! Found the value at index " << foundIndex << "!" << endl;
	else 
		cout << "Awwww, didn't find the value in the array!" << endl;
		
	return 0;
}
