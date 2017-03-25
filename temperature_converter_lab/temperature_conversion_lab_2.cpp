#include <iostream>
#include <limits>
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
					// input validation, fahrenheit degrees must be greater than or equal to -459.63
					{
						bool invalidInput = true;
						bool isNumber;
						
						while ( invalidInput )
						{
							cout << "Enter fahrenheit degrees (must be greater than or equal to -459.63): ";
							if ( cin >> fahrenheit ) isNumber=true;						
							else isNumber=false;
								
							if ( isNumber==true && fahrenheit >= -459.63 ) invalidInput=false;
							else
							{
								cout << "Invalid Entry! " << endl;
								cin.clear();
								cin.ignore(numeric_limits<streamsize>::max(),'\n');
							}
						}
					}
					
					// do conversion
					celsius = (fahrenheit - 32) / 1.8;
					cout << setw(9)	<< fahrenheit << " degrees fahrenheit is ";
					cout << setw(9) << celsius << " degrees celsius" << endl;
					break;
		case '2': // the case user chooses choice 2
					// input validation, celsius degrees must be greater than or equal to -273.13
					{
						bool invalidInput = true;
						bool isNumber;
						
						while ( invalidInput )
						{
							cout << "Enter celsius degrees (must be greater than or equal to -273.13): ";
							if ( cin >> celsius ) isNumber=true;						
							else isNumber=false;
								
							if ( isNumber==true && celsius >= -273.13 ) invalidInput=false;
							else
							{
								cout << "Invalid Entry! " << endl;
								cin.clear();
								cin.ignore(numeric_limits<streamsize>::max(),'\n');
							}
						}
					}
					
					// do conversion
					fahrenheit = celsius * 1.8 + 32;					
					cout << setw(9) << celsius << " degrees celsius is ";
					cout << setw(9)	<< fahrenheit << " degrees fahrenheit" << endl;
					break;
		case '3': // the case user chooses choice 3
					// input validation, fahrenheit degrees must be greater than or equal to -459.63
					{
						bool invalidInput = true;
						bool isNumber;
						
						while ( invalidInput )
						{
							cout << "Enter fahrenheit degrees (must be greater than or equal to -459.63): ";
							if ( cin >> fahrenheit ) isNumber=true;						
							else isNumber=false;
								
							if ( isNumber==true && fahrenheit >= -459.63 ) invalidInput=false;
							else
							{
								cout << "Invalid Entry! " << endl;
								cin.clear();
								cin.ignore(numeric_limits<streamsize>::max(),'\n');
							}
						}
					}
					
					// do conversion
					celsius = (fahrenheit - 32) / 1.8;
					kelvin = celsius + 273.13;
					
					cout << setw(9)	<< fahrenheit << " degrees fahrenheit is ";
					cout << setw(9) << kelvin << " degrees kelvin" << endl;
					break;
		case '4': // the case user chooses choice 4
					// input validation, kevin degrees must be greater than or equal to 0.0
					{
						bool invalidInput = true;
						bool isNumber;
						
						while ( invalidInput )
						{
							cout << "Enter kelvin degrees (must be greater than or equal to 0.0): ";
							if ( cin >> kelvin ) isNumber=true;						
							else isNumber=false;
								
							if ( isNumber==true && kelvin >= 0.0 ) invalidInput=false;
							else
							{
								cout << "Invalid Entry! " << endl;
								cin.clear();
								cin.ignore(numeric_limits<streamsize>::max(),'\n');
							}
						}
					}
					
					// do conversion
					celsius = kelvin - 273.13;
					
					fahrenheit = celsius * 1.8 + 32;					
					cout << setw(9) << kelvin << " degrees kelvin is ";
					cout << setw(9)	<< fahrenheit << " degrees fahrenheit" << endl;
					break;
		case '5': // the case user chooses choice 5
					// input validation, celsius degrees must be greater than or equal to -273.13
					{
						bool invalidInput = true;
						bool isNumber;
						
						while ( invalidInput )
						{
							cout << "Enter celsius degrees (must be greater than or equal to -273.13): ";
							if ( cin >> celsius ) isNumber=true;						
							else isNumber=false;
								
							if ( isNumber==true && celsius >= -273.13 ) invalidInput=false;
							else
							{
								cout << "Invalid Entry! " << endl;
								cin.clear();
								cin.ignore(numeric_limits<streamsize>::max(),'\n');
							}
						}
					}
					
					// do conversion
					kelvin = celsius + 273.13;
					
					cout << setw(9)	<< celsius << " degrees celsius is ";
					cout << setw(9) << kelvin << " degrees kelvin" << endl;
					break;
		case '6': // the case user chooses choice 6
					// input validation, kevin degrees must be greater than or equal to 0.0
					{
						bool invalidInput = true;
						bool isNumber;
						
						while ( invalidInput )
						{
							cout << "Enter kelvin degrees (must be greater than or equal to 0.0): ";
							if ( cin >> kelvin ) isNumber=true;						
							else isNumber=false;
								
							if ( isNumber==true && kelvin >= 0.0 ) invalidInput=false;
							else
							{
								cout << "Invalid Entry! " << endl;
								cin.clear();
								cin.ignore(numeric_limits<streamsize>::max(),'\n');
							}
						}
					}
					
					// do conversion
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
