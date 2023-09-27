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

// O(NlogN) O(logN)
//int thirdMax(std::vector<int>& nums) {
//	std::sort(nums.begin(), nums.end());
//
//	int iFirst = nums.size() - 1, maxSecond;
//	int iSecond = iFirst, maxFirst = maxSecond = nums[iFirst];
//	for (int i = iFirst; i >= 0; i--)
//	{
//		if (nums[i] != maxFirst)
//		{
//			maxSecond = nums[i];
//			iSecond = i;
//			break;
//		}
//	}
//
//	// ex: [1,2] or [1,1,2]
//	if (iSecond == 0 || nums[0] == maxSecond)
//		return maxFirst; // the third distinct maximum doesn't exist,
//	// so return the first distinct maximum = max element in the nums vector
//
//	for (int index = iSecond; index >= 0; index--)
//		if (nums[index] != maxSecond)
//			return nums[index];
//
//	return 0; 
//}

//https://leetcode.com/problems/third-maximum-number/solutions/3343654/c-4-different-approach-solution-in-place-algorithm-max-heap-set-sorting/
// using set O(n) O(n)
//int thirdMax(std::vector<int>& nums) {
//	std::set<int> s;
//	for (int i = 0; i < nums.size(); i++)
//	{
//		s.insert(nums[i]);
//	}
//
//	if (s.size() >= 3) // when std::set size >= 3 means 3rd maximum exist, because set doesn't contain duplicate element
//	{
//		int third_index_from_last = s.size() - 3;
//		auto third_maximum = std::next(s.begin(), third_index_from_last);
//		return *third_maximum;
//	}
//
//	return *--s.end(); // return maximum if 3rd maximum not exist
//}

// https://leetcode.com/problems/third-maximum-number/solutions/4009099/c-beats-100-o-n-best-approach-so-far/
// In place O(n) O(1)
int thirdMax(std::vector<int>& nums) {
	long long first = LLONG_MIN;
	long long second = LLONG_MIN;
	long long third = LLONG_MIN;

	for (auto num : nums)
	{
		if (num == first || num == second || num == third)
			continue; // skip duplicate

		if (num > first)
		{
			third = second;
			second = first;
			first = num;
		}
		else if (num > second)
		{
			third = second;
			second = num;
		}
		else if (num > third)
		{
			third = num;
		}
	}

	return (third != LLONG_MIN) ? third : first;
}

int main()
{
	std::vector nums = { 3,2,1 };
	std::cout << thirdMax(nums) << '\n';

	nums = { 1,2 };
	std::cout << thirdMax(nums) << '\n';

	nums = { 2, 2, 3,1 };
	std::cout << thirdMax(nums) << '\n';

	nums = { 1,1,2 };
	std::cout << thirdMax(nums) << '\n';

	nums = { 1 };
	std::cout << thirdMax(nums) << '\n';


	return 0;
}

