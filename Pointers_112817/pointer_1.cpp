#include <iostream>
using namespace std;

int main()
{
	int num = -99;
	
	cout << "Value of num: " << num << endl; // outputs -99
	cout << "Address of num: " << (long)&num << endl; // outputs the address of the variable num
	
	cout << "Value of *(&num): " << *(&num) << endl;
	return 0;
}
