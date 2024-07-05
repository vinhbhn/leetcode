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

// O(n) 9ms 22.7MB
int maxFrequencyElements(vector<int>& nums) {
	unordered_map<int, int> mp;

	for (int num : nums)
	{
		mp[num]++;
	}

	int max_freq = 0;
	for (auto& [num, freq] : mp)
	{
		max_freq = max(max_freq, freq);
	}

	int res = 0;
	for (auto& [num, freq] : mp)
	{
		if (freq == max_freq)
			res += max_freq;
	}

	return res;
}

int main() {
	cout << boolalpha;

	vector<int>  nums = { 7, 8, 3, 4, 15, 13, 4, 1 };
	cout << minimumAverage(nums) << '\n';

	nums = { 1,9,8,3,10,5 };
	cout << minimumAverage(nums) << '\n';


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
