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

// 0ms 8.7MB O(nlogn) O(n)
bool uniqueOccurrences(vector<int>& arr) {
	unordered_map<int, int> mp;
	for (auto num : arr)
		mp[num]++;

	typedef pair<int, int> P;
	vector<P> v;
	for (auto& x : mp)
		v.push_back({ x.first, x.second });

	auto cmp = [&](P a, P b)
		{
			return a.second < b.second;
		};
	sort(v.begin(), v.end(), cmp);

	int val = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (val == v[i].second)
			return false;
		else
			val = v[i].second;
	}

	return true;
}

// https://leetcode.com/problems/unique-number-of-occurrences/solutions/3593004/only-100-solution-with-explanation-using-basic-array-only-no-hashmap-no-set-no-dp/
// 0ms 8.4MB O(nlogn) O(1)
bool uniqueOccurrences(vector<int>& arr) {
	sort(arr.begin(), arr.end());
	vector<int> v;
	int count = 1;
	for (int i = 1; i < arr.size(); i++)
	{
		if (arr[i] == arr[i - 1])
			count++;
		else
		{
			v.push_back(count);
			count = 1;
		}
	}
	v.push_back(count);

	sort(v.begin(), v.end());

	for (int i = 1; i < v.size(); i++)
	{
		if (v[i] == v[i - 1])
			return false;
	}

	return true;
}


int main()
{

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
