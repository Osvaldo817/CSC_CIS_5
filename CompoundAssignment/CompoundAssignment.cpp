/*
 * This program demonstrates the usage of compound assignment statements
 *
 * Suppose we have simple expressions such as:
 *
 * x = x + 6;
 * y = y - a;
 * z = z * (b + c);
 *
 * C++ allows us to rewrite these statements as compound statements:
 *
 * x += 6; // this is the same as x = x + 6
 * y -= a; // this is the same as y = y - a
 * z *= (b+c); // this is the same as z = z * (b+c)
 *
 */

#include <iostream>
using namespace std;

int main()
{
	// initialize a,b,c,x,y,z to some values
	int a=6, b=4, c=3, x=1, y=7, z=3;

	cout << " (initial values) a=" << a << ", b=" << b << ", c=" << c << ", x=" << x << ", y=" << y << ", z=" << z << endl;
	
	cout << "   (before x=x+6) x=" << x << endl;
	x=x+6;
	cout << "    (after x=x+6) x=" << x << endl;
	x=1; // reset x back to its initial value for next example
	
	cout << "    (before x+=6) x=" << x << endl;
	x+=6;
	cout << "     (after x+=6) x=" << x << endl;
	x=1; // reset x back to its initial value for next example
	
	cout << "   (before y=y-a) a=" << a << ", y=" << y << endl;
	y = y - a;
	cout << "    (after y=y-a) a=" << a << ", y=" << y << endl;
	y=7; // reset y back to its initial value for next example
	
	cout << "    (before y-=a) a=" << a << ", y=" << y << endl;
	y-=a;
	cout << "     (after y-=a) a=" << a << ", y=" << y << endl;
	y=7; // reset y back to its initial value for next example
	
	cout << "(before z=z*(b+c) b=" << b << ", c=" << c << ", z=" << z << endl;
	z=z*(b+c);
	cout << " (after z=z*(b+c) b=" << b << ", c=" << c << ", z=" << z << endl;
	z=3; // reset z back to its initial value for next example
	
	cout << " (before z*=(b+c) b=" << b << ", c=" << c << ", z=" << z << endl;
	z=z*(b+c);
	cout << " (after z=*=(b+c) b=" << b << ", c=" << c << ", z=" << z << endl;
	z=3; // reset z back to its initial value for next example
	return 0;
}
