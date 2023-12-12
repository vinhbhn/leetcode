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

// 4ms 10.1MB O(nlogn) O(1)
int maxProduct(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	int n = nums.size();

	return (nums[n - 2] - 1) * (nums[n - 1] - 1);
}

int maxProduct(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	return (nums[nums.size() - 2] - 1) * (nums[nums.size() - 1] - 1);
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
