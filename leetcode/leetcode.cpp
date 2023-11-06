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

// https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/solutions/1710139/c-easy-solution-using-sorting-with-full-explanations/
// O(nlogn) O(1) 0ms 11.2MB
int minimumCost(vector<int>& cost) {
	int n = cost.size(), sum = 0;
	if (n <= 2)
	{
		for (auto num : cost)
			sum += num;

		return sum;
	}
	
	sort(cost.begin(), cost.end());

	int i = n - 1;
	while (i >= 1)
	{
		sum += cost[i] + cost[i - 1];
		if (i - 1 == 0 || i - 1 == 1)
			return sum;
		i -= 3;
	}
	sum += cost[0];

	return sum;
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
