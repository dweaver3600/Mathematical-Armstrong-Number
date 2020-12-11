//Prompt

//For a given 3 digit number, find whether it is armstrong number or not.
//An Armstrong number of three digits is an integer such that the sum of the
//cubes of its digits is equal to the number itself. Return "Yes" if it is a
//armstrong number else return "No".


#include <iostream>
#include <string>
#include <math.h>

#define PAUSE std::cout << "\n\n"; system("pause");


int main() {

	std::cout << "An Armstrong number of three digits is an integer such that the sum of the cubes\n"
		<< "of its digits is equal to the number itself.\n\n\n";

	std::string number;

	std::cout << "Find if this THREE DIGIT number is an Armstrong number: ";
	std::cin >> number;

	int hunds = number[0] - '0';
	int tens = number[1] - '0';
	int ones = number[2] - '0';

	bool armstrong = false;

	std::cout << "\n\n";
	std::cout << hunds << "e3 + " << tens << "e3 + " << ones << "e3 = " << pow(hunds, 3) + pow(tens, 3) + pow(ones, 3);

	std::cout << "\n\n\n" << number;

	if (pow(hunds, 3) + pow(tens, 3) + pow(ones, 3) == std::stoi(number)) {
		std::cout << " IS";
	}
		
	else std::cout << " IS NOT";

	std::cout << " an Armstrong number.";

	PAUSE
	return 0;
}