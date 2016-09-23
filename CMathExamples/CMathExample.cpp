/*
 * Examples of how to use the cmath library math functions (some of them...)
 *
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	// note about trigonometric functions: the parameters are not in degrees, but in radians (you will need to multiply
	// degrees by PI (3.14159....) and divide by 180 to convert degrees to radians

	const float PI = 3.14159265f;
	const float PI_180 = PI / 180.0; // multiplier constant for converting degrees to radians
	const int T_WIDTH = 8; // trig functions field width for setw
	const int DEC_DIGITS = 6; // let's go with 6 decimal digits of precision

	// trigonometry functions
	float deg_a = 25.0; // deg_a is 25 degrees
	float deg_b = -55.0; // deg_b is -55 degrees
	float deg_c = 125.0; // deg_c is 125 degrees
	float deg_d = 310.0; // deg_d is 310 degrees
	
	cout << setprecision(DEC_DIGITS);
	cout << "cos(" << deg_a << ")=" << setw(T_WIDTH) << cos(deg_a*PI_180) << endl;
	cout << "sin(" << deg_a << ")=" << setw(T_WIDTH) << sin(deg_a*PI_180) << endl;
	cout << "tan(" << deg_a << ")=" << setw(T_WIDTH) << tan(deg_a*PI_180) << endl << endl;
	
	cout << "cos(" << deg_b << ")=" << setw(T_WIDTH) << cos(deg_b*PI_180) << endl;
	cout << "sin(" << deg_b << ")=" << setw(T_WIDTH) << sin(deg_b*PI_180) << endl;
	cout << "tan(" << deg_b << ")=" << setw(T_WIDTH) << tan(deg_b*PI_180) << endl << endl;
	
	cout << "cos(" << deg_c << ")=" << setw(T_WIDTH) << cos(deg_c*PI_180) << endl;
	cout << "sin(" << deg_c << ")=" << setw(T_WIDTH) << sin(deg_c*PI_180) << endl;
	cout << "tan(" << deg_c << ")=" << setw(T_WIDTH) << tan(deg_c*PI_180) << endl << endl;
	
	cout << "cos(" << deg_d << ")=" << setw(T_WIDTH) << cos(deg_d*PI_180) << endl;
	cout << "sin(" << deg_d << ")=" << setw(T_WIDTH) << sin(deg_d*PI_180) << endl;
	cout << "tan(" << deg_d << ")=" << setw(T_WIDTH) << tan(deg_d*PI_180) << endl << endl;
	
	// pow and exp functions
	// pow raises a number b (base) to the power of n
	float base=2, n=3;
	float base2=6.5, n2=3.4;
	float base3=2.2, n3=12.3;
	float base4=10.25, n4=0.5;
	
	cout << "pow(" << base << ", " << n << ")=" << setw(T_WIDTH) << showpoint << fixed << pow(base,n) << endl;
	cout << "pow(" << base2 << ", " << n2 << ")=" << setw(T_WIDTH) << showpoint << fixed << pow(base2,n2) << endl;
	cout << "pow(" << base3 << ", " << n3 << ")=" << setw(T_WIDTH) << showpoint << fixed << pow(base3,n3) << endl;
	cout << "pow(" << base4 << ", " << n4 << ")=" << setw(T_WIDTH) << showpoint << fixed << pow(base4,n4) << endl << endl;
	
	// exp raises the constant e ( approx. 2.7181828...) to a power of n
	cout << "exp(0)=" << setw(T_WIDTH) << showpoint << fixed << exp(0) << endl;
	cout << "exp(1)=" << setw(T_WIDTH) << showpoint << fixed << exp(1) << endl;
	cout << "exp(2.3)=" << setw(T_WIDTH) << showpoint << fixed << exp(2.3) << endl;
	cout << "exp(0.3333333)=" << setw(T_WIDTH) << showpoint << fixed << exp(0.3333333) << endl << endl;
	return 0;

}
