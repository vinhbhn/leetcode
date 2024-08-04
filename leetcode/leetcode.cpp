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

// O(n) O(1) 0ms 27.9MB
bool canAliceWin(vector<int>& nums) {
	// s: single, d: double
	int s = 0, d = 0;

	for (int num : nums)
	{
		if (num < 10)
			s += num;
		else
			d += num;
	}

	// because alice choose all single-digit so bob must choose all double-digit and vice versa
	// alice win if no sum of single-digit == sum of double-digit because alice can choose either
	return s != d;
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
