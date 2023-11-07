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

// 37ms 23.5MB O(n) O(logn)
vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
	priority_queue<pair<int, string>> pq;
	for (int i = 0; i < names.size(); i++)
	{
		pq.push({ heights[i], names[i] });
	}

	vector<string> res;
	while (!pq.empty())
	{
		res.push_back(pq.top().second);
		pq.pop();
	}

	return res;
}

// web 12ms real 22ms 22.6MB O(nlogn) O(logn) 
vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
	vector<pair<int, string>> v;
	for (int i = 0; i < names.size(); i++)
	{
		v.push_back({ heights[i], names[i] });
	}

	sort(v.rbegin(), v.rend());

	for (int i = 0; i < names.size(); i++)
	{
		names[i] = v[i].second;
	}

	return names;
}

int main() {
	cout << boolalpha;

	vector nums = { 6,5,7,9,2,2 };
	cout << minimumCost(nums) << '\n';

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
