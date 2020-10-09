#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <algorithm>
#include <vector>

#include "Search.h"

void Search::start() {
	std::cout << "Check the presence of a number in an array" << "\n";

	int ints[] = { -9, 14, 37, 102 };
	dsp(exists(ints, 4, 102));
	dsp(exists(ints, 4, 36));
}

void Search::dsp(bool flag) {
	std::cout << (flag ? "Existing" : "Not Found") << "\n";
}

bool Search::exists(int ints[], int size, int k) {
	return true;
}