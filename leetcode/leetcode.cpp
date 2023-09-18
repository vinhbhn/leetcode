#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>

// Time complexity: O((m+n)log(m+n))
// Space complexity: O(1)
void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
	for (int i{ 0 }; i < nums2.size(); ++i)
	{
		nums1[i+m] = nums2[i];
	}

	std::sort(nums1.begin(), nums1.end());
}

// https://leetcode.com/problems/merge-sorted-array/solutions/3436053/beats-100-best-c-java-python-and-javascript-solution-two-pointer-stl/
// Time complexity: O(m+n)
// Space complexity: O(1)
//void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
//	int i{ m - 1 }, j{ n - 1 }, k{ m + n - 1 };
//
//	while (j >= 0)
//	{
//		if (i >= 0 && nums1[i] > nums2[j])
//			nums1[k--] = nums1[i--];
//		else
//			nums1[k--] = nums2[j--];
//	}
//}


int main()
{
	std::vector<int> nums1{ 1, 2, 3, 0,0,0 };
	std::vector<int> nums2{ 2,5,6 };
	merge(nums1, 3, nums2, 3);

	std::vector<int> nums3{ 1 };
	std::vector<int> nums4;
	merge(nums3, 1, nums4, 0);

	std::vector<int> nums6{ 1 };
	std::vector<int> nums5{ 0 };
	merge(nums5, 0, nums6, 1);

	return 0;
}

