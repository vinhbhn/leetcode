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
vector<int> intersection(vector<vector<int>>& nums) {
	map<int, int> mp;
	int n = nums.size();

	for (int i = 0; i < n; i++)
		for (auto num : nums[i])
			mp[num]++;
	
	vector<int> result;
	for (auto& x : mp)
		if (x.second == n)
			result.push_back(x.first);

	return result;
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
