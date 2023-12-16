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

// 4ms 7.9MB O(s+t) O(vs+vt)
bool isAnagram(string s, string t) {
	if (s.size() != t.size())
		return false;

	vector<int> vs(26, 0), vt(26, 0);
	for (int i = 0; i < s.size(); i++)
	{
		vs[s[i] - 'a']++;
		vt[t[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (vs[i] != vt[i]) // letter in s not present/equal quantity in t
			return false;
	}

	return true;
}

// web 0ms real 3ms 7.8MB
bool isAnagram(string s, string t) {
	if (s.size() != t.size())
		return false;

	vector<int> count(26, 0);
	for (int i = 0; i < s.size(); i++)
	{
		count[s[i] - 'a']++;
		count[t[i] - 'a']--;
	}

	for (int i = 0; i < 26; i++)
	{
		if (count[i] != 0) // letter in s not present/equal quantity in t
			return false;
	}

	return true;
}

// sorting (s) == sorting (t)

int main() {
	cout << boolalpha;
	string  s = "anagram", t = "nagaram";
	cout << isAnagram(s, t) << '\n';


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
