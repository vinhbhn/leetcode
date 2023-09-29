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

// https://leetcode.com/problems/number-complement/solutions/1650071/one-line-solution-c/
//int findComplement(int num) {
//	return (pow(2,floor(log2(num))+1)-1) - num;
//}

// https://leetcode.com/problems/number-complement/solutions/1649574/c-easy-to-solve-different-variations-of-code-with-detailed-exaplanations/
// using bit masking O(log(num)) = O(1) SC:O(1)
int findComplement(int num) {
	unsigned mask = ~0;
	while (mask & num) mask = mask << 1;
	return ~num ^ mask;
}
// using xor
//int findComplement(int num) {
//	long powerof2s = 2, temp = num;
//
//	while (temp >> 1) {
//		temp >>= 1;
//		powerof2s <<= 1;
//	}
//
//	return powerof2s - num - 1;
//}
// without bit manipulation
int findComplement(int num) {
	std::vector<int> temp;
	// convert to binary representation
	while (num != 0)
	{
		temp.push_back(num % 2);
		num /= 2;
	}
	// make complement
	for (int i = 0; i < temp.size(); i++)
	{
		if (temp[i] == 1) temp[i] = 0;
		else if (temp[i] == 0) temp[i] = 1;
	}
	int res = 0;
	for (int i = temp.size() - 1; i >= 0; i--)
		res = res * 2 + temp[i];
	return res;
}

int bitwiseComplement(int n) {
	if (n == 0)
		return 1;

	unsigned mask = ~0;
	while (mask & n) mask = mask << 1;
	return (~n ^ mask);
}

int main()
{
	std::cout << findComplement(5) << '\n';
	std::cout << findComplement(1) << '\n';


	/*std::vector<int>  nums = { 1,2,2,3 };
	std::cout << std::boolalpha;
	std::cout << isMonotonic(nums) << '\n';

	nums = { 6,5,4,4 };
	std::cout << isMonotonic(nums) << '\n';

	nums = { 1,3,2 };
	std::cout << isMonotonic(nums) << '\n';*/

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
