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

// 35ms 28.5MB O(nlogn) O(logn)
int arrayPairSum(vector<int>& nums) {
	sort(nums.begin(), nums.end());

	int sum = 0;
	for (int i = 1; i < nums.size(); i+=2)
	{
		sum += min(nums[i-1], nums[i]);
	}

	return sum;
}

int arrayPairSum(vector<int>& nums) {
	sort(nums.begin(), nums.end());

	int sum = 0;
	for (int i = 0; i < nums.size() - 1; i += 2)
	{
		sum += nums[i]; // because nums is sorted
	}

	return sum;
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
