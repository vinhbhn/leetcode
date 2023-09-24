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

std::vector<std::string> fizzBuzz(int n) {
	std::vector <std::string> v(n, "");
	std::string s{};
	for (int i{ 1 }; i <= n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
				s += "Fizz";
			if (i % 5 == 0)
				s += "Buzz";
		}
		else
			s = std::to_string(i);

		v.push_back(s);
		s = "";
	}

	return v;
}

int main()
{
	
	return 0;
}

