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

// O(n)
int minCostClimbingStairs(std::vector<int>& cost) {
	int n = cost.size();
	
	// at the top, cost[n] = 0
	cost.push_back(0);

	// start from end, calculate cost from one step to two steps
	for (int i = n - 3; i >= 0; i--)
	{
		cost[i] = cost[i] + std::min(cost[i + 1], cost[i + 2]);
	}

	return std::min(cost[0], cost[1]);
}

int main()
{
	std::vector cost = { 10, 15, 20 };
	std::cout << minCostClimbingStairs(cost) << '\n';

	cost = { 1, 100, 1, 1, 1, 100, 1, 1, 100, 1 };
	std::cout << minCostClimbingStairs(cost) << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
