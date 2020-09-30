#include <iostream>
#include "Compare.h"

using namespace std;

void typeCompare() {
	cout << "typedef Comparison" << endl;

	typedef int* pint;

	int i1 = 10, i2 = 20;

	const pint p1 = &i1;
	const PINT p2 = &i2;

	cout << "p1: " << p1 << " *p1: " << *p1 << endl;
	*p1 = 5;
	cout << "p1: " << p1 << " *p1: " << *p1 << endl;

	cout << "p2: " << p2 << " *p2: " << *p2 << endl;
	p2 = &i1;
	cout << "p2: " << p2 << " *p2: " << *p2 << endl;
}

void valuePointer() {
	cout << "pointer values" << endl;

	int var1;
	char var2[10];

	cout << "var1 variable address : " << &var1 << endl;
	cout << "var2 variable address : " << &var2 << endl;
	cout << "var2 variable : " << var2 << endl;

	char* var3 = (char*)malloc(26);
	strcpy_s(var3, 26, "abcdefg");
	cout << "var3 variable address <" << &var3 << "> [" << var3 << "] length " << strlen(var3) << endl;
	var3 = (char*)malloc(2880);
	strcpy_s(var3, 28, "h1234567890");
	cout << "var3 variable address <" << &var3 << "> [" << var3 << "] length " << strlen(var3) << endl;

	char* var5;
	var5 = new char[32];
	strcpy_s(var5, 32, "sdsdsdsdsdsd");
	cout << "var5 variable address <" << &var5 << "> [" << var5 << "] length " << strlen(var5) << endl;
	delete var5;
}
