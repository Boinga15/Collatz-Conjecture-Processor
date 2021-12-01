#include <iostream>
#include<Windows.h>

// Values you can change:
int timeBetween = 5; // Time the program pauses between each calculation (in milliseconds, so 1000 = 1 second).

int main() {
	int num;
	int baseNum;

	// Input from user.
	bool numberInputted = false;
	while (!numberInputted) {
		std::cout << "Enter a number: ";
		std::cin >> num;
		if (num <= 0) {
			system("cls");
			std::cout << "Number must be greater than 0.\n" << std::endl;
		} else {
			numberInputted = true;
		}
	}

	baseNum = num;

	system("cls");
	std::cout << num << std::endl;

	int cycles = 0;
	bool sequenceFound = false;
	bool infinite = false;
	while (!sequenceFound) { // The actual program.
		if (num == 1) { // Once we reach 1, we've reached the pattern 4, 2, 1. As a result, we've found the terminating sequence.
			sequenceFound = true;
			std::cout << std::endl;
			break;
		}
		else if (num > 2147483647 || num <= 0) {
			sequenceFound = true;
			infinite = true;
			std::cout << std::endl;
			break;
		} else if (num % 2 == 0) { // Checks if number is odd. If this runs true, then the number is even.
			std::cout << "Above number is even. New number: ";
			num = num / 2; // x/2
		} else { // Number is odd.
			std::cout << "Above number is odd. New number: ";
			num = (3 * num) + 1; // 3x + 1
		}

		std::cout << num << std::endl;
		cycles++;
		Sleep(timeBetween);
	}

	if (!infinite) { // Number had the terminating sequence.
		std::cout << "This number ends in the sequence 4, 2, 1, 4, 2, 1, 4..." << std::endl;
	} else { // Number reaches infinity.
		std::cout << "This number reaches infinity." << std::endl;
	}
	std::cout << "Program recorded " << cycles << " steps." << std::endl;

	system("pause");
}