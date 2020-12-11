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

	std::string number;

	std::cin >> number;

	int hunds = number[0] - '0';
	int tens = number[1] - '0';
	int ones = number[2] - '0';

	bool armstrong = false;

	if (pow(hunds, 3) + pow(tens, 3) + pow(ones, 3) == std::stoi(number))
		armstrong = true;

	std::cout << armstrong;

	PAUSE
	return 0;
}