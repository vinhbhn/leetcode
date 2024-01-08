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

// 0ms 6.5MB O(n)
int maxDepth(string s) {
	int count = 0, maxCount = 0;
	for (auto ch : s)
	{
		if (ch == '(')
			count++;
		else if (ch == ')')
			count--;

		maxCount = max(maxCount, count);
	}

	return maxCount;
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
