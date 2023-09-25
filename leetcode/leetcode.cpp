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

//bool isPowerOfFour(int n) {
//	if (n <= 0) return false;
//
//	return std::ceil(std::log(n) / std::log(4)) == std::floor(std::log(n) / std::log(4));
//}

//bool isPowerOfFour(int n) {
//	if (n <= 0) return false;
//
//	return std::ceil(std::log(n) / std::log(4)) == std::floor(std::log(n) / std::log(4));
//}

//bool isPowerOfFour(int n) {
//	if (n <= 0) return false;
//
//	while (n > 1)
//	{
//		if (n % 4 != 0)
//			return false;
//		n /= 4;
//	}
//
//	return (n == 1);
//}

//bool isPowerOfFour(int n) {
//	if (n <= 0) return false;
//
//	return ((n == 1) || (n % 4 == 0) && isPowerOfFour(n / 4));
//}

// https://leetcode.com/problems/power-of-four/solutions/3230200/best-c-4-solution-bit-manipulation-math-iterative-recursive-one-stop-solution/
// bit manipulation
// O(1) O(1)
//bool isPowerOfFour(int n) {
//	int evenPostion = 0x55555555; // 5 = 0101
//	return ((n > 0) && ((n & (n - 1)) == 0) && (evenPostion & n) > 0);
//
//}
// bit manipulation + math
// O(1) O(1)
bool isPowerOfFour(int n) {
	return ((n > 0) && ((n & (n - 1)) == 0) && ((n % 3 == 1)));
}


int main()
{
	std::cout << std::boolalpha;
	std::cout << isPowerOfFour(16) << '\n';
	std::cout << isPowerOfFour(5) << '\n';
	std::cout << isPowerOfFour(1) << '\n';
	std::cout << isPowerOfFour(8) << '\n';



	return 0;
}

