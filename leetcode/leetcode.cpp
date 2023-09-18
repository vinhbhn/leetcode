#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

// https://en.cppreference.com/w/cpp/utility/functional/default_searcher
// three way work
int strStr(std::string haystack, std::string needle) {
	/*auto it = std::search(haystack.begin(), haystack.end(), std::default_searcher(needle.begin(), needle.end()));
	if (it != haystack.end())
		return (it - haystack.begin());
	else
		return -1;*/

	/*auto it = std::search(haystack.begin(), haystack.end(), std::boyer_moore_searcher(needle.begin(), needle.end()));
	if (it != haystack.end())
		return (it - haystack.begin());
	else
		return -1;*/

	return haystack.find(needle);
}

int main()
{
	using namespace std::literals;
	std::cout << strStr("sadbutsad", "sad") << '\n';
	std::cout << strStr("leetcode", "leeto") << '\n';
	std::cout << strStr("hello", "ll") << '\n';


	return 0;
}

