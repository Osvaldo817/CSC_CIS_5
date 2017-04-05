#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int a=12345;
	float b=3.14159265;
	char c='a';
	string d="hello";
	
	// create an ofstream object for file output
	ofstream outFile; // outFile is our object of type ofstream
	
	// open file for output
	outFile.open("example1.txt");
	
	// check to see if file was successfully opened or not.
	if ( !outFile )
	{
		cout << "Error opening file for output." << endl;
		return 1;
	}
	else
	{
		// write out the data - some compilers we have to do "\r\n" in place of endl because
		// the carriage return is not output.
		outFile << a << "\r\n"; //endl;
		outFile << b << "\r\n"; //endl;
		outFile << c << "\r\n"; //endl;
		outFile << d << "\r\n"; //endl;
		
		// close the file when done reading the data
		outFile.close();
		
		return 0;
	}
	
}
