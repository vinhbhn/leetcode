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

// hash map
std::vector<int> singleNumber(std::vector<int>& nums) {
	std::unordered_map<int, int> s;
	std::vector<int> result;

	for (int i{ 0 }; i < nums.size(); i++)
	{
		s[nums[i]]++;
	}

	for (auto x : s)
		if (x.second == 1)
			result.push_back(x.first);

	return result;
}



int main()
{
	return 0;
}

