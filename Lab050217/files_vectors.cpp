#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
#include <vector>
using namespace std;

// function prototypes
float min(const vector<float>);
float max(const vector<float>);
float avg(const vector<float>);
float sum(const vector<float>);
float std_dev(const vector<float>, bool);

void do_magic(ifstream &);

// main
int main()
{
	string filename;
	
	cout << "Enter name of file you want to read: ";
	getline(cin,filename,'\n');
	
	ifstream input_file;
	
	input_file.open(filename.c_str());
	
	if ( input_file )
	{ // file successfully opened
		do_magic(input_file);
	}
	else 
	{ // file unsuccessfully opened
		cout << "Error: could not open " << filename << endl;
		return 1; // error code "1" will signal file could not be opened
	}
}

// do_magic
void do_magic(ifstream &in_file)
{
	// read in all of the data
	int sz; // holds size of list from our file we read in
	
	in_file >> sz;
	
	vector<float> array(sz);
	
	for(int i=0;i<sz;i++)
		in_file >> array[i];
	
	in_file.close();
	
	float minimum = min(array);
	float maximum = max(array);
	float sum_of_values = sum(array);
	float avg_of_values = avg(array);
	float s_deviation = std_dev(array,false);
	
	// output all of the results
	cout << setprecision(4) << showpoint << fixed;
	cout << "   Minimum value found: " << setw(10) << minimum << endl;
	cout << "   Maximum value found: " << setw(10) << maximum << endl;
	cout << "    Sum of values read: " << setw(10) << sum_of_values << endl;
	cout << "Average of values read: " << setw(10) << avg_of_values << endl;
	cout << "Std.dev of values read: " << setw(10) << s_deviation << endl;
}

float min(const vector<float> a)
{
	float smallest = a[0]; // initialize smallest to value at a[0]
	
	for(int i=1; i<a.size(); i++)	// loop through the array elements
		if ( a[i] < smallest ) // if a[i] is smaller than smallest, then
			smallest = a[i]; // smallest is assigned the value at a[i]
			
	return smallest; // when loop is done, smallest contains smallest
					 // value from the array
}

float max(const vector<float> a)
{
	float largest = a[0]; // initialize largest to value at a[0]
	
	for(int i=1; i<a.size(); i++)	// loop through the array elements
		if ( a[i] > largest ) // if a[i] is bigger than largest, then
			largest = a[i]; // largest is assigned the value at a[i]
			
	return largest; // when loop is done, largest contains largest
					// value from the array
}

float avg(const vector<float> a)
{
	return sum(a) / a.size();
}

float sum(const vector<float> a)
{
	float result = 0.0f;	
	for(int i=0;i<a.size();i++) result = result + a[i]; // you could do result += a[i]
	return result;
}

float std_dev(const vector<float> a, bool sample)
{
	float variance;
	float sum_of_var_squared = 0.0f;
	float a_avg = avg(a);
	
	for(int i=0;i<a.size();i++)
	{
		variance = a[i] - a_avg;
		sum_of_var_squared += ( variance * variance );
	}
	
	sum_of_var_squared /= (a.size()-(int)sample);
	
	return sqrt(sum_of_var_squared);
}
