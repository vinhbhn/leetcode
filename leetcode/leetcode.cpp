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

// 0ms 6.3MB
bool hasAlternatingBits(int n) {
	string b = "";
	while (n)
	{
		b += char(n % 2);
		n /= 2;
	}

	reverse(b.begin(), b.end());

	for (int i = 1; i < b.length(); i++)
	{
		if (b[i] == b[i - 1])
			return false;
	}

	return true;
}

// web 2ms real 0ms 6.2MB
bool hasAlternatingBits(int n) {
	int prev = -1;

	while (n)
	{
		int last_bit = n & 1;
		if (last_bit == prev)
			return false;

		n >>= 1;
		prev = last_bit;
	}

	return true;
}

int main() {
	cout << boolalpha;


	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
