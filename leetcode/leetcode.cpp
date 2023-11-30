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

// 3ms 7.4MB
bool isIsomorphic(string s, string t) {
	if (s.length() != t.length())
		return false;

	unordered_map<char, char> ms, mt; // map char in string t to s and vice verse
	for (int i = 0; i < s.length(); i++)
	{
		if (!ms.contains(s[i]))
			ms[s[i]] = t[i];
		else
		{
			if (ms[s[i]] != t[i])
				return false;
		}

		if (!mt.contains(t[i]))
			mt[t[i]] = s[i];
		else
		{
			if (mt[t[i]] != s[i])
				return false;
		}
	}

	return true;
}

// web 1ms real 2ms 7.4MB
bool isIsomorphic(string s, string t) {
	if (s.length() != t.length())
		return false;

	int m1[256] = { 0 }, m2[256] = { 0 };
	for (int i = 0; i < s.length(); i++)
	{
		if (m1[s[i]] != m2[t[i]])
			return false;

		m1[s[i]] = m2[t[i]] = i + 1; // map char in s and t to i + 1
	}

	return true;
}

int main() {
	cout << boolalpha;
	string pattern = "abba", s = "dog cat cat dog";
	cout << wordPattern(pattern, s) << '\n';

	pattern = "abba", s = "dog dog dog dog";
	cout << wordPattern(pattern, s) << '\n';

	pattern = "aba", s = "cat cat cat dog";
	cout << wordPattern(pattern, s) << '\n';


	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
/*Solution() {
ios::sync_with_stdio(0);
cin.tie(0);
	}*/
