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

// 4ms 7.8MB O(n^2) O(1)
//int numIdenticalPairs(vector<int>& nums) {
//	int count = 0;
//	for (int i = 0; i < nums.size() - 1; i++)
//	{
//		for (int j = i + 1; j < nums.size(); j++)
//		{
//			if (nums[i] == nums[j])
//				count++;
//		}
//	}
//
//	return count;
//}

// 0ms 7.8MB O(n) O(n)
int numIdenticalPairs(vector<int>& nums) {
	int count = 0;
	unordered_map<int, int> mp;
	for (auto num : nums)
		mp[num]++;

	// If a number appears n times, then n * (n – 1) / 2 good pairs can be made with this number.
	for (auto& x : mp)
		count += x.second * (x.second - 1) / 2;

	return count;
}

//https://leetcode.com/problems/number-of-good-pairs/solutions/4121915/one-line-beats-100-runtime-explanation/
// O(n) O(n)
int numIdenticalPairs(vector<int>& nums) {
	return accumulate(nums.begin(), nums.end(), 0, [count = unordered_map<int, int>{}](auto x, auto y) mutable
		{
			return x + count[y]++;
		});
}
int numIdenticalPairs(vector<int>& nums) {
	int count = 0;
	unordered_map<int, int> mp;
	for (auto num : nums)
		count += mp[num]++;

	return count;
}

int main()
{
	cout << boolalpha;
	cout << pivotInteger(8) << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
