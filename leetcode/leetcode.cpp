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

// O(n) O(1) 0ms 26.9MB
int duplicateNumbersXOR(vector<int>& nums) {
	int res = 0;
	vector<int> c(51, 0);

	for (int num : nums)
	{
		c[num]++;
	}

	for (int i = 1; i <= 50; i++)
	{
		if (c[i] == 2)
			res ^= i;
	}

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
