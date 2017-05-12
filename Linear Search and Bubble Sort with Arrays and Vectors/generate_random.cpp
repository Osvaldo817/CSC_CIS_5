#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generate_random(int min, int max)
{
	static bool seed=true;
	
	if (seed) 
	{
		cout << "rand seeded..." << endl;
		srand( time(0) );
		seed=false;
	}
	
	return rand() % (max-min+1) + min;
}

int main()
{
	cout << generate_random(1,4) << endl;
	cout << generate_random(10,15) << endl;
	cout << generate_random(0,5) << endl;
	cout << generate_random(-10,10) << endl;
}
