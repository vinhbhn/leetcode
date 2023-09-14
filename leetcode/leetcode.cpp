#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::string longestCommonPrefix(std::vector<std::string>& strs)
{
	std::sort(strs.begin(), strs.end()); // sorting the array
	std::string ans{};
	for (int i{ 0 }; i < strs[0].size(); ++i) // max length = element 1 length of strs
	{
		if (strs[0][i] != strs[strs.size() - 1][i])
			break;

		ans += strs[0][i]; // concatinate if the characters are matching
	}

	return ans;
}


int main()
{
	std::vector<std::string> strs1 = { "flower", "flow", "flight" };
	std::cout << longestCommonPrefix(strs1) << '\n';
	std::vector<std::string> strs2 = { "dog", "racecar", "car" };
	std::cout << longestCommonPrefix(strs2) << '\n';
	std::vector<std::string> strs3 = { "a" };
	std::cout << longestCommonPrefix(strs3) << '\n';

	return 0;
}

