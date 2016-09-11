/*
 * Arithmetic of Two Integers
 * 
 * Learning how to declare two integer variables and assign a value
 * to the declared variables.
 * 
 * Going to output:
 * 
 * 1. the sum of the two variables
 * 2. the difference of the two variables
 * 3. the product of the two variables
 * 4. experiment by changing the values of two variables and rerunning the
 *    program after the changes
 */

#include <iostream>

using namespace std;

int main() {
    
    // declare variables value1, value2, total, difference, and 
    // product as integers
    int value1, value2, total, difference, product;
    
    value1 = 50; // assign 50 to value1
    
    value2 = 100; // assign 100 to value2
    
    total = value1 + value2; // assign the sum of value1 and value2 to total
    difference = value2 - value1; // difference assigned to value2 - value1
    product = value1 * value2; // product assigned to value1 times value2
        
    // output the values and their total, difference and product
    cout << value1 << " + " << value2 << " = " << total << endl;
    cout << value2 << " - " << value1 << " = " << difference << endl;
    cout << value1 << " * " << value2 << " = " << product << endl;
    
    return 0;
}

