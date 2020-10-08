#include <iostream>
#include <unordered_set>
#include "Characters.h"

void Characters::noRepeating() {
	std::cout << "== Length of a string without repeating characters\n";

	numberOfCharacters("abcdefgabcdefh");
	numberOfCharacters("123333333333333333331");
	numberOfCharacters("hello everybody!");
}

void Characters::numberOfCharacters(std::string s) {
	std::cout << "[" << s << "]";
	useInsert(s);
	useDefine(s);
	subString(s);
	std::cout << "\n";
}

void Characters::useInsert(std::string s) {
	std::unordered_set<char> chars;

	for (int i = 0; i < s.size(); i++)
		if (chars.find(s[i]) == chars.end())
			chars.insert(s[i]);

	std::cout << " By Inserting: <" << chars.size() << ">.";
}

void Characters::useDefine(std::string s) {
	std::unordered_set<char> chars(s.begin(), s.end());
	std::cout << " By Defining: <" << chars.size() << ">.";
}

void Characters::subString(std::string s) {
	std::unordered_set<char> chars(s.begin(), s.end());
	std::cout << " Sub String: <" << chars.size() << ">.";
}
