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

// https://leetcode.com/problems/first-bad-version/solutions/4109901/c-solution-with-explanation/
// 2ms 6.3MB
int firstBadVersion(int n) {
	long l = 1, h = n, m = 1;
	while (l <= h)
	{
		m = l + (h - l) / 2;
		if (!isBadVersion(m))
			l = m + 1;
		else
		{
			if ((m - 1 >= 0) && !isBadVersion(m - 1)) // m > 0 && the version before mid is false so mid is the first bad version
				return m;
			
			h = m - 1;
		}
	}

	return m;
}


22 / 24
int firstBadVersion(int n) {

	for (int i = 1; i <= n; i++)
	{
		if (isBadVersion(i))
			return i;
	}

	return 0;
}

int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
