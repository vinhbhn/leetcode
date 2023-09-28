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

// O(N) O(N)
std::vector<int> sortArrayByParityII(std::vector<int>& nums) {
	std::vector<int> even, odd, result;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] % 2 == 0)
			even.push_back(nums[i]);
		else
			odd.push_back(nums[i]);
	}

	int i = 0, j = 0;
	while (i < even.size() || j < odd.size())
	{
		if (i < even.size())
			result.push_back(even[i++]);
		if (j < odd.size())
			result.push_back(odd[j++]);
	}

	return result;
}

// https://leetcode.com/problems/sort-array-by-parity-ii/solutions/1490847/c-two-pointers-solution/
// using two pointers O(N) O(1)
//std::vector<int> sortArrayByParityII(std::vector<int>& nums) {
//	int n = nums.size();
//	int i = 0, j = 1;
//	while (i < n && j < n)
//	{
//		if (nums[i] % 2 == 0)
//			i += 2;
//		else if (nums[j] % 2 == 1)
//			j += 2;
//		else
//			std::swap(nums[i], nums[j]);
//	}
//
//	return nums;
//}

int main()
{
	std::vector<int>  nums = { 4, 2, 5, 7 };
	std::vector<int> ans = sortArrayByParityII(nums);
	for (auto num : ans)
		std::cout << num << ' ';
	std::cout << '\n';

	nums = { 2,3 };
	ans = sortArrayByParityII(nums);
	for (auto num : ans)
		std::cout << num << ' ';
	std::cout << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
