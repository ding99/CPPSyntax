#include <iostream>
#include <cstring>

#include "StringCopy.h"

using namespace std;

int Strcpy() {
	cout << "=> Strcpy\n";

	char str1[11] = "hello";
	char str2[12] = "world";
	char str3[11];
	int len;

	strcpy_s(str3, str1);
	cout << "strcpy(str3, str1) : " << str1 << " / " << str3 << "\n\n";

	return 0;
}

void Refer() {
	cout << "=> Reference\n";
	string food = "Pizza";
	string& meal = food;
	string foo2 = food;

	cout << "food: " << food << "\n";
	cout << "meal: " << meal << ";  &meal: " << &meal << "\n";
	cout << "foo2: " << foo2 << "\n";
}
