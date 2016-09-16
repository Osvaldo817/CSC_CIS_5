#include <iostream>

int main()
{
	const float STATE_TAX = 0.04, COUNTY_TAX = 0.02;
	
	float purchase;
	
	std::cout << "Enter your purchase amount: ";
	std::cin >> purchase;
	
	float total_tax = purchase * (STATE_TAX + COUNTY_TAX);
	
	std::cout << total_tax << " is total tax on purchase of " << purchase << std::endl;
	return 0;
}
