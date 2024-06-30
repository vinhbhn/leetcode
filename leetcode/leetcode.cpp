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

// 6ms 8.7MB O(n) O(1)
string maximumOddBinaryNumber(string s) {
	int c0 = 0, c1 = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '0')
			c0++;
		else
			c1++;
	}

	string res = "";
	// if c1 >= 2, then fill up with "1" until c1 equal 1
	// fill up res with "0" until c0 equal 0
	// fill "1" end of res
	while (c1 > 1)
	{
		res += "1";
		c1--;
	}
	while (c0)
	{
		res += "0";
		c0--;
	}
	res += "1";

	return res;
}

int main() {
	cout << boolalpha;
	
	cout << maximumOddBinaryNumber("010") << '\n';
	cout << maximumOddBinaryNumber("0101") << '\n';
	cout << maximumOddBinaryNumber("1") << '\n';
	cout << maximumOddBinaryNumber("0111") << '\n';


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
