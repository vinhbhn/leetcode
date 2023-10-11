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

// O(N logN)
//std::vector<int> targetIndices(std::vector<int>&nums, int target) {
//	std::sort(nums.begin(), nums.end());
//
//	std::vector<int> result;
//	for (int i = 0; i < nums.size(); i++)
//	{
//		if (nums[i] == target)
//			result.push_back(i);
//	}
//
//	return result;
//}

//https://leetcode.com/problems/find-target-indices-after-sorting-array/solutions/1609499/c-two-methods-with-explanation-o-n-and-o-n-log-n-approach-easy-to-understand/
// O(N)
std::vector<int> targetIndices(std::vector<int>& nums, int target) {
	int small = 0, count = 0, k = 0;
	for (auto n : nums)
	{
		if (n < target) small++; // calculates the frequency of elements lesser than the target
		if (n == target) count++; // calculate the number of occurences of the target element
	}
	std::vector<int> result(count);
	for (int i = small; i < small + count; i++)
	{
		result[k++] = i;
	}
	return result;
}

int main()
{
	std::vector<int> arr = { 37,12,28,9,100,56,80,5,12 };
	for (auto& x : arrayRankTransform(arr))
		std::cout << x << ' ';


	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
