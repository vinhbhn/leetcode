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

// 27ms 22.9MB
int findMaxK(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	unordered_map<int, int> mp;

	int res = -1;

	// sort value from low to high
	// append negative number with key = abs(negative number), value = negative number
	for (int num : nums)
	{
		if (mp.contains(num) and mp[num] == -num)
			res = max(res, num);
		else
			mp[abs(num)] = num;
	}

	return res;
}

// web 3ms real 18ms 20.1MB
int findMaxK(vector<int>& nums) {
	vector<bool> negative(1001, false);
	vector<bool> positive(1001, false);
	for (int i = 0; i < nums.size(); i++)
	{
		int x = nums[i];
		if (x < 0)
			negative[abs(x)] = true;
		else
			positive[x] = true;
	}

	for (int i = 1000; i > 0; i--)
		if (negative[i] and positive[i])
			return i;

	return -1;
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
