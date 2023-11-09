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

// 3ms 8.1MB O(n*m) O(n) n = accounts.size(), m = accounts[i].size()
int maximumWealth(vector<vector<int>>& accounts) {
	int res = 0;
	for (auto& a : accounts)
	{
		int sum = 0;
		for (auto x : a)
			sum += x;

		res = max(res, sum);
	}

	return res;
}

int main() {
	cout << boolalpha;

	vector nums = { 6,5,7,9,2,2 };
	cout << minimumCost(nums) << '\n';

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
