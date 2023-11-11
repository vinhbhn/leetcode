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

// 0ms 6.8MB O(command.size()) O(temp.size())
string interpret(string command) {
	string temp = "", res = "";
	for (auto ch : command)
	{
		if (ch == 'G')
		{
			res += 'G';
			continue;
		}

		temp += ch;
		if (ch == ')')
		{
			if (temp.size() == 2)
				res += 'o';
			else if (temp.size() > 2)
				res += temp.substr(1, temp.size() - 2);

			temp = "";
		}
	}

	return res;
}

// 0ms 6.6MB O(n) O(n)
string interpret(string command) {
	string temp = "", res = "";
	for (auto ch : command)
	{
		if (ch == 'G')
		{
			res += 'G';
			continue;
		}

		temp += ch;
		if (ch == ')')
		{
			if (temp == "()")
				res += 'o';
			else if (temp == "(al)")
				res += "al";

			temp.clear();
		}
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
