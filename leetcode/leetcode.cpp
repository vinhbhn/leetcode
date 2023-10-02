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
#include <set>
#include <numeric>
#include <sstream>

// https://leetcode.com/problems/reverse-string-ii/solutions/2627754/c-world-s-fastest-solution-with-approach/
// using two pointers O(n) O(n)
//std::string reverseStr(std::string s, int k) {
//	std::size_t l = 0, r = std::min((std::size_t)k, s.length());
//	while (l < s.length())
//	{
//		std::reverse(s.begin() + l, s.begin() + r);
//		l += (std::size_t)2 * k;
//		r = std::min((std::size_t)k + l, s.length());
//	}
//
//	return s;
//}

// https://leetcode.com/problems/reverse-string-ii/solutions/3750157/easy-0ms-solution-c/
std::string reverseStr(std::string s, int k) {
	for (int i = 0; i < s.length(); i += 2 * k)
	{
		if (i + k <= s.length())
			std::reverse(s.begin() + i, s.begin() + i + k);
		else
			std::reverse(s.begin() + i, s.end());
	}
	return s;
}



int main()
{
	std::cout << reverseStr("abcdefg", 2) << '\n';
	std::cout << reverseStr("abcd", 2) << '\n';
	std::cout << reverseStr("abcdefg", 8) << '\n';
	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
