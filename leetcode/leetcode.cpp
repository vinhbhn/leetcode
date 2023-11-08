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

// 14ms 13.9MB O(nlogn) O(n)
int minimumDifference(vector<int>& nums, int k) {
	int n = nums.size();
	if (n == 1) // highest and lowest is same
		return 0;

	sort(nums.begin(), nums.end());
	int m = INT_MAX;
	for (int i = 0; i < n - k + 1; i++)
	{				// lowest	// highest  with k scores
		m = min(m, abs(nums[i] - nums[i+k-1]));
	}

	return m;
}

// web 0ms real 15ms 13.9MB
int minimumDifference(vector<int>& nums, int k) {
	int n = nums.size(), i = 0, j = k - 1;
	sort(nums.begin(), nums.end());
	int res = INT_MAX;
	while (j < n)
		res = min(res, nums[j++] - nums[i++]);

	return res;
}


int main() {
	cout << boolalpha;

	vector nums = { 6,5,7,9,2,2 };
	cout << minimumCost(nums) << '\n';

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
