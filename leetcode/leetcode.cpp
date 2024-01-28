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

// 11ms 10.7MB O(n^2)
int maximumDifference(vector<int>& nums) {
	int res = INT_MIN;

	for (int i = 0; i < nums.size() - 1; i++)
	{
		for (int j = i + 1; j < nums.size(); j++)
		{
			res = max(res, nums[j] - nums[i]);
		}
	}

	return (res <= 0) ? -1 : res;
}

// web 0ms real 0ms 10.8MB
int maximumDifference(vector<int>& nums)
{
	int res = -1, n = nums.size(), mi = nums[0];
	vector<int> m(n, INT_MAX);
	for (int i = 0; i < n; i++)
	{
		m[i] = mi;
		mi = min(mi, nums[i]);
	}

	mi = nums[n - 1];
	for (int i = n - 1; i >= 0; i--)
	{
		mi = max(mi, nums[i]);
		if (mi > m[i])
			res = max(res, mi - m[i]);
	}

	return res;
}

int main() {
	cout << boolalpha;

	return 0;
}

/*
static auto init = [](){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	return 0;
}();
*/
