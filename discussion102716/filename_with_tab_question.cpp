#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string filename = "My\tFile.txt";
	
	cout << filename << endl;
	
	ofstream outFile;
	
	outFile.open(filename);
	
	if (outFile)
	{
		outFile << "Hello World!" << endl;
		outFile << "See you next time!" << endl;
		
		outFile.close();
	}
	else
	{
		cout << "Problem opening " << filename << " for output!" << endl;
	}
	
	return 0;
}
