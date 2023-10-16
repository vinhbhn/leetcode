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

std::vector<int> separateDigits(std::vector<int>&nums) {
	std::vector<int> result;

	for (int i = nums.size() - 1; i >= 0; i--)
	{
		while (nums[i])
		{
			result.push_back(nums[i] % 10);
			nums[i] /= 10;
		}
	}

	std::reverse(result.begin(), result.end());
	return result;
}

//https://leetcode.com/problems/separate-the-digits-in-an-array/solutions/3141479/c-easy-string-conversion/
std::vector<int> separateDigits(std::vector<int>& nums) {
	std::vector<int> result;
	for (auto& it : nums)
	{
		std::string temp = std::to_string(it);
		for (auto& s : temp)
			result.push_back(s - '0');
	}

	return result;
}

int main()
{

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
