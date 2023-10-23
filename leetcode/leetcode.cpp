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

// worked
//bool checkAlmostEquivalent(string word1, string word2) {
//	unordered_map<char, int> mp1, mp2;
//	for (auto ch : word1)
//		mp1[ch]++;
//	for (auto ch : word2)
//		mp2[ch]++;
//
//	// check all letters of 2 strings
//	for (auto &a : mp1)
//		if (abs(a.second - mp2[a.first]) > 3)
//			return false;
//	for (auto& a : mp2)
//		if (abs(a.second - mp1[a.first]) > 3)
//			return false;
//
//	return true;
//}

//bool checkAlmostEquivalent(string word1, string word2) {
//	int h1[27] = { 0 }, h2[27] = { 0 };
//	set<char> s;
//	for (auto ch : word1)
//	{
//		h1[ch - 'a']++;
//		s.insert(ch);
//	}
//	for (auto ch : word2)
//	{
//		h2[ch - 'a']++;
//		s.insert(ch);
//	}
//
//	for (auto ch : s)
//		if (abs(h1[ch - 'a'] - h2[ch - 'a']) > 3)
//			return false;
//
//	return true;
//}

bool checkAlmostEquivalent(string word1, string word2) {
	//int h1[27] = { 0 }, h2[27] = { 0 };
	vector<int> h1(26, 0), h2(26, 0);
	for (auto ch : word1)
		h1[ch - 'a']++;
	for (auto ch : word2)
		h2[ch - 'a']++;

	for (char ch = 'a'; ch <= 'z'; ch++)
		if (abs(h1[ch - 'a'] - h2[ch - 'a']) > 3)
			return false;

	return true;
}


int main()
{
	cout << boolalpha;
	cout << checkAlmostEquivalent("aaaa", "bccb") << '\n';
	cout << checkAlmostEquivalent("abcdeef", "abaaacc") << '\n';
	cout << checkAlmostEquivalent("cccddabba", "babababab") << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
