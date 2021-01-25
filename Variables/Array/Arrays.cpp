#include <iostream>
#include <string>
#include <array>

#include "Arrays.h"

void Arrays::start() {
	std::cout << "=>Examine Array[]\n";

	std::string cars[] = {"Volvo", "BMW", "Ford", "Mazda"};

	std::cout << "car 0: <" << cars[0] << ">\n";

	std::cout << "Orginal:";
	for (int i = 0; i < 4; i++)
		std::cout << " <" << cars[i] << ">";
	std::cout << "\n";

	cars[2] = "Honda";

	std::cout << "Changed:";
	for (int i = 0; i < 4; i++)
		std::cout << " <" << cars[i] << ">";
	std::cout << "\n";

	std::cout << "=> Use array library\n";
	std::array<std::string, 5> cara = { "Nissan", "BMW", "Ford", "Mazda" };
	int n = cara.size();
	std::cout << "Arrays (size " << n << " ) :";
	for (int i = 0; i < n; i++)
		std::cout << " <" << cara[i] << ">";
	std::cout << "\n";

	std::cout << "Sign 'Polo' to Array[4].\n";
	cara[4] = "Polo";
	n = cara.size();
	std::cout << "Arrays (size " << n << " ) :";
	for (int i = 0; i < n; i++)
		std::cout << " <" << cara[i] << ">";
	std::cout << "\n";
}
