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

// O(n^2)
//std::vector<int> sortArrayByParity(std::vector<int>&nums) {
//	std::vector<int> v;
//
//	for (int i = 0; i < nums.size(); i++)
//		if (nums[i] % 2 == 0)
//			v.push_back(nums[i]);
//
//	for (int i = 0; i < nums.size(); i++)
//		if (nums[i] % 2 != 0)
//			v.push_back(nums[i]);
//
//	return v;
//}

// use lambda
std::vector<int> sortArrayByParity(std::vector<int>& nums) {
	std::sort(nums.begin(), nums.end(), [](int a, int b)
		{
			return (a % 2) < (b % 2);
		});

	return std::move(nums);
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
