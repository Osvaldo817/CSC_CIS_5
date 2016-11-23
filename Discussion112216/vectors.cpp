#include <vector>
#include <iostream>
#include <string>
using namespace std;

void output(vector<int> v)
{
	for(int i=0;i<v.size();i++)	
		cout << v[i] << endl;
}

void output(vector<string> v)
{
	for(int i=0;i<v.size();i++)	
		cout << v[i] << endl;
}

int main()
{
	vector<int> values { 1,2,3,4,5,6 };
	vector<string> pets { "cat", "dog", "mouse", "fish" };
	
	output(values);
	output(pets);
	
	return 0;	
}
