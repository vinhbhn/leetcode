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

using namespace std;
// slow
//vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
//	vector<int> res1, res2;
//	bool equal = false;
//
//	// check if element in nums1 exists in nums2
//	for (auto num : nums1)
//	{
//		for (int i = 0; i < nums2.size(); i++)
//		{
//			if (num == nums2[i])
//			{
//				equal = true;
//				break;
//			}
//		}
//
//		if (!equal && find(res1.begin(), res1.end(), num) == res1.end())
//			res1.push_back(num);
//
//		// reset
//		equal = false;
//	}
//
//	// check if element in nums2 exists in nums1
//	for (auto num : nums2)
//	{
//		for (int i = 0; i < nums1.size(); i++)
//		{
//			if (num == nums1[i])
//			{
//				equal = true;
//				break;
//			}
//		}
//
//		if (!equal && find(res2.begin(), res2.end(), num) == res2.end())
//			res2.push_back(num);
//
//		// reset
//		equal = false;
//	}
//
//	return { res1, res2 };
//}

// O(mlogm + nlogn)
//vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
//	vector<int> res1, res2;
//
//	// check if element in nums1 exists in nums2
//	for (auto num : nums1)
//	{
//		if (find(nums2.begin(), nums2.end(), num) == nums2.end())
//			if (find(res1.begin(), res1.end(), num) == res1.end())
//				res1.push_back(num);
//	}
//
//	// check if element in nums2 exists in nums1
//	for (auto num : nums2)
//	{
//		if (find(nums1.begin(), nums1.end(), num) == nums1.end())
//			if (find(res2.begin(), res2.end(), num) == res2.end())
//				res2.push_back(num);
//	}
//
//	return { res1, res2 };
//}

// O(mn)
vector<vector<int>> findDifference(vector<int>& a, vector<int>& b) {
	unordered_set<int> set1(a.begin(), a.end());
	unordered_set<int> set2(b.begin(), b.end());

	vector<int> res1, res2;

	for (auto num : set1)
		if (!set2.contains(num))
			res1.push_back(num);

	for (auto num : set2)
		if (!set1.contains(num))
			res2.push_back(num);

	return { res1, res2 };
}

// web: O(m+n)
vector<vector<int>> findDifference(vector<int>& a, vector<int>& b) {
	vector<int> res1, res2;

	sort(a.begin(), a.end());
	a.erase(unique(a.begin(), a.end()), a.end());

	sort(b.begin(), b.end());
	b.erase(unique(b.begin(), b.end()), b.end());

	set_difference(a.begin(), a.end(), b.begin(), b.end(), back_inserter(res1));
	set_difference(b.begin(), b.end(), a.begin(), a.end(), back_inserter(res2));

	return { res1, res2 };
}

int main()
{
	std::vector nums1 = { 1,2,2,1 };
	std::vector nums2 = { 2,2 };
	for (auto x : intersect(nums1, nums2))
		std::cout << x << ' ';
	std::cout << '\n';

	nums1 = { 1,2,2,1 };
	nums2 = { 2 };
	for (auto x : intersect(nums1, nums2))
		std::cout << x << ' ';
	std::cout << '\n';

	nums1 = { 4,9,5 };
	nums2 = { 9,4,9,8,4 };
	for (auto x : intersect(nums1, nums2))
		std::cout << x << ' ';
	std::cout << '\n';

	return 0;
}

//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
