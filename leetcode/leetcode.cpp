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

int findFinalValue(std::vector<int>& nums, int original) {
	std::sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == original)
			original *= 2;
	}

	return original;
}

int main()
{
	std::vector nums = { 5,3,6,1,12 };
	std::cout << findFinalValue(nums, 3) << '\n';

	nums = { 2,7,9 };
	std::cout << findFinalValue(nums, 2) << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
