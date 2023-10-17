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

// using unordered_set
//int getCommon(std::vector<int>& nums1, std::vector<int>& nums2) {
//	std::unordered_set<int> set1;
//
//	for (auto number : nums1)
//		set1.insert(number);
//
//	for (int x : nums2)
//		if (set1.contains(x))
//			return x;
//
//	return -1;
//}
// using two pointers
int getCommon(std::vector<int>& nums1, std::vector<int>& nums2) {
	int i = 0, j = 0;
	while (i < nums1.size() && j < nums2.size())
	{
		if (nums1[i] == nums2[j])
			return nums1[i];
		else if (nums1[i] < nums2[j])
			i++;
		else
			j++;
	}

	return -1;
}

int main()
{
	std::vector nums1 = { 1,2,3 };
	std::vector nums2 = { 2,4 };
	std::cout << getCommon(nums1, nums2) << '\n';

	nums1 = { 1,2,3,6 };
	nums2 = { 2,3,4,5 };
	std::cout << getCommon(nums1, nums2) << '\n';


	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
