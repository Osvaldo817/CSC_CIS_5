#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float fahrenheit, celsius, kelvin;
	
	// output our menu
	cout << "Temperature Converter" << endl;
	cout << "=====================" << endl;
	cout << endl;
	
	// output the choices
	cout << "1. Convert Fahrenheit to Celsius" << endl;
	cout << "2. Convert Celsius to Fahrenheit" << endl;
	cout << "3. Convert Fahrenheit to Kelvin" << endl;
	cout << "4. Convert Kelvin to Fahrenheit" << endl;
	cout << "5. Convert Celsius to Kelvin" << endl;
	cout << "6. Convert Kelvin to Celsius" << endl;
	cout << "Q. Quit" << endl;
	cout << endl;
	
	// prompt for the menu choice
	cout << "Enter a choice (1-6, or Q): ";
	
	char choice;
	cin >> choice;
	
	// set precision, fixed and showpoint for all field outputs
	cout << setprecision(2) << fixed << showpoint;
	
	// switch block for our menu choices
	switch (choice) // choice is our expression we are evaluating
	{
		case '1': // the case user chooses choice 1
					cout << "Enter fahrenheit degrees: ";
					cin >> fahrenheit;
					celsius = (fahrenheit - 32) / 1.8;
					cout << setw(9)	<< fahrenheit << " degrees fahrenheit is ";
					cout << setw(9) << celsius << " degrees celsius" << endl;
					break;
		case '2': // the case user chooses choice 2
					cout << "Enter celsius degrees: ";
					cin >> celsius;
					fahrenheit = celsius * 1.8 + 32;					
					cout << setw(9) << celsius << " degrees celsius is ";
					cout << setw(9)	<< fahrenheit << " degrees fahrenheit" << endl;
					break;
		case '3': // the case user chooses choice 3
					cout << "Enter fahrenheit degrees: ";
					cin >> fahrenheit;
					celsius = (fahrenheit - 32) / 1.8;
					kelvin = celsius + 273.13;
					
					cout << setw(9)	<< fahrenheit << " degrees fahrenheit is ";
					cout << setw(9) << kelvin << " degrees kelvin" << endl;
					break;
		case '4': // the case user chooses choice 4
					cout << "Enter kelvin degrees: ";
					cin >> kelvin;
					celsius = kelvin - 273.13;
					
					fahrenheit = celsius * 1.8 + 32;					
					cout << setw(9) << kelvin << " degrees kelvin is ";
					cout << setw(9)	<< fahrenheit << " degrees fahrenheit" << endl;
					break;
		case '5': // the case user chooses choice 5
					cout << "Enter celsius degrees: ";
					cin >> celsius;
					kelvin = celsius + 273.13;
					
					cout << setw(9)	<< celsius << " degrees celsius is ";
					cout << setw(9) << kelvin << " degrees kelvin" << endl;
					break;
		case '6': // the case user chooses choice 6
					cout << "Enter kelvin degrees: ";
					cin >> kelvin;
					celsius = kelvin - 273.13;
					
					cout << setw(9) << kelvin << " degrees kelvin is ";
					cout << setw(9)	<< celsius << " degrees celsius" << endl;
					break;
		case 'Q': // the case user chooses choice Q, or q
		case 'q': 
					cout << "Bye!! Thanks for running this program." << endl;
					break;
		default: // the case in which user does not choose 1, 2, 3, 4, 5, 6, or Q/q!
					cout << "You did not enter a valid choice!";	
	}
}
