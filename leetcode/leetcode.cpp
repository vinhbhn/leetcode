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

// 6ms 7.2MB  O(N*logN) O(n)
//typedef pair<char, int> P;
//string frequencySort(string s) {
//	unordered_map<char, int> mp;
//	for (auto& ch : s)
//		mp[ch]++;
//
//	vector<P> v;
//	for (auto& it : mp)
//		v.push_back(it);
//
//	auto cmp = [&](P& a, P& b)
//		{
//			return (a.second == b.second) ? a.first < b.first : a.second > b.second;
//		};
//
//	sort(v.begin(), v.end(), cmp);
//
//	string res = "";
//	for (auto& x : v)
//	{
//		res += string(x.second, x.first);
//	}
//
//	return res;
//}

// 109ms 8.2MB
//string frequencySort(string s) {
//	unordered_map<char, int> mp;
//	for (auto& ch : s)
//		mp[ch]++;
//
//	sort(s.begin(), s.end(), [&mp](char &a, char &b) 
//		{
//		return (mp[a] == mp[b]) ? a < b : mp[a] > mp[b];
//		});
//
//	return s;
//}

// web, using priority_queue 13ms 9.2MB
string frequencySort(string s) {
	unordered_map<char, int> mp;
	for (auto& ch : s)
		mp[ch]++;

	priority_queue<pair<int, char>> pq;
	for (auto& it : mp)
		pq.push({ it.second, it.first });

	string res = "";
	while(!pq.empty())
	{
		res += string(pq.top().first, pq.top().second);
		pq.pop();
	}

	return res;
}

int main()
{
	cout << boolalpha;
	cout << frequencySort("tree") << '\n';
	cout << frequencySort("cccaaa") << '\n';
	cout << frequencySort("Aabb") << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
