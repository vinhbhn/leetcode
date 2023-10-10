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

bool isAcronym(std::vector<std::string>& words, std::string s) {
	if (words.size() != s.size())
		return false;
	for(int i = 0; i < words.size(); i++)
	{
		if (words[i][0] != s[i])
			return false;
	}

	return true;
}


int main()
{
	std::cout << balancedStringSplit("RLRRLLRLRL") << '\n';
	std::cout << balancedStringSplit("RLRRRLLRLL") << '\n';
	std::cout << balancedStringSplit("LLLLRRRR") << '\n';


	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
