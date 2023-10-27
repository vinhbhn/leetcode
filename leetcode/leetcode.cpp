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

// O(N*N*logN) O(n) 0ms 11.9MB
static bool cmpFreq(pair<int, int>& a, pair<int, int>& b)
{
	return (a.second == b.second) ? a.first > b.first : a.second < b.second;
}
//vector<int> frequencySort(vector<int>& nums) {
//	unordered_map<int, int> mp;
//	for (auto num : nums)
//		mp[num]++;
//
//	vector<pair<int, int>> res;
//	for (auto& it : mp)
//		res.push_back(it);
//
//	sort(res.begin(), res.end(), cmpFreq);
//
//	vector<int> ans;
//	for (auto &x : res)
//	{
//		while (x.second)
//		{
//			ans.push_back(x.first);
//			x.second--;
//		}
//	}
//
//	return ans;
//}

// 10ms 11.5MB O(NlogN)
vector<int> frequencySort(vector<int>& nums) {
	unordered_map<int, int> mp;
	for (auto num : nums)
		mp[num]++;

	sort(nums.begin(), nums.end(), [&mp](int a, int b)
		{
			return (mp[a] == mp[b]) ? a > b : mp[a] < mp[b];
		});

	return nums;
}

int main()
{
	cout << boolalpha;
	vector nums = { 1,1,2,2,2,3 };
	for (auto& x : frequencySort(nums))
		cout << x << ' ';
	cout << '\n';

	nums = { -1,1,-6,4,5,-6,1,4,1 };
	for (auto& x : frequencySort(nums))
		cout << x << ' ';
	cout << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
