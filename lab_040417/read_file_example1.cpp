#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int a;
	float b;
	char c;
	string d;
	
	// create an ifstream object for reading text file
	ifstream inFile;
	
	// open the file for reading data
	inFile.open("example1.txt");
	
	// read in the data
	inFile >> a;
	inFile >> b;
	inFile >> c;
	inFile >> d;
	
	// close file when done
	inFile.close();
	
	// output the data
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;
	
	return 0;
}
