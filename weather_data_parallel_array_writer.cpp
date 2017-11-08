#include <fstream>
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

// constants
const int SZ = 12;	// 12 months
const string month_name[SZ] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun",
								"Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
								
// function prototypes
bool writeFile(float low[], float high[], int rain[]);
void getDataFromUser(float low[], float high[], int rain[]);

// main()
int main()
{
	float low_temp[SZ], high_temp[SZ];
	int rainfall[SZ];
	
	// call our function to get all of the weather data from the user
	getDataFromUser(low_temp, high_temp, rainfall);
	
	// write out the data, success = true if file successfully written, otherwise false
	bool success = writeFile(low_temp, high_temp, rainfall);
	
	if (success) cout << "File successfully written!" << endl;
	else cout << "There was trouble writing the file!" << endl;
	
	return 0;
}

// function definitions
bool writeFile(float low[], float high[], int rain[])
{
	// name of file entered by user
	string filename;
	
	cin.clear();
	cin.ignore(1000, '\n');
	// prompt for the filename
	cout << "Enter name of the file to write data out to: ";
	getline(cin,filename,'\n');
	
	// create output file object named outfile
	ofstream outfile;
	
	// attempt to open the file
	outfile.open(filename.c_str());
	
	if ( outfile ) // if outfile is successfully opened, this is evaluated as true
	{
		for(int i=0;i<SZ;i++)
		{
			outfile << setw(5) << fixed << setprecision(2);
			outfile << low[i] << " ";
			outfile << setw(5) << high[i] << " ";
			outfile << setw(5) << rain[i] << endl;
		}
	}
	else // if outfile not successfully opened, return false
	{
		return false;
	}
}

void getDataFromUser(float low[], float high[], int rain[])
{
	for(int i=0;i<SZ;i++)
	{
		cout << "Enter the low temperature for " << month_name[i] << ": ";
		cin >> low[i];
		
		cout << "Enter the high temperature for " << month_name[i] << ": ";
		cin >> high[i];
		
		cout << "Enter the rainfall for " << month_name[i] << ": ";
		cin >> rain[i];
		
	}
}

