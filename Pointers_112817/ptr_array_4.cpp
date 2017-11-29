#include <iostream>
using namespace std;

int main()
{
	int a[6] = { 1,3,4,8,10,9 };
	int b[6];
	
	int *m;
	
	m = b+5;
		
	for(int i=0;i<6;i++)
	{
		*(m-i) = *(a+i);
	}
	
	for(int i=0;i<6;i++)
	{
		cout << *(b+i) << endl;
	}
	
	return 0;
}
