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
#include <queue>
#include<map>
#include <charconv>

// https://leetcode.com/problems/valid-palindrome-ii/solutions/1324407/c-solution-two-pointer-approach/
// two pointers O(n) O(1)
bool isPalindrome(std::string s, int i, int j)
{
	while (i < j)
	{
		if (s.at(i) != s.at(j))
			return false;

		i++;
		j--;
	}

	return true;

}
bool validPalindrome(std::string s) {
	int i = 0, j = s.size() - 1;
	while (i < j)
	{
		if (s.at(i) == s.at(j))
		{
			i++;
			j--;
		}
		else
			return (isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1));
	}

	return true;

}

int main()
{
	std::cout << std::boolalpha;
	std::cout << validPalindrome("aba") << '\n';
	std::cout << validPalindrome("abca") << '\n';
	std::cout << validPalindrome("abc") << '\n';
	std::cout << validPalindrome("deeee") << '\n';
	std::cout << validPalindrome("cbbcc") << '\n';
	std::cout << validPalindrome("bebeb") << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
