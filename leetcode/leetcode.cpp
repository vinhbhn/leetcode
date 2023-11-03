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

// 39ms 30.4MB O(n) O(n)
int repeatedNTimes(vector<int>& nums) {
	int n = nums.size() / 2;

	unordered_map<int, int> mp;
	for (auto num : nums)
	{
		mp[num]++;

		if (mp[num] == n)
			return num;
	}

	return -1;
}


// web 7ms real 17ms 24.9MB O(n) O(1)
int repeatedNTimes(vector<int>& nums) {
	bitset<10001> hashset;

	for (auto num : nums)
	{
		if (hashset.test(num))
			return num;
		hashset.set(num);
	}

	return -1;
}

// web 10ms real 31ms 24.9MB
int repeatedNTimes(vector<int>& nums) {

	for (size_t i = 0; i < nums.size() - 1; i++)
		if (nums[i] == nums[i + 1])
			return nums[i];

	return nums.back() == nums[1] ? nums[1] : nums[0];
}

int main()
{
	vector s = { 2,7,4,1,8,1 };
	cout << lastStoneWeight(s) << '\n';

	s = { 2,2 };
	cout << lastStoneWeight(s) << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
