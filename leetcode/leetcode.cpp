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

// 0ms 7.1MB
int maxPower(string s) {
	int step = 0, res = 0;
	for (int i = 1; i < s.length(); i++)
	{
		if (s[i] == s[i - 1])
		{
			step++;
			res = max(res, step);
		}
		else
			step = 0;

	}

	return res + 1; // max step + 1
}

int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
