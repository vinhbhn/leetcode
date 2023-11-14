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

// 251ms 30.9MB
//int countPalindromicSubsequence(string s) {
//	int count = 0;
//
//	for (char alpha = 'a'; alpha <= 'z'; alpha++)
//	{
//		auto first = s.find(alpha);
//		auto last = s.find_last_of(alpha);
//		if (first < last)
//		{
//			// count character inside left and right, eg: aXa
//			string temp = s.substr(first + 1, last - first - 1);
//			unordered_set<char> st;
//			for (auto& ch : temp)
//				st.insert(ch);
//			count += st.size();
//		}
//	}
//
//	return count;
//}

// 94ms 29.1MB O(26 * (t+a)) O(26 * t), t = temp.size(), a = alphabets.size()
//int countPalindromicSubsequence(string s) {
//	int count = 0;
//
//	for (char alpha = 'a'; alpha <= 'z'; alpha++)
//	{
//		auto first = s.find(alpha);
//		auto last = s.find_last_of(alpha);
//		if (first < last)
//		{
//			// count character inside left and right, eg: aXa
//			string temp = s.substr(first + 1, last - first - 1);
//			vector<int> alphabets(26, 0);
//			for (auto ch : temp)
//				alphabets[ch-'a']++;
//
//			for (int i = 0; i < alphabets.size(); i++)
//				if (alphabets[i] > 0)
//					count++;
//		}
//	}
//
//	return count;
//}

// 131ms 28.9MB
int countPalindromicSubsequence(string s) {
	int count = 0;

	for (char alpha = 'a'; alpha <= 'z'; alpha++)
	{
		auto first = s.find(alpha);
		auto last = s.find_last_of(alpha);
		if (first < last)
		{
			// count character inside left and right, eg: aXa
			string temp = s.substr(first + 1, last - first - 1);
			vector<bool> found(26, 0);
			for (auto ch : temp)
				found[ch - 'a'] = true;

			for (int i = 0; i < found.size(); i++)
				if (found[i])
					count++;
		}
	}

	return count;
}

int main() {
	cout << boolalpha;
	cout << countPalindromicSubsequence("aabca") << '\n';
	cout << countPalindromicSubsequence("bbcbaba") << '\n';
	cout << countPalindromicSubsequence("adc") << '\n';


	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
