#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	unsigned seed = time(0);
	cout << "seed = " << seed << endl;
	
	srand(seed);
	
	for(int i=0;i<20;i++)
	{
		cout << rand() << endl;
	}
	
	return 0;
}
