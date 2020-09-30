#include <iostream>
#include "StreamIn.h"

using namespace std;

#define N 100

void GetLine(void) {
	std::cout << "-- getline\n";

	char X[N];
	cin.getline(X, N);
	int a = 0, b = 0, i = 0;

	for (i = 0; i < N; i++) {
		if (X[i] == '#') {
			cout << "ended " << i << endl;
			break;
		}
		if (X[i] >= '0' && X[i] <= '9')
			a++;
		if ((X[i] >= 'a' && X[i] <= 'z') || (X[i] >= 'A' && X[i] <= 'Z'))
			b++;
	}

	cout << "Number of digits <" << a << ">" << endl;
	cout << "Number of letters <" << b << ">" << endl;
	cout << "The last search position <" << i << ">" << endl;
}