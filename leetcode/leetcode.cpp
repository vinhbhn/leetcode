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

bool divisorGame(int n) {
	return (n % 2 == 0);
}

int main()
{
	std::cout << std::boolalpha;
	std::cout << divisorGame(2) << '\n';
	std::cout << divisorGame(3) << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
