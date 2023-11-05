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

// 3ms 6.7MB
//bool areNumbersAscending(string s) {
//	vector<int> v;
//	string temp = "";
//	for (auto ch : s)
//	{
//		if (isdigit(ch))
//			temp += ch;
//
//		if (ch == ' ' && !temp.empty())
//		{
//			v.push_back(stoi(temp));
//			temp = "";
//		}
//	}
//	if (!temp.empty())
//		v.push_back(stoi(temp));
//
//	for (int i = 0; i < v.size() - 1;  i++)
//	{
//		if (v[i] >= v[i + 1])
//			return false;
//	}
//
//	return true;
//}

// 3ms 6.9MB
bool areNumbersAscending(string s) {
	s += ' ';
	vector<int> v;
	string temp = "";
	for (auto ch : s)
	{
		if (isdigit(ch))
			temp += ch;

		if (ch == ' ' && !temp.empty())
		{
			v.push_back(stoi(temp));
			temp = "";
		}
	}

	for (int i = 0; i < v.size() - 1; i++)
	{
		if (v[i] >= v[i + 1])
			return false;
	}

	return true;
}

int main() {
	cout << sortSentence("is2 sentence4 This1 a3") << '\n';

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
