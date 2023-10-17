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

// using two pointers O(mlogm + nlogn) O(min(m,n))
//std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
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
//	return result;
//}

// https://leetcode.com/problems/intersection-of-two-arrays-ii/solutions/3397590/simple-c-hash-map-easy-to-understand/
//std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
//	std::vector<int> ans;
//	if (nums1.size() > nums2.size())
//		return intersect(nums2, nums1);
//	
//	std::unordered_map<int, int> mp;
//	for (auto num : nums1)
//		mp[num]++; // here we count the frequency for every element
//
//	for (auto number : nums2)
//	{
//		// if the element is found in the unordered_map we decrement the count by 1 
//		// and push that element in output vector along with checking the condition that count > 0
//		if (mp.find(number) != mp.end() && mp[number] > 0)
//		{
//			ans.push_back(number);
//			mp[number]--;
//		}
//	}
//
//	return ans;
//}

// https://leetcode.com/problems/intersection-of-two-arrays-ii/solutions/82269/short-python-c/
//std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
//	std::unordered_map<int, int> mp;
//	for (auto num : nums1)
//		mp[num]++; 
//
//	std::vector<int> ans;
//	for (auto number : nums2)
//	{
//		if (mp[number]-- > 0)
//			ans.push_back(number);
//	}
//
//	return ans;
//}
using namespace std;
vector<int> intersect(vector<int>& a, vector<int>& b) {
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	a.erase(set_intersection(a.begin(), a.end(), b.begin(), b.end(), a.begin()), a.end());
	return a;
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

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
