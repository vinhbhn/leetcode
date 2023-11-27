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

// 3ms 7.2MB
bool allCharInRow(string& s, string &rowKey)
{
	for (int i = 1; i < s.length(); i++)
	{
		if (rowKey.find(s[i]) == string::npos)
			return false;
	}

	return true;
}
vector<string> findWords(vector<string>& words) {
	string first = "qwertyuiopQWERTYUIOP", second = "asdfghjklASDFGHJKL", third = "zxcvbnmZXCVBNM";

	vector<string> res;
	for (auto& word : words)
	{
		// take first character to locate it in the first, second or third row
		char it = word[0];
		string temp = "";
		if (first.find(it) != string::npos)
			temp = first;
		else if (second.find(it) != string::npos)
			temp = second;
		else
			temp = third;

		if (allCharInRow(word, temp))
			res.push_back(word);
	}

	return res;
}

int main() {
	cout << boolalpha;


	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
