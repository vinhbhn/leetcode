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

// O(N^2) O(1) 4ms 26.8MB
//int maximumStrongPairXor(vector<int>& nums) {
//	int res = 0;
//
//	sort(nums.begin(), nums.end());
//
//	for (int i = 0; i < nums.size() - 1; i++)
//	{
//		for (int j = i; j < nums.size(); j++)
//		{
//			if (abs(nums[i] - nums[j]) <= min(nums[i], nums[j]))
//			{
//				// XOR
//				res = max(res, nums[i] ^ nums[j]);
//			}
//			else
//				break;
//		}
//	}
//
//	return res;
//}

// O(N^2) O(1) 13ms 26.4MB
int maximumStrongPairXor(vector<int>& nums) {
	int res = 0;

	for (auto x : nums)
	{
		for (auto y : nums)
		{
			if (abs(x - y) <= min(x, y))
			{
				res = max(res, x ^ y);
			}
		}
	}

	return res;
}

int main() {
	cout << boolalpha;

	vector<int> nums = { 1,2,3,4,5 };
	cout << maximumStrongPairXor(nums) << '\n';

	nums = { 10,100 };
	cout << maximumStrongPairXor(nums) << '\n';

	nums = { 5,6,25,30 };
	cout << maximumStrongPairXor(nums) << '\n';

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
