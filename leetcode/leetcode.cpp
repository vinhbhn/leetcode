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

bool isMonotonic(std::vector<int>& nums) {
	std::vector<int> incre = nums, decre = nums;

	std::sort(incre.begin(), incre.end());
	if (nums == incre)
		return true;

	std::sort(decre.begin(), decre.end(), std::greater());
	if (nums == decre)
		return true;

	return false;
}

bool isMonotonic(std::vector<int>& nums) {
	return std::is_sorted(nums.begin(), nums.end()) || std::is_sorted(nums.begin(), nums.end(), std::greater<int>());
}

int main()
{
	std::vector<int>  nums = { 1,2,2,3 };
	std::cout << std::boolalpha;
	std::cout << isMonotonic(nums) << '\n';

	nums = { 6,5,4,4 };
	std::cout << isMonotonic(nums) << '\n';

	nums = { 1,3,2 };
	std::cout << isMonotonic(nums) << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
