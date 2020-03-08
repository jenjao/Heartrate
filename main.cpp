#include <iostream>
#include <string>
#include "hw3.hpp"

int main() {
	std::string fname, lname;
	std::cout << "Please enter your firstname and lastname" << std::endl;
	std::cin >> fname >> lname;

	int d, m, y;
	std::cout << "Please enter a date (mm dd yyyy)" << std::endl;
	std::cin >> m >> d >> y;

	HeartRates person(fname, lname, m, d, y);
		
	return 0;

}
