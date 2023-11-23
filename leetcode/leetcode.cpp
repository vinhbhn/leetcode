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

// 128ms 176.5MB
int longestContinuousSubstring(string s) {
	vector<string> v;
	string temp = string(1, s[0]);
	for (int i = 1; i < s.length(); i++)
	{
		if (s[i] - 'a' - 1 == s[i - 1] - 'a')
			temp += s[i];
		else
		{
			v.push_back(temp); // maybe temp have s[i-1]

			temp = s[i];
		}
	}
	if (temp != "")
		v.push_back(temp);

	int res = 0;
	for (auto& x : v)
	{
		if (x.length() > res)
			res = x.length();
	}

	return res; // max: 26
}

// 101ms 16.3MB due to remove duplicate string
int longestContinuousSubstring(string s) {
	unordered_set<string> st;
	string temp = string(1, s[0]);
	for (int i = 1; i < s.length(); i++)
	{
		if (s[i] - 'a' - 1 == s[i - 1] - 'a')
			temp += s[i];
		else
		{
			st.insert(temp); // maybe temp have one character is s[i-1]

			temp = s[i]; // update temp to s[i], remove s[i-1]
		}
	}
	if (temp != "")
		st.insert(temp);

	int res = 0;
	for (auto& x : st)
	{
		if (x.length() > res)
			res = x.length();
	}

	return res; // max: 26
}

// 62ms 15.7MB
int longestContinuousSubstring(string s) {
	string temp = string(1, s[0]);
	int res = 0;
	for (int i = 1; i < s.length(); i++)
	{
		if (s[i] - 'a' - 1 == s[i - 1] - 'a')
			temp += s[i];
		else
		{
			if (temp.length() > res)
				res = temp.length();

			temp = s[i]; // update temp to s[i], remove s[i-1]
		}
	}
	if (temp != "" && temp.length() > res)
		res = temp.length();

	return res; // max: 26
}

// 41ms 15.9MB O(n) O(n)
int longestContinuousSubstring(string s) {
	int res = 0, count = 1; // because count always is 1 (s[i] == one character)
	for (int i = 1; i < s.length(); i++)
	{
		if (s[i] - 1 == s[i - 1])
			count++;
		else
		{
			res = max(res, count);

			count = 1; // because count always is 1 (s[i] == one character)
		}
	}
	if (count > 0)
		res = max(res, count);

	return res; // max: 26
}

int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
