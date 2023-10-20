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

// worked but slow
//int countCharacters(vector<string>& words, string chars) {
//	unordered_map<char, int> mpc, mpw;
//	int sum = 0;
//
//	for (auto ch : chars)
//		mpc[ch]++;
//
//	for(int i = 0; i < words.size(); i++)
//	{
//		bool fail = false;
//		for (auto c : words[i])
//		{
//			mpw[c]++;
//		}
//
//		for (auto c : words[i])
//		{
//			if (mpc[c] < mpw[c])
//			{
//				fail = true;
//				break;
//			}
//		}
//
//		if (!fail)
//			sum += words[i].size();
//
//		// reset
//		mpw.clear();
//	}
//
//	return sum;
//}

// web
int countCharacters(vector<string>& words, string chars) {
	int freqhash[26] = {}, res = 0;
	for (auto x : chars)
		++freqhash[x - 'a'];

	for (auto& w : words)
	{
		int hash[26] = {}, match = true;

		for (auto ch : w)
		{
			// compare character have from words but it's not present in chars
			if (++hash[ch - 'a'] > freqhash[ch - 'a'])
			{
				match = false;
				break;
			}
		}

		if (match)
			res += w.size();
	}

	return res;
}

int main()
{
	cout << boolalpha;
	vector<string> words = { "cat","bt","hat","tree" };
	cout << countCharacters(words, "atach") << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
