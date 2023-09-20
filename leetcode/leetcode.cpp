#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <stack>
#include <bit>
#include <bitset>
#include <cstdint>

// using STL C++20
//int hammingWeight(std::uint32_t n) {
//	return std::popcount(n);
//}

//int hammingWeight(std::uint32_t n) {
//	std::bitset<32> bits{ n };
//	return bits.count();
//}

// answer
int hammingWeight(std::uint32_t n) {
	int count{ 0 };
	while (n != 0)
	{
		if (n & 1)
			++count;

		n >>= 1;
	}

	return count;
}


int main()
{
	std::cout << hammingWeight(0b00000000000000000000000000001011) << '\n';
	std::cout << hammingWeight(0b00000000000000000000000010000000) << '\n';
	std::cout << hammingWeight(0b11111111111111111111111111111101) << '\n';


	return 0;
}

