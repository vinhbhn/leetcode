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

// https://leetcode.com/problems/top-k-frequent-elements/solutions/3316085/c-easy-approach-unordered-map-priority-queue/
// O(NlogN) O(N)
vector<int> topKFrequent(vector<int>& nums, int k) {
	unordered_map<int, int> mp;
	for (auto num : nums)
	{
		mp[num]++;
	}

	priority_queue<pair<int, int>> pq;
	for (auto& i : mp)
		pq.push({ i.second, i.first });

	vector<int> ans;
	while (k-- && !pq.empty())
	{
		ans.push_back(pq.top().second);
		pq.pop();
	}

	return ans;
}

int main()
{
	cout << boolalpha;
	vector nums = { 1,1,1,2,2,3 };
	for (auto& x : topKFrequent(nums, 2))
		cout << x << ' ';
	cout << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
