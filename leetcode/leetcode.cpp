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

// 16ms 18.1MB O(n)
int maximumCount(vector<int>& nums) {
	int pos = 0, neg = 0;

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] > 0)
			pos++;
		else if (nums[i] < 0)
			neg++;
	}

	return max(pos, neg);
}

// web 3ms real 15ms 18.2MB
int maximumCount(vector<int>& nums) {
	int p0 = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();
	int p1 = upper_bound(nums.begin(), nums.end(), 0) - nums.begin();
	int n = nums.size();

	return max(p0, n - p1);
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
