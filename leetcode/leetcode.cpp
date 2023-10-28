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

// 11ms 9.4MB O(n+m) O(n+m)
//bool canConstruct(string ransomNote, string magazine) {
//	unordered_map<char, int> mp;
//	for (auto ch : magazine)
//		mp[ch]++;
//
//	for (auto ch : ransomNote)
//	{
//		if (mp[ch] > 0)
//			mp[ch]--;
//		else if (mp[ch] == 0)
//			return false;
//	}
//
//	return true;
//}

// web 0ms real: 14ms 9.1MB
vector<int> getCharCount(const string& s) {
	vector<int> counts('z' - 'a' + 1, 0);
	for (char c : s)
		counts[c - 'a']++;

	return counts;
}
bool greaterThanOrEquals(const vector<int>& a, const vector<int>& b)
{
	if (a.size() != b.size()) throw;

	for (int i = 0; i < a.size(); i++)
		if (a[i] > b[i]) // each letter in magazine can only be used once in ransomNote
			return false;

	return true;
}
//bool canConstruct(string ransomNote, string magazine) {
//	vector<int> cntNote = getCharCount(ransomNote);
//	vector<int> cntMag = getCharCount(magazine);
//
//	return greaterThanOrEquals(cntNote, cntMag);
//}

// web 2ms real: 9ms 9MB time - O(n log n + m log m) space - O(1)
bool canConstruct(string ransomNote, string magazine) {
	int mp[26] = {};
	for (auto ch : ransomNote)
		mp[ch - 'a']++;
	for (auto ch : magazine)
		mp[ch - 'a']--;

	return ranges::count_if(mp, [](auto c) { return c > 0; }) == 0;
}

int main()
{
	cout << boolalpha;
	cout << canConstruct("aa", "aab") << '\n';
	cout << canConstruct("a", "b") << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
