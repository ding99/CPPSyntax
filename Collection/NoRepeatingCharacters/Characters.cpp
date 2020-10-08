#include <iostream>
#include <unordered_set>
#include "Characters.h"

void Characters::noRepeating() {
	std::cout << "== Length of a string without repeating characters\n";

	lengthOfLongestSubstring("abcdefgabcdefh");
}

void Characters::lengthOfLongestSubstring(std::string s) {
	std::unordered_set<char> chars;

	for (int i = 0; i < s.size(); i++)
		if (chars.find(s[i]) == chars.end())
			chars.insert(s[i]);
	
	std::cout << "<" << s << ">" << ", length <" << chars.size() << ">\n";
}
