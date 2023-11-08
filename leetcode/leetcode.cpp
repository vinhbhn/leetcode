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

// 19ms 20MB O(n) O(n)
int findClosestNumber(vector<int>& nums) {
	// |m| = closest number to 0
	// find |m| with m > 0 in array
	// if true return m, if false return -m
	int m = INT_MAX;
	for (int i = 0; i < nums.size(); i++)
	{
		m = min(m, abs(nums[i]));
	}

	return (find(nums.begin(), nums.end(), m) != nums.end()) ? m : -m;
}

// web 3ms real 14ms 19.9MB O(n) O(n)
int findClosestNumber(vector<int>& nums) {
	int closest = INT_MAX;
	for (int num : nums)
	{
		int abs = ::abs(num);
		int closest_abs = ::abs(closest);
		if (abs < closest_abs)
			closest = num;
		else if (abs == closest_abs && num > closest)
			closest = num;
	}

	return closest;
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
