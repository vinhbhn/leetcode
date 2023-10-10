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

// Win[1] -> Win[2] -> Win[3] -> Lose[4]
bool canWinNim(int n) {
	return n % 4;
}


int main()
{
	std::vector g = { 1,2,3 }, s = { 1,1 };
	std::cout << findContentChildren(g, s) << '\n';

	g = { 1,2 }, s = { 1,2,3 };
	std::cout << findContentChildren(g, s) << '\n';

	g = { 1,2, 3 }, s = { 3 };
	std::cout << findContentChildren(g, s) << '\n';

	g = { 10,9,8,7 }, s = { 5,6,7,8 };
	std::cout << findContentChildren(g, s) << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
