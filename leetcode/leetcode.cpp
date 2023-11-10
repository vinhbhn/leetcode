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

// 6ms 8.4MB O(n+b+m) O(logm) n = paragraph.size(), b = banned.size(), m = mp.size()
string mostCommonWord(string paragraph, vector<string>& banned) {
	unordered_map<string, int> mp;

	string temp = "";
	paragraph += ' ';
	for (auto ch : paragraph)
	{
		if (isalpha(ch))
			temp += tolower(ch);
		else
		{
			mp[temp]++;
			temp = "";
		}
	}

	for (auto& str : banned)
	{
		if (mp.count(str))
			mp.erase(str); // erase key, but value still in mp
	}

	priority_queue<pair<int, string>> pq;
	for (auto& x : mp)
	{
		if (x.first != "")
			pq.push({ x.second, x.first });
	}

	return pq.top().second;
}

// 3ms 8.1MB O(n+b+m) O(1) n = paragraph.size(), b = banned.size(), m = mp.size()
string mostCommonWord(string paragraph, vector<string>& banned) {
	unordered_map<string, int> mp;

	string temp = "";
	paragraph += ' ';
	for (auto ch : paragraph)
	{
		if (isalpha(ch))
			temp += tolower(ch);
		else
		{
			mp[temp]++;
			temp = "";
		}
	}

	for (auto& str : banned)
		mp.erase(str); // erase key, but value still in mp

	string res = "";
	int m = 0;
	for (auto& x : mp)
	{
		if (x.second > m && x.first != "")
		{
			m = x.second;
			res = x.first;
		}
	}

	return res;
}

int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
