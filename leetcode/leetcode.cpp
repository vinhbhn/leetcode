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

bool isThree(int n) {
	// 0 1 2 3 false
	if (n < 4)
		return false;

	int count = 1; // always n % n == 0

	for (int i = 1; i <= n/2; i++)
		if (n % i == 0)
			++count;

	return (count == 3);
}


int main()
{
	std::cout << std::boolalpha;
	std::cout << isThree(2) << '\n';
	std::cout << isThree(4) << '\n';

	return 0;
}

/*std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);*/
