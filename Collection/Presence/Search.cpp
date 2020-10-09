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

	dsp(byVector(ints, 4, 102));
	dsp(byVector(ints, 4, 36));
}

void Search::dsp(bool flag) {
	std::cout << (flag ? "Existing" : "Not Found") << std::endl;
}

bool Search::exists(int ints[], int size, int k) {
	int stt = 0, end = size - 1, crt = 0;

	if (ints[stt] == k || ints[end] == k)
		return true;

	while (stt + 1 < end) {
		crt = (stt + end) / 2;
		if (ints[crt] == k)
			return true;
		else (ints[crt] > k ? end : stt) = crt;
	}

	return false;
}

bool Search::byVector(int ints[], int size, int k) {
	std::vector<int> v(ints, ints + size);

	return std::find(v.begin(), v.end(), k) != v.end();
}