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

char repeatedCharacter(std::string s) {
	std::unordered_set<char> seen;

	for (int i = 0; i < s.length(); i++)
	{
		if (seen.count(s[i]))
			return s[i];
		else
			seen.insert(s[i]);
	}

	return {};
}


int main()
{
	std::string s = "abccbaacz";
	std::cout << repeatedCharacter(s) << '\n';

	s = "abcdd";
	std::cout << repeatedCharacter(s) << '\n';

	return 0;
}

/*std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);*/
