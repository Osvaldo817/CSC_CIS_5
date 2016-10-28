#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	string filename; // contains user entered filename (includes path if needed)
	float value;	 // contains the value read in from keyboard
	ofstream outFile;// output file object
	
	// prompt for filename
	cout << "Enter filename to write data out to (include path if needed): ";
	getline(cin,filename);
	
	// open the file for writing
	// make sure using C++ 11 standard, if not, use filename.c_str() instead of filename alone
	outFile.open(filename);
	
	// check to see if we successfully opened the file
	if (outFile)
	{
		// prompt for value greater or equal to zero and output, if value is less than zero, we're done
		do
		{
			cout << "Enter a floating point value ( less than zero stops program ): ";
			cin >> value;
			
			if ( value >= 0.0 )
			{
				outFile << setw(10) << setprecision(5) << right << fixed << value << endl;
			}
		} while ( value >= 0.0 );
		
		outFile.close();
		
		cout << "File was successfully written." << endl;
		cout << "Here are the contents of the file:" << endl;
		
		// dump the contents of the file out to the screen
		ifstream inFile;
		inFile.open(filename);
		
		// check that file was successfully opened
		if (inFile)
		{
			while ( inFile >> value )
			{
				cout << value << endl;
			}
			
			inFile.close();
		}
		else
		{
			cout << "There was a problem opening " << filename << " for input." << endl;
		}
	}
	else
	{
		cout << "There was a problem opening " << filename << " for output." << endl;
	}
	
	return 0;
}
