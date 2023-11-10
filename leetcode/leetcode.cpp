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

// 0ms 7.2MB
bool buddyStrings(string s, string goal) {
	// case s == goal
	if (s == goal)
	{
		for (int i = 0; i < s.size() - 1; i++)
		{
			for (int j = i + 1; j < s.size(); j++)
			{
				string temp = s;
				swap(temp[i], temp[j]);

				if (temp == goal)
					return true;
			}
		}

		return false;
	}

	// case s != goal
	int i = -1, j = -1;
	for (int pos = 0; pos < s.size(); pos++)
	{
		if (s[pos] != goal[pos])
		{
			if (i == -1)
				i = pos;
			else
				j = pos;
		}

		if (i != -1 && j != -1)
			break;
	}
	if (i != j && i != -1 && j != -1)
		swap(s[i], s[j]);
	return (s == goal);
}

//https://leetcode.com/problems/buddy-strings/solutions/3711198/c-easy-explanation-self-explanatory-code-beats-100/
// O(n) O(n) 6ms 7.4MB
bool buddyStrings(string s, string goal) {
	if (s.length() != goal.length() || s.length() <= 1)
		return false;

	if (s == goal)
	{
		unordered_set<char> distinctChars(s.begin(), s.end());
		return distinctChars.size() < s.length();
	}

	vector<int> index;
	for (int i = 0; i < s.length(); i++)
		if (s[i] != goal[i])
			index.push_back(i);

	if (index.size() != 2)
		return false;

	swap(s[index[0]], s[index[1]]);
	return s == goal;
}

int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
