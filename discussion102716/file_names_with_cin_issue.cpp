#include <iostream>
#include <string>
using namespace std;

int main()
{
	string filename;
	
	cout << "Enter a filename: ";
	//cin >> filename;
	getline(cin, filename);
	
	cout << filename << endl;
	return 0;
}
