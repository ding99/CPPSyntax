#include "Evaluation.h"
#include <iostream>
#include <string>

void Evaluation::Start() {
	std::cout << "-- Examining Switch" << std::endl;

	std::cout << "The expression is an integer variable." << std::endl;
	int day = 4;
	switch(day) {
		case 1: std::cout << "Monday"; break;
		case 2: std::cout << "Tuesday"; break;
		case 3: std::cout << "Wednesday"; break;
		case 4: std::cout << "Thursday"; break;
		case 5: std::cout << "Friday"; break;
		case 6: std::cout << "Saturday"; break;
		default: std::cout << "Sunday"; break;
	}
	std::cout << std::endl;
}