#include <iostream>

int main()
{
	// example named constants
	const float PI = 3.14159;
	const int MAXIMUM_SEATS = 42;
	
	const float TWO_PI = PI*2;
	
	// output the constants
	std::cout << "PI=" << PI << std::endl;
	std::cout << "MAXIMUM_SEATS=" << MAXIMUM_SEATS << std::endl;
	std::cout << "PI times 2=" << TWO_PI << std::endl;
	
	PI=3.14;
	std::cout << "PI=" << PI << std::endl;
	
	// return from main function
	return 0;
}
