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

// 104ms 57.5MB O(n) O(logn)
int rev(int num)
{
	int res = 0;
	while (num)
	{
		res = res * 10 + num % 10;
		num /= 10;
	}

	return res;
}
int countNicePairs(vector<int>& nums) {
	long count = 0;
	unordered_map<int, long> mp;

	// inplace nums[i] - rev(nums[i]) then count a pair equal value (using map)
	for (int i = 0; i < nums.size(); i++)
	{
		nums[i] -= rev(nums[i]);

		if (mp.contains(nums[i]))
			count += mp[nums[i]];

		mp[nums[i]]++;
	}

	return static_cast<int>(count % (1000000007));
}

int main() {
	cout << boolalpha;

	cout << rev(12) << '\n';

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
