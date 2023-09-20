#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <stack>
#include <bit>
#include <bitset>
#include <cstdint>

bool isSameAfterReversals(int num) {
	long number{ num }, reversed1{ 0 };
	while (number)
	{
		reversed1 = reversed1 * 10 + number % 10;
		number /= 10;
	}

	long number2{ reversed1 }, reversed2{ 0 };
	while (number2)
	{
		reversed2 = reversed2 * 10 + number2 % 10;
		number2 /= 10;
	}

	return (num == reversed2);
}

bool isSameAfterReversals(int num) {
	if (num == 0) return true;
	if (num % 10 == 0) return false;
	return true;
}


int main()
{
	std::cout << std::boolalpha;
	std::cout << isSameAfterReversals(526) << '\n';
	std::cout << isSameAfterReversals(1800) << '\n';
	std::cout << isSameAfterReversals(0) << '\n';


	return 0;
}

