#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <stack>
#include <bit>
#include <bitset>
#include <cstdint>
#include <unordered_set>

// https://leetcode.com/problems/find-the-difference/solutions/4086631/99-78-xor-sum/?envType=daily-question&envId=2023-09-25
// use XOR: O(n) O(1)
char findTheDifference(std::string s, std::string t) {
	char result{};
	for (char c : s + t)
		result ^= c;

	return result;
}

int main()
{
	std::cout << findTheDifference("abcd", "abcde") << '\n';
	std::cout << findTheDifference("", "y") << '\n';

	return 0;
}

