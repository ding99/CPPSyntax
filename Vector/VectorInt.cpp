#include <iostream>
#include <vector>

#include "VectorInt.h"

using namespace std;

//vector<int>::const_iterator;
//const vector<int>::iterator;
//const vector<int>::const_iterator;
void pushback() {
	vector<int> ivec;

	ivec.push_back(6);
	vector<int>::iterator start1 = ivec.begin(), end1 = ivec.end(), iter;
	cout << "size(" << ivec.size() << ") :";
	for (iter = start1; iter < end1; iter++)
		cout << " " << *iter;
	cout << endl;

	ivec.push_back(8);
	vector<int>::iterator start2 = ivec.begin(), end2 = ivec.end();
	cout << "size(" << ivec.size() << ") :";
	for (iter = start2; iter < end2; iter++)
		cout << " " << *iter;
	cout << endl;
}
