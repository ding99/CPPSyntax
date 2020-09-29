#include <iostream>
#include <cstring>

#include "StringCopy.h"

using namespace std;

int Strcpy() {
	cout << "=> Strcpy" << endl;

	char str1[11] = "hello";
	char str2[12] = "world";
	char str3[11];
	int len;

	strcpy_s(str3, str1);
	cout << "strcpy(str3, str1) : " << str1 << " / " << str3 << endl << endl;

	return 0;
}
