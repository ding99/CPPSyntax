#include <iostream>
#include <cstring>
#include "Chars.h"


// to double check
void Chars::define() {
	char greeting[] = "Testing Chars";

	std::cout << "src <" << greeting << ">\n";

	int len = strlen(greeting) + 1;
	std::cout << "org size : " << len << "\n";

	char *dst = (char*)malloc(sizeof(char) * len);

	std::memset(dst, 0, len);
	std::memcpy(dst, greeting, len);

	std::cout << "dst <" <<  dst << ">\n";
}