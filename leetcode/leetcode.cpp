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

// 3ms 7MB
bool wordPattern(string pattern, string s) {
	vector<string> sv;

	s += ' ';
	string temp = "";
	for (auto ch : s)
	{
		if (ch == ' ')
		{
			if (temp != "")
				sv.push_back(temp);

			temp = "";
		}
		else
			temp += ch;
	}

	// letter and pattern 
	if (pattern.length() != sv.size())
		return false;

	// max 26 pattern
	vector<string> v(26, "");
	unordered_set<string> st; // save the word present before and check the current word is not present in set.

	for (int i = 0; i < pattern.size(); i++)
	{
		if (v[pattern[i] - 'a'] == "" && i < sv.size() && sv[i] != "")
		{
			v[pattern[i] - 'a'] = sv[i];

			// if the current word have present in set, return false
			if (st.empty())
				st.insert(sv[i]);
			else
			{
				if (st.contains(sv[i]))
					return false;
				else
					st.insert(sv[i]);
			}
		}

		// the current word == the pattern have present word
		if (v[pattern[i] - 'a'] != sv[i])
			return false;
	}

	return true;
}

// https://leetcode.com/problems/word-pattern/solutions/1695870/c-simple-intuitive-solution-0ms/
bool wordPattern(string pattern, string s) {
	unordered_map<char, int> p2i;
	unordered_map<string, int> w2i;

	istringstream in(s);
	string word;
	int i = 0, n = pattern.size();

	for (word; in >> word; i++)
	{
		// If it reaches end before all the words in string 's' are traversed
		// or if values of keys : pattern[i] & word don't match return false
		if (i == n || p2i[pattern[i]] != w2i[word])
			return false;

		p2i[pattern[i]] = w2i[word] = i + 1; // Otherwise map to both to a value to a value i + 1
	}

	return i == n; // both the lengths should be equal
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
