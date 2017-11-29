#include <iostream>
using namespace std;

int main()
{
	int x=10;
	
	int *p1 = &x;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	
	cout << "p1: " << p1 << ":" << *p1 << endl;
	cout << "p2: " << p2 << ":" << **p2 << endl;
	cout << "p3: " << p3 << ":" << ***p3 << endl;
	cout << "p4: " << p4 << ":" << ****p4 << endl;	
	cout << "p5: " << p5 << ":" << *****p5 << endl;
		
	return 0;
}
