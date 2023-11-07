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

// 0ms 7.4MB O(s.size()+k) O(1)
string truncateSentence(string s, int k) {
	vector<string> v;
	string temp = "";
	for (auto ch : s)
	{
		if (ch == ' ')
		{
			v.push_back(temp);
			temp = "";
		}
		else
			temp += ch;
	}
	if (!temp.empty())
		v.push_back(temp);

	string res = "";
	for (int i = 0; i < k; i++)
		res += v[i] + ' ';

	res.pop_back();
	return res;
}

// web 6.3MB real 3ms 6.7MB O(s.size()) O(1)
string truncateSentence(string s, int k) {
	int space = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ')
		{
			space++;
			if (space == k)
				return s.substr(0, i);
		}
	}

	return s;
}


int main() {
	cout << boolalpha;

	vector nums = { 6,5,7,9,2,2 };
	cout << minimumCost(nums) << '\n';

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
