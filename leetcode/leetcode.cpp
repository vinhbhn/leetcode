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

//bool digitCount(std::string num) {
//	std::map<char, int> mp;
//	char iChar = '0';
//	for (int i = 0; i < num.length(); i++)
//	{
//		mp[num[i]]++;
//
//		iChar = i + '0';
//		if (mp.find(iChar) == mp.end())
//			mp[iChar] = 0;
//	}
//
//	/*for (auto& x : mp)
//		std::cout << x.first << ' ' << x.second << '\n';*/
//
//
//	for (int i = 0; i < num.length(); i++)
//	{
//		// iChar = i in num[i]
//		iChar = i + '0';
//		// convert char num[i] to int
//		int occurNumTimes = num[i] - '0';
//		if (mp.find(iChar)->second != occurNumTimes)
//			return false;
//
//		/*std::cout << iChar << ' ' << occurNumTimes << '\n';*/
//	}
//
//	return true;
//}

bool digitCount(std::string num) {
	std::unordered_map<int, int> mp;
	for (auto ele : num)
	{
		ele -= '0';
		mp[ele]++;
	}

	for (int i = 0; i < num.length(); i++)
	{
		// convert num[i] to int
		if (mp[i] != num[i] - '0')
			return false;
	}

	return true;
}

int main()
{
	std::cout << std::boolalpha;
	std::cout << digitCount("1210") << '\n';
	std::cout << digitCount("030") << '\n';
	std::cout << digitCount("1") << '\n';


	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
