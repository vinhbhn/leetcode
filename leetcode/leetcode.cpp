#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <stack>
#include <bit>
#include <bitset>
#include <cstdint>

//int addDigits(int num) {
//	if (num >= 0 && num <= 9)
//		return num;
//
//	int sum{ 0 };
//	while (num)
//	{
//		sum += num % 10;
//		num /= 10;
//	}
//
//	return addDigits(sum);
//}

// digit root
// ABCD = 1000A + 100B + 10C + D = (A+B+C+D)+9*(111A+11B+C) = mod 9 (gegens comment)
int addDigits(int num)
{
	if (num == 0)
		return 0;
	else if (num % 9 == 0)
		return 9;
	else
		return num % 9;
}

int main()
{
	std::cout << addDigits(0) << '\n';
	std::cout << addDigits(38) << '\n';
	std::cout << addDigits(1) << '\n';


	return 0;
}

