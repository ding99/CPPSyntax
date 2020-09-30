#include <iostream>
#include <string>

#include "IteratorString.h"

using namespace std;

void pushback() {
	string str1("abc");
	basic_string<char>::iterator iter;
	cout << "The original string str1 is <";
	for (iter = str1.begin(); iter != str1.end(); iter++)
		cout << *iter;
	cout << "> with size " << str1.size() << endl;

	str1.push_back('d');
	basic_string<char>::iterator newEnd = str1.end();
	newEnd--;
	cout << "The last char acter-letter of the modified string is now <"
		<< *newEnd << ">" << endl;

	cout << "The modified string str1 is <";
	for (iter = str1.begin(); iter != str1.end(); iter++)
		cout << *iter;
	cout << "> with size " << str1.size() << endl;
}

