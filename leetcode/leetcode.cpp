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

// O(n^3 log(res)) O(n) pass 308/312 cases brute force
vector<vector<int>> threeSum(vector<int>& nums) {
	sort(nums.begin(), nums.end());

	int n = nums.size();
	vector<vector<int>> res;
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (nums[i] + nums[j] + nums[k] == 0)
					res.push_back({nums[i], nums[j], nums[k]});
			}
		}
	}

	sort(res.begin(), res.end());
	res.erase(unique(res.begin(), res.end()), res.end());

	return res;
}

// https://leetcode.com/problems/3sum/solutions/3109452/c-easiest-beginner-friendly-sol-set-two-pointer-approach-o-n-2-logn-time-and-o-n-space/
// TC: O(n^2 logn + nlogn) - O(n^2 logn) SC: O(n)  1143ms 189.9MB using two pointer
vector<vector<int>> threeSum(vector<int>& nums) {
	sort(nums.begin(), nums.end());

	int n = nums.size();
	vector<vector<int>> res;
	set<vector<int>> st;
	for (int i = 0; i < n; i++)
	{
		int j = i + 1, k = n - 1;

		while (j < k)
		{
			int sum = nums[i] + nums[j] + nums[k];
			if (sum == 0)
			{
				st.insert({ nums[i], nums[j], nums[k] });
				j++;
				k--;
			}
			else if (sum < 0)
				j++;
			else
				k--;
		}
	}

	for (auto& a : st)
		res.push_back(a);

	return res;
}

// https://leetcode.com/problems/3sum/solutions/1462423/c-both-two-pointers-and-hashmap-approach-explained/
// 321ms 25.2MB using hashmap
vector<vector<int>> threeSum(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	if (nums.size() < 3) // base case 1
		return {};
	if (nums[0] > 0) // base case 2
		return {};

	unordered_map<int, int> hashMap;
	for (int i = 0; i < nums.size(); i++)
	{
		// hashsing of indices
		hashMap[nums[i]] = i;
	}

	vector<vector<int>> ans;
	for (int i = 0; i < nums.size() - 2; ++i)
	{
		// Traversing the array to fix the number
		if (nums[i] > 0)
		{
			// If number fixed is +ve, stop there because we can't make it zero by searching after it.
			break;
		}

		for (int j = i + 1; j < nums.size(); j++)
		{
			// Fixing another number after first number
			int required = -1 * (nums[i] + nums[j]); // to make sum 0, we would require the -ve sum of both fixed numbers.
			if (hashMap.count(required) && hashMap.find(required)->second > j)
			{
				// If it exists in hashmap and its last occurrence index > 2nd fixed index, we found our triplet.
				ans.push_back({ nums[i], nums[j], required });
			}

			j = hashMap.find(nums[j])->second; // Update j to last occurrence of 2nd fixed number to avoid duplicate triplets.
		}

		i = hashMap.find(nums[i])->second; // Update i to last occurrence of 1st fixed number to avoid duplicate triplets.
	}
	return ans;
}

int main()
{

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
