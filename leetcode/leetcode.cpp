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

// 7ms 12MB O(2n + n/2) O(2n)
vector<int> leftRightDifference(vector<int>& nums) {
	int n = nums.size();
	if (n == 1)
		return { 0 };

	int left = 0, right = 0;
	vector<int> l = { 0 }, r = { 0 };
	for (int i = 0; i < n - 1; i++)
	{
		left += nums[i];
		l.push_back(left);
	}
	for (int i = n - 1; i >= 1; i--)
	{
		right += nums[i];
		r.push_back(right);
	}
	reverse(r.begin(), r.end());

	for (int i = 0; i < n; i++)
	{
		nums[i] = abs(l[i] - r[i]);
	}

	return nums;
}

// 6ms 11.4MB 
vector<int> leftRightDifference(vector<int>& nums) {
	int left = 0, right = accumulate(nums.begin(), nums.end(), 0), temp = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		temp = nums[i];
		right -= temp;
		nums[i] = abs(left - right);
		left += temp;

	}

	return nums;
}

//web 0ms real 10ms 11.3MB O(n) O(n)
vector<int> leftRightDifference(vector<int>& nums) {
	int left = 0, right = accumulate(nums.begin(), nums.end(), 0);
	vector<int> res;
	for (int i = 0; i < nums.size(); i++)
	{
		right -= nums[i];
		res.push_back(abs(left - right));
		left += nums[i];
	}

	return res;
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
