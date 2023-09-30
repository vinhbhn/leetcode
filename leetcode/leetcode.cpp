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

// O(logN) O(n)
int dominantIndex(std::vector<int>& numbers) {
	std::vector<int> nums = numbers;
	std::sort(nums.begin(), nums.end(), std::greater<int>());

	int largest = nums[0];
	nums.erase(nums.begin());

	// since secondLargest < largest
	// the vector's is sorted
	int secondLargest = nums[0];

	if (largest >= (secondLargest * 2))
	{
		for (int i = 0; i < numbers.size(); i++)
			if (numbers[i] == largest)
				return i;
	}

	return -1;
}

int main()
{
	std::vector nums = { 3,6,1,0 };
	std::cout << dominantIndex(nums) << '\n';

	nums = { 1,2,3,4 };
	std::cout << dominantIndex(nums) << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
