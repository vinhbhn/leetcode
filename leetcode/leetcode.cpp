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

//int majorityElement(std::vector<int>& nums) {
//	std::sort(nums.begin(), nums.end());
//	int number{ nums[0] }, count{ 1 }, numsSize{ static_cast<int>(nums.size()) };
//
//	for (auto num : nums)
//	{
//		std::cout << num << ' ';
//	}
//
//	for (int i{ 1 }; i < numsSize; i++)
//	{
//		// more than
//		if (count > (numsSize / 2))
//			return number;
//
//
//		if (number != nums[i])
//		{
//			number = nums[i];
//			count = 1;
//		}
//		else
//			++count;
//	}
//
//	return number;
//}

// https://leetcode.com/problems/majority-element/solutions/3676530/3-method-s-beats-100-c-java-python-beginner-friendly/
// majority element is present at the middle position after the vector's sorted ( = n / 2)
// O(n logn)
//int majorityElement(std::vector<int>& nums) {
//	std::sort(nums.begin(), nums.end());
//	int n = nums.size();
//	return nums[n / 2];
//}

// hash map
// O(n)
//int majorityElement(std::vector<int>& nums) {
//	int n = nums.size();
//	std::unordered_map<int, int> m;
//	
//	for (int i{ 0 }; i < n; i++)
//		m[nums[i]]++;
//
//	n /= 2;
//	for (auto x : m)
//	{
//		if (x.second > n)
//			return x.first;
//	}
//
//	return 0;
//}

// moore voting algorithm
// O(n)
int majorityElement(std::vector<int>& nums) {
	int count{ 0 }, candidate{ 0 };

	for (int num : nums)
	{
		if (count == 0)
			candidate = num;

		if (num == candidate)
			count++;
		else
			count--;
	}

	return candidate;
}

int main()
{
	std::vector<int> nums = { 3,2,3 };
	std::cout << majorityElement(nums) << '\n';

	nums = { 2,2,1,1,1,2,2 };
	std::cout << majorityElement(nums) << '\n';

	nums = { 6,5,5 };
	std::cout << majorityElement(nums) << '\n';

	return 0;
}

