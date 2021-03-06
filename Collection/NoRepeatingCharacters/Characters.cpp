#include <iostream>
#include <unordered_set>
#include "Characters.h"

void Characters::noRepeating() {
	std::cout << "== Length of a string without repeating characters\n";

	numberOfCharacters("abcdefgabcdefh");
	numberOfCharacters("123333333333333333331");
	numberOfCharacters("hello everybody!");
	numberOfCharacters("pwwkew");
	numberOfCharacters("dvdf");
}

void Characters::numberOfCharacters(std::string s) {
	std::cout << "[" << s << "]";
	useInsert(s);
	useDefine(s);
	subString(s);
	useVector(s);
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
	std::unordered_set<char> chars;
	int max = 0, step = 1, size = s.size();

	for (int i = 0; i < size; i += step) {
		chars.insert(s[i]);

		if (i + 1 == size)
			break;

		for (int j = i + 1; j < size; j++) {
			auto it = chars.find(s[j]);
			if (it != chars.end()) {
				if (chars.size() > max)
					max = chars.size();
				step = std::distance(chars.begin(), it) + 1;
				chars.clear();
				break;
			} else
				chars.insert(s[j]);
		}
	}

	if (chars.size() > max)
		max = chars.size();

	std::cout << " Sub String: <" << max << ">.";
}

void Characters::useVector(std::string s) {
	std::vector<char> chars;
	int max = 0, step = 1, size = s.size();

	for (int i = 0; i < size; i += step) {
		chars.push_back(s[i]);

		if (i + 1 == size)
			break;

		for (int j = i + 1; j < size; j++) {
			auto it = find(chars.begin(), chars.end(), s[j]);

			if (it == chars.end()) {
				chars.push_back(s[j]);
				if (j + 1 == size)
					step = size - i;
			} else {
				if (chars.size() > max)
					max = chars.size();

				step = (it - chars.begin()) + 1;
				chars.clear();
				break;
			}
		}
	}

	if (chars.size() > max)
		max = chars.size();

	std::cout << " Sub-2: <" << max << ">.";
}
