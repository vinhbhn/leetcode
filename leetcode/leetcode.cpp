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
// three ways worked same runtime and approximately memory
// worked
//vector<string> uncommonFromSentences(string s1, string s2) {
//	vector<string> v, v1, v2;
//	stringstream ss1(s1), ss2(s2);
//	string word;
//	unordered_map<string, int> mp1, mp2;
//
//	while (getline(ss1, word, ' '))
//	{
//		v1.push_back(word);
//		mp1[word]++;
//	}
//	while (getline(ss2, word, ' '))
//	{
//		v2.push_back(word);
//		mp2[word]++;
//	}
//
//	int i = 0, j = 0;
//	string temp1 = "", temp2 = "";
//	while (i < v1.size() || j < v2.size())
//	{
//		temp1 = (i < v1.size()) ? v1[i] : "";
//		temp2 = (j < v2.size()) ? v2[j] : "";
//
//		if (temp1 != temp2)
//		{
//			// a word is uncommon if it appears exactly once in one of the sentences, and does not appear in the other sentence.
//			if ((mp1[temp1] == 1) && mp2.find(temp1) == mp2.end())
//				v.push_back(v1[i]);
//			if (mp2[temp2] == 1 && mp1.find(temp2) == mp1.end())
//				v.push_back(v2[j]);
//		}
//
//		i++;
//		j++;
//
//	}
//
//	return v;
//}

// web
//vector<string> uncommonFromSentences(string s1, string s2) {
//	vector<string> v;
//	unordered_map<string, int> mp1, mp2;
//
//	string temp = "";
//	for (int i = 0; i < s1.length(); i++)
//	{
//		if (s1[i] == ' ')
//		{
//			mp1[temp]++;
//			temp = "";
//		}
//		else
//			temp += s1[i];
//	}
//	mp1[temp]++;
//	temp = "";
//	for (int i = 0; i < s2.length(); i++)
//	{
//		if (s2[i] == ' ')
//		{
//			mp2[temp]++;
//			temp = "";
//		}
//		else
//			temp += s2[i];
//	}
//	mp2[temp]++;
//
//	// a word is uncommon if it appears exactly once in one of the sentences, and does not appear in the other sentence.
//	for (auto& x : mp1)
//	{
//		if ((x.second == 1) && mp2.find(x.first) == mp2.end())
//			v.push_back(x.first);
//	}
//	for (auto& y : mp2)
//	{
//		if ((y.second == 1) && mp1.find(y.first) == mp1.end())
//			v.push_back(y.first);
//	}
//
//	return v;
//}

// https://leetcode.com/problems/uncommon-words-from-two-sentences/solutions/374545/c-easy-solution-0ms-faster-than-100-8-6-mb-less-than-100/
vector<string> uncommonFromSentences(string s1, string s2) {
	vector<string> v;
	unordered_map<string, int> mp;

	string temp = "";
	for (auto ch : s1)
	{
		if (ch == ' ')
		{
			mp[temp]++;
			temp = "";
		}
		else
			temp += ch;
	}
	// because last character is not ' ', then manual add temp in map
	mp[temp]++;
	temp = "";
	for (auto ch : s2)
	{
		if (ch == ' ')
		{
			mp[temp]++;
			temp = "";
		}
		else
			temp += ch;
	}
	mp[temp]++;

	// a word is uncommon if it appears exactly once in one of the sentences, and does not appear in the other sentence.
	for (auto& x : mp)
		if (x.second == 1)
			v.push_back(x.first);

	return v;
}

int main()
{
	cout << boolalpha;
	for (auto& x : uncommonFromSentences("this apple is sweet", "this apple is sour"))
		cout << x << ' ';
	cout << '\n';

	for (auto& x : uncommonFromSentences("apple apple", "banana"))
		cout << x << ' ';
	cout << '\n';

	for (auto& x : uncommonFromSentences("fd kss fd", "fd fd kss"))
		cout << x << ' ';
	cout << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
