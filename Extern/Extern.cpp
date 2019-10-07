#include <iostream>
#include "Extern01.h"

extern int a, b;
extern int c;
extern float f;

void test2() {
	std::cout << "-- test2 --" << std::endl;

	int a, b;
	int c;
	float f;

	a = 10; b = 20;
	c = a + b;
	std::cout << c << std::endl;

	f = 70.0 / 3.0;
	std::cout << f << std::endl;
}


int g = 20;
int fun1(int a, int b) {
	g = a + b;
	std::cout << g << std::endl;
	return 0;
}

int fun2() {
	std::cout << g << std::endl;
	return 0;
}

int test3() {
	std::cout << "-- test3 --" << std::endl;

	fun2();
	fun1(10, 20);
	fun2();
	return 0;
}


int main()
{
    std::cout << "Extern Test\n";

	test2();
	test3();
	//Sum();
	//Display();
}
