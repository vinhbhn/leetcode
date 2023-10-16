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

std::string thousandSeparator(int n) {
	std::string result = std::to_string(n);

	if (n < 1000)
		return result;

	for (int i = result.length() - 3; i >= 0; i -= 3)
		result.insert(result.begin() + i, '.');

	if (result[0] == '.')
		result.erase(result.begin());

	return result;
}


int main()
{
	std::cout << thousandSeparator(987) << '\n';
	std::cout << thousandSeparator(1234) << '\n';
	std::cout << thousandSeparator(123456789) << '\n';
	std::cout << thousandSeparator(0) << '\n';
	std::cout << thousandSeparator(51040) << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
