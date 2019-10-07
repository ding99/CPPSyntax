#include <iostream>
#include "Compare.h"

void typeCompare() {
	std::cout << "typedef Comparison" << std::endl;

	typedef int* pint;

	int i1 = 10, i2 = 20;

	const pint p1 = &i1;
	const PINT p2 = &i2;

	std::cout << "p1: " << p1 << " *p1: " << *p1 << std::endl;
	*p1 = 5;
	std::cout << "p1: " << p1 << " *p1: " << *p1 << std::endl;

	std::cout << "p2: " << p2 << " *p2: " << *p2 << std::endl;
	p2 = &i1;
	std::cout << "p2: " << p2 << " *p2: " << *p2 << std::endl;
}
