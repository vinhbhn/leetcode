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

// 43ms 12.3MB O(nlogn) O(n)
bool isVowel(char c)
{
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
		|| c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}
string sortVowels(string s) {
	vector<char> v;
	for (auto ch : s)
	{
		if (isVowel(ch))
			v.push_back(ch);
	}

	if (v.empty())
		return s;

	sort(v.begin(), v.end());
	int i = 0;
	for (auto& ch : s)
	{
		if (isVowel(ch))
			ch = v[i++];
	}

	return s;
}

// web 16ms real 21ms 10.9MB O(n) O(n)
bool isVowel(char c)
{
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
		|| c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}
string sortVowels(string s) {
	int freq[128] = { 0 };
	for (auto ch : s)
	{
		if (isVowel(ch))
			freq[(int)ch]++;
	}

	int idx = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (isVowel(s[i]))
		{
			while (freq[idx] == 0)
				idx++;
			s[i] = (char)idx;
			freq[idx]--;
		}
	}

	return s;
}


int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
