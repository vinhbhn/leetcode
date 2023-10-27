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

// 13ms 15MB
bool divideArray(vector<int>& nums) {
	if (nums.size() % 2 != 0)
		return false;

	unordered_map<int, int> mp;
	for (auto& num : nums)
		mp[num]++;

	for (auto& x : mp)
		if (x.second % 2 != 0)
			return false;

	return true;
}

// 4ms 13.9MB
bool divideArray(vector<int>& nums) {
	if (nums.size() % 2 != 0)
		return false;

	vector<int> v(501, 0);
	for (int i = 0; i < nums.size(); i++)
		v[nums[i]]++;

	int count = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] % 2 != 0)
			return false;
	}

	return true;
}

int main()
{
	cout << boolalpha;
	cout << numberOfMatches(7) << '\n';
	cout << numberOfMatches(14) << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
