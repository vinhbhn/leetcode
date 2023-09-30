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

// use gcd O(N) O(N)
bool hasGroupsSizeX(std::vector<int>& deck) {
	std::unordered_map<int, int> mp;
	for (auto card : deck)
		mp[card]++;

	int gcd_val = mp.begin()->second;
	for (auto it = mp.begin(); it != mp.end(); it++)
		// std::gcd in numeric header
		gcd_val = std::gcd(gcd_val, it->second); // doing gcd with the frequency of all the cards
	return gcd_val != 1; // if gcd is not equal to 1 it means we can create groups of size >= 2.
}

int main()
{
	std::cout << std::boolalpha;

	std::vector nums = { 1,2,3,4,4,3,2,1 };
	std::cout << hasGroupsSizeX(nums) << '\n';

	nums = { 1,1,1,2,2,2,3,3 };
	std::cout << hasGroupsSizeX(nums) << '\n';

	nums = { 0,0,0,1,1,1,2,2,2 };
	std::cout << hasGroupsSizeX(nums) << '\n';

	nums = { 1,1,2,2,2,2 };
	std::cout << hasGroupsSizeX(nums) << '\n';


	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
