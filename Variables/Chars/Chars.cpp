#include <iostream>
#include "Chars.h"

void Chars::define() {
	char greeting[] = "Testing Chars";

	std::cout << "src <" << greeting << ">\n";

	int len = sizeof(greeting);
	std::cout << "org size : " << len << "\n";

	char *dst;
	dst = (char*)malloc(len);

	memset(dst, 0, len);
	memcpy(dst, greeting, len);

	std::cout << "dst size : " << sizeof(dst) << "\n";

	std::cout << "dst <" <<  dst << ">\n";
}