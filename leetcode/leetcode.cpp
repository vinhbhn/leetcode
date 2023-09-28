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

int numberOfCuts(int n) {
	if (n == 1)
		return 0;

	if (n % 2 == 0)
		return n / 2;
	else
		return n;
}


int main()
{
	std::string str1 = "ABCABC", str2 = "ABC";
	std::cout << gcdOfStrings(str1, str2) << '\n';

	str1 = "ABABAB", str2 = "ABAB";
	std::cout << gcdOfStrings(str1, str2) << '\n';

	str1 = "LEET", str2 = "CODE";
	std::cout << gcdOfStrings(str1, str2) << '\n';

	return 0;
}

/*std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);*/
