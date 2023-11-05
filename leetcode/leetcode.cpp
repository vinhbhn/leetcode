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

// 0ms 6.7MB O(n) O(n)
//string sortSentence(string s) {
//	int space = count(s.begin(), s.end(), ' ');
//	vector<string> v(space + 1, "");
//	string temp = "";
//	for (auto ch : s)
//	{
//		if (ch == ' ')
//			continue;
//
//		if (isdigit(ch))
//		{
//			v[(ch - '0') - 1] = temp;
//			temp = "";
//		}
//		else
//			temp += ch;
//	}
//
//	string res = "";
//	for (auto& x : v)
//		res += x + " ";
//
//	// remove last space
//	res.pop_back();
//	return res;
//}

// 0ms 6.7MB O(n) O(n)
string sortSentence(string s) {
	vector<string> v(10, "");
	string temp = "";
	for (auto ch : s)
	{
		if (ch == ' ')
			continue;

		if (isdigit(ch))
		{
			v[ch - '0'] = temp;
			temp = "";
		}
		else
			temp += ch;
	}

	string res = "";
	for (int i = 1; i < v.size(); i++)
	{
		if (v[i].length() > 0)
			res += v[i] + " ";
	}

	// remove last space
	res.pop_back();
	return res;
}

int main() {
	cout << sortSentence("is2 sentence4 This1 a3") << '\n';

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
