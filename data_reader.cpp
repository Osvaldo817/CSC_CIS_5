#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

const int WIDTH = 10;

void histogram(int a[], int sz);

int main()
{
	string filename;
	
	cout << "Enter name of data file to read: ";
	getline(cin,filename,'\n');
	
	// read in the file
	ifstream infile;
	
	infile.open(filename.c_str());
	
	if (infile)
	{
		// read in file that was successfully opened
		int sz;
		
		// read in the size from the file
		infile >> sz;
		
		// create the array
		int data[sz];
		
		//for(int i=0;i<sz;i++)
		//	infile >> data[i];
		int i=0;
		while ( infile >> data[i++] );
			
		infile.close();
		
		histogram(data,sz);
		return 0;
	}
	else
	{
		// error: could not open file
		cout << "Could not open the file." << endl;
		return 1;
	}
}

// function definition
void histogram(int a[], int sz)
{
	for(int i=0;i<sz;i++)
	{
		cout << setw(WIDTH);
		cout << a[i] << ": ";
		int c = a[i] / 10;
		for(int j=0;j<c;j++)
			cout << "*";
			
		cout << endl;
	}
}
