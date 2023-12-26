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

// 89ms 33.6MB
int similarPairs(vector<string>& words) {
	vector<set<char>> v;
	for (auto& word : words)
	{
		set<char> temp(word.begin(), word.end());
		v.push_back(temp);
	}

	int count = 0;
	for (int i = 0; i < v.size() - 1; i++)
	{
		for (int j = i + 1; j < v.size(); j++)
		{
			if (v[i] == v[j])
				count++;
		}
	}

	return count;
}

// 83ms 28.6MB https://leetcode.com/problems/count-pairs-of-similar-strings/solutions/2923595/c-hashing-easy-solution/
int similarPairs(vector<string>& words) {
	map<set<char>, int> mp;
	for (auto& word : words)
	{
		set<char> temp(word.begin(), word.end());
		mp[temp]++;
	}

	int count = 0;
	for (auto &p : mp)
	{
		if (p.second > 1)
		{
			int n = p.second;
			count += (n * (n - 1)) / 2;
		}
	}

	return count;
}

int main() {
	cout << boolalpha;

	return 0;
}

/*
static auto init = [](){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	return 0;
}();
*/
