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

//https://leetcode.com/problems/find-common-characters/solutions/3540699/solution/
vector<string> commonChars(vector<string>& words) {
	vector<string> res;

	for (char c : words[0])
	{
		bool common = true;

		for (int i = 1; i < words.size(); i++)
		{
			if (words[i].find(c) == string::npos)
			{
				common = false;
				break;
			}
			else
				words[i].erase(words[i].find(c), 1);
		}

		if (common)
			res.push_back(string(1, c));
	}

	return res;
}

int main()
{
	vector<string> words = { "bella","label","roller" };
	for (auto &x : commonChars(words))
		cout << x << ' ';
	cout << '\n';

	words = { "acabcddd","bcbdbcbd","baddbadb","cbdddcac","aacbcccd","ccccddda","cababaab","addcaccd" };
	for (auto& x : commonChars(words))
		cout << x << ' ';
	cout << '\n';

	return 0;
}

//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
