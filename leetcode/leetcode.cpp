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

//void moveZeroes(std::vector<int>& nums) {
//	int count{ 0 };
//	for (std::vector<int>::iterator it = nums.begin(); it != nums.end();)
//	{
//		if (*it == 0)
//		{
//			++count;
//			it = nums.erase(it);
//		}
//		else
//			++it;
//	}
//
//	while (count != 0)
//	{
//		nums.push_back(0);
//		--count;
//	}
//}

// https://leetcode.com/problems/move-zeroes/solutions/3882065/simple-c-solution/
// using two pointers
void moveZeroes(std::vector<int>& nums) {
	int i = 0, j = 0;
	while (i < nums.size() && j < nums.size())
	{
		if (nums[j] != 0)
			std::swap(nums[i++], nums[j++]);
		else
			j++;
	}
}

int main()
{
	std::vector nums = { 0,1,0,3,12 };
	moveZeroes(nums);
	for(auto num : nums)
	std::cout << num << ' ';
	std::cout << "\n";

	nums = { 0 };
	//std::cout << moveZeroes(nums) << '\n';


	return 0;
}

