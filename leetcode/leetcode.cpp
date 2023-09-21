#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <stack>
#include <bit>
#include <bitset>
#include <cstdint>

// answer
bool isUgly(int n) {
	// n is a positive integer
	if (n <= 0)
		return false;

	for (int prime : { 2, 3, 5 })
	{
		while (n % prime == 0)
			n /= prime;
	}

	return (n == 1);
}

int main()
{
	std::cout << std::boolalpha;
	std::cout << isUgly(1) << '\n';
	std::cout << isUgly(6) << '\n';
	std::cout << isUgly(14) << '\n';
	std::cout << isUgly(24) << '\n';
	std::cout << isUgly(18) << '\n';
	std::cout << isUgly(8) << '\n';
	std::cout << isUgly(-2147483648) << '\n';
	std::cout << isUgly(0) << '\n';
	std::cout << isUgly(16) << '\n';
	std::cout << isUgly(22) << '\n';


	return 0;
}

