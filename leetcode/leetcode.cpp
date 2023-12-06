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

// 5ms 11MB
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
	vector<int> temp = nums;
	sort(temp.begin(), temp.end());

	unordered_map<int, int> mp;
	for (int i = 0; i < temp.size(); i++)
	{
		if (!mp.contains(temp[i]))
			mp[temp[i]] = i;
	}

	vector<int> res;
	for (int i = 0; i < nums.size(); i++)
	{
		res.push_back(mp[nums[i]]);
	}

	return res;
}

// 4ms 11MB
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
	int n = nums.size();
	vector<int> temp = nums;
	sort(temp.begin(), temp.end());

	unordered_map<int, int> mp;
	for (int i = n - 1; i >= 0; i--)
			mp[temp[i]] = i;

	for (int i = 0; i < nums.size(); i++)
		nums[i] = mp[nums[i]];

	return nums;
}

int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
/*Solution() {
ios::sync_with_stdio(0);
cin.tie(0);
	}*/
