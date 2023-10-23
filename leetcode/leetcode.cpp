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

int rearrangeCharacters(string s, string t) {
	unordered_map<char, int> mps, mpt;
	for (auto ch : s)
		mps[ch]++;
	for (auto ch : t)
		mpt[ch]++;

	int res = INT_MAX;
	// x occurrences in s divide y occurrences in t
	for (auto& x : mpt)
		res = min(res, mps[x.first] / x.second);

	return res;
}

// web, fastest
int rearrangeCharacters(string s, string t) {
	int hashS[27] = { 0 };
	int hashT[27] = { 0 };

	for (auto ch : s)
		hashS[ch - 'a']++;
	for (auto ch : t)
		hashT[ch - 'a']++;

	int res = INT_MAX;
	for (auto ch : t)
		res = min(res, hashS[ch - 'a'] / hashT[ch - 'a']);

	return res;
}


int main()
{
	cout << boolalpha;
	cout << rearrangeCharacters("ilovecodingonleetcode", "code") << '\n';
	cout << rearrangeCharacters("abcba", "abc") << '\n';
	cout << rearrangeCharacters("abbaccaddaeea", "aaaaa") << '\n';


	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
