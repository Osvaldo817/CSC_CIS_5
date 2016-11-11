#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	const int SIDES = 2; // number of sides on the die we are rolling
	int die[SIDES];
	
	// pre initialize the array to 0
	for(int i=0;i<SIDES;i++) die[i]=0;
	
	int n; // number of trials
	cout << "Enter number of trials: ";
	cin >> n;
	
	// simulated rolls
	for(int i=1;i<=n;i++)
	{
		int roll=rand() % SIDES;
		die[roll]++;
	}
	
	// output or results
	for(int i=0;i<SIDES;i++)
	{
		cout << (i+1) << " rolled " << die[i] << " times." << endl;
	}
	
	return 0;
}
