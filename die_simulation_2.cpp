#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int min(int a[], int sz);
int max(int a[], int sz);
int my_rand(int min, int max);

int main()
{
		
	int sides;
	cout << "How many sides does your dice have? ";
	cin >> sides;
	
	int die[sides];
	
	// pre initialize the array to 0
	for(int i=0;i<sides;i++) die[i]=0;
	
	int n; // number of trials
	cout << "Enter number of trials: ";
	cin >> n;
	
	// simulated rolls
	for(int i=1;i<=n;i++)
	{
		die[ my_rand(0,sides-1) ]++;
	}
	
	// output or results
	for(int i=0;i<sides;i++)
	{
		cout << (i+1) << " rolled " << die[i] << " times." << endl;
	}
	
	// output the sides with minimum roll and maximum roll
	int minimum=min(die,sides);
	int maximum=max(die,sides);
	
	for(int i=0;i<sides;i++)
	{
		if ( die[i] == minimum ) 
		{
			cout << "Side #" << i+1 << " had the fewest rolls (with ";
			cout << minimum << ")." << endl;
		}
	}
	
	for(int i=0;i<sides;i++)
	{
		if ( die[i] == maximum ) 
		{
			cout << "Side #" << i+1 << " had the most rolls (with ";
			cout << maximum << ")." << endl;
		}
	}
	
	return 0;
}

int my_rand(int min, int max)
{
	static bool first=true;
	
	if ( first )
	{
		cout << "DEBUG: seeding the random number generator...." << endl;
		srand( time(0) ); // seed the random number generator with time(0) so each
					  // run of this program, generates a different sequence of 
					  // random numbers.
		first =false;	
	}
	
	return min + rand() % (max-min+1);
}

int min(int a[], int sz)
{
	int min_index=0, min=a[0];
	for(int i=1;i<sz;i++)
	{
		if ( a[i] < min)
		{
			min_index=i;
			min=a[i];
		}
	}
	
	//return min_index; // use if you want only the index of the first min value found
	return min; // use if you want to return the actual minimum value
}

int max(int a[], int sz)
{
	int max_index=0, max=a[0];
	for(int i=1;i<sz;i++)
	{
		if ( a[i] > max)
		{
			max_index=i;
			max=a[i];
		}
	}
	
	//return max_index;
	return max;
}

