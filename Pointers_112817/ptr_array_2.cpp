#include <iostream>
using namespace std;

int main()
{
	int a[5] = { 1,3,8,10,9 };
	
	for(int i=0;i<5;i++)
	{
		cout << *(a+i) << endl;
	}
	
	return 0;
}
