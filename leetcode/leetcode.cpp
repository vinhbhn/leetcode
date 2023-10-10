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

bool areOccurrencesEqual(std::string s) {
	std::unordered_map<char, int> mp;
	for (auto ch : s)
		mp[ch]++;
	
	auto it = mp.begin();
	auto sum = it->second;
	it++;
	for (; it != mp.end(); it++)
	{
		if (sum != it->second)
			return false;
	}

	return true;
}


int main()
{
	std::cout << std::boolalpha;
	std::cout << areOccurrencesEqual("abacbc") << '\n';
	std::cout << areOccurrencesEqual("aaabb") << '\n';


	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
