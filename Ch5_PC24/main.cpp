// Lab for 10/25/16

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() 
{
    string filename; // filename to get from user
    int number_values=0; // counter for the number of values read in from file
    int total=0; // sum of data read in from file
    int value_read; // the data value read in from file
    
    // added bonus to our program, find the largest and smallest data value 
    // in the file
    int min=0;
    int max=0;
    
    // prompt for filename from user
    cout << "Enter the name of the file to read: ";
    //cin >> filename; // this will not work with filenames having spaces
    getline(cin,filename);
    
    // create object for reading in file
    ifstream infile;
    
    // open the file for reading
    infile.open(filename);
    
    // check to see if we successfully opened the file
    if (infile)
    {
        // read in the data until no more data to read
        while ( infile >> value_read ) // while a value has been read, loop
        {
            number_values++;
            total = total + value_read;
            
            if ( number_values==1 )
            {
                min=value_read;
                max=value_read;
            }
            
            // check to see if value_read is bigger than max
            if ( value_read > max ) max=value_read;
            
            // check to see if value_read is smaller than min
            if ( value_read < min ) min=value_read;         
        }
        
        // close the file
        infile.close();
        
        // output the average and other information
        float average = (float)total / number_values;
        cout << "Read in " << number_values << " data values" << endl;
        cout << "The average was " << average << endl;
        cout << "Smallest value was " << min << endl;
        cout << "Largest value was " << max << endl;
        
    }
    else
    {
        cout << "Could not open the file named " << filename << endl;
    }
    
    return 0;
}

