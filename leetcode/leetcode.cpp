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

// https://leetcode.com/problems/assign-cookies/solutions/3447681/c-java-python-js-fully-explained-greedy-two-pointers-heap-priority-queue-sorting/
// greedy algorithm O(n logn) O(1)
int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
	// sort the children's greed factors in non-decreasing order and the cookie's sizes in non-decreasing order
	std::sort(g.begin(), g.end());
	std::sort(s.begin(), s.end());

	int contentChildren = 0;
	int i = 0; // pointer to the current child's greed factor
	int j = 0; // pointer to the current cookie size
	while (i < g.size() && j < s.size())
	{
		if (s[j] >= g[i])
		{
			// if the current cookie can satisfy the current child's greed factor
			contentChildren++;
			i++;
		}
		j++;
	}

	return contentChildren;
}


int main()
{
	std::vector g = { 1,2,3 }, s = { 1,1 };
	std::cout << findContentChildren(g, s) << '\n';

	g = { 1,2 }, s = { 1,2,3 };
	std::cout << findContentChildren(g, s) << '\n';

	g = { 1,2, 3 }, s = { 3 };
	std::cout << findContentChildren(g, s) << '\n';

	g = { 10,9,8,7 }, s = { 5,6,7,8 };
	std::cout << findContentChildren(g, s) << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
