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

// 0ms 9.3MB O(n) O(floor(3/2*(n-1))
int countElements(vector<int>& nums) {
	auto [nMin, nMax] = minmax_element(nums.begin(), nums.end());
	int count = 0;
	for (auto& num : nums)
	{
		if (num != *nMin && num != *nMax)
			count++;
	}

	return count;
}

int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
