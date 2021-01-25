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

void Arrays::sizes() {
	std::cout << "== size of variables" << "\n";
	std::cout << "Size of char        : " << sizeof(char) << "\n";
	std::cout << "Size of wchar_t     : " << sizeof(wchar_t) << "\n";
	std::cout << "Size of short       : " << sizeof(short) << "\n";
	std::cout << "Size of long long   : " << sizeof(long long) << "\n";
	std::cout << "Size of float       : " << sizeof(float) << "\n";
	std::cout << "Size of double      : " << sizeof(double) << "\n";
	std::cout << "Size of long double : " << sizeof(long double) << "\n";
}