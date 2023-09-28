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

// even and odd Indices
// O(N logN) O(N)
//std::vector<int> sortEvenOdd(std::vector<int>& nums) {
//	std::vector<int> even, odd, result;
//	for (int i = 0; i < nums.size(); i++)
//	{
//		if (i % 2 == 0)
//			even.push_back(nums[i]);
//		else
//			odd.push_back(nums[i]);
//	}
//
//	std::sort(even.begin(), even.end());
//	std::sort(odd.begin(), odd.end(), std::greater());
//
//	int i = 0, j = 0;
//	while (i < even.size() || j < odd.size())
//	{
//		if (i < even.size())
//			result.push_back(even[i++]);
//		if (j < odd.size())
//			result.push_back(odd[j++]);
//	}
//
//	return result;
//}

//https://leetcode.com/problems/sort-even-and-odd-indices-independently/solutions/1751131/multiple-approaches-c-fast-solution/
// O(N^2) O(1)
std::vector<int> sortEvenOdd(std::vector<int>& nums) {
	int minIndex = 0; 
	// Here in this nested loop, we are sorting the elements at even indices in non-decreasing order.
	for (int i = 0; i < nums.size(); i += 2)
	{
		minIndex = i;
		for (int j = i + 2; j < nums.size(); j += 2) {
			if (nums[j] < nums[minIndex])
				minIndex = j;
		}
		std::swap(nums[i], nums[minIndex]);
	}
	// Here, we are trying to sort the elements at odd indices in non-increasing order.
	for (int i = 1; i < nums.size(); i += 2)
	{
		minIndex = i;
		for (int j = i + 2; j < nums.size(); j += 2)
		{
			if (nums[j] > nums[minIndex])
				minIndex = j;
		}
		std::swap(nums[i], nums[minIndex]);
	}

	return nums;
}

int main()
{
	std::vector<int>  nums = { 4, 1, 2, 3 };
	std::vector<int> ans = sortEvenOdd(nums);
	for (auto num : ans)
		std::cout << num << ' ';
	std::cout << '\n';

	nums = { 2,1 };
	ans = sortEvenOdd(nums);
	for (auto num : ans)
		std::cout << num << ' ';
	std::cout << '\n';

	return 0;
}

/*std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);*/
