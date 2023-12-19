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

// 27ms 20.6MB O(nlogn) O(n)
int maxProductDifference(vector<int>& nums) {
	sort(nums.begin(), nums.end());

	int n = nums.size();
	return (nums[n - 1] * nums[n - 2]) - (nums[0] * nums[1]); // (a*b) - (c*d)
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
