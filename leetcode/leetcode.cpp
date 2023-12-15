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

// 0ms 6.6MB
string freqAlphabets(string s) {
	string res = "", temp = "";

	int i = s.size() - 1;
	// right to left
	while (i >= 0)
	{
		// j -> z: '`' + (int)temp
		if (s[i] == '#')
		{
			temp += s[i - 2];
			temp += s[i - 1];

			res += '`' + stoi(temp);
			temp = "";

			i -= 3;
		}
		else
		{
			// a -> i is 1 -> 9 
			// '`' + (char - 48) // char to int
			res += '`' + (s[i] - 48);
			i--;
		}
	}

	reverse(res.begin(), res.end());
	return res;
}

int main() {
	cout << boolalpha;

	return 0;
}

/*
static auto init = [](){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	return 0;
}();
*/
