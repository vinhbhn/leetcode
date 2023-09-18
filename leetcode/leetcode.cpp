#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

int reverse(int x)
{
	long number{ 0 };
	while (x)
	{
		number = number * 10 + x % 10;
		x /= 10;
	}

	if (number > INT_MAX || number < INT_MIN)
		return 0;

	return number;
}


int main()
{
	std::cout << reverse(123) << '\n';
	std::cout << reverse(-123) << '\n';
	std::cout << reverse(120) << '\n';
	std::cout << reverse(12345) << '\n';
	std::cout << reverse(1534236469) << '\n'; // return 0

	return 0;
}

