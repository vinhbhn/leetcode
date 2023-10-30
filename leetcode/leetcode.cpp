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

// 12ms 13.4MB O(n) O(1)
int mostFrequent(vector<int>& nums, int key) {
	unordered_map<int, int> mp;
	for (int i = 0; i <= nums.size() - 2; i++)
	{
		if (nums[i] == key)
		{
			mp[nums[i + 1]]++;
		}
	}

	priority_queue<pair<int, int>> pq;
	for (auto& x : mp)
		pq.push({ x.second, x.first });

	return pq.top().second;
}

// 8ms 13MB
int mostFrequent(vector<int>& nums, int key) {
	unordered_map<int, int> mp;
	for (int i = 0; i <= nums.size() - 2; i++)
	{
		if (nums[i] == key)
		{
			mp[nums[i + 1]]++;
		}
	}

	int maxi = 0, maxf = 0;
	for (auto& x : mp)
	{
		if (x.second > maxf)
		{
			maxf = x.second;
			maxi = x.first;
		}
	}

	return maxi;
}

int main()
{

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
