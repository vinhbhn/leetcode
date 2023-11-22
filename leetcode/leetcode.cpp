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

int guessNumber(int n) {
	int left = 1;
	int right = n;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		int guessing = guess(mid);

		if (guessing == 0)
			return mid;
		else if (guessing == -1)
			right = mid - 1;
		else
			left = mid + 1;

	}

	return -1;
}}

int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
