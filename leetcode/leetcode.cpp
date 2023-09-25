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

//bool isPowerOfTwo(int n) {
//	if (n <= 0)
//		return false;
//
//	while (n > 1)
//	{
//		if (n % 2 != 0)
//			return false;
//		n /= 2;
//	}
//
//	return true;
//}

// https://leetcode.com/problems/power-of-two/solutions/1638704/c-easy-to-solve-all-interview-approaches-with-detailed-explanations/
//Constraints[-2 ^ 31 <= n <= 2 ^ 31 - 1] also 2 ^ 30 is 1073741824 (using math)
//bool isPowerOfTwo(int n) {
//	return (n > 0 && 1073741824 % n == 0);
//}
// using ceil-floor method O(logN) O(1)
//bool isPowerOfTwo(int n) {
//	if (n <= 0)
//		return false;
//
//	return std::ceil(log2(n)) == std::floor(log2(n));
//}
// bit manipulation O(1) O(1)
//bool isPowerOfTwo(int n) {
//	if (n <= 0) return false;
//	return ((n & (n - 1)) == 0);
//}
// using recursive O(logN) O(logN)
bool isPowerOfTwo(int n) {
	if (n <= 0) return false;
	return ((n == 1) || ((n % 2 == 0) && isPowerOfTwo(n / 2)));
}

int main()
{

	return 0;
}

