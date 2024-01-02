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

// 4ms 8.4MB O(n) O(n)
int largestAltitude(vector<int>& gain) {
	int highest = 0, n = gain.size(), curr = 0;

	for (int i = 0; i < n; i++)
	{
		curr += gain[i];
		highest = max(highest, curr);
	}

	return highest;
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
