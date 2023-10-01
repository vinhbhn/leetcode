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

//int countDigits(int num) {
//	int number = num, count = 0;
//	while (number)
//	{
//		int digit = number % 10;
//		if (num % digit == 0)
//			++count;
//		number /= 10;
//	}
//
//	return count;
//}

int countDigits(int num) {
	int number = num, count = 0;
	while (number)
	{
		if (num % (number % 10) == 0)
			++count;
		number /= 10;
	}

	return count;
}


int main()
{
	std::cout << countDigits(7) << '\n';
	std::cout << countDigits(121) << '\n';
	std::cout << countDigits(1248) << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
