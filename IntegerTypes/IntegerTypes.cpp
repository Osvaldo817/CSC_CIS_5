/* This file has examples of the various integer data types used in C++ (datatypes tell the compiler how we are storing the
 * data in the computer program's memory and how the bits that contain the information need to be interpreted by the program.
 *
 *  Type:					Size:			Range:
 *  short int				2 bytes 		-32,768 to +32,767
 *  unsigned short int		2 bytes 		0 to +65,535
 *  int						4 bytes 		-2,147,483,648 to +2,147,483,647
 *  unsigned int			4 bytes     	0 to 4,294,967,295
 *  long int				4 bytes(*) 		-2,147,483,648 to +2,147,483,647	*** also called long
 *  unsigned long int		4 bytes(*) 		0 to 4,294,967,295					*** also called unsigned long
 *  long long int			8 bytes(**)		-9,223,372,036,854,775,808 to +9,223,372,036,854,775,807	*** also called long long
 *  unsigned long long int	8 bytes(**)		0 to 18,446,744,073,709,551,615								*** also called unsigned long long
 *
 * ( *) be careful with the sizes of these types, on some systems they may be double the size (these figures
 *      are for 32 bit compilers, operating systems and architectures, on 64 bit systems they may be 8 bytes!
 * (**) be careful with the sizes of these types, on some systems they may be double the size (these figures
 *      are for 32 bit compilers, operating systems and architectures, on 64 bit systems they may be up to 16 bytes!
 *
 * You can use the sizeof(...) operator to find out how many bytes your machine uses for these types ( ... must
 * be replaced with the data type (or variable name) in question you wish to find the size of), though it's a chapter 3 
 * topic, it will be introduced now.
 *
 */
 #include <iostream>
 using std::cout;
 using std::endl;
 int main()  {
 	/*
 		Remember the naming rules for variables are:
 			1. The first character must be one of the letters a through z, A through Z, or an underscore character (_)
 			2. After the first character you may use the letters a through z or A through Z, the digits 0 through 9, or underscores.
 			3. In C++, uppercase and lowercase characters are distinct, meaning MyVariableName is not the same as myvariablename.
 		
 		We must declare variables in our programs before we can use them. The syntax for variable declarations is any one of the following:
 			
 			data_type variable_name; 			
 			data_type variable_name = {literal, another_variable_name, or expression}*;
			 
			(*) you do not type in the { } after the =, it is done just for a set notation meaning that after the = symbol, you have a
			literal, another variable's name, or some mathematical expression.
			
			Suppose you have multiple variables you want to declare of the same data type, you can use the following syntax:
			
			data_type variable_name1, variable_name2, variable_name3, ....;
			
			where .... is any more variable names of the same datatype (you can also pre-initialize these variables with the = symbol following
			the variable name and a {literal, another_variable_name, or expression} following the = symbol; with a comma or semicolon 
			following the {literal, another_variable_name, or expression}.
			
			Here are numerous examples:
 	*/
 	
 	// short int examples
 	short int my_short_int; // using the syntax on line 36
 	short int number_of_seats = 50; // using syntax on line 37
 	short int more_seats2 = number_of_seats + 10; // using syntax on line 37 with a math expression.
 	short int x=10, y=-20, z=-15;
 	
 	// output the sizeof short int
 	cout << "short int uses " << sizeof(short int) << " bytes of memory." << endl;
 	
 	// output the values of our short int variables
 	cout << "Value of my_short_int: " << my_short_int << endl; // since we didn't initialize this variable, it's value may be random at times.
 	cout << "Value of number_of_seats: " << number_of_seats << endl;
 	cout << "Value of more_seats2: " << more_seats2 << endl; // should be the value of the expression: number_of_seats + 10
 	cout << "Value of x: " << x << endl;
 	cout << "Value of y: " << y << endl;
 	cout << "Value of z: " << z << endl;
 	cout << endl;
 	
 	// unsigned short int examples
 	unsigned short int my_unsigned_short_int; // using the syntax on line 36
 	unsigned short int angel_stadium_seats = 45843; // using syntax on line 37 (this value would be out of range for short int)
 	unsigned short int more_seats = angel_stadium_seats + 10; // using syntax on line 37 with a math expression.
 	unsigned short int x2=10, y2=20, z2=15; // note: no negative values allowed since this is unsigned short int 
 	
 	// output the sizeof unsigned short int
 	cout << "unsigned short int uses " << sizeof(unsigned short int) << " bytes of memory." << endl;
 	
 	// output the values of our unsigned short int variables
 	cout << "Value of my_short_int: " << my_unsigned_short_int << endl; // it's value may be random at times because it wasn't initialized.
 	cout << "Value of angel_stadium_seats: " << angel_stadium_seats << endl;
 	cout << "Value of more_seats2: " << more_seats2 << endl; // should be the value of the expression: angel_stadium_seats + 10
 	cout << "Value of x2: " << x2 << endl;
 	cout << "Value of y2: " << y2 << endl;
 	cout << "Value of z2: " << z2 << endl;
 	cout << endl;
 	
 	// int examples
 	int my_int; // using the syntax on line 36
 	int la_coliseum_seats = 93607; // using syntax on line 37, too big of a number for short int!
 	int more_seats3 = la_coliseum_seats + 150; // using syntax on line 37 with a math expression.
 	int x3=10, y3=20, z3=15;
 	
 	// output the sizeof short int
 	cout << "int uses " << sizeof(int) << " bytes of memory." << endl;
 	
 	// output the values of our short int variables
 	cout << "Value of my_int: " << my_int << endl; // since we didn't initialize this variable, it's value may be random at times.
 	cout << "Value of la_coliseum_seats: " << la_coliseum_seats << endl;
 	cout << "Value of more_seats3: " << more_seats3 << endl; // should be the value of the expression: la_coliseum_seats + 150
 	cout << "Value of x3: " << x3 << endl;
 	cout << "Value of y3: " << y3 << endl;
 	cout << "Value of z3: " << z3 << endl;
 	cout << endl;
 	
 	// At this point, you should have a good idea of how to use integer data types, as the only difference is to use the respective
	// data types, and be mindful of their data ranges.
	// Let's look at the size of the other integer types:
 	cout << "unsigned int uses " << sizeof(unsigned int) << endl;
 	cout << "long int uses " << sizeof(long int) << endl;
 	cout << "unsigned long int uses " << sizeof(unsigned long int) << endl;
 	cout << "long long int uses " << sizeof(long long int) << endl;
 	cout << "unsigned long long int uses " << sizeof(unsigned long long int) << endl;
 }
