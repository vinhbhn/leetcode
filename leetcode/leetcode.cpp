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

// O(n) O(1) 1628ms 6.4MB
int countOdds(int low, int high) {
	int count = 0;
	for (int i = low; i <= high; i++)
		if (i % 2 != 0)
			count++;

	return count;
}

// O(1) O(1) 2ms 6.5MB
// Total odd number between 1 and low - 1 is low/2.
//Total odd number between 1 and high is(high + 1) / 2.
int countOdds(int low, int high) {
	return ((high + 1) / 2 - (low / 2));
}

//https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/solutions/3178012/o-1-tc-super-easy-solution-c-python3-java-commented/
// O(1) O(1) 2ms 6.3MB
int countOdds(int low, int high) {
	int odd = (high - low) / 2;

	if (low % 2 || high % 2)
		odd++;

	return odd;
}

int main()
{
	cout << boolalpha;

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
