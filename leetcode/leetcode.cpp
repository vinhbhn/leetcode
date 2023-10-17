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

//std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
//	std::unordered_set<int> set1(nums1.begin(), nums1.end()), set2(nums2.begin(), nums2.end());
//
//	std::vector<int> result;
//	for (auto val : set2)
//		if (set1.contains(val))
//			result.push_back(val);
//
//	return result;
//}
// using two pointers O(mlogm + nlogn + m + n) O(min(m,n))
//std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
//	std::sort(nums1.begin(), nums1.end());
//	std::sort(nums2.begin(), nums2.end());
//
//	std::vector<int> result;
//	int i = 0, j = 0;
//	while (i < nums1.size() && j < nums2.size())
//	{
//		if (nums1[i] == nums2[j])
//		{
//			result.push_back(nums1[i]);
//			i++;
//			j++;
//		}
//		else if (nums1[i] < nums2[j])
//			i++;
//		else
//			j++;
//	}
//
//	result.erase(std::unique(result.begin(), result.end()), result.end());
//
//	return result;
//}

//https://leetcode.com/problems/intersection-of-two-arrays/solutions/3075714/simple-c-code-beats-95-98-and-81-17/
std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
	std::vector<int> result;
	for (auto i : nums1)
	{
		// checks if the number present in "nums1" is also present in "nums2"
		if (std::count(nums2.begin(), nums2.end(), i) > 0)
		{
			// checks if the number present in both "nums1" and "nums2" is already in "result" vector
			if (std::count(result.begin(), result.end(), i) == 0)
			{
				result.push_back(i);
			}

		}
	}

	return result;
}

int main()
{
	std::vector nums1 = { 1,2,2,1 };
	std::vector nums2 = { 2,2 };
	for (auto x : intersection(nums1, nums2))
		std::cout << x << ' ';
	std::cout << '\n';

	nums1 = { 4,9,5 };
	nums2 = { 9,4,9,8,4 };
	for (auto x : intersection(nums1, nums2))
		std::cout << x << ' ';
	std::cout << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
