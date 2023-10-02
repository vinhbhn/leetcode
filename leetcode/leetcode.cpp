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

std::string finalString(std::string s) {
	for (auto it = s.begin(); it != s.end();)
	{
		if (*it == 'i')
		{
			std::reverse(s.begin(), it);
			it = s.erase(it); //  remove 'i'
		}
		else
			++it;
	}
	return s;
}


int main()
{
	std::cout << finalString("string") << '\n';
	std::cout << finalString("poiinter") << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
