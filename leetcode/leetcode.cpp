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

// too slow
//bool isPowerOfThree(int n) {
//	if (n <= 0)
//		return false;
//
//	for (int i = 0; i < std::sqrt(n); i++)
//	{
//		if (std::pow(3, i) == n)
//			return true;
//	}
//
//	return false;
//}

//bool isPowerOfThree(int n) {
//	if (n <= 0)
//		return false;
//
//	while (n > 1) {
//		if (n % 3 != 0)
//			return false;
//
//		n /= 3;
//	}
//
//	return true;
//}

//https://leetcode.com/problems/power-of-three/solutions/3230079/best-c-3-solution-math-recursion-one-stop-solution/
// using math O(1) O(1)
//bool isPowerOfThree(int n) {
//	return n > 0 && 1162261467 % n == 0;
//}
// recursive O(logN) O(logN)
bool isPowerOfThree(int n) {
	if (n == 0)
		return false;
	else if (n == 1)
		return true;

	return (n % 3 == 0) && isPowerOfThree(n / 3);
}



int main()
{
	int n = 27;
	std::cout << std::boolalpha;
	std::cout << isPowerOfThree(n) << '\n';

	n = 0;
	std::cout << isPowerOfThree(n) << '\n';

	n = -1;
	std::cout << isPowerOfThree(n) << '\n';

	std::cout << isPowerOfThree(1) << '\n';


	return 0;
}

