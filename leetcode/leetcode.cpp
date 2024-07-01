﻿#include <iostream>
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

// O(n) 4ms 22.1MB
int minimumOperations(vector<int>& nums) {
	int res = 0;

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] % 3 != 0)
		{
			// add 1 or sub 1
			if (((nums[i] + 1) % 3 == 0) || ((nums[i] - 1) % 3 == 0))
				res++;
		}
	}

	return res;
}

int minimumOperations(vector<int>& nums) {
	int res = 0;

	// because every number in 1 <= nums[i] <= 50 will % 3 == 0 (with or not with add 1 or sub 1)
	for (int i = 0; i < nums.size(); i++)
	{
		res += (nums[i] % 3 != 0);
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
