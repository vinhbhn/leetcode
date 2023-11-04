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

// 8ms 9.6MB O(n) O(1)
int largestSumAfterKNegations(vector<int>& nums, int k) {
	while (k--)
	{
		auto m = min_element(nums.begin(), nums.end());
		*m = -*m;
	}

	int sum = 0;
	for (auto num : nums)
		sum += num;

	return sum;
}

// 12ms 9.3MB
int largestSumAfterKNegations(vector<int>& nums, int k) {
	while (k--)
	{
		auto m = min_element(nums.begin(), nums.end());
		*m = -*m;
	}

	return accumulate(nums.begin(), nums.end(), 0);
}

int main() {
	cout << sortString("aaaabbbbcccc") << '\n';
	cout << sortString("rat") << '\n';

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
