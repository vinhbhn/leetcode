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

int balancedStringSplit(std::string s) {
	int balance = 0, sum = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'R')
			++balance;
		else
			--balance;
		
		if (balance == 0)
			++sum;
	}

	return sum;
}


int main()
{
	std::cout << balancedStringSplit("RLRRLLRLRL") << '\n';
	std::cout << balancedStringSplit("RLRRRLLRLL") << '\n';
	std::cout << balancedStringSplit("LLLLRRRR") << '\n';


	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
