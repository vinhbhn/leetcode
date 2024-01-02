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

// 32ms 16.6MB O(n) O(n)
vector<int> buildArray(vector<int>& nums) {
	int n = nums.size();
	vector<int> ans(n, 0);
	for (int i = 0; i < n; i++)
	{
		ans[i] = nums[nums[i]];
	}

	return ans;
}

vector<int> buildArray(vector<int>& nums) {
	int n = nums.size();
	vector<int> ans;
	for (int i = 0; i < n; i++)
	{
		ans.push_back(nums[nums[i]]);
	}

	return ans;
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
