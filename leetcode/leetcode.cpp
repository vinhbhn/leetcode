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

// O(n) O(1)
bool checkZeroOnes(string s) {
	int l1 = 0, l0 = 0;
	int c1 = 0, c0 = 0;

	// if s size is 1
	if (s.size() == 1)
	{
		return (s[0] == '1');
	}

	for (int i = 0; i < s.size() - 1; i++)
	{
		// before: s[i], after: s[i+1]
		// after == before: "before + 1"
		// after != before: "before + 1" then save "before" and compare "before" to "longest before"
		// problem: not count last digit of s

		if (s[i + 1] == '1')
		{
			if (s[i] == '1')
				c1++;
			else
			{
				c0++;
				l0 = max(l0, c0);
				c0 = 0;
			}
		}

		if (s[i + 1] == '0')
		{
			if (s[i] == '0')
				c0++;
			else
			{
				c1++;
				l1 = max(l1, c1);
				c1 = 0;
			}
		}
	}

	// count last digit of s
	if (s[s.size() - 1] == '1')
	{
		c1++;
		l1 = max(l1, c1);
	}
	else
	{
		c0++;
		l0 = max(l0, c0);
	}

	return (l1 > l0);
}

int main() {
	cout << boolalpha;

	cout << checkZeroOnes("1101") << '\n';
	cout << checkZeroOnes("111000") << '\n';
	cout << checkZeroOnes("110100010") << '\n';
	cout << checkZeroOnes("1") << '\n';
	cout << checkZeroOnes("11111111111111111111111111111111111111111111111111") << '\n';

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
