#include <iostream>

/* Mathematical expressions: (assume we have variables w,x,y,z defined)
 * 
 * Arithmetic symbols and their meaning:
 *	+  addition, ex: w = x + y; // adds x and y, store result in w
 *	-  subtraction, ex: w = z - y; // subtract y from z, store result in w
 *	*  multiplication, ex: w = x * y; // multiply x and y, store result in w
 *	/  division, ex: w = z / x; // divides z by y, store result in w
 *	%  modulus (remainder), ex: w = x % y; // divides x by y, stores the REMAINDER in w
 *
*/

int main()
{
	int x=5, y=7, z=4, w;

	// the math expression: w = 4(x + y - z)
	w = 4*(x + y - z);

	std::cout << "x: " << x << ", y: " << y;
	std::cout << ", z: " << z << ", w: " << w << std::endl;

	return 0;
}
