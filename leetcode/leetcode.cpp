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
#include <sstream>
#include <queue>
#include<map>
#include <charconv>

// 1 -> 2 -> 3 -> 5 -> 8 -> 13
//	s[i] = s[i-1] + s[i-2]		
// or total = prev + curr	
// use vector to use more space
//int climbStairs(int n) {
//	if (n == 1) return 1;
//	if (n == 2) return 2;
//
//	std::vector<int> stairs = { 0,1,2 };
//	int i = 3;
//	while (i <= n)
//	{
//		stairs.push_back(stairs.at(i - 1) + stairs.at(i - 2));
//		i++;
//	}
//
//	return stairs[stairs.size() - 1];
//}
//int climbStairs(int n) {
//	if (n == 1) return 1;
//
//	int i = 3;
//	int prev = 1, curr = 2, temp = 0;
//	while (i <= n)
//	{
//		temp = prev + curr;
//		prev = curr;
//		curr = temp;
//		i++;
//	}
//
//	return curr;
//}

// recursion but TC: O(2^n)
int climbStairs(int n) {
	if (n == 0 || n == 1)
		return 1;

	return climbStairs(n - 1) + climbStairs(n - 2);
}

int main()
{
	std::cout << climbStairs(2) << '\n';
	std::cout << climbStairs(3) << '\n';
	std::cout << climbStairs(4) << '\n';
	std::cout << climbStairs(5) << '\n';
	std::cout << climbStairs(6) << '\n';
	std::cout << climbStairs(7) << '\n';
	std::cout << climbStairs(45) << '\n';



	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
