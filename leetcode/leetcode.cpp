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

//// 11ms 8.6MB O(nlogn + n/2)
//string sortString(string s) {
//	map<char, int> mp;
//
//	for (auto ch : s)
//		mp[ch]++;
//
//	int count = 0, flip = 0;
//	string res = "";
//	while (count != s.length())
//	{
//		string temp = "";
//		flip++;
//		for (auto& x : mp)
//		{
//			if (x.second > 0)
//			{
//				temp += x.first;
//				x.second--;
//				count++;
//			}
//		}
//
//		if (flip % 2 == 0)
//			reverse(temp.begin(), temp.end());
//
//		res += temp;
//	}
//
//	return res;
//}

// 3ms 8.2MB 
//string sortString(string s) {
//	vector<int> v(26, 0);
//
//	for (auto ch : s)
//		v[ch - 'a']++;
//
//	int count = 0, flip = 0;
//	string res = "";
//	while (count != s.length())
//	{
//		string temp = "";
//		flip++;
//		for (int i  = 0; i < v.size(); i++)
//		{
//			if (v[i] > 0)
//			{
//				temp += (i + 'a');
//				v[i]--;
//				count++;
//			}
//		}
//
//		if (flip % 2 == 0)
//			reverse(temp.begin(), temp.end());
//
//		res += temp;
//	}
//
//	return res;
//}

// 9ms 8MB O(n) O(1)
//string sortString(string s) {
//	vector<int> v(26, 0);
//
//	for (auto ch : s)
//		v[ch - 'a']++;
//
//	int count = 0;
//	string res = "";
//	while (count != s.length())
//	{
//		for (int i = 0; i < v.size(); i++)
//		{
//			if (v[i] > 0)
//			{
//				res.push_back(i + 'a');
//				v[i]--;
//				count++;
//			}
//		}
//
//		for (int i = v.size() - 1; i >= 0; i--)
//		{
//			if (v[i] > 0)
//			{
//				res.push_back(i + 'a');
//				v[i]--;
//				count++;
//			}
//		}
//	}
//
//	return res;
//}

// 6ms 7.9MB
string sortString(string s) {
	vector<int> v(26, 0);

	for (auto ch : s)
		v[ch - 'a']++;

	int count = 0;
	string res = "";
	while (count != s.length())
	{
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] > 0)
			{
				res += (i + 'a');
				v[i]--;
				count++;
			}
		}

		for (int i = v.size() - 1; i >= 0; i--)
		{
			if (v[i] > 0)
			{
				res += (i + 'a');
				v[i]--;
				count++;
			}
		}
	}

	return res;
}

int main() {
	cout << sortString("aaaabbbbcccc") << '\n';
	cout << sortString("rat") << '\n';

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
