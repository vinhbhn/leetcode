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

// 5ms 8.8MB O(n) O(1)
vector<int> runningSum(vector<int>& nums) {
	for (int i = 1; i < nums.size(); i++)
	{
		nums[i] = nums[i] + nums[i - 1];
	}

	return nums;
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
