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

//int findGCD(std::vector<int>& nums) {
//	auto [min, max] = std::minmax_element(nums.begin(), nums.end());
//	int greatest = 1;
//
//	for (int i = 1; i <= *min; i++)
//		if ((*min % i == 0) && (*max % i == 0))
//			greatest = i;
//
//	return greatest;
//}

// https://leetcode.com/problems/find-greatest-common-divisor-of-array/solutions/1419750/java-c-solution-using-euclidean-algorithm/
// Euclid's Algorithm
int gcd(int a, int b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}
int findGCD(std::vector<int>& nums) {
	int min = 1001, max = 0;
	// find the min and max from array
	for (int num : nums) {
		if (num < min) min = num;
		if (num > max) max = num;
	}
	return gcd(min, max);
}


int main()
{
	std::vector nums = { 2,5,6,9,10 };
	std::cout << findGCD(nums) << '\n';

	nums = { 7,5,6,8,3 };
	std::cout << findGCD(nums) << '\n';

	nums = { 3,3 };
	std::cout << findGCD(nums) << '\n';


	return 0;
}

/*std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);*/
