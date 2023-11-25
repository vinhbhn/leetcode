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

// brute force 42/59
// anwendeng formula idea in comment: result[i] = total with (j>i) of (aJ-aI) + total with (j<i) of (aI-aJ)
int prefix(vector<int> v, int i)
{
	return accumulate(v.begin(), v.begin() + i, 0);
}
int suffix(vector<int> v, int i)
{
	return accumulate(v.begin() + i + 1, v.end(), 0);
}
vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
	int n = nums.size();
	vector<int> res(n, 0);

	for (int i = 0; i < n; i++)
	{
		// total with (j<i) of (aI-aJ)
		int left = 0;
		if (i > 0)
			left = nums[i] * i - prefix(nums, i);

		// total with (j>i) of(aJ - aI)
		int right = suffix(nums, i) - nums[i] * (n - i - 1);

		res[i] = left + right;
	}

	return res;
}

//https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array/solutions/4326597/beats-100-explained-with-video-two-pointers-visualized-too/?envType=daily-question&envId=2023-11-25
// 98ms 83.5MB O(n) O(n)
vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
	int sum = accumulate(nums.begin(), nums.end(), 0);
	int left = 0, right = sum, n = nums.size();

	vector<int> res(n, 0);
	for (int i = 0; i < n; i++)
	{
		right -= nums[i];

		res[i] = nums[i] * i - left + right - nums[i] * (n - i - 1);

		left += nums[i];
	}

	return res;
}

// web 52ms real 92ms 83.5MB O(n) O(n)
vector<int> getSumAbsoluteDifferences(vector<int>& nums) 
{
	int n = nums.size(), pre = 0;
	for (int i = 0; i < n; i++)
	{
		int now = nums[i];

		if (i != 0)
			nums[i] = nums[i - 1] + (i - 1 - (n - i - 1)) * (nums[i] - pre);
		else
			nums[i] = accumulate(nums.begin() + 1, nums.end(), 0) - nums[i] * (n - 1);

		pre = now;
	}

	return nums;
}


int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
