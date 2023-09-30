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

// O(n^2) 
bool selfDiving(int num)
{
	int number = num, digit = 0;
	while (number)
	{
		digit = number % 10;
		if (digit == 0)
			return false;
		if (num % digit != 0)
			return false;

		number /= 10;
	}
	return true;
}
std::vector<int> selfDividingNumbers(int left, int right) {
	std::vector<int> sDN;
	for (int i = left; i <= right; i++)
		if (selfDiving(i))
			sDN.push_back(i);

	return sDN;
}

int main()
{
	std::cout << std::boolalpha;

	std::vector nums = selfDividingNumbers(1, 22);
	for (auto n : nums)
		std::cout << n << ',';
	std::cout << '\n';

	nums = selfDividingNumbers(47, 85);
	for (auto n : nums)
		std::cout << n << ',';
	std::cout << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
