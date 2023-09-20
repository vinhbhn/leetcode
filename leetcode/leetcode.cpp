#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <stack>
#include <bit>
#include <bitset>
#include <cstdint>

std::uint32_t reverseBits(std::uint32_t n) {
	int ans{ 0 };
	for (int i{ 0 }; i < 32; i++)
	{
		ans <<= 1;
		if (n & 1)
			ans ^= 1;

		n >>= 1;
	}
	return ans;
}


int main()
{
	std::cout << reverseBits(0b00000010100101000001111010011100) << '\n';
	std::cout << reverseBits(0b11111111111111111111111111111101) << '\n';


	return 0;
}

