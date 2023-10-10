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

// https://leetcode.com/problems/split-strings-by-separator/solutions/3804389/easy-and-clean-code-c/
std::vector<std::string> splitWordsBySeparator(std::vector<std::string>& words, char separator) {
	std::vector<std::string> result;
	for (int i = 0; i < words.size(); i++)
	{
		std::string s = words[i];
		std::string temp = "";
		for (auto a : s)
		{
			if (a == separator && temp != "")
			{
				result.push_back(temp);
				temp = "";
			}
			if (a != separator)
				temp += a;
		}
		// the last string if not separator in the end
		if (temp != "")
			result.push_back(temp);
	}

	return result;
}


int main()
{
	std::vector<std::string> words = { "one.two.three","four.five","six" };
	char separator = '.';
	splitWordsBySeparator(words, separator);

	 words = { "$easy$","$problem$" };
	separator = '$';
	splitWordsBySeparator(words, separator);

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
