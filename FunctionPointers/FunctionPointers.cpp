#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

void bubble(int *, const int, bool (*)(int, int));
bool ascending(const int, const int);
bool descending(const int, const int);
void outputArray(int *, const int);

int main()
{
	const int arrSize=10;
	int a[arrSize] = { 7, 4, 8, 5, 6, 1, 9, 2, 3, 0 };

	cout << "Enter 1 to sort in ascending order, " << endl;
	cout << "or enter 2 to sort in descending order: ";

	int choice;
	cin >> choice;

	// output current array
	outputArray(a,arrSize);

	// if choice is 1, do bubble sort in ascending order
	if ( choice==1 )
	{
		bubble(a,arrSize,ascending);
		cout << "Array in ascending order:" << endl;
		outputArray(a,arrSize);
	}

	// if choice is 2
	else if ( choice==2 )
	{
		bubble(a,arrSize,descending);
		cout << "Array in descending order:" << endl;
		outputArray(a,arrSize);
	}
	else
	{
		cout << "You did not choose 1 or 2, so quitting program...";
		cout << endl;
	}

	return 0;
}

void outputArray(int *a, int sz)
{
	for(int i=0;i<sz;i++)
	{
		cout << setw(4) << *(a+i);
		if ( i != sz-1 ) cout << ",";
	}
	cout << endl;
}

void bubble(int *a, int sz, bool (*sortOrder)(int, int))
{
	for(int pass=1;pass<sz;pass++)
	{
		for(int count=0;count<sz-1;count++)
		if ((*sortOrder)(a[count],a[count+1]))
		{
			int temp=a[count];
			a[count]=a[count+1];
			a[count+1]=temp;
		}
	}
}

bool ascending(const int x, const int y)
{
	return x > y;
}

bool descending(const int x, const int y)
{
	return x < y;
}
