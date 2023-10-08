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

int heightChecker(std::vector<int>& heights) {
	std::vector<int> expected = heights;
	int count = 0;

	std::sort(expected.begin(), expected.end());

	for (int i = 0; i < heights.size(); i++)
	{
		if (heights[i] != expected[i])
			++count;
	}

	return count;
}

int main()
{
	std::vector heights{ 1,1,4,2,1,3 };
	std::cout << heightChecker(heights) << '\n';

	heights = { 5,1,2,3,4 };
	std::cout << heightChecker(heights) << '\n';

	heights = { 1,2,3,4,5 };
	std::cout << heightChecker(heights) << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
